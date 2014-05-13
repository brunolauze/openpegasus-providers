//%LICENSE////////////////////////////////////////////////////////////////
//
// Licensed to The Open Group (TOG) under one or more contributor license
// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
// this work for additional information regarding copyright ownership.
// Each contributor licenses this file to you under the OpenPegasus Open
// Source License; you may not use this file except in compliance with the
// License.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//////////////////////////////////////////////////////////////////////////
//
//%/////////////////////////////////////////////////////////////////////////


using PROVIDER_LIB_NS::CIMHelper;


UNIX_PacketConditionInSARule::UNIX_PacketConditionInSARule(void)
{
}

UNIX_PacketConditionInSARule::~UNIX_PacketConditionInSARule(void)
{
}

Boolean UNIX_PacketConditionInSARule::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_PacketConditionInSARule::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_PacketConditionInSARule::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_PacketConditionInSARule::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_PacketConditionInSARule::getPartComponent() const
{
	return _partComponent;
}

void UNIX_PacketConditionInSARule::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}

Boolean UNIX_PacketConditionInSARule::getGroupNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_NUMBER, getGroupNumber());
	return true;
}

Uint16 UNIX_PacketConditionInSARule::getGroupNumber() const
{
	return _groupNumber;
}

void UNIX_PacketConditionInSARule::setGroupNumber(Uint16 &value)
{
	_groupNumber = value;
}

Boolean UNIX_PacketConditionInSARule::getConditionNegated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONDITION_NEGATED, getConditionNegated());
	return true;
}

Boolean UNIX_PacketConditionInSARule::getConditionNegated() const
{
	return _conditionNegated;
}

void UNIX_PacketConditionInSARule::setConditionNegated(Boolean &value)
{
	_conditionNegated = value;
}


void UNIX_PacketConditionInSARule::clearInstance()
{

	_groupComponent = CIMInstance(CIMName("CIM_IPsecRule"));
	_partComponent = CIMInstance(CIMName("CIM_PacketFilterCondition"));
	_groupNumber = Uint16(0);
	_conditionNegated = Boolean(false);

}

Boolean UNIX_PacketConditionInSARule::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "GroupComponent"))
			{
				CIMInstance groupComponentValue;
				property.getValue().get(groupComponentValue);
				setGroupComponent(groupComponentValue);
			}
			else if (String::equal(property.getName().getString(), "PartComponent"))
			{
				CIMInstance partComponentValue;
				property.getValue().get(partComponentValue);
				setPartComponent(partComponentValue);
			}
			else if (String::equal(property.getName().getString(), "GroupNumber"))
			{
				Uint16 groupNumberValue;
				property.getValue().get(groupNumberValue);
				setGroupNumber(groupNumberValue);
			}
			else if (String::equal(property.getName().getString(), "ConditionNegated"))
			{
				Boolean conditionNegatedValue;
				property.getValue().get(conditionNegatedValue);
				setConditionNegated(conditionNegatedValue);
			}
	}
	return true;
}


Boolean UNIX_PacketConditionInSARule::initialize()
{
	groupIndex = 0;
	partIndex = 0;
	group_UNIX_IPsecRule_Index = -1;
	endOf_UNIX_IPsecRule_Group = !group_UNIX_IPsecRule_Component.initialize();
	group_UNIX_IKERule_Index = -1;
	endOf_UNIX_IKERule_Group = !group_UNIX_IKERule_Component.initialize();
	part_UNIX_PacketFilterCondition_Index = -1;
	endOf_UNIX_PacketFilterCondition_Part = !part_UNIX_PacketFilterCondition_Component.initialize();
	return true;
}

Boolean UNIX_PacketConditionInSARule::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_PacketFilterCondition_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_IPsecRule_Index++;
			endOf_UNIX_IPsecRule_Group = !group_UNIX_IPsecRule_Component.load(group_UNIX_IPsecRule_Index);
			if (endOf_UNIX_IPsecRule_Group)
			{
				endOf_UNIX_PacketFilterCondition_Part = false;
				part_UNIX_PacketFilterCondition_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_PacketFilterCondition_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_IKERule_Index++;
			endOf_UNIX_IKERule_Group = !group_UNIX_IKERule_Component.load(group_UNIX_IKERule_Index);
			if (endOf_UNIX_IKERule_Group)
			{
				endOf_UNIX_PacketFilterCondition_Part = false;
				part_UNIX_PacketFilterCondition_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_PacketFilterCondition_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_PacketFilterCondition_Index++;
	endOf_UNIX_PacketFilterCondition_Part = !part_UNIX_PacketFilterCondition_Component.load(part_UNIX_PacketFilterCondition_Index);
	}
	if (partIndex == 0 && endOf_UNIX_PacketFilterCondition_Part)
	{
		part_UNIX_PacketFilterCondition_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_IPsecRule_Group &&
		endOf_UNIX_IKERule_Group &&
		endOf_UNIX_PacketFilterCondition_Part)		return false;
	return true;
}

Boolean UNIX_PacketConditionInSARule::finalize()
{
	group_UNIX_IPsecRule_Component.finalize();
	group_UNIX_IKERule_Component.finalize();
	part_UNIX_PacketFilterCondition_Component.finalize();
	return true;
}


Boolean UNIX_PacketConditionInSARule::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String groupComponentKey;
	String partComponentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_GROUP_COMPONENT)) groupComponentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PART_COMPONENT)) partComponentKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getGroupComponent().getPath().toString(), groupComponentKey)) && 
			(String::equalNoCase(getPartComponent().getPath().toString(), partComponentKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_PacketConditionInSARule::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PacketConditionInSARule::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PacketConditionInSARule::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PacketConditionInSARule::validateInstance()
{
	return true;
}

