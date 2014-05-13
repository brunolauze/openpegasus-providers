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


UNIX_DiskDriveDiagnosticServiceCapabilities::UNIX_DiskDriveDiagnosticServiceCapabilities(void)
{
}

UNIX_DiskDriveDiagnosticServiceCapabilities::~UNIX_DiskDriveDiagnosticServiceCapabilities(void)
{
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiskDriveDiagnosticServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiskDriveDiagnosticServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiskDriveDiagnosticServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiskDriveDiagnosticServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DiskDriveDiagnosticServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getSupportedServiceModes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SERVICE_MODES, getSupportedServiceModes());
	return true;
}

Array<Uint16> UNIX_DiskDriveDiagnosticServiceCapabilities::getSupportedServiceModes() const
{
	return _supportedServiceModes;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setSupportedServiceModes(Array<Uint16> &value)
{
	_supportedServiceModes = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getOtherSupportedServiceModesDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_SERVICE_MODES_DESCRIPTIONS, getOtherSupportedServiceModesDescriptions());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticServiceCapabilities::getOtherSupportedServiceModesDescriptions() const
{
	return _otherSupportedServiceModesDescriptions;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setOtherSupportedServiceModesDescriptions(Array<String> &value)
{
	_otherSupportedServiceModesDescriptions = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getSupportedLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOOP_CONTROL, getSupportedLoopControl());
	return true;
}

Array<Uint16> UNIX_DiskDriveDiagnosticServiceCapabilities::getSupportedLoopControl() const
{
	return _supportedLoopControl;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setSupportedLoopControl(Array<Uint16> &value)
{
	_supportedLoopControl = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getOtherSupportedLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOOP_CONTROL_DESCRIPTIONS, getOtherSupportedLoopControlDescriptions());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticServiceCapabilities::getOtherSupportedLoopControlDescriptions() const
{
	return _otherSupportedLoopControlDescriptions;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setOtherSupportedLoopControlDescriptions(Array<String> &value)
{
	_otherSupportedLoopControlDescriptions = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getSupportedLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOG_OPTIONS, getSupportedLogOptions());
	return true;
}

Array<Uint16> UNIX_DiskDriveDiagnosticServiceCapabilities::getSupportedLogOptions() const
{
	return _supportedLogOptions;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setSupportedLogOptions(Array<Uint16> &value)
{
	_supportedLogOptions = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getOtherSupportedLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOG_OPTIONS_DESCRIPTIONS, getOtherSupportedLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticServiceCapabilities::getOtherSupportedLogOptionsDescriptions() const
{
	return _otherSupportedLogOptionsDescriptions;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setOtherSupportedLogOptionsDescriptions(Array<String> &value)
{
	_otherSupportedLogOptionsDescriptions = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getSupportedLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOG_STORAGE, getSupportedLogStorage());
	return true;
}

Array<Uint16> UNIX_DiskDriveDiagnosticServiceCapabilities::getSupportedLogStorage() const
{
	return _supportedLogStorage;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setSupportedLogStorage(Array<Uint16> &value)
{
	_supportedLogStorage = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getOtherSupportedLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOG_STORAGE_DESCRIPTIONS, getOtherSupportedLogStorageDescriptions());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticServiceCapabilities::getOtherSupportedLogStorageDescriptions() const
{
	return _otherSupportedLogStorageDescriptions;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setOtherSupportedLogStorageDescriptions(Array<String> &value)
{
	_otherSupportedLogStorageDescriptions = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getSupportedExecutionControls(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXECUTION_CONTROLS, getSupportedExecutionControls());
	return true;
}

Array<Uint16> UNIX_DiskDriveDiagnosticServiceCapabilities::getSupportedExecutionControls() const
{
	return _supportedExecutionControls;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setSupportedExecutionControls(Array<Uint16> &value)
{
	_supportedExecutionControls = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getOtherSupportedExecutionControlsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_EXECUTION_CONTROLS_DESCRIPTIONS, getOtherSupportedExecutionControlsDescriptions());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticServiceCapabilities::getOtherSupportedExecutionControlsDescriptions() const
{
	return _otherSupportedExecutionControlsDescriptions;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setOtherSupportedExecutionControlsDescriptions(Array<String> &value)
{
	_otherSupportedExecutionControlsDescriptions = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getSupportedTestWarnings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_TEST_WARNINGS, getSupportedTestWarnings());
	return true;
}

Uint16 UNIX_DiskDriveDiagnosticServiceCapabilities::getSupportedTestWarnings() const
{
	return _supportedTestWarnings;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setSupportedTestWarnings(Uint16 &value)
{
	_supportedTestWarnings = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getRegion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGION, getRegion());
	return true;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getRegion() const
{
	return _region;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setRegion(Boolean &value)
{
	_region = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getSeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEED, getSeed());
	return true;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getSeed() const
{
	return _seed;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setSeed(Boolean &value)
{
	_seed = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getDataSizes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_SIZES, getDataSizes());
	return true;
}

Array<Uint64> UNIX_DiskDriveDiagnosticServiceCapabilities::getDataSizes() const
{
	return _dataSizes;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setDataSizes(Array<Uint64> &value)
{
	_dataSizes = value;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::getDataPatterns(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_PATTERNS, getDataPatterns());
	return true;
}

Array<String> UNIX_DiskDriveDiagnosticServiceCapabilities::getDataPatterns() const
{
	return _dataPatterns;
}

void UNIX_DiskDriveDiagnosticServiceCapabilities::setDataPatterns(Array<String> &value)
{
	_dataPatterns = value;
}


void UNIX_DiskDriveDiagnosticServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiskDriveDiagnosticServiceCapabilities");
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
	_region = Boolean(false);
	_seed = Boolean(false);
	_dataSizes.clear();
	_dataPatterns.clear();

}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Region"))
			{
				Boolean regionValue;
				property.getValue().get(regionValue);
				setRegion(regionValue);
			}
			else if (String::equal(property.getName().getString(), "Seed"))
			{
				Boolean seedValue;
				property.getValue().get(seedValue);
				setSeed(seedValue);
			}
			else if (String::equal(property.getName().getString(), "DataSizes"))
			{
				Array<Uint64> dataSizesValue;
				property.getValue().get(dataSizesValue);
				setDataSizes(dataSizesValue);
			}
			else if (String::equal(property.getName().getString(), "DataPatterns"))
			{
				Array<String> dataPatternsValue;
				property.getValue().get(dataPatternsValue);
				setDataPatterns(dataPatternsValue);
			}
	}
	return true;
}

Uint16 UNIX_DiskDriveDiagnosticServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiskDriveDiagnosticServiceCapabilities");
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
	_region = Boolean(false);
	_seed = Boolean(false);
	_dataSizes.clear();
	_dataPatterns.clear();
	
	return false;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskDriveDiagnosticServiceCapabilities::validateInstance()
{
	return true;
}

