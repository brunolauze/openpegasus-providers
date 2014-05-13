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


UNIX_AllocationCapabilities::UNIX_AllocationCapabilities(void)
{
}

UNIX_AllocationCapabilities::~UNIX_AllocationCapabilities(void)
{
}

Boolean UNIX_AllocationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AllocationCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_AllocationCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_AllocationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AllocationCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_AllocationCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_AllocationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AllocationCapabilities::getDescription() const
{
	return _description;
}

void UNIX_AllocationCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_AllocationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AllocationCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_AllocationCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_AllocationCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_AllocationCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_AllocationCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_AllocationCapabilities::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Uint16 UNIX_AllocationCapabilities::getResourceType() const
{
	return _resourceType;
}

void UNIX_AllocationCapabilities::setResourceType(Uint16 &value)
{
	_resourceType = value;
}

Boolean UNIX_AllocationCapabilities::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_AllocationCapabilities::getOtherResourceType() const
{
	return _otherResourceType;
}

void UNIX_AllocationCapabilities::setOtherResourceType(String &value)
{
	_otherResourceType = value;
}

Boolean UNIX_AllocationCapabilities::getResourceSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_SUB_TYPE, getResourceSubType());
	return true;
}

String UNIX_AllocationCapabilities::getResourceSubType() const
{
	return _resourceSubType;
}

void UNIX_AllocationCapabilities::setResourceSubType(String &value)
{
	_resourceSubType = value;
}

Boolean UNIX_AllocationCapabilities::getRequestTypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUEST_TYPES_SUPPORTED, getRequestTypesSupported());
	return true;
}

Uint16 UNIX_AllocationCapabilities::getRequestTypesSupported() const
{
	return _requestTypesSupported;
}

void UNIX_AllocationCapabilities::setRequestTypesSupported(Uint16 &value)
{
	_requestTypesSupported = value;
}

Boolean UNIX_AllocationCapabilities::getSharingMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARING_MODE, getSharingMode());
	return true;
}

Uint16 UNIX_AllocationCapabilities::getSharingMode() const
{
	return _sharingMode;
}

void UNIX_AllocationCapabilities::setSharingMode(Uint16 &value)
{
	_sharingMode = value;
}

Boolean UNIX_AllocationCapabilities::getSupportedAddStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ADD_STATES, getSupportedAddStates());
	return true;
}

Array<Uint16> UNIX_AllocationCapabilities::getSupportedAddStates() const
{
	return _supportedAddStates;
}

void UNIX_AllocationCapabilities::setSupportedAddStates(Array<Uint16> &value)
{
	_supportedAddStates = value;
}

Boolean UNIX_AllocationCapabilities::getSupportedRemoveStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_REMOVE_STATES, getSupportedRemoveStates());
	return true;
}

Array<Uint16> UNIX_AllocationCapabilities::getSupportedRemoveStates() const
{
	return _supportedRemoveStates;
}

void UNIX_AllocationCapabilities::setSupportedRemoveStates(Array<Uint16> &value)
{
	_supportedRemoveStates = value;
}


void UNIX_AllocationCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AllocationCapabilities");
	_generation = Uint64(0);
	_resourceType = Uint16(0);
	_otherResourceType = String ("");
	_resourceSubType = String ("");
	_requestTypesSupported = Uint16(0);
	_sharingMode = Uint16(0);
	_supportedAddStates.clear();
	_supportedRemoveStates.clear();

}

Boolean UNIX_AllocationCapabilities::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "ResourceType"))
			{
				Uint16 resourceTypeValue;
				property.getValue().get(resourceTypeValue);
				setResourceType(resourceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherResourceType"))
			{
				String otherResourceTypeValue;
				property.getValue().get(otherResourceTypeValue);
				setOtherResourceType(otherResourceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ResourceSubType"))
			{
				String resourceSubTypeValue;
				property.getValue().get(resourceSubTypeValue);
				setResourceSubType(resourceSubTypeValue);
			}
			else if (String::equal(property.getName().getString(), "RequestTypesSupported"))
			{
				Uint16 requestTypesSupportedValue;
				property.getValue().get(requestTypesSupportedValue);
				setRequestTypesSupported(requestTypesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "SharingMode"))
			{
				Uint16 sharingModeValue;
				property.getValue().get(sharingModeValue);
				setSharingMode(sharingModeValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedAddStates"))
			{
				Array<Uint16> supportedAddStatesValue;
				property.getValue().get(supportedAddStatesValue);
				setSupportedAddStates(supportedAddStatesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedRemoveStates"))
			{
				Array<Uint16> supportedRemoveStatesValue;
				property.getValue().get(supportedRemoveStatesValue);
				setSupportedRemoveStates(supportedRemoveStatesValue);
			}
	}
	return true;
}

Uint16 UNIX_AllocationCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_AllocationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_AllocationCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("AllocationCapabilities");
	_generation = Uint64(0);
	_resourceType = Uint16(0);
	_otherResourceType = String ("");
	_resourceSubType = String ("");
	_requestTypesSupported = Uint16(0);
	_sharingMode = Uint16(0);
	_supportedAddStates.clear();
	_supportedRemoveStates.clear();
	
	return false;
}

Boolean UNIX_AllocationCapabilities::finalize()
{
	return false;
}


Boolean UNIX_AllocationCapabilities::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_AllocationCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AllocationCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AllocationCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AllocationCapabilities::validateInstance()
{
	return true;
}

