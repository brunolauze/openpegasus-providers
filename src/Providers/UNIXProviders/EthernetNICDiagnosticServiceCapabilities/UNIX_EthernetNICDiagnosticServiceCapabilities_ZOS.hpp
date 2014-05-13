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


UNIX_EthernetNICDiagnosticServiceCapabilities::UNIX_EthernetNICDiagnosticServiceCapabilities(void)
{
}

UNIX_EthernetNICDiagnosticServiceCapabilities::~UNIX_EthernetNICDiagnosticServiceCapabilities(void)
{
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_EthernetNICDiagnosticServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_EthernetNICDiagnosticServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_EthernetNICDiagnosticServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_EthernetNICDiagnosticServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_EthernetNICDiagnosticServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getSupportedServiceModes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SERVICE_MODES, getSupportedServiceModes());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticServiceCapabilities::getSupportedServiceModes() const
{
	return _supportedServiceModes;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setSupportedServiceModes(Array<Uint16> &value)
{
	_supportedServiceModes = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getOtherSupportedServiceModesDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_SERVICE_MODES_DESCRIPTIONS, getOtherSupportedServiceModesDescriptions());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticServiceCapabilities::getOtherSupportedServiceModesDescriptions() const
{
	return _otherSupportedServiceModesDescriptions;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setOtherSupportedServiceModesDescriptions(Array<String> &value)
{
	_otherSupportedServiceModesDescriptions = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getSupportedLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOOP_CONTROL, getSupportedLoopControl());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticServiceCapabilities::getSupportedLoopControl() const
{
	return _supportedLoopControl;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setSupportedLoopControl(Array<Uint16> &value)
{
	_supportedLoopControl = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getOtherSupportedLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOOP_CONTROL_DESCRIPTIONS, getOtherSupportedLoopControlDescriptions());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticServiceCapabilities::getOtherSupportedLoopControlDescriptions() const
{
	return _otherSupportedLoopControlDescriptions;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setOtherSupportedLoopControlDescriptions(Array<String> &value)
{
	_otherSupportedLoopControlDescriptions = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getSupportedLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOG_OPTIONS, getSupportedLogOptions());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticServiceCapabilities::getSupportedLogOptions() const
{
	return _supportedLogOptions;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setSupportedLogOptions(Array<Uint16> &value)
{
	_supportedLogOptions = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getOtherSupportedLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOG_OPTIONS_DESCRIPTIONS, getOtherSupportedLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticServiceCapabilities::getOtherSupportedLogOptionsDescriptions() const
{
	return _otherSupportedLogOptionsDescriptions;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setOtherSupportedLogOptionsDescriptions(Array<String> &value)
{
	_otherSupportedLogOptionsDescriptions = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getSupportedLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOG_STORAGE, getSupportedLogStorage());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticServiceCapabilities::getSupportedLogStorage() const
{
	return _supportedLogStorage;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setSupportedLogStorage(Array<Uint16> &value)
{
	_supportedLogStorage = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getOtherSupportedLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOG_STORAGE_DESCRIPTIONS, getOtherSupportedLogStorageDescriptions());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticServiceCapabilities::getOtherSupportedLogStorageDescriptions() const
{
	return _otherSupportedLogStorageDescriptions;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setOtherSupportedLogStorageDescriptions(Array<String> &value)
{
	_otherSupportedLogStorageDescriptions = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getSupportedExecutionControls(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXECUTION_CONTROLS, getSupportedExecutionControls());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticServiceCapabilities::getSupportedExecutionControls() const
{
	return _supportedExecutionControls;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setSupportedExecutionControls(Array<Uint16> &value)
{
	_supportedExecutionControls = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getOtherSupportedExecutionControlsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_EXECUTION_CONTROLS_DESCRIPTIONS, getOtherSupportedExecutionControlsDescriptions());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticServiceCapabilities::getOtherSupportedExecutionControlsDescriptions() const
{
	return _otherSupportedExecutionControlsDescriptions;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setOtherSupportedExecutionControlsDescriptions(Array<String> &value)
{
	_otherSupportedExecutionControlsDescriptions = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getSupportedTestWarnings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_TEST_WARNINGS, getSupportedTestWarnings());
	return true;
}

Uint16 UNIX_EthernetNICDiagnosticServiceCapabilities::getSupportedTestWarnings() const
{
	return _supportedTestWarnings;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setSupportedTestWarnings(Uint16 &value)
{
	_supportedTestWarnings = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getLinkSpeedsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_SPEEDS_SUPPORTED, getLinkSpeedsSupported());
	return true;
}

Array<Uint64> UNIX_EthernetNICDiagnosticServiceCapabilities::getLinkSpeedsSupported() const
{
	return _linkSpeedsSupported;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setLinkSpeedsSupported(Array<Uint64> &value)
{
	_linkSpeedsSupported = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getLoopbackLayersSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOPBACK_LAYERS_SUPPORTED, getLoopbackLayersSupported());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticServiceCapabilities::getLoopbackLayersSupported() const
{
	return _loopbackLayersSupported;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setLoopbackLayersSupported(Array<Uint16> &value)
{
	_loopbackLayersSupported = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getOtherLoopbackLayersSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOOPBACK_LAYERS_SUPPORTED, getOtherLoopbackLayersSupported());
	return true;
}

Array<String> UNIX_EthernetNICDiagnosticServiceCapabilities::getOtherLoopbackLayersSupported() const
{
	return _otherLoopbackLayersSupported;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setOtherLoopbackLayersSupported(Array<String> &value)
{
	_otherLoopbackLayersSupported = value;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::getPacketSizesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKET_SIZES_SUPPORTED, getPacketSizesSupported());
	return true;
}

Array<Uint16> UNIX_EthernetNICDiagnosticServiceCapabilities::getPacketSizesSupported() const
{
	return _packetSizesSupported;
}

void UNIX_EthernetNICDiagnosticServiceCapabilities::setPacketSizesSupported(Array<Uint16> &value)
{
	_packetSizesSupported = value;
}


void UNIX_EthernetNICDiagnosticServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("EthernetNICDiagnosticServiceCapabilities");
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
	_linkSpeedsSupported.clear();
	_loopbackLayersSupported.clear();
	_otherLoopbackLayersSupported.clear();
	_packetSizesSupported.clear();

}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LinkSpeedsSupported"))
			{
				Array<Uint64> linkSpeedsSupportedValue;
				property.getValue().get(linkSpeedsSupportedValue);
				setLinkSpeedsSupported(linkSpeedsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "LoopbackLayersSupported"))
			{
				Array<Uint16> loopbackLayersSupportedValue;
				property.getValue().get(loopbackLayersSupportedValue);
				setLoopbackLayersSupported(loopbackLayersSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLoopbackLayersSupported"))
			{
				Array<String> otherLoopbackLayersSupportedValue;
				property.getValue().get(otherLoopbackLayersSupportedValue);
				setOtherLoopbackLayersSupported(otherLoopbackLayersSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "PacketSizesSupported"))
			{
				Array<Uint16> packetSizesSupportedValue;
				property.getValue().get(packetSizesSupportedValue);
				setPacketSizesSupported(packetSizesSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_EthernetNICDiagnosticServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("EthernetNICDiagnosticServiceCapabilities");
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
	_linkSpeedsSupported.clear();
	_loopbackLayersSupported.clear();
	_otherLoopbackLayersSupported.clear();
	_packetSizesSupported.clear();
	
	return false;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EthernetNICDiagnosticServiceCapabilities::validateInstance()
{
	return true;
}

