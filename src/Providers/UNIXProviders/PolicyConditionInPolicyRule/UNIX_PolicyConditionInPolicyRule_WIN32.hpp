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


UNIX_PolicyConditionInPolicyRule::UNIX_PolicyConditionInPolicyRule(void)
{
}

UNIX_PolicyConditionInPolicyRule::~UNIX_PolicyConditionInPolicyRule(void)
{
}

Boolean UNIX_PolicyConditionInPolicyRule::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_PolicyConditionInPolicyRule::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_PolicyConditionInPolicyRule::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_PolicyConditionInPolicyRule::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_PolicyConditionInPolicyRule::getPartComponent() const
{
	return _partComponent;
}

void UNIX_PolicyConditionInPolicyRule::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}

Boolean UNIX_PolicyConditionInPolicyRule::getGroupNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_NUMBER, getGroupNumber());
	return true;
}

Uint16 UNIX_PolicyConditionInPolicyRule::getGroupNumber() const
{
	return _groupNumber;
}

void UNIX_PolicyConditionInPolicyRule::setGroupNumber(Uint16 &value)
{
	_groupNumber = value;
}

Boolean UNIX_PolicyConditionInPolicyRule::getConditionNegated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONDITION_NEGATED, getConditionNegated());
	return true;
}

Boolean UNIX_PolicyConditionInPolicyRule::getConditionNegated() const
{
	return _conditionNegated;
}

void UNIX_PolicyConditionInPolicyRule::setConditionNegated(Boolean &value)
{
	_conditionNegated = value;
}


void UNIX_PolicyConditionInPolicyRule::clearInstance()
{

	_groupComponent = CIMInstance(CIMName("CIM_AuthorizationRule"));
	_partComponent = CIMInstance(CIMName("CIM_PacketFilterCondition"));
	_groupNumber = Uint16(0);
	_conditionNegated = Boolean(false);

}

Boolean UNIX_PolicyConditionInPolicyRule::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_PolicyConditionInPolicyRule::initialize()
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
	part_UNIX_PacketFilterCondition_Index = -1;
	endOf_UNIX_PacketFilterCondition_Part = !part_UNIX_PacketFilterCondition_Component.initialize();
	part_UNIX_CompoundPolicyCondition_Index = -1;
	endOf_UNIX_CompoundPolicyCondition_Part = !part_UNIX_CompoundPolicyCondition_Component.initialize();
	part_UNIX_QueryCondition_Index = -1;
	endOf_UNIX_QueryCondition_Part = !part_UNIX_QueryCondition_Component.initialize();
	part_UNIX_DocumentAuthentication_Index = -1;
	endOf_UNIX_DocumentAuthentication_Part = !part_UNIX_DocumentAuthentication_Component.initialize();
	part_UNIX_NetworkingIDAuthentication_Index = -1;
	endOf_UNIX_NetworkingIDAuthentication_Part = !part_UNIX_NetworkingIDAuthentication_Component.initialize();
	part_UNIX_KerberosAuthentication_Index = -1;
	endOf_UNIX_KerberosAuthentication_Part = !part_UNIX_KerberosAuthentication_Component.initialize();
	part_UNIX_BiometricAuthentication_Index = -1;
	endOf_UNIX_BiometricAuthentication_Part = !part_UNIX_BiometricAuthentication_Component.initialize();
	part_UNIX_PublicPrivateKeyAuthentication_Index = -1;
	endOf_UNIX_PublicPrivateKeyAuthentication_Part = !part_UNIX_PublicPrivateKeyAuthentication_Component.initialize();
	part_UNIX_PhysicalCredentialAuthentication_Index = -1;
	endOf_UNIX_PhysicalCredentialAuthentication_Part = !part_UNIX_PhysicalCredentialAuthentication_Component.initialize();
	part_UNIX_SharedSecretAuthentication_Index = -1;
	endOf_UNIX_SharedSecretAuthentication_Part = !part_UNIX_SharedSecretAuthentication_Component.initialize();
	part_UNIX_AccountAuthentication_Index = -1;
	endOf_UNIX_AccountAuthentication_Part = !part_UNIX_AccountAuthentication_Component.initialize();
	part_UNIX_PolicyTimePeriodCondition_Index = -1;
	endOf_UNIX_PolicyTimePeriodCondition_Part = !part_UNIX_PolicyTimePeriodCondition_Component.initialize();
	part_UNIX_VendorPolicyCondition_Index = -1;
	endOf_UNIX_VendorPolicyCondition_Part = !part_UNIX_VendorPolicyCondition_Component.initialize();
	return true;
}

Boolean UNIX_PolicyConditionInPolicyRule::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_PacketFilterCondition_Part &&
			endOf_UNIX_CompoundPolicyCondition_Part &&
			endOf_UNIX_QueryCondition_Part &&
			endOf_UNIX_DocumentAuthentication_Part &&
			endOf_UNIX_NetworkingIDAuthentication_Part &&
			endOf_UNIX_KerberosAuthentication_Part &&
			endOf_UNIX_BiometricAuthentication_Part &&
			endOf_UNIX_PublicPrivateKeyAuthentication_Part &&
			endOf_UNIX_PhysicalCredentialAuthentication_Part &&
			endOf_UNIX_SharedSecretAuthentication_Part &&
			endOf_UNIX_AccountAuthentication_Part &&
			endOf_UNIX_PolicyTimePeriodCondition_Part &&
			endOf_UNIX_VendorPolicyCondition_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_AuthorizationRule_Index++;
			endOf_UNIX_AuthorizationRule_Group = !group_UNIX_AuthorizationRule_Component.load(group_UNIX_AuthorizationRule_Index);
			if (endOf_UNIX_AuthorizationRule_Group)
			{
				endOf_UNIX_PacketFilterCondition_Part = false;
				part_UNIX_PacketFilterCondition_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_PacketFilterCondition_Component.initialize();
				endOf_UNIX_CompoundPolicyCondition_Part = false;
				part_UNIX_CompoundPolicyCondition_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_CompoundPolicyCondition_Component.initialize();
				endOf_UNIX_QueryCondition_Part = false;
				part_UNIX_QueryCondition_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_QueryCondition_Component.initialize();
				endOf_UNIX_DocumentAuthentication_Part = false;
				part_UNIX_DocumentAuthentication_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_DocumentAuthentication_Component.initialize();
				endOf_UNIX_NetworkingIDAuthentication_Part = false;
				part_UNIX_NetworkingIDAuthentication_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_NetworkingIDAuthentication_Component.initialize();
				endOf_UNIX_KerberosAuthentication_Part = false;
				part_UNIX_KerberosAuthentication_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_KerberosAuthentication_Component.initialize();
				endOf_UNIX_BiometricAuthentication_Part = false;
				part_UNIX_BiometricAuthentication_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_BiometricAuthentication_Component.initialize();
				endOf_UNIX_PublicPrivateKeyAuthentication_Part = false;
				part_UNIX_PublicPrivateKeyAuthentication_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_PublicPrivateKeyAuthentication_Component.initialize();
				endOf_UNIX_PhysicalCredentialAuthentication_Part = false;
				part_UNIX_PhysicalCredentialAuthentication_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_PhysicalCredentialAuthentication_Component.initialize();
				endOf_UNIX_SharedSecretAuthentication_Part = false;
				part_UNIX_SharedSecretAuthentication_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_SharedSecretAuthentication_Component.initialize();
				endOf_UNIX_AccountAuthentication_Part = false;
				part_UNIX_AccountAuthentication_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_AccountAuthentication_Component.initialize();
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				endOf_UNIX_VendorPolicyCondition_Part = false;
				part_UNIX_VendorPolicyCondition_Component.setScope(CIMName("UNIX_AuthorizationRule"));
				part_UNIX_VendorPolicyCondition_Component.initialize();
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
				endOf_UNIX_PacketFilterCondition_Part = false;
				part_UNIX_PacketFilterCondition_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_PacketFilterCondition_Component.initialize();
				endOf_UNIX_CompoundPolicyCondition_Part = false;
				part_UNIX_CompoundPolicyCondition_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_CompoundPolicyCondition_Component.initialize();
				endOf_UNIX_QueryCondition_Part = false;
				part_UNIX_QueryCondition_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_QueryCondition_Component.initialize();
				endOf_UNIX_DocumentAuthentication_Part = false;
				part_UNIX_DocumentAuthentication_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_DocumentAuthentication_Component.initialize();
				endOf_UNIX_NetworkingIDAuthentication_Part = false;
				part_UNIX_NetworkingIDAuthentication_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_NetworkingIDAuthentication_Component.initialize();
				endOf_UNIX_KerberosAuthentication_Part = false;
				part_UNIX_KerberosAuthentication_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_KerberosAuthentication_Component.initialize();
				endOf_UNIX_BiometricAuthentication_Part = false;
				part_UNIX_BiometricAuthentication_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_BiometricAuthentication_Component.initialize();
				endOf_UNIX_PublicPrivateKeyAuthentication_Part = false;
				part_UNIX_PublicPrivateKeyAuthentication_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_PublicPrivateKeyAuthentication_Component.initialize();
				endOf_UNIX_PhysicalCredentialAuthentication_Part = false;
				part_UNIX_PhysicalCredentialAuthentication_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_PhysicalCredentialAuthentication_Component.initialize();
				endOf_UNIX_SharedSecretAuthentication_Part = false;
				part_UNIX_SharedSecretAuthentication_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_SharedSecretAuthentication_Component.initialize();
				endOf_UNIX_AccountAuthentication_Part = false;
				part_UNIX_AccountAuthentication_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_AccountAuthentication_Component.initialize();
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				endOf_UNIX_VendorPolicyCondition_Part = false;
				part_UNIX_VendorPolicyCondition_Component.setScope(CIMName("UNIX_NetworkPolicyRule"));
				part_UNIX_VendorPolicyCondition_Component.initialize();
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
				endOf_UNIX_PacketFilterCondition_Part = false;
				part_UNIX_PacketFilterCondition_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_PacketFilterCondition_Component.initialize();
				endOf_UNIX_CompoundPolicyCondition_Part = false;
				part_UNIX_CompoundPolicyCondition_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_CompoundPolicyCondition_Component.initialize();
				endOf_UNIX_QueryCondition_Part = false;
				part_UNIX_QueryCondition_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_QueryCondition_Component.initialize();
				endOf_UNIX_DocumentAuthentication_Part = false;
				part_UNIX_DocumentAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_DocumentAuthentication_Component.initialize();
				endOf_UNIX_NetworkingIDAuthentication_Part = false;
				part_UNIX_NetworkingIDAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_NetworkingIDAuthentication_Component.initialize();
				endOf_UNIX_KerberosAuthentication_Part = false;
				part_UNIX_KerberosAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_KerberosAuthentication_Component.initialize();
				endOf_UNIX_BiometricAuthentication_Part = false;
				part_UNIX_BiometricAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_BiometricAuthentication_Component.initialize();
				endOf_UNIX_PublicPrivateKeyAuthentication_Part = false;
				part_UNIX_PublicPrivateKeyAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_PublicPrivateKeyAuthentication_Component.initialize();
				endOf_UNIX_PhysicalCredentialAuthentication_Part = false;
				part_UNIX_PhysicalCredentialAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_PhysicalCredentialAuthentication_Component.initialize();
				endOf_UNIX_SharedSecretAuthentication_Part = false;
				part_UNIX_SharedSecretAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_SharedSecretAuthentication_Component.initialize();
				endOf_UNIX_AccountAuthentication_Part = false;
				part_UNIX_AccountAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_AccountAuthentication_Component.initialize();
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				endOf_UNIX_VendorPolicyCondition_Part = false;
				part_UNIX_VendorPolicyCondition_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_VendorPolicyCondition_Component.initialize();
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
				endOf_UNIX_PacketFilterCondition_Part = false;
				part_UNIX_PacketFilterCondition_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_PacketFilterCondition_Component.initialize();
				endOf_UNIX_CompoundPolicyCondition_Part = false;
				part_UNIX_CompoundPolicyCondition_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_CompoundPolicyCondition_Component.initialize();
				endOf_UNIX_QueryCondition_Part = false;
				part_UNIX_QueryCondition_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_QueryCondition_Component.initialize();
				endOf_UNIX_DocumentAuthentication_Part = false;
				part_UNIX_DocumentAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_DocumentAuthentication_Component.initialize();
				endOf_UNIX_NetworkingIDAuthentication_Part = false;
				part_UNIX_NetworkingIDAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_NetworkingIDAuthentication_Component.initialize();
				endOf_UNIX_KerberosAuthentication_Part = false;
				part_UNIX_KerberosAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_KerberosAuthentication_Component.initialize();
				endOf_UNIX_BiometricAuthentication_Part = false;
				part_UNIX_BiometricAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_BiometricAuthentication_Component.initialize();
				endOf_UNIX_PublicPrivateKeyAuthentication_Part = false;
				part_UNIX_PublicPrivateKeyAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_PublicPrivateKeyAuthentication_Component.initialize();
				endOf_UNIX_PhysicalCredentialAuthentication_Part = false;
				part_UNIX_PhysicalCredentialAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_PhysicalCredentialAuthentication_Component.initialize();
				endOf_UNIX_SharedSecretAuthentication_Part = false;
				part_UNIX_SharedSecretAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_SharedSecretAuthentication_Component.initialize();
				endOf_UNIX_AccountAuthentication_Part = false;
				part_UNIX_AccountAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_AccountAuthentication_Component.initialize();
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				endOf_UNIX_VendorPolicyCondition_Part = false;
				part_UNIX_VendorPolicyCondition_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_VendorPolicyCondition_Component.initialize();
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
				endOf_UNIX_PacketFilterCondition_Part = false;
				part_UNIX_PacketFilterCondition_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_PacketFilterCondition_Component.initialize();
				endOf_UNIX_CompoundPolicyCondition_Part = false;
				part_UNIX_CompoundPolicyCondition_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_CompoundPolicyCondition_Component.initialize();
				endOf_UNIX_QueryCondition_Part = false;
				part_UNIX_QueryCondition_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_QueryCondition_Component.initialize();
				endOf_UNIX_DocumentAuthentication_Part = false;
				part_UNIX_DocumentAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_DocumentAuthentication_Component.initialize();
				endOf_UNIX_NetworkingIDAuthentication_Part = false;
				part_UNIX_NetworkingIDAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_NetworkingIDAuthentication_Component.initialize();
				endOf_UNIX_KerberosAuthentication_Part = false;
				part_UNIX_KerberosAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_KerberosAuthentication_Component.initialize();
				endOf_UNIX_BiometricAuthentication_Part = false;
				part_UNIX_BiometricAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_BiometricAuthentication_Component.initialize();
				endOf_UNIX_PublicPrivateKeyAuthentication_Part = false;
				part_UNIX_PublicPrivateKeyAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_PublicPrivateKeyAuthentication_Component.initialize();
				endOf_UNIX_PhysicalCredentialAuthentication_Part = false;
				part_UNIX_PhysicalCredentialAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_PhysicalCredentialAuthentication_Component.initialize();
				endOf_UNIX_SharedSecretAuthentication_Part = false;
				part_UNIX_SharedSecretAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_SharedSecretAuthentication_Component.initialize();
				endOf_UNIX_AccountAuthentication_Part = false;
				part_UNIX_AccountAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_AccountAuthentication_Component.initialize();
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				endOf_UNIX_VendorPolicyCondition_Part = false;
				part_UNIX_VendorPolicyCondition_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_VendorPolicyCondition_Component.initialize();
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
				endOf_UNIX_PacketFilterCondition_Part = false;
				part_UNIX_PacketFilterCondition_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_PacketFilterCondition_Component.initialize();
				endOf_UNIX_CompoundPolicyCondition_Part = false;
				part_UNIX_CompoundPolicyCondition_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_CompoundPolicyCondition_Component.initialize();
				endOf_UNIX_QueryCondition_Part = false;
				part_UNIX_QueryCondition_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_QueryCondition_Component.initialize();
				endOf_UNIX_DocumentAuthentication_Part = false;
				part_UNIX_DocumentAuthentication_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_DocumentAuthentication_Component.initialize();
				endOf_UNIX_NetworkingIDAuthentication_Part = false;
				part_UNIX_NetworkingIDAuthentication_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_NetworkingIDAuthentication_Component.initialize();
				endOf_UNIX_KerberosAuthentication_Part = false;
				part_UNIX_KerberosAuthentication_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_KerberosAuthentication_Component.initialize();
				endOf_UNIX_BiometricAuthentication_Part = false;
				part_UNIX_BiometricAuthentication_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_BiometricAuthentication_Component.initialize();
				endOf_UNIX_PublicPrivateKeyAuthentication_Part = false;
				part_UNIX_PublicPrivateKeyAuthentication_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_PublicPrivateKeyAuthentication_Component.initialize();
				endOf_UNIX_PhysicalCredentialAuthentication_Part = false;
				part_UNIX_PhysicalCredentialAuthentication_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_PhysicalCredentialAuthentication_Component.initialize();
				endOf_UNIX_SharedSecretAuthentication_Part = false;
				part_UNIX_SharedSecretAuthentication_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_SharedSecretAuthentication_Component.initialize();
				endOf_UNIX_AccountAuthentication_Part = false;
				part_UNIX_AccountAuthentication_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_AccountAuthentication_Component.initialize();
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				endOf_UNIX_VendorPolicyCondition_Part = false;
				part_UNIX_VendorPolicyCondition_Component.setScope(CIMName("UNIX_TierPolicyRule"));
				part_UNIX_VendorPolicyCondition_Component.initialize();
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
	if (partIndex == 1)
	{
		part_UNIX_CompoundPolicyCondition_Index++;
	endOf_UNIX_CompoundPolicyCondition_Part = !part_UNIX_CompoundPolicyCondition_Component.load(part_UNIX_CompoundPolicyCondition_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_QueryCondition_Index++;
	endOf_UNIX_QueryCondition_Part = !part_UNIX_QueryCondition_Component.load(part_UNIX_QueryCondition_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_DocumentAuthentication_Index++;
	endOf_UNIX_DocumentAuthentication_Part = !part_UNIX_DocumentAuthentication_Component.load(part_UNIX_DocumentAuthentication_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_NetworkingIDAuthentication_Index++;
	endOf_UNIX_NetworkingIDAuthentication_Part = !part_UNIX_NetworkingIDAuthentication_Component.load(part_UNIX_NetworkingIDAuthentication_Index);
	}
	if (partIndex == 5)
	{
		part_UNIX_KerberosAuthentication_Index++;
	endOf_UNIX_KerberosAuthentication_Part = !part_UNIX_KerberosAuthentication_Component.load(part_UNIX_KerberosAuthentication_Index);
	}
	if (partIndex == 6)
	{
		part_UNIX_BiometricAuthentication_Index++;
	endOf_UNIX_BiometricAuthentication_Part = !part_UNIX_BiometricAuthentication_Component.load(part_UNIX_BiometricAuthentication_Index);
	}
	if (partIndex == 7)
	{
		part_UNIX_PublicPrivateKeyAuthentication_Index++;
	endOf_UNIX_PublicPrivateKeyAuthentication_Part = !part_UNIX_PublicPrivateKeyAuthentication_Component.load(part_UNIX_PublicPrivateKeyAuthentication_Index);
	}
	if (partIndex == 8)
	{
		part_UNIX_PhysicalCredentialAuthentication_Index++;
	endOf_UNIX_PhysicalCredentialAuthentication_Part = !part_UNIX_PhysicalCredentialAuthentication_Component.load(part_UNIX_PhysicalCredentialAuthentication_Index);
	}
	if (partIndex == 9)
	{
		part_UNIX_SharedSecretAuthentication_Index++;
	endOf_UNIX_SharedSecretAuthentication_Part = !part_UNIX_SharedSecretAuthentication_Component.load(part_UNIX_SharedSecretAuthentication_Index);
	}
	if (partIndex == 10)
	{
		part_UNIX_AccountAuthentication_Index++;
	endOf_UNIX_AccountAuthentication_Part = !part_UNIX_AccountAuthentication_Component.load(part_UNIX_AccountAuthentication_Index);
	}
	if (partIndex == 11)
	{
		part_UNIX_PolicyTimePeriodCondition_Index++;
	endOf_UNIX_PolicyTimePeriodCondition_Part = !part_UNIX_PolicyTimePeriodCondition_Component.load(part_UNIX_PolicyTimePeriodCondition_Index);
	}
	if (partIndex == 12)
	{
		part_UNIX_VendorPolicyCondition_Index++;
	endOf_UNIX_VendorPolicyCondition_Part = !part_UNIX_VendorPolicyCondition_Component.load(part_UNIX_VendorPolicyCondition_Index);
	}
	if (partIndex == 0 && endOf_UNIX_PacketFilterCondition_Part)
	{
		part_UNIX_PacketFilterCondition_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_CompoundPolicyCondition_Part)
	{
		part_UNIX_CompoundPolicyCondition_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_QueryCondition_Part)
	{
		part_UNIX_QueryCondition_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_DocumentAuthentication_Part)
	{
		part_UNIX_DocumentAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_NetworkingIDAuthentication_Part)
	{
		part_UNIX_NetworkingIDAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 5 && endOf_UNIX_KerberosAuthentication_Part)
	{
		part_UNIX_KerberosAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 6 && endOf_UNIX_BiometricAuthentication_Part)
	{
		part_UNIX_BiometricAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 7 && endOf_UNIX_PublicPrivateKeyAuthentication_Part)
	{
		part_UNIX_PublicPrivateKeyAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 8 && endOf_UNIX_PhysicalCredentialAuthentication_Part)
	{
		part_UNIX_PhysicalCredentialAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 9 && endOf_UNIX_SharedSecretAuthentication_Part)
	{
		part_UNIX_SharedSecretAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 10 && endOf_UNIX_AccountAuthentication_Part)
	{
		part_UNIX_AccountAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 11 && endOf_UNIX_PolicyTimePeriodCondition_Part)
	{
		part_UNIX_PolicyTimePeriodCondition_Component.finalize();
		partIndex++;
	}
	if (partIndex == 12 && endOf_UNIX_VendorPolicyCondition_Part)
	{
		part_UNIX_VendorPolicyCondition_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_AuthorizationRule_Group &&
		endOf_UNIX_NetworkPolicyRule_Group &&
		endOf_UNIX_IPsecRule_Group &&
		endOf_UNIX_IKERule_Group &&
		endOf_UNIX_AuthenticationRule_Group &&
		endOf_UNIX_TierPolicyRule_Group &&
		endOf_UNIX_PacketFilterCondition_Part &&
		endOf_UNIX_CompoundPolicyCondition_Part &&
		endOf_UNIX_QueryCondition_Part &&
		endOf_UNIX_DocumentAuthentication_Part &&
		endOf_UNIX_NetworkingIDAuthentication_Part &&
		endOf_UNIX_KerberosAuthentication_Part &&
		endOf_UNIX_BiometricAuthentication_Part &&
		endOf_UNIX_PublicPrivateKeyAuthentication_Part &&
		endOf_UNIX_PhysicalCredentialAuthentication_Part &&
		endOf_UNIX_SharedSecretAuthentication_Part &&
		endOf_UNIX_AccountAuthentication_Part &&
		endOf_UNIX_PolicyTimePeriodCondition_Part &&
		endOf_UNIX_VendorPolicyCondition_Part)		return false;
	return true;
}

Boolean UNIX_PolicyConditionInPolicyRule::finalize()
{
	group_UNIX_AuthorizationRule_Component.finalize();
	group_UNIX_NetworkPolicyRule_Component.finalize();
	group_UNIX_IPsecRule_Component.finalize();
	group_UNIX_IKERule_Component.finalize();
	group_UNIX_AuthenticationRule_Component.finalize();
	group_UNIX_TierPolicyRule_Component.finalize();
	part_UNIX_PacketFilterCondition_Component.finalize();
	part_UNIX_CompoundPolicyCondition_Component.finalize();
	part_UNIX_QueryCondition_Component.finalize();
	part_UNIX_DocumentAuthentication_Component.finalize();
	part_UNIX_NetworkingIDAuthentication_Component.finalize();
	part_UNIX_KerberosAuthentication_Component.finalize();
	part_UNIX_BiometricAuthentication_Component.finalize();
	part_UNIX_PublicPrivateKeyAuthentication_Component.finalize();
	part_UNIX_PhysicalCredentialAuthentication_Component.finalize();
	part_UNIX_SharedSecretAuthentication_Component.finalize();
	part_UNIX_AccountAuthentication_Component.finalize();
	part_UNIX_PolicyTimePeriodCondition_Component.finalize();
	part_UNIX_VendorPolicyCondition_Component.finalize();
	return true;
}


Boolean UNIX_PolicyConditionInPolicyRule::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PolicyConditionInPolicyRule::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyConditionInPolicyRule::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyConditionInPolicyRule::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyConditionInPolicyRule::validateInstance()
{
	return true;
}

