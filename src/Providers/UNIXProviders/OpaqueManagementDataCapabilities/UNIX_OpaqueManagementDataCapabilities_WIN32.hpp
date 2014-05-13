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


UNIX_OpaqueManagementDataCapabilities::UNIX_OpaqueManagementDataCapabilities(void)
{
}

UNIX_OpaqueManagementDataCapabilities::~UNIX_OpaqueManagementDataCapabilities(void)
{
}

Boolean UNIX_OpaqueManagementDataCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OpaqueManagementDataCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OpaqueManagementDataCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OpaqueManagementDataCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_OpaqueManagementDataCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OpaqueManagementDataCapabilities::getDescription() const
{
	return _description;
}

void UNIX_OpaqueManagementDataCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OpaqueManagementDataCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_OpaqueManagementDataCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OpaqueManagementDataCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_OpaqueManagementDataCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_OpaqueManagementDataCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_OpaqueManagementDataCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_OpaqueManagementDataCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementDataCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_OpaqueManagementDataCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_OpaqueManagementDataCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_OpaqueManagementDataCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementDataCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_OpaqueManagementDataCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getMaxAvailableStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_AVAILABLE_STORAGE, getMaxAvailableStorage());
	return true;
}

Uint64 UNIX_OpaqueManagementDataCapabilities::getMaxAvailableStorage() const
{
	return _maxAvailableStorage;
}

void UNIX_OpaqueManagementDataCapabilities::setMaxAvailableStorage(Uint64 &value)
{
	_maxAvailableStorage = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getMaxReadLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_READ_LENGTH, getMaxReadLength());
	return true;
}

Uint64 UNIX_OpaqueManagementDataCapabilities::getMaxReadLength() const
{
	return _maxReadLength;
}

void UNIX_OpaqueManagementDataCapabilities::setMaxReadLength(Uint64 &value)
{
	_maxReadLength = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getMaxWriteLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_WRITE_LENGTH, getMaxWriteLength());
	return true;
}

Uint64 UNIX_OpaqueManagementDataCapabilities::getMaxWriteLength() const
{
	return _maxWriteLength;
}

void UNIX_OpaqueManagementDataCapabilities::setMaxWriteLength(Uint64 &value)
{
	_maxWriteLength = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getSupportedExportURISchemes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXPORT_U_R_I_SCHEMES, getSupportedExportURISchemes());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementDataCapabilities::getSupportedExportURISchemes() const
{
	return _supportedExportURISchemes;
}

void UNIX_OpaqueManagementDataCapabilities::setSupportedExportURISchemes(Array<Uint16> &value)
{
	_supportedExportURISchemes = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getSupportedImportURISchemes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_IMPORT_U_R_I_SCHEMES, getSupportedImportURISchemes());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementDataCapabilities::getSupportedImportURISchemes() const
{
	return _supportedImportURISchemes;
}

void UNIX_OpaqueManagementDataCapabilities::setSupportedImportURISchemes(Array<Uint16> &value)
{
	_supportedImportURISchemes = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getSupportedMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_METHODS, getSupportedMethods());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementDataCapabilities::getSupportedMethods() const
{
	return _supportedMethods;
}

void UNIX_OpaqueManagementDataCapabilities::setSupportedMethods(Array<Uint16> &value)
{
	_supportedMethods = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getTruncationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRUNCATION_SUPPORTED, getTruncationSupported());
	return true;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getTruncationSupported() const
{
	return _truncationSupported;
}

void UNIX_OpaqueManagementDataCapabilities::setTruncationSupported(Boolean &value)
{
	_truncationSupported = value;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getMaxInstancesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_INSTANCES_SUPPORTED, getMaxInstancesSupported());
	return true;
}

Uint16 UNIX_OpaqueManagementDataCapabilities::getMaxInstancesSupported() const
{
	return _maxInstancesSupported;
}

void UNIX_OpaqueManagementDataCapabilities::setMaxInstancesSupported(Uint16 &value)
{
	_maxInstancesSupported = value;
}


void UNIX_OpaqueManagementDataCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OpaqueManagementDataCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_maxAvailableStorage = Uint64(0);
	_maxReadLength = Uint64(0);
	_maxWriteLength = Uint64(0);
	_supportedExportURISchemes.clear();
	_supportedImportURISchemes.clear();
	_supportedMethods.clear();
	_truncationSupported = Boolean(false);
	_maxInstancesSupported = Uint16(0);

}

Boolean UNIX_OpaqueManagementDataCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ElementNameEditSupported"))
			{
				Boolean elementNameEditSupportedValue;
				property.getValue().get(elementNameEditSupportedValue);
				setElementNameEditSupported(elementNameEditSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxElementNameLen"))
			{
				Uint16 maxElementNameLenValue;
				property.getValue().get(maxElementNameLenValue);
				setMaxElementNameLen(maxElementNameLenValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedStatesSupported"))
			{
				Array<Uint16> requestedStatesSupportedValue;
				property.getValue().get(requestedStatesSupportedValue);
				setRequestedStatesSupported(requestedStatesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ElementNameMask"))
			{
				String elementNameMaskValue;
				property.getValue().get(elementNameMaskValue);
				setElementNameMask(elementNameMaskValue);
			}
			else if (String::equal(property.getName().getString(), "StateAwareness"))
			{
				Array<Uint16> stateAwarenessValue;
				property.getValue().get(stateAwarenessValue);
				setStateAwareness(stateAwarenessValue);
			}
			else if (String::equal(property.getName().getString(), "MaxAvailableStorage"))
			{
				Uint64 maxAvailableStorageValue;
				property.getValue().get(maxAvailableStorageValue);
				setMaxAvailableStorage(maxAvailableStorageValue);
			}
			else if (String::equal(property.getName().getString(), "MaxReadLength"))
			{
				Uint64 maxReadLengthValue;
				property.getValue().get(maxReadLengthValue);
				setMaxReadLength(maxReadLengthValue);
			}
			else if (String::equal(property.getName().getString(), "MaxWriteLength"))
			{
				Uint64 maxWriteLengthValue;
				property.getValue().get(maxWriteLengthValue);
				setMaxWriteLength(maxWriteLengthValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedExportURISchemes"))
			{
				Array<Uint16> supportedExportURISchemesValue;
				property.getValue().get(supportedExportURISchemesValue);
				setSupportedExportURISchemes(supportedExportURISchemesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedImportURISchemes"))
			{
				Array<Uint16> supportedImportURISchemesValue;
				property.getValue().get(supportedImportURISchemesValue);
				setSupportedImportURISchemes(supportedImportURISchemesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedMethods"))
			{
				Array<Uint16> supportedMethodsValue;
				property.getValue().get(supportedMethodsValue);
				setSupportedMethods(supportedMethodsValue);
			}
			else if (String::equal(property.getName().getString(), "TruncationSupported"))
			{
				Boolean truncationSupportedValue;
				property.getValue().get(truncationSupportedValue);
				setTruncationSupported(truncationSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxInstancesSupported"))
			{
				Uint16 maxInstancesSupportedValue;
				property.getValue().get(maxInstancesSupportedValue);
				setMaxInstancesSupported(maxInstancesSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_OpaqueManagementDataCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_OpaqueManagementDataCapabilities::initialize()
{
	return false;
}

Boolean UNIX_OpaqueManagementDataCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OpaqueManagementDataCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_maxAvailableStorage = Uint64(0);
	_maxReadLength = Uint64(0);
	_maxWriteLength = Uint64(0);
	_supportedExportURISchemes.clear();
	_supportedImportURISchemes.clear();
	_supportedMethods.clear();
	_truncationSupported = Boolean(false);
	_maxInstancesSupported = Uint16(0);
	
	return false;
}

Boolean UNIX_OpaqueManagementDataCapabilities::finalize()
{
	return false;
}


Boolean UNIX_OpaqueManagementDataCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OpaqueManagementDataCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OpaqueManagementDataCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OpaqueManagementDataCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OpaqueManagementDataCapabilities::validateInstance()
{
	return true;
}

