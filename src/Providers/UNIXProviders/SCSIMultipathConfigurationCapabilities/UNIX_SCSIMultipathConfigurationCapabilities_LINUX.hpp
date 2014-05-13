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


UNIX_SCSIMultipathConfigurationCapabilities::UNIX_SCSIMultipathConfigurationCapabilities(void)
{
}

UNIX_SCSIMultipathConfigurationCapabilities::~UNIX_SCSIMultipathConfigurationCapabilities(void)
{
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SCSIMultipathConfigurationCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SCSIMultipathConfigurationCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SCSIMultipathConfigurationCapabilities::getDescription() const
{
	return _description;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SCSIMultipathConfigurationCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SCSIMultipathConfigurationCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getSupportedLoadBalanceTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOAD_BALANCE_TYPES, getSupportedLoadBalanceTypes());
	return true;
}

Array<Uint16> UNIX_SCSIMultipathConfigurationCapabilities::getSupportedLoadBalanceTypes() const
{
	return _supportedLoadBalanceTypes;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setSupportedLoadBalanceTypes(Array<Uint16> &value)
{
	_supportedLoadBalanceTypes = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getOtherSupportedLoadBalanceAlgorithmNames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOAD_BALANCE_ALGORITHM_NAMES, getOtherSupportedLoadBalanceAlgorithmNames());
	return true;
}

Array<String> UNIX_SCSIMultipathConfigurationCapabilities::getOtherSupportedLoadBalanceAlgorithmNames() const
{
	return _otherSupportedLoadBalanceAlgorithmNames;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setOtherSupportedLoadBalanceAlgorithmNames(Array<String> &value)
{
	_otherSupportedLoadBalanceAlgorithmNames = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getOtherSupportedLoadBalanceVendorNames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOAD_BALANCE_VENDOR_NAMES, getOtherSupportedLoadBalanceVendorNames());
	return true;
}

Array<String> UNIX_SCSIMultipathConfigurationCapabilities::getOtherSupportedLoadBalanceVendorNames() const
{
	return _otherSupportedLoadBalanceVendorNames;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setOtherSupportedLoadBalanceVendorNames(Array<String> &value)
{
	_otherSupportedLoadBalanceVendorNames = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getCanSetTPGAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_SET_T_P_G_ACCESS, getCanSetTPGAccess());
	return true;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getCanSetTPGAccess() const
{
	return _canSetTPGAccess;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setCanSetTPGAccess(Boolean &value)
{
	_canSetTPGAccess = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getCanOverridePaths(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_OVERRIDE_PATHS, getCanOverridePaths());
	return true;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getCanOverridePaths() const
{
	return _canOverridePaths;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setCanOverridePaths(Boolean &value)
{
	_canOverridePaths = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getExposesPathDeviceFiles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPOSES_PATH_DEVICE_FILES, getExposesPathDeviceFiles());
	return true;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getExposesPathDeviceFiles() const
{
	return _exposesPathDeviceFiles;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setExposesPathDeviceFiles(Boolean &value)
{
	_exposesPathDeviceFiles = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getDeviceNameFilespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_NAME_FILESPACE, getDeviceNameFilespace());
	return true;
}

String UNIX_SCSIMultipathConfigurationCapabilities::getDeviceNameFilespace() const
{
	return _deviceNameFilespace;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setDeviceNameFilespace(String &value)
{
	_deviceNameFilespace = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getOnlySupportsSpecifiedProducts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ONLY_SUPPORTS_SPECIFIED_PRODUCTS, getOnlySupportsSpecifiedProducts());
	return true;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getOnlySupportsSpecifiedProducts() const
{
	return _onlySupportsSpecifiedProducts;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setOnlySupportsSpecifiedProducts(Boolean &value)
{
	_onlySupportsSpecifiedProducts = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getMaximumWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_WEIGHT, getMaximumWeight());
	return true;
}

Uint32 UNIX_SCSIMultipathConfigurationCapabilities::getMaximumWeight() const
{
	return _maximumWeight;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setMaximumWeight(Uint32 &value)
{
	_maximumWeight = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getAutofailbackSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOFAILBACK_SUPPORT, getAutofailbackSupport());
	return true;
}

Uint16 UNIX_SCSIMultipathConfigurationCapabilities::getAutofailbackSupport() const
{
	return _autofailbackSupport;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setAutofailbackSupport(Uint16 &value)
{
	_autofailbackSupport = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getAutoFailbackEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_FAILBACK_ENABLED, getAutoFailbackEnabled());
	return true;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getAutoFailbackEnabled() const
{
	return _autoFailbackEnabled;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setAutoFailbackEnabled(Boolean &value)
{
	_autoFailbackEnabled = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getPollingRateMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLLING_RATE_MAX, getPollingRateMax());
	return true;
}

Uint32 UNIX_SCSIMultipathConfigurationCapabilities::getPollingRateMax() const
{
	return _pollingRateMax;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setPollingRateMax(Uint32 &value)
{
	_pollingRateMax = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getCurrentPollingRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_POLLING_RATE, getCurrentPollingRate());
	return true;
}

Uint32 UNIX_SCSIMultipathConfigurationCapabilities::getCurrentPollingRate() const
{
	return _currentPollingRate;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setCurrentPollingRate(Uint32 &value)
{
	_currentPollingRate = value;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getDefaultLoadBalanceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_LOAD_BALANCE_TYPE, getDefaultLoadBalanceType());
	return true;
}

Uint16 UNIX_SCSIMultipathConfigurationCapabilities::getDefaultLoadBalanceType() const
{
	return _defaultLoadBalanceType;
}

void UNIX_SCSIMultipathConfigurationCapabilities::setDefaultLoadBalanceType(Uint16 &value)
{
	_defaultLoadBalanceType = value;
}


void UNIX_SCSIMultipathConfigurationCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SCSIMultipathConfigurationCapabilities");
	_generation = Uint64(0);
	_supportedLoadBalanceTypes.clear();
	_otherSupportedLoadBalanceAlgorithmNames.clear();
	_otherSupportedLoadBalanceVendorNames.clear();
	_canSetTPGAccess = Boolean(false);
	_canOverridePaths = Boolean(false);
	_exposesPathDeviceFiles = Boolean(false);
	_deviceNameFilespace = String ("");
	_onlySupportsSpecifiedProducts = Boolean(false);
	_maximumWeight = Uint32(0);
	_autofailbackSupport = Uint16(0);
	_autoFailbackEnabled = Boolean(false);
	_pollingRateMax = Uint32(0);
	_currentPollingRate = Uint32(0);
	_defaultLoadBalanceType = Uint16(0);

}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedLoadBalanceTypes"))
			{
				Array<Uint16> supportedLoadBalanceTypesValue;
				property.getValue().get(supportedLoadBalanceTypesValue);
				setSupportedLoadBalanceTypes(supportedLoadBalanceTypesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedLoadBalanceAlgorithmNames"))
			{
				Array<String> otherSupportedLoadBalanceAlgorithmNamesValue;
				property.getValue().get(otherSupportedLoadBalanceAlgorithmNamesValue);
				setOtherSupportedLoadBalanceAlgorithmNames(otherSupportedLoadBalanceAlgorithmNamesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedLoadBalanceVendorNames"))
			{
				Array<String> otherSupportedLoadBalanceVendorNamesValue;
				property.getValue().get(otherSupportedLoadBalanceVendorNamesValue);
				setOtherSupportedLoadBalanceVendorNames(otherSupportedLoadBalanceVendorNamesValue);
			}
			else if (String::equal(property.getName().getString(), "CanSetTPGAccess"))
			{
				Boolean canSetTPGAccessValue;
				property.getValue().get(canSetTPGAccessValue);
				setCanSetTPGAccess(canSetTPGAccessValue);
			}
			else if (String::equal(property.getName().getString(), "CanOverridePaths"))
			{
				Boolean canOverridePathsValue;
				property.getValue().get(canOverridePathsValue);
				setCanOverridePaths(canOverridePathsValue);
			}
			else if (String::equal(property.getName().getString(), "ExposesPathDeviceFiles"))
			{
				Boolean exposesPathDeviceFilesValue;
				property.getValue().get(exposesPathDeviceFilesValue);
				setExposesPathDeviceFiles(exposesPathDeviceFilesValue);
			}
			else if (String::equal(property.getName().getString(), "DeviceNameFilespace"))
			{
				String deviceNameFilespaceValue;
				property.getValue().get(deviceNameFilespaceValue);
				setDeviceNameFilespace(deviceNameFilespaceValue);
			}
			else if (String::equal(property.getName().getString(), "OnlySupportsSpecifiedProducts"))
			{
				Boolean onlySupportsSpecifiedProductsValue;
				property.getValue().get(onlySupportsSpecifiedProductsValue);
				setOnlySupportsSpecifiedProducts(onlySupportsSpecifiedProductsValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumWeight"))
			{
				Uint32 maximumWeightValue;
				property.getValue().get(maximumWeightValue);
				setMaximumWeight(maximumWeightValue);
			}
			else if (String::equal(property.getName().getString(), "AutofailbackSupport"))
			{
				Uint16 autofailbackSupportValue;
				property.getValue().get(autofailbackSupportValue);
				setAutofailbackSupport(autofailbackSupportValue);
			}
			else if (String::equal(property.getName().getString(), "AutoFailbackEnabled"))
			{
				Boolean autoFailbackEnabledValue;
				property.getValue().get(autoFailbackEnabledValue);
				setAutoFailbackEnabled(autoFailbackEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "PollingRateMax"))
			{
				Uint32 pollingRateMaxValue;
				property.getValue().get(pollingRateMaxValue);
				setPollingRateMax(pollingRateMaxValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentPollingRate"))
			{
				Uint32 currentPollingRateValue;
				property.getValue().get(currentPollingRateValue);
				setCurrentPollingRate(currentPollingRateValue);
			}
			else if (String::equal(property.getName().getString(), "DefaultLoadBalanceType"))
			{
				Uint16 defaultLoadBalanceTypeValue;
				property.getValue().get(defaultLoadBalanceTypeValue);
				setDefaultLoadBalanceType(defaultLoadBalanceTypeValue);
			}
	}
	return true;
}

Uint16 UNIX_SCSIMultipathConfigurationCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_SCSIMultipathConfigurationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SCSIMultipathConfigurationCapabilities");
	_generation = Uint64(0);
	_supportedLoadBalanceTypes.clear();
	_otherSupportedLoadBalanceAlgorithmNames.clear();
	_otherSupportedLoadBalanceVendorNames.clear();
	_canSetTPGAccess = Boolean(false);
	_canOverridePaths = Boolean(false);
	_exposesPathDeviceFiles = Boolean(false);
	_deviceNameFilespace = String ("");
	_onlySupportsSpecifiedProducts = Boolean(false);
	_maximumWeight = Uint32(0);
	_autofailbackSupport = Uint16(0);
	_autoFailbackEnabled = Boolean(false);
	_pollingRateMax = Uint32(0);
	_currentPollingRate = Uint32(0);
	_defaultLoadBalanceType = Uint16(0);
	
	return false;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::finalize()
{
	return false;
}


Boolean UNIX_SCSIMultipathConfigurationCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SCSIMultipathConfigurationCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::validateInstance()
{
	return true;
}

