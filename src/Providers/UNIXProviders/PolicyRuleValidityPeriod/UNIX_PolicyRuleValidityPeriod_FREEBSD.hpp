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


UNIX_PolicyRuleValidityPeriod::UNIX_PolicyRuleValidityPeriod(void)
{
}

UNIX_PolicyRuleValidityPeriod::~UNIX_PolicyRuleValidityPeriod(void)
{
}

Boolean UNIX_PolicyRuleValidityPeriod::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_PolicyRuleValidityPeriod::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_PolicyRuleValidityPeriod::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_PolicyRuleValidityPeriod::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_PolicyRuleValidityPeriod::getPartComponent() const
{
	return _partComponent;
}

void UNIX_PolicyRuleValidityPeriod::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}


void UNIX_PolicyRuleValidityPeriod::clearInstance()
{

	_groupComponent = CIMInstance(CIMName("CIM_AuthorizationRule"));
	_partComponent = CIMInstance(CIMName("CIM_PolicyTimePeriodCondition"));

}

Boolean UNIX_PolicyRuleValidityPeriod::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_PolicyRuleValidityPeriod::initialize()
{
	groupIndex = 0;
	partIndex = 0;
	group_UNIX_AuthorizationRule_Index = -1;
	endOf_UNIX_AuthorizationRule_Group = !group_UNIX_AuthorizationRule_Component.initialize();
	group_UNIX_NetworkPolicyRule_Index = -1;
	endOf_UNIX_NetworkPolicyRule_Group = !group_UNIX_NetworkPolicyRule_Component.initialize();
	group_UNIX_IPsecRule_Index = -1;
	endOf_UNIX_IPsecRule_Group = !group_UNIX_IPsecRule_Component.initialize();
	group_UNIX_IKERule_Index = -1;
	endOf_UNIX_IKERule_Group = !group_UNIX_IKERule_Component.initialize();
	group_UNIX_AuthenticationRule_Index = -1;
	endOf_UNIX_AuthenticationRule_Group = !group_UNIX_AuthenticationRule_Component.initialize();
	group_UNIX_TierPolicyRule_Index = -1;
	endOf_UNIX_TierPolicyRule_Group = !group_UNIX_TierPolicyRule_Component.initialize();
	part_UNIX_PolicyTimePeriodCondition_Index = -1;
	endOf_UNIX_PolicyTimePeriodCondition_Part = !part_UNIX_PolicyTimePeriodCondition_Component.initialize();
	return true;
}

Boolean UNIX_PolicyRuleValidityPeriod::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_PolicyTimePeriodCondition_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_AuthorizationRule_Index++;
			endOf_UNIX_AuthorizationRule_Group = !group_UNIX_AuthorizationRule_Component.load(group_UNIX_AuthorizationRule_Index);
			if (endOf_UNIX_AuthorizationRule_Group)
			{
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_NetworkPolicyRule_Index++;
			endOf_UNIX_NetworkPolicyRule_Group = !group_UNIX_NetworkPolicyRule_Component.load(group_UNIX_NetworkPolicyRule_Index);
			if (endOf_UNIX_NetworkPolicyRule_Group)
			{
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 2)
		{
			group_UNIX_IPsecRule_Index++;
			endOf_UNIX_IPsecRule_Group = !group_UNIX_IPsecRule_Component.load(group_UNIX_IPsecRule_Index);
			if (endOf_UNIX_IPsecRule_Group)
			{
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 3)
		{
			group_UNIX_IKERule_Index++;
			endOf_UNIX_IKERule_Group = !group_UNIX_IKERule_Component.load(group_UNIX_IKERule_Index);
			if (endOf_UNIX_IKERule_Group)
			{
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 4)
		{
			group_UNIX_AuthenticationRule_Index++;
			endOf_UNIX_AuthenticationRule_Group = !group_UNIX_AuthenticationRule_Component.load(group_UNIX_AuthenticationRule_Index);
			if (endOf_UNIX_AuthenticationRule_Group)
			{
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 5)
		{
			group_UNIX_TierPolicyRule_Index++;
			endOf_UNIX_TierPolicyRule_Group = !group_UNIX_TierPolicyRule_Component.load(group_UNIX_TierPolicyRule_Index);
			if (endOf_UNIX_TierPolicyRule_Group)
			{
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_PolicyTimePeriodCondition_Index++;
	endOf_UNIX_PolicyTimePeriodCondition_Part = !part_UNIX_PolicyTimePeriodCondition_Component.load(part_UNIX_PolicyTimePeriodCondition_Index);
	}
	if (partIndex == 0 && endOf_UNIX_PolicyTimePeriodCondition_Part)
	{
		part_UNIX_PolicyTimePeriodCondition_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_AuthorizationRule_Group &&
		endOf_UNIX_NetworkPolicyRule_Group &&
		endOf_UNIX_IPsecRule_Group &&
		endOf_UNIX_IKERule_Group &&
		endOf_UNIX_AuthenticationRule_Group &&
		endOf_UNIX_TierPolicyRule_Group &&
		endOf_UNIX_PolicyTimePeriodCondition_Part)		return false;
	return true;
}

Boolean UNIX_PolicyRuleValidityPeriod::finalize()
{
	group_UNIX_AuthorizationRule_Component.finalize();
	group_UNIX_NetworkPolicyRule_Component.finalize();
	group_UNIX_IPsecRule_Component.finalize();
	group_UNIX_IKERule_Component.finalize();
	group_UNIX_AuthenticationRule_Component.finalize();
	group_UNIX_TierPolicyRule_Component.finalize();
	part_UNIX_PolicyTimePeriodCondition_Component.finalize();
	return true;
}


Boolean UNIX_PolicyRuleValidityPeriod::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PolicyRuleValidityPeriod::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyRuleValidityPeriod::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyRuleValidityPeriod::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyRuleValidityPeriod::validateInstance()
{
	return true;
}

