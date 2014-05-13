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


UNIX_StorageNameBindingCapabilities::UNIX_StorageNameBindingCapabilities(void)
{
}

UNIX_StorageNameBindingCapabilities::~UNIX_StorageNameBindingCapabilities(void)
{
}

Boolean UNIX_StorageNameBindingCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageNameBindingCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageNameBindingCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageNameBindingCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageNameBindingCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_StorageNameBindingCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageNameBindingCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageNameBindingCapabilities::getDescription() const
{
	return _description;
}

void UNIX_StorageNameBindingCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageNameBindingCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageNameBindingCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_StorageNameBindingCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageNameBindingCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageNameBindingCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_StorageNameBindingCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageNameBindingCapabilities::getValidBindingTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_BINDING_TYPES, getValidBindingTypes());
	return true;
}

Array<Uint16> UNIX_StorageNameBindingCapabilities::getValidBindingTypes() const
{
	return _validBindingTypes;
}

void UNIX_StorageNameBindingCapabilities::setValidBindingTypes(Array<Uint16> &value)
{
	_validBindingTypes = value;
}

Boolean UNIX_StorageNameBindingCapabilities::getActivateBindingRequiresReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVATE_BINDING_REQUIRES_RESET, getActivateBindingRequiresReset());
	return true;
}

Boolean UNIX_StorageNameBindingCapabilities::getActivateBindingRequiresReset() const
{
	return _activateBindingRequiresReset;
}

void UNIX_StorageNameBindingCapabilities::setActivateBindingRequiresReset(Boolean &value)
{
	_activateBindingRequiresReset = value;
}

Boolean UNIX_StorageNameBindingCapabilities::getCanMapAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_MAP_ADDRESSES, getCanMapAddresses());
	return true;
}

Boolean UNIX_StorageNameBindingCapabilities::getCanMapAddresses() const
{
	return _canMapAddresses;
}

void UNIX_StorageNameBindingCapabilities::setCanMapAddresses(Boolean &value)
{
	_canMapAddresses = value;
}

Boolean UNIX_StorageNameBindingCapabilities::getCanBindAllLuns(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BIND_ALL_LUNS, getCanBindAllLuns());
	return true;
}

Boolean UNIX_StorageNameBindingCapabilities::getCanBindAllLuns() const
{
	return _canBindAllLuns;
}

void UNIX_StorageNameBindingCapabilities::setCanBindAllLuns(Boolean &value)
{
	_canBindAllLuns = value;
}

Boolean UNIX_StorageNameBindingCapabilities::getAutoDiscovery(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_DISCOVERY, getAutoDiscovery());
	return true;
}

Boolean UNIX_StorageNameBindingCapabilities::getAutoDiscovery() const
{
	return _autoDiscovery;
}

void UNIX_StorageNameBindingCapabilities::setAutoDiscovery(Boolean &value)
{
	_autoDiscovery = value;
}

Boolean UNIX_StorageNameBindingCapabilities::getCanSetOSDeviceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_SET_OS_DEVICE_NAME, getCanSetOSDeviceName());
	return true;
}

Boolean UNIX_StorageNameBindingCapabilities::getCanSetOSDeviceName() const
{
	return _canSetOSDeviceName;
}

void UNIX_StorageNameBindingCapabilities::setCanSetOSDeviceName(Boolean &value)
{
	_canSetOSDeviceName = value;
}


void UNIX_StorageNameBindingCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageNameBindingCapabilities");
	_generation = Uint64(0);
	_validBindingTypes.clear();
	_activateBindingRequiresReset = Boolean(false);
	_canMapAddresses = Boolean(false);
	_canBindAllLuns = Boolean(false);
	_autoDiscovery = Boolean(false);
	_canSetOSDeviceName = Boolean(false);

}

Boolean UNIX_StorageNameBindingCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ValidBindingTypes"))
			{
				Array<Uint16> validBindingTypesValue;
				property.getValue().get(validBindingTypesValue);
				setValidBindingTypes(validBindingTypesValue);
			}
			else if (String::equal(property.getName().getString(), "ActivateBindingRequiresReset"))
			{
				Boolean activateBindingRequiresResetValue;
				property.getValue().get(activateBindingRequiresResetValue);
				setActivateBindingRequiresReset(activateBindingRequiresResetValue);
			}
			else if (String::equal(property.getName().getString(), "CanMapAddresses"))
			{
				Boolean canMapAddressesValue;
				property.getValue().get(canMapAddressesValue);
				setCanMapAddresses(canMapAddressesValue);
			}
			else if (String::equal(property.getName().getString(), "CanBindAllLuns"))
			{
				Boolean canBindAllLunsValue;
				property.getValue().get(canBindAllLunsValue);
				setCanBindAllLuns(canBindAllLunsValue);
			}
			else if (String::equal(property.getName().getString(), "AutoDiscovery"))
			{
				Boolean autoDiscoveryValue;
				property.getValue().get(autoDiscoveryValue);
				setAutoDiscovery(autoDiscoveryValue);
			}
			else if (String::equal(property.getName().getString(), "CanSetOSDeviceName"))
			{
				Boolean canSetOSDeviceNameValue;
				property.getValue().get(canSetOSDeviceNameValue);
				setCanSetOSDeviceName(canSetOSDeviceNameValue);
			}
	}
	return true;
}

Uint16 UNIX_StorageNameBindingCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_StorageNameBindingCapabilities::initialize()
{
	return false;
}

Boolean UNIX_StorageNameBindingCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageNameBindingCapabilities");
	_generation = Uint64(0);
	_validBindingTypes.clear();
	_activateBindingRequiresReset = Boolean(false);
	_canMapAddresses = Boolean(false);
	_canBindAllLuns = Boolean(false);
	_autoDiscovery = Boolean(false);
	_canSetOSDeviceName = Boolean(false);
	
	return false;
}

Boolean UNIX_StorageNameBindingCapabilities::finalize()
{
	return false;
}


Boolean UNIX_StorageNameBindingCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageNameBindingCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageNameBindingCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageNameBindingCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageNameBindingCapabilities::validateInstance()
{
	return true;
}

