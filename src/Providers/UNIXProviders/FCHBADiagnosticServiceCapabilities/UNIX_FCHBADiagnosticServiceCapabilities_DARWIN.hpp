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


UNIX_FCHBADiagnosticServiceCapabilities::UNIX_FCHBADiagnosticServiceCapabilities(void)
{
}

UNIX_FCHBADiagnosticServiceCapabilities::~UNIX_FCHBADiagnosticServiceCapabilities(void)
{
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCHBADiagnosticServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCHBADiagnosticServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCHBADiagnosticServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCHBADiagnosticServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FCHBADiagnosticServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getSupportedServiceModes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SERVICE_MODES, getSupportedServiceModes());
	return true;
}

Array<Uint16> UNIX_FCHBADiagnosticServiceCapabilities::getSupportedServiceModes() const
{
	return _supportedServiceModes;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setSupportedServiceModes(Array<Uint16> &value)
{
	_supportedServiceModes = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getOtherSupportedServiceModesDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_SERVICE_MODES_DESCRIPTIONS, getOtherSupportedServiceModesDescriptions());
	return true;
}

Array<String> UNIX_FCHBADiagnosticServiceCapabilities::getOtherSupportedServiceModesDescriptions() const
{
	return _otherSupportedServiceModesDescriptions;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setOtherSupportedServiceModesDescriptions(Array<String> &value)
{
	_otherSupportedServiceModesDescriptions = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getSupportedLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOOP_CONTROL, getSupportedLoopControl());
	return true;
}

Array<Uint16> UNIX_FCHBADiagnosticServiceCapabilities::getSupportedLoopControl() const
{
	return _supportedLoopControl;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setSupportedLoopControl(Array<Uint16> &value)
{
	_supportedLoopControl = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getOtherSupportedLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOOP_CONTROL_DESCRIPTIONS, getOtherSupportedLoopControlDescriptions());
	return true;
}

Array<String> UNIX_FCHBADiagnosticServiceCapabilities::getOtherSupportedLoopControlDescriptions() const
{
	return _otherSupportedLoopControlDescriptions;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setOtherSupportedLoopControlDescriptions(Array<String> &value)
{
	_otherSupportedLoopControlDescriptions = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getSupportedLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOG_OPTIONS, getSupportedLogOptions());
	return true;
}

Array<Uint16> UNIX_FCHBADiagnosticServiceCapabilities::getSupportedLogOptions() const
{
	return _supportedLogOptions;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setSupportedLogOptions(Array<Uint16> &value)
{
	_supportedLogOptions = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getOtherSupportedLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOG_OPTIONS_DESCRIPTIONS, getOtherSupportedLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_FCHBADiagnosticServiceCapabilities::getOtherSupportedLogOptionsDescriptions() const
{
	return _otherSupportedLogOptionsDescriptions;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setOtherSupportedLogOptionsDescriptions(Array<String> &value)
{
	_otherSupportedLogOptionsDescriptions = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getSupportedLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOG_STORAGE, getSupportedLogStorage());
	return true;
}

Array<Uint16> UNIX_FCHBADiagnosticServiceCapabilities::getSupportedLogStorage() const
{
	return _supportedLogStorage;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setSupportedLogStorage(Array<Uint16> &value)
{
	_supportedLogStorage = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getOtherSupportedLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOG_STORAGE_DESCRIPTIONS, getOtherSupportedLogStorageDescriptions());
	return true;
}

Array<String> UNIX_FCHBADiagnosticServiceCapabilities::getOtherSupportedLogStorageDescriptions() const
{
	return _otherSupportedLogStorageDescriptions;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setOtherSupportedLogStorageDescriptions(Array<String> &value)
{
	_otherSupportedLogStorageDescriptions = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getSupportedExecutionControls(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXECUTION_CONTROLS, getSupportedExecutionControls());
	return true;
}

Array<Uint16> UNIX_FCHBADiagnosticServiceCapabilities::getSupportedExecutionControls() const
{
	return _supportedExecutionControls;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setSupportedExecutionControls(Array<Uint16> &value)
{
	_supportedExecutionControls = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getOtherSupportedExecutionControlsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_EXECUTION_CONTROLS_DESCRIPTIONS, getOtherSupportedExecutionControlsDescriptions());
	return true;
}

Array<String> UNIX_FCHBADiagnosticServiceCapabilities::getOtherSupportedExecutionControlsDescriptions() const
{
	return _otherSupportedExecutionControlsDescriptions;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setOtherSupportedExecutionControlsDescriptions(Array<String> &value)
{
	_otherSupportedExecutionControlsDescriptions = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getSupportedTestWarnings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_TEST_WARNINGS, getSupportedTestWarnings());
	return true;
}

Uint16 UNIX_FCHBADiagnosticServiceCapabilities::getSupportedTestWarnings() const
{
	return _supportedTestWarnings;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setSupportedTestWarnings(Uint16 &value)
{
	_supportedTestWarnings = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getBufferSizesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_SIZES_SUPPORTED, getBufferSizesSupported());
	return true;
}

Array<Uint32> UNIX_FCHBADiagnosticServiceCapabilities::getBufferSizesSupported() const
{
	return _bufferSizesSupported;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setBufferSizesSupported(Array<Uint32> &value)
{
	_bufferSizesSupported = value;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::getMaxPatternSizeSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_PATTERN_SIZE_SUPPORTED, getMaxPatternSizeSupported());
	return true;
}

Uint16 UNIX_FCHBADiagnosticServiceCapabilities::getMaxPatternSizeSupported() const
{
	return _maxPatternSizeSupported;
}

void UNIX_FCHBADiagnosticServiceCapabilities::setMaxPatternSizeSupported(Uint16 &value)
{
	_maxPatternSizeSupported = value;
}


void UNIX_FCHBADiagnosticServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCHBADiagnosticServiceCapabilities");
	_generation = Uint64(0);
	_supportedServiceModes.clear();
	_otherSupportedServiceModesDescriptions.clear();
	_supportedLoopControl.clear();
	_otherSupportedLoopControlDescriptions.clear();
	_supportedLogOptions.clear();
	_otherSupportedLogOptionsDescriptions.clear();
	_supportedLogStorage.clear();
	_otherSupportedLogStorageDescriptions.clear();
	_supportedExecutionControls.clear();
	_otherSupportedExecutionControlsDescriptions.clear();
	_supportedTestWarnings = Uint16(0);
	_bufferSizesSupported.clear();
	_maxPatternSizeSupported = Uint16(0);

}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedServiceModes"))
			{
				Array<Uint16> supportedServiceModesValue;
				property.getValue().get(supportedServiceModesValue);
				setSupportedServiceModes(supportedServiceModesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedServiceModesDescriptions"))
			{
				Array<String> otherSupportedServiceModesDescriptionsValue;
				property.getValue().get(otherSupportedServiceModesDescriptionsValue);
				setOtherSupportedServiceModesDescriptions(otherSupportedServiceModesDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedLoopControl"))
			{
				Array<Uint16> supportedLoopControlValue;
				property.getValue().get(supportedLoopControlValue);
				setSupportedLoopControl(supportedLoopControlValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedLoopControlDescriptions"))
			{
				Array<String> otherSupportedLoopControlDescriptionsValue;
				property.getValue().get(otherSupportedLoopControlDescriptionsValue);
				setOtherSupportedLoopControlDescriptions(otherSupportedLoopControlDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedLogOptions"))
			{
				Array<Uint16> supportedLogOptionsValue;
				property.getValue().get(supportedLogOptionsValue);
				setSupportedLogOptions(supportedLogOptionsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedLogOptionsDescriptions"))
			{
				Array<String> otherSupportedLogOptionsDescriptionsValue;
				property.getValue().get(otherSupportedLogOptionsDescriptionsValue);
				setOtherSupportedLogOptionsDescriptions(otherSupportedLogOptionsDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedLogStorage"))
			{
				Array<Uint16> supportedLogStorageValue;
				property.getValue().get(supportedLogStorageValue);
				setSupportedLogStorage(supportedLogStorageValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedLogStorageDescriptions"))
			{
				Array<String> otherSupportedLogStorageDescriptionsValue;
				property.getValue().get(otherSupportedLogStorageDescriptionsValue);
				setOtherSupportedLogStorageDescriptions(otherSupportedLogStorageDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedExecutionControls"))
			{
				Array<Uint16> supportedExecutionControlsValue;
				property.getValue().get(supportedExecutionControlsValue);
				setSupportedExecutionControls(supportedExecutionControlsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedExecutionControlsDescriptions"))
			{
				Array<String> otherSupportedExecutionControlsDescriptionsValue;
				property.getValue().get(otherSupportedExecutionControlsDescriptionsValue);
				setOtherSupportedExecutionControlsDescriptions(otherSupportedExecutionControlsDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedTestWarnings"))
			{
				Uint16 supportedTestWarningsValue;
				property.getValue().get(supportedTestWarningsValue);
				setSupportedTestWarnings(supportedTestWarningsValue);
			}
			else if (String::equal(property.getName().getString(), "BufferSizesSupported"))
			{
				Array<Uint32> bufferSizesSupportedValue;
				property.getValue().get(bufferSizesSupportedValue);
				setBufferSizesSupported(bufferSizesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxPatternSizeSupported"))
			{
				Uint16 maxPatternSizeSupportedValue;
				property.getValue().get(maxPatternSizeSupportedValue);
				setMaxPatternSizeSupported(maxPatternSizeSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_FCHBADiagnosticServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_FCHBADiagnosticServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCHBADiagnosticServiceCapabilities");
	_generation = Uint64(0);
	_supportedServiceModes.clear();
	_otherSupportedServiceModesDescriptions.clear();
	_supportedLoopControl.clear();
	_otherSupportedLoopControlDescriptions.clear();
	_supportedLogOptions.clear();
	_otherSupportedLogOptionsDescriptions.clear();
	_supportedLogStorage.clear();
	_otherSupportedLogStorageDescriptions.clear();
	_supportedExecutionControls.clear();
	_otherSupportedExecutionControlsDescriptions.clear();
	_supportedTestWarnings = Uint16(0);
	_bufferSizesSupported.clear();
	_maxPatternSizeSupported = Uint16(0);
	
	return false;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_FCHBADiagnosticServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FCHBADiagnosticServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCHBADiagnosticServiceCapabilities::validateInstance()
{
	return true;
}

