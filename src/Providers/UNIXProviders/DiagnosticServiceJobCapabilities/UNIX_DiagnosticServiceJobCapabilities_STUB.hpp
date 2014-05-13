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


UNIX_DiagnosticServiceJobCapabilities::UNIX_DiagnosticServiceJobCapabilities(void)
{
}

UNIX_DiagnosticServiceJobCapabilities::~UNIX_DiagnosticServiceJobCapabilities(void)
{
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiagnosticServiceJobCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DiagnosticServiceJobCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiagnosticServiceJobCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_DiagnosticServiceJobCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiagnosticServiceJobCapabilities::getDescription() const
{
	return _description;
}

void UNIX_DiagnosticServiceJobCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiagnosticServiceJobCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_DiagnosticServiceJobCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DiagnosticServiceJobCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_DiagnosticServiceJobCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getDeleteJobSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_JOB_SUPPORTED, getDeleteJobSupported());
	return true;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getDeleteJobSupported() const
{
	return _deleteJobSupported;
}

void UNIX_DiagnosticServiceJobCapabilities::setDeleteJobSupported(Boolean &value)
{
	_deleteJobSupported = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_DiagnosticServiceJobCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_DiagnosticServiceJobCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getInteractiveTimeoutMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERACTIVE_TIMEOUT_MAX, getInteractiveTimeoutMax());
	return true;
}

CIMDateTime UNIX_DiagnosticServiceJobCapabilities::getInteractiveTimeoutMax() const
{
	return _interactiveTimeoutMax;
}

void UNIX_DiagnosticServiceJobCapabilities::setInteractiveTimeoutMax(CIMDateTime &value)
{
	_interactiveTimeoutMax = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getDefaultValuesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_VALUES_SUPPORTED, getDefaultValuesSupported());
	return true;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getDefaultValuesSupported() const
{
	return _defaultValuesSupported;
}

void UNIX_DiagnosticServiceJobCapabilities::setDefaultValuesSupported(Boolean &value)
{
	_defaultValuesSupported = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getClientRetriesMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_RETRIES_MAX, getClientRetriesMax());
	return true;
}

Uint32 UNIX_DiagnosticServiceJobCapabilities::getClientRetriesMax() const
{
	return _clientRetriesMax;
}

void UNIX_DiagnosticServiceJobCapabilities::setClientRetriesMax(Uint32 &value)
{
	_clientRetriesMax = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getCleanupInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLEANUP_INTERVAL, getCleanupInterval());
	return true;
}

CIMDateTime UNIX_DiagnosticServiceJobCapabilities::getCleanupInterval() const
{
	return _cleanupInterval;
}

void UNIX_DiagnosticServiceJobCapabilities::setCleanupInterval(CIMDateTime &value)
{
	_cleanupInterval = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getSilentModeSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SILENT_MODE_SUPPORTED, getSilentModeSupported());
	return true;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getSilentModeSupported() const
{
	return _silentModeSupported;
}

void UNIX_DiagnosticServiceJobCapabilities::setSilentModeSupported(Boolean &value)
{
	_silentModeSupported = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTICS, getCharacteristics());
	return true;
}

Array<String> UNIX_DiagnosticServiceJobCapabilities::getCharacteristics() const
{
	return _characteristics;
}

void UNIX_DiagnosticServiceJobCapabilities::setCharacteristics(Array<String> &value)
{
	_characteristics = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getOtherCharacteristicsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CHARACTERISTICS_DESCRIPTIONS, getOtherCharacteristicsDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticServiceJobCapabilities::getOtherCharacteristicsDescriptions() const
{
	return _otherCharacteristicsDescriptions;
}

void UNIX_DiagnosticServiceJobCapabilities::setOtherCharacteristicsDescriptions(Array<String> &value)
{
	_otherCharacteristicsDescriptions = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getApplicableMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPLICABLE_METHODS, getApplicableMethods());
	return true;
}

Array<String> UNIX_DiagnosticServiceJobCapabilities::getApplicableMethods() const
{
	return _applicableMethods;
}

void UNIX_DiagnosticServiceJobCapabilities::setApplicableMethods(Array<String> &value)
{
	_applicableMethods = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getTimeBeforeRemovalMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_BEFORE_REMOVAL_MIN, getTimeBeforeRemovalMin());
	return true;
}

CIMDateTime UNIX_DiagnosticServiceJobCapabilities::getTimeBeforeRemovalMin() const
{
	return _timeBeforeRemovalMin;
}

void UNIX_DiagnosticServiceJobCapabilities::setTimeBeforeRemovalMin(CIMDateTime &value)
{
	_timeBeforeRemovalMin = value;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::getTimeBeforeRemovalMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_BEFORE_REMOVAL_MAX, getTimeBeforeRemovalMax());
	return true;
}

CIMDateTime UNIX_DiagnosticServiceJobCapabilities::getTimeBeforeRemovalMax() const
{
	return _timeBeforeRemovalMax;
}

void UNIX_DiagnosticServiceJobCapabilities::setTimeBeforeRemovalMax(CIMDateTime &value)
{
	_timeBeforeRemovalMax = value;
}


void UNIX_DiagnosticServiceJobCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiagnosticServiceJobCapabilities");
	_generation = Uint64(0);
	_deleteJobSupported = Boolean(false);
	_requestedStatesSupported.clear();
	_interactiveTimeoutMax = CIMHelper::getCurrentTime();
	_defaultValuesSupported = Boolean(false);
	_clientRetriesMax = Uint32(0);
	_cleanupInterval = CIMHelper::getCurrentTime();
	_silentModeSupported = Boolean(false);
	_characteristics.clear();
	_otherCharacteristicsDescriptions.clear();
	_applicableMethods.clear();
	_timeBeforeRemovalMin = CIMHelper::getCurrentTime();
	_timeBeforeRemovalMax = CIMHelper::getCurrentTime();

}

Boolean UNIX_DiagnosticServiceJobCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "DeleteJobSupported"))
			{
				Boolean deleteJobSupportedValue;
				property.getValue().get(deleteJobSupportedValue);
				setDeleteJobSupported(deleteJobSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedStatesSupported"))
			{
				Array<Uint16> requestedStatesSupportedValue;
				property.getValue().get(requestedStatesSupportedValue);
				setRequestedStatesSupported(requestedStatesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "InteractiveTimeoutMax"))
			{
				CIMDateTime interactiveTimeoutMaxValue;
				property.getValue().get(interactiveTimeoutMaxValue);
				setInteractiveTimeoutMax(interactiveTimeoutMaxValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultValuesSupported"))
			{
				Boolean defaultValuesSupportedValue;
				property.getValue().get(defaultValuesSupportedValue);
				setDefaultValuesSupported(defaultValuesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ClientRetriesMax"))
			{
				Uint32 clientRetriesMaxValue;
				property.getValue().get(clientRetriesMaxValue);
				setClientRetriesMax(clientRetriesMaxValue);
			}
			else if (String::equal(property.getName().getString(), "CleanupInterval"))
			{
				CIMDateTime cleanupIntervalValue;
				property.getValue().get(cleanupIntervalValue);
				setCleanupInterval(cleanupIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "SilentModeSupported"))
			{
				Boolean silentModeSupportedValue;
				property.getValue().get(silentModeSupportedValue);
				setSilentModeSupported(silentModeSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "Characteristics"))
			{
				Array<String> characteristicsValue;
				property.getValue().get(characteristicsValue);
				setCharacteristics(characteristicsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCharacteristicsDescriptions"))
			{
				Array<String> otherCharacteristicsDescriptionsValue;
				property.getValue().get(otherCharacteristicsDescriptionsValue);
				setOtherCharacteristicsDescriptions(otherCharacteristicsDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "ApplicableMethods"))
			{
				Array<String> applicableMethodsValue;
				property.getValue().get(applicableMethodsValue);
				setApplicableMethods(applicableMethodsValue);
			}
			else if (String::equal(property.getName().getString(), "TimeBeforeRemovalMin"))
			{
				CIMDateTime timeBeforeRemovalMinValue;
				property.getValue().get(timeBeforeRemovalMinValue);
				setTimeBeforeRemovalMin(timeBeforeRemovalMinValue);
			}
			else if (String::equal(property.getName().getString(), "TimeBeforeRemovalMax"))
			{
				CIMDateTime timeBeforeRemovalMaxValue;
				property.getValue().get(timeBeforeRemovalMaxValue);
				setTimeBeforeRemovalMax(timeBeforeRemovalMaxValue);
			}
	}
	return true;
}

Uint16 UNIX_DiagnosticServiceJobCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_DiagnosticServiceJobCapabilities::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiagnosticServiceJobCapabilities");
	_generation = Uint64(0);
	_deleteJobSupported = Boolean(false);
	_requestedStatesSupported.clear();
	_interactiveTimeoutMax = CIMHelper::getCurrentTime();
	_defaultValuesSupported = Boolean(false);
	_clientRetriesMax = Uint32(0);
	_cleanupInterval = CIMHelper::getCurrentTime();
	_silentModeSupported = Boolean(false);
	_characteristics.clear();
	_otherCharacteristicsDescriptions.clear();
	_applicableMethods.clear();
	_timeBeforeRemovalMin = CIMHelper::getCurrentTime();
	_timeBeforeRemovalMax = CIMHelper::getCurrentTime();
	
	return false;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::finalize()
{
	return false;
}


Boolean UNIX_DiagnosticServiceJobCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DiagnosticServiceJobCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticServiceJobCapabilities::validateInstance()
{
	return true;
}

