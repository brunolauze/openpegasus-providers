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


UNIX_CPUDiagnosticServiceCapabilities::UNIX_CPUDiagnosticServiceCapabilities(void)
{
}

UNIX_CPUDiagnosticServiceCapabilities::~UNIX_CPUDiagnosticServiceCapabilities(void)
{
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CPUDiagnosticServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CPUDiagnosticServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CPUDiagnosticServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_CPUDiagnosticServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CPUDiagnosticServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_CPUDiagnosticServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CPUDiagnosticServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_CPUDiagnosticServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CPUDiagnosticServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_CPUDiagnosticServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getSupportedServiceModes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SERVICE_MODES, getSupportedServiceModes());
	return true;
}

Array<Uint16> UNIX_CPUDiagnosticServiceCapabilities::getSupportedServiceModes() const
{
	return _supportedServiceModes;
}

void UNIX_CPUDiagnosticServiceCapabilities::setSupportedServiceModes(Array<Uint16> &value)
{
	_supportedServiceModes = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getOtherSupportedServiceModesDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_SERVICE_MODES_DESCRIPTIONS, getOtherSupportedServiceModesDescriptions());
	return true;
}

Array<String> UNIX_CPUDiagnosticServiceCapabilities::getOtherSupportedServiceModesDescriptions() const
{
	return _otherSupportedServiceModesDescriptions;
}

void UNIX_CPUDiagnosticServiceCapabilities::setOtherSupportedServiceModesDescriptions(Array<String> &value)
{
	_otherSupportedServiceModesDescriptions = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getSupportedLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOOP_CONTROL, getSupportedLoopControl());
	return true;
}

Array<Uint16> UNIX_CPUDiagnosticServiceCapabilities::getSupportedLoopControl() const
{
	return _supportedLoopControl;
}

void UNIX_CPUDiagnosticServiceCapabilities::setSupportedLoopControl(Array<Uint16> &value)
{
	_supportedLoopControl = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getOtherSupportedLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOOP_CONTROL_DESCRIPTIONS, getOtherSupportedLoopControlDescriptions());
	return true;
}

Array<String> UNIX_CPUDiagnosticServiceCapabilities::getOtherSupportedLoopControlDescriptions() const
{
	return _otherSupportedLoopControlDescriptions;
}

void UNIX_CPUDiagnosticServiceCapabilities::setOtherSupportedLoopControlDescriptions(Array<String> &value)
{
	_otherSupportedLoopControlDescriptions = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getSupportedLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOG_OPTIONS, getSupportedLogOptions());
	return true;
}

Array<Uint16> UNIX_CPUDiagnosticServiceCapabilities::getSupportedLogOptions() const
{
	return _supportedLogOptions;
}

void UNIX_CPUDiagnosticServiceCapabilities::setSupportedLogOptions(Array<Uint16> &value)
{
	_supportedLogOptions = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getOtherSupportedLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOG_OPTIONS_DESCRIPTIONS, getOtherSupportedLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_CPUDiagnosticServiceCapabilities::getOtherSupportedLogOptionsDescriptions() const
{
	return _otherSupportedLogOptionsDescriptions;
}

void UNIX_CPUDiagnosticServiceCapabilities::setOtherSupportedLogOptionsDescriptions(Array<String> &value)
{
	_otherSupportedLogOptionsDescriptions = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getSupportedLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOG_STORAGE, getSupportedLogStorage());
	return true;
}

Array<Uint16> UNIX_CPUDiagnosticServiceCapabilities::getSupportedLogStorage() const
{
	return _supportedLogStorage;
}

void UNIX_CPUDiagnosticServiceCapabilities::setSupportedLogStorage(Array<Uint16> &value)
{
	_supportedLogStorage = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getOtherSupportedLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOG_STORAGE_DESCRIPTIONS, getOtherSupportedLogStorageDescriptions());
	return true;
}

Array<String> UNIX_CPUDiagnosticServiceCapabilities::getOtherSupportedLogStorageDescriptions() const
{
	return _otherSupportedLogStorageDescriptions;
}

void UNIX_CPUDiagnosticServiceCapabilities::setOtherSupportedLogStorageDescriptions(Array<String> &value)
{
	_otherSupportedLogStorageDescriptions = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getSupportedExecutionControls(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXECUTION_CONTROLS, getSupportedExecutionControls());
	return true;
}

Array<Uint16> UNIX_CPUDiagnosticServiceCapabilities::getSupportedExecutionControls() const
{
	return _supportedExecutionControls;
}

void UNIX_CPUDiagnosticServiceCapabilities::setSupportedExecutionControls(Array<Uint16> &value)
{
	_supportedExecutionControls = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getOtherSupportedExecutionControlsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_EXECUTION_CONTROLS_DESCRIPTIONS, getOtherSupportedExecutionControlsDescriptions());
	return true;
}

Array<String> UNIX_CPUDiagnosticServiceCapabilities::getOtherSupportedExecutionControlsDescriptions() const
{
	return _otherSupportedExecutionControlsDescriptions;
}

void UNIX_CPUDiagnosticServiceCapabilities::setOtherSupportedExecutionControlsDescriptions(Array<String> &value)
{
	_otherSupportedExecutionControlsDescriptions = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getSupportedTestWarnings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_TEST_WARNINGS, getSupportedTestWarnings());
	return true;
}

Uint16 UNIX_CPUDiagnosticServiceCapabilities::getSupportedTestWarnings() const
{
	return _supportedTestWarnings;
}

void UNIX_CPUDiagnosticServiceCapabilities::setSupportedTestWarnings(Uint16 &value)
{
	_supportedTestWarnings = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getCPUVoltages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CPU_VOLTAGES, getCPUVoltages());
	return true;
}

Array<Real32> UNIX_CPUDiagnosticServiceCapabilities::getCPUVoltages() const
{
	return _cPUVoltages;
}

void UNIX_CPUDiagnosticServiceCapabilities::setCPUVoltages(Array<Real32> &value)
{
	_cPUVoltages = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getCPUSpeeds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CPU_SPEEDS, getCPUSpeeds());
	return true;
}

Array<Real32> UNIX_CPUDiagnosticServiceCapabilities::getCPUSpeeds() const
{
	return _cPUSpeeds;
}

void UNIX_CPUDiagnosticServiceCapabilities::setCPUSpeeds(Array<Real32> &value)
{
	_cPUSpeeds = value;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getSeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEED, getSeed());
	return true;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::getSeed() const
{
	return _seed;
}

void UNIX_CPUDiagnosticServiceCapabilities::setSeed(Boolean &value)
{
	_seed = value;
}


void UNIX_CPUDiagnosticServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CPUDiagnosticServiceCapabilities");
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
	_cPUVoltages.clear();
	_cPUSpeeds.clear();
	_seed = Boolean(false);

}

Boolean UNIX_CPUDiagnosticServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CPUVoltages"))
			{
				Array<Real32> cPUVoltagesValue;
				property.getValue().get(cPUVoltagesValue);
				setCPUVoltages(cPUVoltagesValue);
			}
			else if (String::equal(property.getName().getString(), "CPUSpeeds"))
			{
				Array<Real32> cPUSpeedsValue;
				property.getValue().get(cPUSpeedsValue);
				setCPUSpeeds(cPUSpeedsValue);
			}
			else if (String::equal(property.getName().getString(), "Seed"))
			{
				Boolean seedValue;
				property.getValue().get(seedValue);
				setSeed(seedValue);
			}
	}
	return true;
}

Uint16 UNIX_CPUDiagnosticServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_CPUDiagnosticServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CPUDiagnosticServiceCapabilities");
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
	_cPUVoltages.clear();
	_cPUSpeeds.clear();
	_seed = Boolean(false);
	
	return false;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_CPUDiagnosticServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CPUDiagnosticServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CPUDiagnosticServiceCapabilities::validateInstance()
{
	return true;
}

