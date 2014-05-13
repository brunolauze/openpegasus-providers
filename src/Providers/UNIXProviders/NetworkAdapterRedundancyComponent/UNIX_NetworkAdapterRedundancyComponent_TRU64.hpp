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


UNIX_NetworkAdapterRedundancyComponent::UNIX_NetworkAdapterRedundancyComponent(void)
{
}

UNIX_NetworkAdapterRedundancyComponent::~UNIX_NetworkAdapterRedundancyComponent(void)
{
}

Boolean UNIX_NetworkAdapterRedundancyComponent::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_NetworkAdapterRedundancyComponent::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_NetworkAdapterRedundancyComponent::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_NetworkAdapterRedundancyComponent::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_NetworkAdapterRedundancyComponent::getPartComponent() const
{
	return _partComponent;
}

void UNIX_NetworkAdapterRedundancyComponent::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}

Boolean UNIX_NetworkAdapterRedundancyComponent::getScopeOfBalancing(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCOPE_OF_BALANCING, getScopeOfBalancing());
	return true;
}

Uint16 UNIX_NetworkAdapterRedundancyComponent::getScopeOfBalancing() const
{
	return _scopeOfBalancing;
}

void UNIX_NetworkAdapterRedundancyComponent::setScopeOfBalancing(Uint16 &value)
{
	_scopeOfBalancing = value;
}

Boolean UNIX_NetworkAdapterRedundancyComponent::getPrimaryAdapter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_ADAPTER, getPrimaryAdapter());
	return true;
}

Uint16 UNIX_NetworkAdapterRedundancyComponent::getPrimaryAdapter() const
{
	return _primaryAdapter;
}

void UNIX_NetworkAdapterRedundancyComponent::setPrimaryAdapter(Uint16 &value)
{
	_primaryAdapter = value;
}


void UNIX_NetworkAdapterRedundancyComponent::clearInstance()
{

	_groupComponent = CIMInstance(CIMName("CIM_ExtraCapacityGroup"));
	_partComponent = CIMInstance(CIMName("CIM_EthernetAdapter"));
	_scopeOfBalancing = Uint16(0);
	_primaryAdapter = Uint16(0);

}

Boolean UNIX_NetworkAdapterRedundancyComponent::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ScopeOfBalancing"))
			{
				Uint16 scopeOfBalancingValue;
				property.getValue().get(scopeOfBalancingValue);
				setScopeOfBalancing(scopeOfBalancingValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryAdapter"))
			{
				Uint16 primaryAdapterValue;
				property.getValue().get(primaryAdapterValue);
				setPrimaryAdapter(primaryAdapterValue);
			}
	}
	return true;
}


Boolean UNIX_NetworkAdapterRedundancyComponent::initialize()
{
	groupIndex = 0;
	partIndex = 0;
	group_UNIX_ExtraCapacityGroup_Index = -1;
	endOf_UNIX_ExtraCapacityGroup_Group = !group_UNIX_ExtraCapacityGroup_Component.initialize();
	part_UNIX_EthernetAdapter_Index = -1;
	endOf_UNIX_EthernetAdapter_Part = !part_UNIX_EthernetAdapter_Component.initialize();
	part_UNIX_TokenRingAdapter_Index = -1;
	endOf_UNIX_TokenRingAdapter_Part = !part_UNIX_TokenRingAdapter_Component.initialize();
	part_UNIX_FibreChannelAdapter_Index = -1;
	endOf_UNIX_FibreChannelAdapter_Part = !part_UNIX_FibreChannelAdapter_Component.initialize();
	return true;
}

Boolean UNIX_NetworkAdapterRedundancyComponent::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_EthernetAdapter_Part &&
			endOf_UNIX_TokenRingAdapter_Part &&
			endOf_UNIX_FibreChannelAdapter_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_ExtraCapacityGroup_Index++;
			endOf_UNIX_ExtraCapacityGroup_Group = !group_UNIX_ExtraCapacityGroup_Component.load(group_UNIX_ExtraCapacityGroup_Index);
			if (endOf_UNIX_ExtraCapacityGroup_Group)
			{
				endOf_UNIX_EthernetAdapter_Part = false;
				part_UNIX_EthernetAdapter_Component.setScope(CIMName("UNIX_ExtraCapacityGroup"));
				part_UNIX_EthernetAdapter_Component.initialize();
				endOf_UNIX_TokenRingAdapter_Part = false;
				part_UNIX_TokenRingAdapter_Component.setScope(CIMName("UNIX_ExtraCapacityGroup"));
				part_UNIX_TokenRingAdapter_Component.initialize();
				endOf_UNIX_FibreChannelAdapter_Part = false;
				part_UNIX_FibreChannelAdapter_Component.setScope(CIMName("UNIX_ExtraCapacityGroup"));
				part_UNIX_FibreChannelAdapter_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_EthernetAdapter_Index++;
	endOf_UNIX_EthernetAdapter_Part = !part_UNIX_EthernetAdapter_Component.load(part_UNIX_EthernetAdapter_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_TokenRingAdapter_Index++;
	endOf_UNIX_TokenRingAdapter_Part = !part_UNIX_TokenRingAdapter_Component.load(part_UNIX_TokenRingAdapter_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_FibreChannelAdapter_Index++;
	endOf_UNIX_FibreChannelAdapter_Part = !part_UNIX_FibreChannelAdapter_Component.load(part_UNIX_FibreChannelAdapter_Index);
	}
	if (partIndex == 0 && endOf_UNIX_EthernetAdapter_Part)
	{
		part_UNIX_EthernetAdapter_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_TokenRingAdapter_Part)
	{
		part_UNIX_TokenRingAdapter_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_FibreChannelAdapter_Part)
	{
		part_UNIX_FibreChannelAdapter_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_ExtraCapacityGroup_Group &&
		endOf_UNIX_EthernetAdapter_Part &&
		endOf_UNIX_TokenRingAdapter_Part &&
		endOf_UNIX_FibreChannelAdapter_Part)		return false;
	return true;
}

Boolean UNIX_NetworkAdapterRedundancyComponent::finalize()
{
	group_UNIX_ExtraCapacityGroup_Component.finalize();
	part_UNIX_EthernetAdapter_Component.finalize();
	part_UNIX_TokenRingAdapter_Component.finalize();
	part_UNIX_FibreChannelAdapter_Component.finalize();
	return true;
}


Boolean UNIX_NetworkAdapterRedundancyComponent::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_NetworkAdapterRedundancyComponent::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkAdapterRedundancyComponent::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkAdapterRedundancyComponent::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkAdapterRedundancyComponent::validateInstance()
{
	return true;
}

