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


UNIX_CardOnCard::UNIX_CardOnCard(void)
{
}

UNIX_CardOnCard::~UNIX_CardOnCard(void)
{
}

Boolean UNIX_CardOnCard::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_CardOnCard::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_CardOnCard::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_CardOnCard::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_CardOnCard::getPartComponent() const
{
	return _partComponent;
}

void UNIX_CardOnCard::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}

Boolean UNIX_CardOnCard::getLocationWithinContainer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_WITHIN_CONTAINER, getLocationWithinContainer());
	return true;
}

String UNIX_CardOnCard::getLocationWithinContainer() const
{
	return _locationWithinContainer;
}

void UNIX_CardOnCard::setLocationWithinContainer(String &value)
{
	_locationWithinContainer = value;
}

Boolean UNIX_CardOnCard::getMountOrSlotDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOUNT_OR_SLOT_DESCRIPTION, getMountOrSlotDescription());
	return true;
}

String UNIX_CardOnCard::getMountOrSlotDescription() const
{
	return _mountOrSlotDescription;
}

void UNIX_CardOnCard::setMountOrSlotDescription(String &value)
{
	_mountOrSlotDescription = value;
}


void UNIX_CardOnCard::clearInstance()
{

	_groupComponent = CIMInstance(CIMName("CIM_Card"));
	_partComponent = CIMInstance(CIMName("CIM_Card"));
	_locationWithinContainer = String ("");
	_mountOrSlotDescription = String ("");

}

Boolean UNIX_CardOnCard::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LocationWithinContainer"))
			{
				String locationWithinContainerValue;
				property.getValue().get(locationWithinContainerValue);
				setLocationWithinContainer(locationWithinContainerValue);
			}
			else if (String::equal(property.getName().getString(), "MountOrSlotDescription"))
			{
				String mountOrSlotDescriptionValue;
				property.getValue().get(mountOrSlotDescriptionValue);
				setMountOrSlotDescription(mountOrSlotDescriptionValue);
			}
	}
	return true;
}


Boolean UNIX_CardOnCard::initialize()
{
	groupIndex = 0;
	partIndex = 0;
	group_UNIX_Card_Index = -1;
	endOf_UNIX_Card_Group = !group_UNIX_Card_Component.initialize();
	part_UNIX_Card_Index = -1;
	endOf_UNIX_Card_Part = !part_UNIX_Card_Component.initialize();
	return true;
}

Boolean UNIX_CardOnCard::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_Card_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_Card_Index++;
			endOf_UNIX_Card_Group = !group_UNIX_Card_Component.load(group_UNIX_Card_Index);
			if (endOf_UNIX_Card_Group)
			{
				endOf_UNIX_Card_Part = false;
				part_UNIX_Card_Component.setScope(CIMName("UNIX_Card"));
				part_UNIX_Card_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_Card_Index++;
	endOf_UNIX_Card_Part = !part_UNIX_Card_Component.load(part_UNIX_Card_Index);
	}
	if (partIndex == 0 && endOf_UNIX_Card_Part)
	{
		part_UNIX_Card_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_Card_Group &&
		endOf_UNIX_Card_Part)		return false;
	return true;
}

Boolean UNIX_CardOnCard::finalize()
{
	group_UNIX_Card_Component.finalize();
	part_UNIX_Card_Component.finalize();
	return true;
}


Boolean UNIX_CardOnCard::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CardOnCard::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CardOnCard::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CardOnCard::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CardOnCard::validateInstance()
{
	return true;
}

