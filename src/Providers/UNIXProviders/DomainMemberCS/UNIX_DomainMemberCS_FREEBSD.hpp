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


UNIX_DomainMemberCS::UNIX_DomainMemberCS(void)
{
}

UNIX_DomainMemberCS::~UNIX_DomainMemberCS(void)
{
}

Boolean UNIX_DomainMemberCS::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_DomainMemberCS::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_DomainMemberCS::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_DomainMemberCS::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_DomainMemberCS::getPartComponent() const
{
	return _partComponent;
}

void UNIX_DomainMemberCS::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}

Boolean UNIX_DomainMemberCS::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DomainMemberCS::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_DomainMemberCS::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_DomainMemberCS::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DomainMemberCS::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_DomainMemberCS::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_DomainMemberCS::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DomainMemberCS::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_DomainMemberCS::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_DomainMemberCS::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DomainMemberCS::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_DomainMemberCS::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_DomainMemberCS::getMemberRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMBER_ROLE, getMemberRole());
	return true;
}

Array<Uint16> UNIX_DomainMemberCS::getMemberRole() const
{
	return _memberRole;
}

void UNIX_DomainMemberCS::setMemberRole(Array<Uint16> &value)
{
	_memberRole = value;
}

Boolean UNIX_DomainMemberCS::getMemberState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMBER_STATE, getMemberState());
	return true;
}

Uint16 UNIX_DomainMemberCS::getMemberState() const
{
	return _memberState;
}

void UNIX_DomainMemberCS::setMemberState(Uint16 &value)
{
	_memberState = value;
}


void UNIX_DomainMemberCS::clearInstance()
{

	_groupComponent = CIMInstance(CIMName("CIM_ReusablePolicyContainer"));
	_partComponent = CIMInstance(CIMName("CIM_VirtualComputerSystem"));
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_communicationStatus = Uint16(0);
	_memberRole.clear();
	_memberState = Uint16(0);

}

Boolean UNIX_DomainMemberCS::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PrimaryStatus"))
			{
				Uint16 primaryStatusValue;
				property.getValue().get(primaryStatusValue);
				setPrimaryStatus(primaryStatusValue);
			}
			else if (String::equal(property.getName().getString(), "DetailedStatus"))
			{
				Uint16 detailedStatusValue;
				property.getValue().get(detailedStatusValue);
				setDetailedStatus(detailedStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OperatingStatus"))
			{
				Uint16 operatingStatusValue;
				property.getValue().get(operatingStatusValue);
				setOperatingStatus(operatingStatusValue);
			}
			else if (String::equal(property.getName().getString(), "CommunicationStatus"))
			{
				Uint16 communicationStatusValue;
				property.getValue().get(communicationStatusValue);
				setCommunicationStatus(communicationStatusValue);
			}
			else if (String::equal(property.getName().getString(), "MemberRole"))
			{
				Array<Uint16> memberRoleValue;
				property.getValue().get(memberRoleValue);
				setMemberRole(memberRoleValue);
			}
			else if (String::equal(property.getName().getString(), "MemberState"))
			{
				Uint16 memberStateValue;
				property.getValue().get(memberStateValue);
				setMemberState(memberStateValue);
			}
	}
	return true;
}


Boolean UNIX_DomainMemberCS::initialize()
{
	groupIndex = 0;
	partIndex = 0;
	group_UNIX_ReusablePolicyContainer_Index = -1;
	endOf_UNIX_ReusablePolicyContainer_Group = !group_UNIX_ReusablePolicyContainer_Component.initialize();
	group_UNIX_PolicyRepository_Index = -1;
	endOf_UNIX_PolicyRepository_Group = !group_UNIX_PolicyRepository_Component.initialize();
	group_UNIX_AutonomousSystem_Index = -1;
	endOf_UNIX_AutonomousSystem_Group = !group_UNIX_AutonomousSystem_Component.initialize();
	group_UNIX_RoutingProtocolDomain_Index = -1;
	endOf_UNIX_RoutingProtocolDomain_Group = !group_UNIX_RoutingProtocolDomain_Component.initialize();
	group_UNIX_OSPFArea_Index = -1;
	endOf_UNIX_OSPFArea_Group = !group_UNIX_OSPFArea_Component.initialize();
	group_UNIX_Network_Index = -1;
	endOf_UNIX_Network_Group = !group_UNIX_Network_Component.initialize();
	group_UNIX_VLANNetwork_Index = -1;
	endOf_UNIX_VLANNetwork_Group = !group_UNIX_VLANNetwork_Component.initialize();
	group_UNIX_TierDomain_Index = -1;
	endOf_UNIX_TierDomain_Group = !group_UNIX_TierDomain_Component.initialize();
	part_UNIX_VirtualComputerSystem_Index = -1;
	endOf_UNIX_VirtualComputerSystem_Part = !part_UNIX_VirtualComputerSystem_Component.initialize();
	part_UNIX_Cluster_Index = -1;
	endOf_UNIX_Cluster_Part = !part_UNIX_Cluster_Component.initialize();
	part_UNIX_ComputerSystem_Index = -1;
	endOf_UNIX_ComputerSystem_Part = !part_UNIX_ComputerSystem_Component.initialize();
	return true;
}

Boolean UNIX_DomainMemberCS::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_VirtualComputerSystem_Part &&
			endOf_UNIX_Cluster_Part &&
			endOf_UNIX_ComputerSystem_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_ReusablePolicyContainer_Index++;
			endOf_UNIX_ReusablePolicyContainer_Group = !group_UNIX_ReusablePolicyContainer_Component.load(group_UNIX_ReusablePolicyContainer_Index);
			if (endOf_UNIX_ReusablePolicyContainer_Group)
			{
				endOf_UNIX_VirtualComputerSystem_Part = false;
				part_UNIX_VirtualComputerSystem_Component.setScope(CIMName("UNIX_ReusablePolicyContainer"));
				part_UNIX_VirtualComputerSystem_Component.initialize();
				endOf_UNIX_Cluster_Part = false;
				part_UNIX_Cluster_Component.setScope(CIMName("UNIX_ReusablePolicyContainer"));
				part_UNIX_Cluster_Component.initialize();
				endOf_UNIX_ComputerSystem_Part = false;
				part_UNIX_ComputerSystem_Component.setScope(CIMName("UNIX_ReusablePolicyContainer"));
				part_UNIX_ComputerSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_PolicyRepository_Index++;
			endOf_UNIX_PolicyRepository_Group = !group_UNIX_PolicyRepository_Component.load(group_UNIX_PolicyRepository_Index);
			if (endOf_UNIX_PolicyRepository_Group)
			{
				endOf_UNIX_VirtualComputerSystem_Part = false;
				part_UNIX_VirtualComputerSystem_Component.setScope(CIMName("UNIX_PolicyRepository"));
				part_UNIX_VirtualComputerSystem_Component.initialize();
				endOf_UNIX_Cluster_Part = false;
				part_UNIX_Cluster_Component.setScope(CIMName("UNIX_PolicyRepository"));
				part_UNIX_Cluster_Component.initialize();
				endOf_UNIX_ComputerSystem_Part = false;
				part_UNIX_ComputerSystem_Component.setScope(CIMName("UNIX_PolicyRepository"));
				part_UNIX_ComputerSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 2)
		{
			group_UNIX_AutonomousSystem_Index++;
			endOf_UNIX_AutonomousSystem_Group = !group_UNIX_AutonomousSystem_Component.load(group_UNIX_AutonomousSystem_Index);
			if (endOf_UNIX_AutonomousSystem_Group)
			{
				endOf_UNIX_VirtualComputerSystem_Part = false;
				part_UNIX_VirtualComputerSystem_Component.setScope(CIMName("UNIX_AutonomousSystem"));
				part_UNIX_VirtualComputerSystem_Component.initialize();
				endOf_UNIX_Cluster_Part = false;
				part_UNIX_Cluster_Component.setScope(CIMName("UNIX_AutonomousSystem"));
				part_UNIX_Cluster_Component.initialize();
				endOf_UNIX_ComputerSystem_Part = false;
				part_UNIX_ComputerSystem_Component.setScope(CIMName("UNIX_AutonomousSystem"));
				part_UNIX_ComputerSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 3)
		{
			group_UNIX_RoutingProtocolDomain_Index++;
			endOf_UNIX_RoutingProtocolDomain_Group = !group_UNIX_RoutingProtocolDomain_Component.load(group_UNIX_RoutingProtocolDomain_Index);
			if (endOf_UNIX_RoutingProtocolDomain_Group)
			{
				endOf_UNIX_VirtualComputerSystem_Part = false;
				part_UNIX_VirtualComputerSystem_Component.setScope(CIMName("UNIX_RoutingProtocolDomain"));
				part_UNIX_VirtualComputerSystem_Component.initialize();
				endOf_UNIX_Cluster_Part = false;
				part_UNIX_Cluster_Component.setScope(CIMName("UNIX_RoutingProtocolDomain"));
				part_UNIX_Cluster_Component.initialize();
				endOf_UNIX_ComputerSystem_Part = false;
				part_UNIX_ComputerSystem_Component.setScope(CIMName("UNIX_RoutingProtocolDomain"));
				part_UNIX_ComputerSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 4)
		{
			group_UNIX_OSPFArea_Index++;
			endOf_UNIX_OSPFArea_Group = !group_UNIX_OSPFArea_Component.load(group_UNIX_OSPFArea_Index);
			if (endOf_UNIX_OSPFArea_Group)
			{
				endOf_UNIX_VirtualComputerSystem_Part = false;
				part_UNIX_VirtualComputerSystem_Component.setScope(CIMName("UNIX_OSPFArea"));
				part_UNIX_VirtualComputerSystem_Component.initialize();
				endOf_UNIX_Cluster_Part = false;
				part_UNIX_Cluster_Component.setScope(CIMName("UNIX_OSPFArea"));
				part_UNIX_Cluster_Component.initialize();
				endOf_UNIX_ComputerSystem_Part = false;
				part_UNIX_ComputerSystem_Component.setScope(CIMName("UNIX_OSPFArea"));
				part_UNIX_ComputerSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 5)
		{
			group_UNIX_Network_Index++;
			endOf_UNIX_Network_Group = !group_UNIX_Network_Component.load(group_UNIX_Network_Index);
			if (endOf_UNIX_Network_Group)
			{
				endOf_UNIX_VirtualComputerSystem_Part = false;
				part_UNIX_VirtualComputerSystem_Component.setScope(CIMName("UNIX_Network"));
				part_UNIX_VirtualComputerSystem_Component.initialize();
				endOf_UNIX_Cluster_Part = false;
				part_UNIX_Cluster_Component.setScope(CIMName("UNIX_Network"));
				part_UNIX_Cluster_Component.initialize();
				endOf_UNIX_ComputerSystem_Part = false;
				part_UNIX_ComputerSystem_Component.setScope(CIMName("UNIX_Network"));
				part_UNIX_ComputerSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 6)
		{
			group_UNIX_VLANNetwork_Index++;
			endOf_UNIX_VLANNetwork_Group = !group_UNIX_VLANNetwork_Component.load(group_UNIX_VLANNetwork_Index);
			if (endOf_UNIX_VLANNetwork_Group)
			{
				endOf_UNIX_VirtualComputerSystem_Part = false;
				part_UNIX_VirtualComputerSystem_Component.setScope(CIMName("UNIX_VLANNetwork"));
				part_UNIX_VirtualComputerSystem_Component.initialize();
				endOf_UNIX_Cluster_Part = false;
				part_UNIX_Cluster_Component.setScope(CIMName("UNIX_VLANNetwork"));
				part_UNIX_Cluster_Component.initialize();
				endOf_UNIX_ComputerSystem_Part = false;
				part_UNIX_ComputerSystem_Component.setScope(CIMName("UNIX_VLANNetwork"));
				part_UNIX_ComputerSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 7)
		{
			group_UNIX_TierDomain_Index++;
			endOf_UNIX_TierDomain_Group = !group_UNIX_TierDomain_Component.load(group_UNIX_TierDomain_Index);
			if (endOf_UNIX_TierDomain_Group)
			{
				endOf_UNIX_VirtualComputerSystem_Part = false;
				part_UNIX_VirtualComputerSystem_Component.setScope(CIMName("UNIX_TierDomain"));
				part_UNIX_VirtualComputerSystem_Component.initialize();
				endOf_UNIX_Cluster_Part = false;
				part_UNIX_Cluster_Component.setScope(CIMName("UNIX_TierDomain"));
				part_UNIX_Cluster_Component.initialize();
				endOf_UNIX_ComputerSystem_Part = false;
				part_UNIX_ComputerSystem_Component.setScope(CIMName("UNIX_TierDomain"));
				part_UNIX_ComputerSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_VirtualComputerSystem_Index++;
	endOf_UNIX_VirtualComputerSystem_Part = !part_UNIX_VirtualComputerSystem_Component.load(part_UNIX_VirtualComputerSystem_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_Cluster_Index++;
	endOf_UNIX_Cluster_Part = !part_UNIX_Cluster_Component.load(part_UNIX_Cluster_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_ComputerSystem_Index++;
	endOf_UNIX_ComputerSystem_Part = !part_UNIX_ComputerSystem_Component.load(part_UNIX_ComputerSystem_Index);
	}
	if (partIndex == 0 && endOf_UNIX_VirtualComputerSystem_Part)
	{
		part_UNIX_VirtualComputerSystem_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_Cluster_Part)
	{
		part_UNIX_Cluster_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_ComputerSystem_Part)
	{
		part_UNIX_ComputerSystem_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_ReusablePolicyContainer_Group &&
		endOf_UNIX_PolicyRepository_Group &&
		endOf_UNIX_AutonomousSystem_Group &&
		endOf_UNIX_RoutingProtocolDomain_Group &&
		endOf_UNIX_OSPFArea_Group &&
		endOf_UNIX_Network_Group &&
		endOf_UNIX_VLANNetwork_Group &&
		endOf_UNIX_TierDomain_Group &&
		endOf_UNIX_VirtualComputerSystem_Part &&
		endOf_UNIX_Cluster_Part &&
		endOf_UNIX_ComputerSystem_Part)		return false;
	return true;
}

Boolean UNIX_DomainMemberCS::finalize()
{
	group_UNIX_ReusablePolicyContainer_Component.finalize();
	group_UNIX_PolicyRepository_Component.finalize();
	group_UNIX_AutonomousSystem_Component.finalize();
	group_UNIX_RoutingProtocolDomain_Component.finalize();
	group_UNIX_OSPFArea_Component.finalize();
	group_UNIX_Network_Component.finalize();
	group_UNIX_VLANNetwork_Component.finalize();
	group_UNIX_TierDomain_Component.finalize();
	part_UNIX_VirtualComputerSystem_Component.finalize();
	part_UNIX_Cluster_Component.finalize();
	part_UNIX_ComputerSystem_Component.finalize();
	return true;
}


Boolean UNIX_DomainMemberCS::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DomainMemberCS::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DomainMemberCS::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DomainMemberCS::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DomainMemberCS::validateInstance()
{
	return true;
}

