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


UNIX_PolicySetComponent::UNIX_PolicySetComponent(void)
{
}

UNIX_PolicySetComponent::~UNIX_PolicySetComponent(void)
{
}

Boolean UNIX_PolicySetComponent::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_PolicySetComponent::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_PolicySetComponent::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_PolicySetComponent::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_PolicySetComponent::getPartComponent() const
{
	return _partComponent;
}

void UNIX_PolicySetComponent::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}

Boolean UNIX_PolicySetComponent::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint16 UNIX_PolicySetComponent::getPriority() const
{
	return _priority;
}

void UNIX_PolicySetComponent::setPriority(Uint16 &value)
{
	_priority = value;
}


void UNIX_PolicySetComponent::clearInstance()
{

	_groupComponent = CIMInstance(CIMName("CIM_AccessControlPolicy"));
	_partComponent = CIMInstance(CIMName("CIM_AccessControlPolicy"));
	_priority = Uint16(0);

}

Boolean UNIX_PolicySetComponent::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Priority"))
			{
				Uint16 priorityValue;
				property.getValue().get(priorityValue);
				setPriority(priorityValue);
			}
	}
	return true;
}


Boolean UNIX_PolicySetComponent::initialize()
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
	part_UNIX_AccessControlPolicy_Index = -1;
	endOf_UNIX_AccessControlPolicy_Part = !part_UNIX_AccessControlPolicy_Component.initialize();
	part_UNIX_PolicyGroup_Index = -1;
	endOf_UNIX_PolicyGroup_Part = !part_UNIX_PolicyGroup_Component.initialize();
	part_UNIX_AccessControlPolicyGroup_Index = -1;
	endOf_UNIX_AccessControlPolicyGroup_Part = !part_UNIX_AccessControlPolicyGroup_Component.initialize();
	part_UNIX_AuthorizationRule_Index = -1;
	endOf_UNIX_AuthorizationRule_Part = !part_UNIX_AuthorizationRule_Component.initialize();
	part_UNIX_NetworkPolicyRule_Index = -1;
	endOf_UNIX_NetworkPolicyRule_Part = !part_UNIX_NetworkPolicyRule_Component.initialize();
	part_UNIX_IPsecRule_Index = -1;
	endOf_UNIX_IPsecRule_Part = !part_UNIX_IPsecRule_Component.initialize();
	part_UNIX_IKERule_Index = -1;
	endOf_UNIX_IKERule_Part = !part_UNIX_IKERule_Component.initialize();
	part_UNIX_AuthenticationRule_Index = -1;
	endOf_UNIX_AuthenticationRule_Part = !part_UNIX_AuthenticationRule_Component.initialize();
	part_UNIX_TierPolicyRule_Index = -1;
	endOf_UNIX_TierPolicyRule_Part = !part_UNIX_TierPolicyRule_Component.initialize();
	return true;
}

Boolean UNIX_PolicySetComponent::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_AccessControlPolicy_Part &&
			endOf_UNIX_PolicyGroup_Part &&
			endOf_UNIX_AccessControlPolicyGroup_Part &&
			endOf_UNIX_AuthorizationRule_Part &&
			endOf_UNIX_NetworkPolicyRule_Part &&
			endOf_UNIX_IPsecRule_Part &&
			endOf_UNIX_IKERule_Part &&
			endOf_UNIX_AuthenticationRule_Part &&
			endOf_UNIX_TierPolicyRule_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_AccessControlPolicy_Index++;
			endOf_UNIX_AccessControlPolicy_Group = !group_UNIX_AccessControlPolicy_Component.load(group_UNIX_AccessControlPolicy_Index);
			if (endOf_UNIX_AccessControlPolicy_Group)
			{
				endOf_UNIX_AccessControlPolicy_Part = false;
				part_UNIX_AccessControlPolicy_Component.setScope(CIMName("UNIX_AccessControlPolicy"));
				part_UNIX_AccessControlPolicy_Component.initialize();
				endOf_UNIX_PolicyGroup_Part = false;
				part_UNIX_PolicyGroup_Component.setScope(CIMName("UNIX_AccessControlPolicy"));
				part_UNIX_PolicyGroup_Component.initialize();
				endOf_UNIX_AccessControlPolicyGroup_Part = false;
				part_UNIX_AccessControlPolicyGroup_Component.setScope(CIMName("UNIX_AccessControlPolicy"));
				part_UNIX_AccessControlPolicyGroup_Component.initialize();
				endOf_UNIX_AuthorizationRule_Part = false;
				part_UNIX_AuthorizationRule_Component.setScope(CIMName("UNIX_AccessControlPolicy"));
				part_UNIX_AuthorizationRule_Component.initialize();
				endOf_UNIX_NetworkPolicyRule_Part = false;
				part_UNIX_NetworkPolicyRule_Component.setScope(CIMName("UNIX_AccessControlPolicy"));
				part_UNIX_NetworkPolicyRule_Component.initialize();
				endOf_UNIX_IPsecRule_Part = false;
				part_UNIX_IPsecRule_Component.setScope(CIMName("UNIX_AccessControlPolicy"));
				part_UNIX_IPsecRule_Component.initialize();
				endOf_UNIX_IKERule_Part = false;
				part_UNIX_IKERule_Component.setScope(CIMName("UNIX_AccessControlPolicy"));
				part_UNIX_IKERule_Component.initialize();
				endOf_UNIX_AuthenticationRule_Part = false;
				part_UNIX_AuthenticationRule_Component.setScope(CIMName("UNIX_AccessControlPolicy"));
				part_UNIX_AuthenticationRule_Component.initialize();
				endOf_UNIX_TierPolicyRule_Part = false;
				part_UNIX_TierPolicyRule_Component.setScope(CIMName("UNIX_AccessControlPolicy"));
				part_UNIX_TierPolicyRule_Component.initialize();
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
				endOf_UNIX_AccessControlPolicy_Part = false;
				part_UNIX_AccessControlPolicy_Component.setScope(CIMName("UNIX_PolicyGroup"));
				part_UNIX_AccessControlPolicy_Component.initialize();
				endOf_UNIX_PolicyGroup_Part = false;
				part_UNIX_PolicyGroup_Component.setScope(CIMName("UNIX_PolicyGroup"));
				part_UNIX_PolicyGroup_Component.initialize();
				endOf_UNIX_AccessControlPolicyGroup_Part = false;
				part_UNIX_AccessControlPolicyGroup_Component.setScope(CIMName("UNIX_PolicyGroup"));
				part_UNIX_AccessControlPolicyGroup_Component.initialize();
				endOf_UNIX_AuthorizationRule_Part = false;
				part_UNIX_AuthorizationRule_Component.setScope(CIMName("UNIX_PolicyGroup"));
				part_UNIX_AuthorizationRule_Component.initialize();
				endOf_UNIX_NetworkPolicyRule_Part = false;
				part_UNIX_NetworkPolicyRule_Component.setScope(CIMName("UNIX_PolicyGroup"));
				part_UNIX_NetworkPolicyRule_Component.initialize();
				endOf_UNIX_IPsecRule_Part = false;
				part_UNIX_IPsecRule_Component.setScope(CIMName("UNIX_PolicyGroup"));
				part_UNIX_IPsecRule_Component.initialize();
				endOf_UNIX_IKERule_Part = false;
				part_UNIX_IKERule_Component.setScope(CIMName("UNIX_PolicyGroup"));
				part_UNIX_IKERule_Component.initialize();
				endOf_UNIX_AuthenticationRule_Part = false;
				part_UNIX_AuthenticationRule_Component.setScope(CIMName("UNIX_PolicyGroup"));
				part_UNIX_AuthenticationRule_Component.initialize();
				endOf_UNIX_TierPolicyRule_Part = false;
				part_UNIX_TierPolicyRule_Component.setScope(CIMName("UNIX_PolicyGroup"));
				part_UNIX_TierPolicyRule_Component.initialize();
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
				endOf_UNIX_AccessControlPolicy_Part = false;
				part_UNIX_AccessControlPolicy_Component.setScope(CIMName("UNIX_AccessControlPolicyGroup"));
				part_UNIX_AccessControlPolicy_Component.initialize();
				endOf_UNIX_PolicyGroup_Part = false;
				part_UNIX_PolicyGroup_Component.setScope(CIMName("UNIX_AccessControlPolicyGroup"));
				part_UNIX_PolicyGroup_Component.initialize();
				endOf_UNIX_AccessControlPolicyGroup_Part = false;
				part_UNIX_AccessControlPolicyGroup_Component.setScope(CIMName("UNIX_AccessControlPolicyGroup"));
				part_UNIX_AccessControlPolicyGroup_Component.initialize();
				endOf_UNIX_AuthorizationRule_Part = false;
				part_UNIX_AuthorizationRule_Component.setScope(CIMName("UNIX_AccessControlPolicyGroup"));
				part_UNIX_AuthorizationRule_Component.initialize();
				endOf_UNIX_NetworkPolicyRule_Part = false;
				part_UNIX_NetworkPolicyRule_Component.setScope(CIMName("UNIX_AccessControlPolicyGroup"));
				part_UNIX_NetworkPolicyRule_Component.initialize();
				endOf_UNIX_IPsecRule_Part = false;
				part_UNIX_IPsecRule_Component.setScope(CIMName("UNIX_AccessControlPolicyGroup"));
				part_UNIX_IPsecRule_Component.initialize();
				endOf_UNIX_IKERule_Part = false;
				part_UNIX_IKERule_Component.setScope(CIMName("UNIX_AccessControlPolicyGroup"));
				part_UNIX_IKERule_Component.initialize();
				endOf_UNIX_AuthenticationRule_Part = false;
				part_UNIX_AuthenticationRule_Component.setScope(CIMName("UNIX_AccessControlPolicyGroup"));
				part_UNIX_AuthenticationRule_Component.initialize();
				endOf_UNIX_TierPolicyRule_Part = false;
				part_UNIX_TierPolicyRule_Component.setScope(CIMName("UNIX_AccessControlPolicyGroup"));
				part_UNIX_TierPolicyRule_Component.initialize();
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
				endOf_UNIX_AccessControlPolicy_Part = false;
				part_UNIX_AccessControlPolicy_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_AccessControlPolicy_Component.initialize();
				endOf_UNIX_PolicyGroup_Part = false;
				part_UNIX_PolicyGroup_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_PolicyGroup_Component.initialize();
				endOf_UNIX_AccessControlPolicyGroup_Part = false;
				part_UNIX_AccessControlPolicyGroup_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_AccessControlPolicyGroup_Component.initialize();
				endOf_UNIX_AuthorizationRule_Part = false;
				part_UNIX_AuthorizationRule_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_AuthorizationRule_Component.initialize();
				endOf_UNIX_NetworkPolicyRule_Part = false;
				part_UNIX_NetworkPolicyRule_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_NetworkPolicyRule_Component.initialize();
				endOf_UNIX_IPsecRule_Part = false;
				part_UNIX_IPsecRule_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_IPsecRule_Component.initialize();
				endOf_UNIX_IKERule_Part = false;
				part_UNIX_IKERule_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_IKERule_Component.initialize();
				endOf_UNIX_AuthenticationRule_Part = false;
				part_UNIX_AuthenticationRule_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_AuthenticationRule_Component.initialize();
				endOf_UNIX_TierPolicyRule_Part = false;
				part_UNIX_TierPolicyRule_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_TierPolicyRule_Component.initialize();
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
				endOf_UNIX_AccessControlPolicy_Part = false;
				part_UNIX_AccessControlPolicy_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_AccessControlPolicy_Component.initialize();
				endOf_UNIX_PolicyGroup_Part = false;
				part_UNIX_PolicyGroup_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_PolicyGroup_Component.initialize();
				endOf_UNIX_AccessControlPolicyGroup_Part = false;
				part_UNIX_AccessControlPolicyGroup_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_AccessControlPolicyGroup_Component.initialize();
				endOf_UNIX_AuthorizationRule_Part = false;
				part_UNIX_AuthorizationRule_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_AuthorizationRule_Component.initialize();
				endOf_UNIX_NetworkPolicyRule_Part = false;
				part_UNIX_NetworkPolicyRule_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_NetworkPolicyRule_Component.initialize();
				endOf_UNIX_IPsecRule_Part = false;
				part_UNIX_IPsecRule_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_IPsecRule_Component.initialize();
				endOf_UNIX_IKERule_Part = false;
				part_UNIX_IKERule_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_IKERule_Component.initialize();
				endOf_UNIX_AuthenticationRule_Part = false;
				part_UNIX_AuthenticationRule_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_AuthenticationRule_Component.initialize();
				endOf_UNIX_TierPolicyRule_Part = false;
				part_UNIX_TierPolicyRule_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_TierPolicyRule_Component.initialize();
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
				endOf_UNIX_AccessControlPolicy_Part = false;
				part_UNIX_AccessControlPolicy_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_AccessControlPolicy_Component.initialize();
				endOf_UNIX_PolicyGroup_Part = false;
				part_UNIX_PolicyGroup_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_PolicyGroup_Component.initialize();
				endOf_UNIX_AccessControlPolicyGroup_Part = false;
				part_UNIX_AccessControlPolicyGroup_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_AccessControlPolicyGroup_Component.initialize();
				endOf_UNIX_AuthorizationRule_Part = false;
				part_UNIX_AuthorizationRule_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_AuthorizationRule_Component.initialize();
				endOf_UNIX_NetworkPolicyRule_Part = false;
				part_UNIX_NetworkPolicyRule_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_NetworkPolicyRule_Component.initialize();
				endOf_UNIX_IPsecRule_Part = false;
				part_UNIX_IPsecRule_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_IPsecRule_Component.initialize();
				endOf_UNIX_IKERule_Part = false;
				part_UNIX_IKERule_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_IKERule_Component.initialize();
				endOf_UNIX_AuthenticationRule_Part = false;
				part_UNIX_AuthenticationRule_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_AuthenticationRule_Component.initialize();
				endOf_UNIX_TierPolicyRule_Part = false;
				part_UNIX_TierPolicyRule_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_TierPolicyRule_Component.initialize();
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
				endOf_UNIX_AccessControlPolicy_Part = false;
				part_UNIX_AccessControlPolicy_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_AccessControlPolicy_Component.initialize();
				endOf_UNIX_PolicyGroup_Part = false;
				part_UNIX_PolicyGroup_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_PolicyGroup_Component.initialize();
				endOf_UNIX_AccessControlPolicyGroup_Part = false;
				part_UNIX_AccessControlPolicyGroup_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_AccessControlPolicyGroup_Component.initialize();
				endOf_UNIX_AuthorizationRule_Part = false;
				part_UNIX_AuthorizationRule_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_AuthorizationRule_Component.initialize();
				endOf_UNIX_NetworkPolicyRule_Part = false;
				part_UNIX_NetworkPolicyRule_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_NetworkPolicyRule_Component.initialize();
				endOf_UNIX_IPsecRule_Part = false;
				part_UNIX_IPsecRule_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_IPsecRule_Component.initialize();
				endOf_UNIX_IKERule_Part = false;
				part_UNIX_IKERule_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_IKERule_Component.initialize();
				endOf_UNIX_AuthenticationRule_Part = false;
				part_UNIX_AuthenticationRule_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_AuthenticationRule_Component.initialize();
				endOf_UNIX_TierPolicyRule_Part = false;
				part_UNIX_TierPolicyRule_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_TierPolicyRule_Component.initialize();
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
				endOf_UNIX_AccessControlPolicy_Part = false;
				part_UNIX_AccessControlPolicy_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_AccessControlPolicy_Component.initialize();
				endOf_UNIX_PolicyGroup_Part = false;
				part_UNIX_PolicyGroup_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_PolicyGroup_Component.initialize();
				endOf_UNIX_AccessControlPolicyGroup_Part = false;
				part_UNIX_AccessControlPolicyGroup_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_AccessControlPolicyGroup_Component.initialize();
				endOf_UNIX_AuthorizationRule_Part = false;
				part_UNIX_AuthorizationRule_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_AuthorizationRule_Component.initialize();
				endOf_UNIX_NetworkPolicyRule_Part = false;
				part_UNIX_NetworkPolicyRule_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_NetworkPolicyRule_Component.initialize();
				endOf_UNIX_IPsecRule_Part = false;
				part_UNIX_IPsecRule_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_IPsecRule_Component.initialize();
				endOf_UNIX_IKERule_Part = false;
				part_UNIX_IKERule_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_IKERule_Component.initialize();
				endOf_UNIX_AuthenticationRule_Part = false;
				part_UNIX_AuthenticationRule_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_AuthenticationRule_Component.initialize();
				endOf_UNIX_TierPolicyRule_Part = false;
				part_UNIX_TierPolicyRule_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_TierPolicyRule_Component.initialize();
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
				endOf_UNIX_AccessControlPolicy_Part = false;
				part_UNIX_AccessControlPolicy_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_AccessControlPolicy_Component.initialize();
				endOf_UNIX_PolicyGroup_Part = false;
				part_UNIX_PolicyGroup_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_PolicyGroup_Component.initialize();
				endOf_UNIX_AccessControlPolicyGroup_Part = false;
				part_UNIX_AccessControlPolicyGroup_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_AccessControlPolicyGroup_Component.initialize();
				endOf_UNIX_AuthorizationRule_Part = false;
				part_UNIX_AuthorizationRule_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_AuthorizationRule_Component.initialize();
				endOf_UNIX_NetworkPolicyRule_Part = false;
				part_UNIX_NetworkPolicyRule_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_NetworkPolicyRule_Component.initialize();
				endOf_UNIX_IPsecRule_Part = false;
				part_UNIX_IPsecRule_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_IPsecRule_Component.initialize();
				endOf_UNIX_IKERule_Part = false;
				part_UNIX_IKERule_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_IKERule_Component.initialize();
				endOf_UNIX_AuthenticationRule_Part = false;
				part_UNIX_AuthenticationRule_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_AuthenticationRule_Component.initialize();
				endOf_UNIX_TierPolicyRule_Part = false;
				part_UNIX_TierPolicyRule_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_TierPolicyRule_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_AccessControlPolicy_Index++;
	endOf_UNIX_AccessControlPolicy_Part = !part_UNIX_AccessControlPolicy_Component.load(part_UNIX_AccessControlPolicy_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_PolicyGroup_Index++;
	endOf_UNIX_PolicyGroup_Part = !part_UNIX_PolicyGroup_Component.load(part_UNIX_PolicyGroup_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_AccessControlPolicyGroup_Index++;
	endOf_UNIX_AccessControlPolicyGroup_Part = !part_UNIX_AccessControlPolicyGroup_Component.load(part_UNIX_AccessControlPolicyGroup_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_AuthorizationRule_Index++;
	endOf_UNIX_AuthorizationRule_Part = !part_UNIX_AuthorizationRule_Component.load(part_UNIX_AuthorizationRule_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_NetworkPolicyRule_Index++;
	endOf_UNIX_NetworkPolicyRule_Part = !part_UNIX_NetworkPolicyRule_Component.load(part_UNIX_NetworkPolicyRule_Index);
	}
	if (partIndex == 5)
	{
		part_UNIX_IPsecRule_Index++;
	endOf_UNIX_IPsecRule_Part = !part_UNIX_IPsecRule_Component.load(part_UNIX_IPsecRule_Index);
	}
	if (partIndex == 6)
	{
		part_UNIX_IKERule_Index++;
	endOf_UNIX_IKERule_Part = !part_UNIX_IKERule_Component.load(part_UNIX_IKERule_Index);
	}
	if (partIndex == 7)
	{
		part_UNIX_AuthenticationRule_Index++;
	endOf_UNIX_AuthenticationRule_Part = !part_UNIX_AuthenticationRule_Component.load(part_UNIX_AuthenticationRule_Index);
	}
	if (partIndex == 8)
	{
		part_UNIX_TierPolicyRule_Index++;
	endOf_UNIX_TierPolicyRule_Part = !part_UNIX_TierPolicyRule_Component.load(part_UNIX_TierPolicyRule_Index);
	}
	if (partIndex == 0 && endOf_UNIX_AccessControlPolicy_Part)
	{
		part_UNIX_AccessControlPolicy_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_PolicyGroup_Part)
	{
		part_UNIX_PolicyGroup_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_AccessControlPolicyGroup_Part)
	{
		part_UNIX_AccessControlPolicyGroup_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_AuthorizationRule_Part)
	{
		part_UNIX_AuthorizationRule_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_NetworkPolicyRule_Part)
	{
		part_UNIX_NetworkPolicyRule_Component.finalize();
		partIndex++;
	}
	if (partIndex == 5 && endOf_UNIX_IPsecRule_Part)
	{
		part_UNIX_IPsecRule_Component.finalize();
		partIndex++;
	}
	if (partIndex == 6 && endOf_UNIX_IKERule_Part)
	{
		part_UNIX_IKERule_Component.finalize();
		partIndex++;
	}
	if (partIndex == 7 && endOf_UNIX_AuthenticationRule_Part)
	{
		part_UNIX_AuthenticationRule_Component.finalize();
		partIndex++;
	}
	if (partIndex == 8 && endOf_UNIX_TierPolicyRule_Part)
	{
		part_UNIX_TierPolicyRule_Component.finalize();
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
		endOf_UNIX_AccessControlPolicy_Part &&
		endOf_UNIX_PolicyGroup_Part &&
		endOf_UNIX_AccessControlPolicyGroup_Part &&
		endOf_UNIX_AuthorizationRule_Part &&
		endOf_UNIX_NetworkPolicyRule_Part &&
		endOf_UNIX_IPsecRule_Part &&
		endOf_UNIX_IKERule_Part &&
		endOf_UNIX_AuthenticationRule_Part &&
		endOf_UNIX_TierPolicyRule_Part)		return false;
	return true;
}

Boolean UNIX_PolicySetComponent::finalize()
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
	part_UNIX_AccessControlPolicy_Component.finalize();
	part_UNIX_PolicyGroup_Component.finalize();
	part_UNIX_AccessControlPolicyGroup_Component.finalize();
	part_UNIX_AuthorizationRule_Component.finalize();
	part_UNIX_NetworkPolicyRule_Component.finalize();
	part_UNIX_IPsecRule_Component.finalize();
	part_UNIX_IKERule_Component.finalize();
	part_UNIX_AuthenticationRule_Component.finalize();
	part_UNIX_TierPolicyRule_Component.finalize();
	return true;
}


Boolean UNIX_PolicySetComponent::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PolicySetComponent::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicySetComponent::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicySetComponent::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicySetComponent::validateInstance()
{
	return true;
}

