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


UNIX_ProductPhysicalComponent::UNIX_ProductPhysicalComponent(void)
{
}

UNIX_ProductPhysicalComponent::~UNIX_ProductPhysicalComponent(void)
{
}

Boolean UNIX_ProductPhysicalComponent::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_ProductPhysicalComponent::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_ProductPhysicalComponent::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_ProductPhysicalComponent::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_ProductPhysicalComponent::getPartComponent() const
{
	return _partComponent;
}

void UNIX_ProductPhysicalComponent::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}


void UNIX_ProductPhysicalComponent::clearInstance()
{

	_groupComponent = CIMInstance(CIMName("CIM_Product"));
	_partComponent = CIMInstance(CIMName("CIM_PhysicalMedia"));

}

Boolean UNIX_ProductPhysicalComponent::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_ProductPhysicalComponent::initialize()
{
	return false;
}

Boolean UNIX_ProductPhysicalComponent::load(int &pIndex)
{
	
	_groupComponent = CIMInstance(CIMName("CIM_Product"));
	_partComponent = CIMInstance(CIMName("CIM_PhysicalMedia"));
	
	return false;
}

Boolean UNIX_ProductPhysicalComponent::finalize()
{
	return false;
}


Boolean UNIX_ProductPhysicalComponent::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ProductPhysicalComponent::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductPhysicalComponent::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductPhysicalComponent::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductPhysicalComponent::validateInstance()
{
	return true;
}

