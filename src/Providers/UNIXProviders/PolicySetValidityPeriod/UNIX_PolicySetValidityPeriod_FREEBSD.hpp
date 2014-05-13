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


UNIX_PolicySetValidityPeriod::UNIX_PolicySetValidityPeriod(void)
{
}

UNIX_PolicySetValidityPeriod::~UNIX_PolicySetValidityPeriod(void)
{
}

Boolean UNIX_PolicySetValidityPeriod::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_PolicySetValidityPeriod::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_PolicySetValidityPeriod::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_PolicySetValidityPeriod::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_PolicySetValidityPeriod::getPartComponent() const
{
	return _partComponent;
}

void UNIX_PolicySetValidityPeriod::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}

Boolean UNIX_PolicySetValidityPeriod::getConditionNegated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONDITION_NEGATED, getConditionNegated());
	return true;
}

Boolean UNIX_PolicySetValidityPeriod::getConditionNegated() const
{
	return _conditionNegated;
}

void UNIX_PolicySetValidityPeriod::setConditionNegated(Boolean &value)
{
	_conditionNegated = value;
}


void UNIX_PolicySetValidityPeriod::clearInstance()
{

	_groupComponent = CIMInstance(CIMName("CIM_AccessControlPolicy"));
	_partComponent = CIMInstance(CIMName("CIM_PolicyTimePeriodCondition"));
	_conditionNegated = Boolean(false);

}

Boolean UNIX_PolicySetValidityPeriod::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConditionNegated"))
			{
				Boolean conditionNegatedValue;
				property.getValue().get(conditionNegatedValue);
				setConditionNegated(conditionNegatedValue);
			}
	}
	return true;
}


Boolean UNIX_PolicySetValidityPeriod::initialize()
{
	groupIndex = 0;
	partIndex = 0;
	group_UNIX_AccessControlPolicy_Index = -1;
	endOf_UNIX_AccessControlPolicy_Group = !group_UNIX_AccessControlPolicy_Component.initialize();
	group_UNIX_PolicyGroup_Index = -1;
	endOf_UNIX_PolicyGroup_Group = !group_UNIX_PolicyGroup_Component.initialize();
	group_UNIX_AccessControlPolicyGroup_Index = -1;
	endOf_UNIX_AccessControlPolicyGroup_Group = !group_UNIX_AccessControlPolicyGroup_Component.initialize();
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

Boolean UNIX_PolicySetValidityPeriod::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_PolicyTimePeriodCondition_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_AccessControlPolicy_Index++;
			endOf_UNIX_AccessControlPolicy_Group = !group_UNIX_AccessControlPolicy_Component.load(group_UNIX_AccessControlPolicy_Index);
			if (endOf_UNIX_AccessControlPolicy_Group)
			{
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_AccessControlPolicy"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_PolicyGroup_Index++;
			endOf_UNIX_PolicyGroup_Group = !group_UNIX_PolicyGroup_Component.load(group_UNIX_PolicyGroup_Index);
			if (endOf_UNIX_PolicyGroup_Group)
			{
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_PolicyGroup"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 2)
		{
			group_UNIX_AccessControlPolicyGroup_Index++;
			endOf_UNIX_AccessControlPolicyGroup_Group = !group_UNIX_AccessControlPolicyGroup_Component.load(group_UNIX_AccessControlPolicyGroup_Index);
			if (endOf_UNIX_AccessControlPolicyGroup_Group)
			{
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_AccessControlPolicyGroup"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 3)
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
		else if (groupIndex == 4)
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
		else if (groupIndex == 5)
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
		else if (groupIndex == 6)
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
		else if (groupIndex == 7)
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
		else if (groupIndex == 8)
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

	if (endOf_UNIX_AccessControlPolicy_Group &&
		endOf_UNIX_PolicyGroup_Group &&
		endOf_UNIX_AccessControlPolicyGroup_Group &&
		endOf_UNIX_AuthorizationRule_Group &&
		endOf_UNIX_NetworkPolicyRule_Group &&
		endOf_UNIX_IPsecRule_Group &&
		endOf_UNIX_IKERule_Group &&
		endOf_UNIX_AuthenticationRule_Group &&
		endOf_UNIX_TierPolicyRule_Group &&
		endOf_UNIX_PolicyTimePeriodCondition_Part)		return false;
	return true;
}

Boolean UNIX_PolicySetValidityPeriod::finalize()
{
	group_UNIX_AccessControlPolicy_Component.finalize();
	group_UNIX_PolicyGroup_Component.finalize();
	group_UNIX_AccessControlPolicyGroup_Component.finalize();
	group_UNIX_AuthorizationRule_Component.finalize();
	group_UNIX_NetworkPolicyRule_Component.finalize();
	group_UNIX_IPsecRule_Component.finalize();
	group_UNIX_IKERule_Component.finalize();
	group_UNIX_AuthenticationRule_Component.finalize();
	group_UNIX_TierPolicyRule_Component.finalize();
	part_UNIX_PolicyTimePeriodCondition_Component.finalize();
	return true;
}


Boolean UNIX_PolicySetValidityPeriod::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PolicySetValidityPeriod::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicySetValidityPeriod::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicySetValidityPeriod::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicySetValidityPeriod::validateInstance()
{
	return true;
}

