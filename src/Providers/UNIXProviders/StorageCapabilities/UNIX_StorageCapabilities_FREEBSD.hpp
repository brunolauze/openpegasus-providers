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


UNIX_StorageCapabilities::UNIX_StorageCapabilities(void)
{
}

UNIX_StorageCapabilities::~UNIX_StorageCapabilities(void)
{
}

Boolean UNIX_StorageCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_StorageCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageCapabilities::getDescription() const
{
	return _description;
}

void UNIX_StorageCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_StorageCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_StorageCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageCapabilities::getElementType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_TYPE, getElementType());
	return true;
}

Uint16 UNIX_StorageCapabilities::getElementType() const
{
	return _elementType;
}

void UNIX_StorageCapabilities::setElementType(Uint16 &value)
{
	_elementType = value;
}

Boolean UNIX_StorageCapabilities::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_StorageCapabilities::getNoSinglePointOfFailure() const
{
	return _noSinglePointOfFailure;
}

void UNIX_StorageCapabilities::setNoSinglePointOfFailure(Boolean &value)
{
	_noSinglePointOfFailure = value;
}

Boolean UNIX_StorageCapabilities::getNoSinglePointOfFailureDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE_DEFAULT, getNoSinglePointOfFailureDefault());
	return true;
}

Boolean UNIX_StorageCapabilities::getNoSinglePointOfFailureDefault() const
{
	return _noSinglePointOfFailureDefault;
}

void UNIX_StorageCapabilities::setNoSinglePointOfFailureDefault(Boolean &value)
{
	_noSinglePointOfFailureDefault = value;
}

Boolean UNIX_StorageCapabilities::getDataRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MAX, getDataRedundancyMax());
	return true;
}

Uint16 UNIX_StorageCapabilities::getDataRedundancyMax() const
{
	return _dataRedundancyMax;
}

void UNIX_StorageCapabilities::setDataRedundancyMax(Uint16 &value)
{
	_dataRedundancyMax = value;
}

Boolean UNIX_StorageCapabilities::getDataRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MIN, getDataRedundancyMin());
	return true;
}

Uint16 UNIX_StorageCapabilities::getDataRedundancyMin() const
{
	return _dataRedundancyMin;
}

void UNIX_StorageCapabilities::setDataRedundancyMin(Uint16 &value)
{
	_dataRedundancyMin = value;
}

Boolean UNIX_StorageCapabilities::getDataRedundancyDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_DEFAULT, getDataRedundancyDefault());
	return true;
}

Uint16 UNIX_StorageCapabilities::getDataRedundancyDefault() const
{
	return _dataRedundancyDefault;
}

void UNIX_StorageCapabilities::setDataRedundancyDefault(Uint16 &value)
{
	_dataRedundancyDefault = value;
}

Boolean UNIX_StorageCapabilities::getPackageRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MAX, getPackageRedundancyMax());
	return true;
}

Uint16 UNIX_StorageCapabilities::getPackageRedundancyMax() const
{
	return _packageRedundancyMax;
}

void UNIX_StorageCapabilities::setPackageRedundancyMax(Uint16 &value)
{
	_packageRedundancyMax = value;
}

Boolean UNIX_StorageCapabilities::getPackageRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MIN, getPackageRedundancyMin());
	return true;
}

Uint16 UNIX_StorageCapabilities::getPackageRedundancyMin() const
{
	return _packageRedundancyMin;
}

void UNIX_StorageCapabilities::setPackageRedundancyMin(Uint16 &value)
{
	_packageRedundancyMin = value;
}

Boolean UNIX_StorageCapabilities::getPackageRedundancyDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_DEFAULT, getPackageRedundancyDefault());
	return true;
}

Uint16 UNIX_StorageCapabilities::getPackageRedundancyDefault() const
{
	return _packageRedundancyDefault;
}

void UNIX_StorageCapabilities::setPackageRedundancyDefault(Uint16 &value)
{
	_packageRedundancyDefault = value;
}

Boolean UNIX_StorageCapabilities::getDeltaReservationMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MAX, getDeltaReservationMax());
	return true;
}

Uint16 UNIX_StorageCapabilities::getDeltaReservationMax() const
{
	return _deltaReservationMax;
}

void UNIX_StorageCapabilities::setDeltaReservationMax(Uint16 &value)
{
	_deltaReservationMax = value;
}

Boolean UNIX_StorageCapabilities::getDeltaReservationMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MIN, getDeltaReservationMin());
	return true;
}

Uint16 UNIX_StorageCapabilities::getDeltaReservationMin() const
{
	return _deltaReservationMin;
}

void UNIX_StorageCapabilities::setDeltaReservationMin(Uint16 &value)
{
	_deltaReservationMin = value;
}

Boolean UNIX_StorageCapabilities::getDeltaReservationDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_DEFAULT, getDeltaReservationDefault());
	return true;
}

Uint16 UNIX_StorageCapabilities::getDeltaReservationDefault() const
{
	return _deltaReservationDefault;
}

void UNIX_StorageCapabilities::setDeltaReservationDefault(Uint16 &value)
{
	_deltaReservationDefault = value;
}

Boolean UNIX_StorageCapabilities::getExtentStripeLengthDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH_DEFAULT, getExtentStripeLengthDefault());
	return true;
}

Uint16 UNIX_StorageCapabilities::getExtentStripeLengthDefault() const
{
	return _extentStripeLengthDefault;
}

void UNIX_StorageCapabilities::setExtentStripeLengthDefault(Uint16 &value)
{
	_extentStripeLengthDefault = value;
}

Boolean UNIX_StorageCapabilities::getParityLayoutDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARITY_LAYOUT_DEFAULT, getParityLayoutDefault());
	return true;
}

Uint16 UNIX_StorageCapabilities::getParityLayoutDefault() const
{
	return _parityLayoutDefault;
}

void UNIX_StorageCapabilities::setParityLayoutDefault(Uint16 &value)
{
	_parityLayoutDefault = value;
}

Boolean UNIX_StorageCapabilities::getUserDataStripeDepthDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH_DEFAULT, getUserDataStripeDepthDefault());
	return true;
}

Uint64 UNIX_StorageCapabilities::getUserDataStripeDepthDefault() const
{
	return _userDataStripeDepthDefault;
}

void UNIX_StorageCapabilities::setUserDataStripeDepthDefault(Uint64 &value)
{
	_userDataStripeDepthDefault = value;
}

Boolean UNIX_StorageCapabilities::getAvailableDiskType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_DISK_TYPE, getAvailableDiskType());
	return true;
}

Array<Uint16> UNIX_StorageCapabilities::getAvailableDiskType() const
{
	return _availableDiskType;
}

void UNIX_StorageCapabilities::setAvailableDiskType(Array<Uint16> &value)
{
	_availableDiskType = value;
}

Boolean UNIX_StorageCapabilities::getAvailableFormFactorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_FORM_FACTOR_TYPE, getAvailableFormFactorType());
	return true;
}

Array<Uint16> UNIX_StorageCapabilities::getAvailableFormFactorType() const
{
	return _availableFormFactorType;
}

void UNIX_StorageCapabilities::setAvailableFormFactorType(Array<Uint16> &value)
{
	_availableFormFactorType = value;
}

Boolean UNIX_StorageCapabilities::getEncryption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION, getEncryption());
	return true;
}

Uint16 UNIX_StorageCapabilities::getEncryption() const
{
	return _encryption;
}

void UNIX_StorageCapabilities::setEncryption(Uint16 &value)
{
	_encryption = value;
}

Boolean UNIX_StorageCapabilities::getSupportedDataOrganizations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_DATA_ORGANIZATIONS, getSupportedDataOrganizations());
	return true;
}

Array<Uint16> UNIX_StorageCapabilities::getSupportedDataOrganizations() const
{
	return _supportedDataOrganizations;
}

void UNIX_StorageCapabilities::setSupportedDataOrganizations(Array<Uint16> &value)
{
	_supportedDataOrganizations = value;
}

Boolean UNIX_StorageCapabilities::getAvailableInterconnectSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_INTERCONNECT_SPEED, getAvailableInterconnectSpeed());
	return true;
}

Array<Uint64> UNIX_StorageCapabilities::getAvailableInterconnectSpeed() const
{
	return _availableInterconnectSpeed;
}

void UNIX_StorageCapabilities::setAvailableInterconnectSpeed(Array<Uint64> &value)
{
	_availableInterconnectSpeed = value;
}

Boolean UNIX_StorageCapabilities::getAvailableInterconnectType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_INTERCONNECT_TYPE, getAvailableInterconnectType());
	return true;
}

Array<Uint16> UNIX_StorageCapabilities::getAvailableInterconnectType() const
{
	return _availableInterconnectType;
}

void UNIX_StorageCapabilities::setAvailableInterconnectType(Array<Uint16> &value)
{
	_availableInterconnectType = value;
}

Boolean UNIX_StorageCapabilities::getAvailableRPM(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_R_P_M, getAvailableRPM());
	return true;
}

Array<Uint32> UNIX_StorageCapabilities::getAvailableRPM() const
{
	return _availableRPM;
}

void UNIX_StorageCapabilities::setAvailableRPM(Array<Uint32> &value)
{
	_availableRPM = value;
}

Boolean UNIX_StorageCapabilities::getSupportedCompressionRates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_COMPRESSION_RATES, getSupportedCompressionRates());
	return true;
}

Array<Uint16> UNIX_StorageCapabilities::getSupportedCompressionRates() const
{
	return _supportedCompressionRates;
}

void UNIX_StorageCapabilities::setSupportedCompressionRates(Array<Uint16> &value)
{
	_supportedCompressionRates = value;
}


void UNIX_StorageCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageCapabilities");
	_generation = Uint64(0);
	_elementType = Uint16(0);
	_noSinglePointOfFailure = Boolean(false);
	_noSinglePointOfFailureDefault = Boolean(false);
	_dataRedundancyMax = Uint16(0);
	_dataRedundancyMin = Uint16(0);
	_dataRedundancyDefault = Uint16(0);
	_packageRedundancyMax = Uint16(0);
	_packageRedundancyMin = Uint16(0);
	_packageRedundancyDefault = Uint16(0);
	_deltaReservationMax = Uint16(0);
	_deltaReservationMin = Uint16(0);
	_deltaReservationDefault = Uint16(0);
	_extentStripeLengthDefault = Uint16(0);
	_parityLayoutDefault = Uint16(0);
	_userDataStripeDepthDefault = Uint64(0);
	_availableDiskType.clear();
	_availableFormFactorType.clear();
	_encryption = Uint16(0);
	_supportedDataOrganizations.clear();
	_availableInterconnectSpeed.clear();
	_availableInterconnectType.clear();
	_availableRPM.clear();
	_supportedCompressionRates.clear();

}

Boolean UNIX_StorageCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ElementType"))
			{
				Uint16 elementTypeValue;
				property.getValue().get(elementTypeValue);
				setElementType(elementTypeValue);
			}
			else if (String::equal(property.getName().getString(), "NoSinglePointOfFailure"))
			{
				Boolean noSinglePointOfFailureValue;
				property.getValue().get(noSinglePointOfFailureValue);
				setNoSinglePointOfFailure(noSinglePointOfFailureValue);
			}
			else if (String::equal(property.getName().getString(), "NoSinglePointOfFailureDefault"))
			{
				Boolean noSinglePointOfFailureDefaultValue;
				property.getValue().get(noSinglePointOfFailureDefaultValue);
				setNoSinglePointOfFailureDefault(noSinglePointOfFailureDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "DataRedundancyMax"))
			{
				Uint16 dataRedundancyMaxValue;
				property.getValue().get(dataRedundancyMaxValue);
				setDataRedundancyMax(dataRedundancyMaxValue);
			}
			else if (String::equal(property.getName().getString(), "DataRedundancyMin"))
			{
				Uint16 dataRedundancyMinValue;
				property.getValue().get(dataRedundancyMinValue);
				setDataRedundancyMin(dataRedundancyMinValue);
			}
			else if (String::equal(property.getName().getString(), "DataRedundancyDefault"))
			{
				Uint16 dataRedundancyDefaultValue;
				property.getValue().get(dataRedundancyDefaultValue);
				setDataRedundancyDefault(dataRedundancyDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "PackageRedundancyMax"))
			{
				Uint16 packageRedundancyMaxValue;
				property.getValue().get(packageRedundancyMaxValue);
				setPackageRedundancyMax(packageRedundancyMaxValue);
			}
			else if (String::equal(property.getName().getString(), "PackageRedundancyMin"))
			{
				Uint16 packageRedundancyMinValue;
				property.getValue().get(packageRedundancyMinValue);
				setPackageRedundancyMin(packageRedundancyMinValue);
			}
			else if (String::equal(property.getName().getString(), "PackageRedundancyDefault"))
			{
				Uint16 packageRedundancyDefaultValue;
				property.getValue().get(packageRedundancyDefaultValue);
				setPackageRedundancyDefault(packageRedundancyDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "DeltaReservationMax"))
			{
				Uint16 deltaReservationMaxValue;
				property.getValue().get(deltaReservationMaxValue);
				setDeltaReservationMax(deltaReservationMaxValue);
			}
			else if (String::equal(property.getName().getString(), "DeltaReservationMin"))
			{
				Uint16 deltaReservationMinValue;
				property.getValue().get(deltaReservationMinValue);
				setDeltaReservationMin(deltaReservationMinValue);
			}
			else if (String::equal(property.getName().getString(), "DeltaReservationDefault"))
			{
				Uint16 deltaReservationDefaultValue;
				property.getValue().get(deltaReservationDefaultValue);
				setDeltaReservationDefault(deltaReservationDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "ExtentStripeLengthDefault"))
			{
				Uint16 extentStripeLengthDefaultValue;
				property.getValue().get(extentStripeLengthDefaultValue);
				setExtentStripeLengthDefault(extentStripeLengthDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "ParityLayoutDefault"))
			{
				Uint16 parityLayoutDefaultValue;
				property.getValue().get(parityLayoutDefaultValue);
				setParityLayoutDefault(parityLayoutDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "UserDataStripeDepthDefault"))
			{
				Uint64 userDataStripeDepthDefaultValue;
				property.getValue().get(userDataStripeDepthDefaultValue);
				setUserDataStripeDepthDefault(userDataStripeDepthDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableDiskType"))
			{
				Array<Uint16> availableDiskTypeValue;
				property.getValue().get(availableDiskTypeValue);
				setAvailableDiskType(availableDiskTypeValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableFormFactorType"))
			{
				Array<Uint16> availableFormFactorTypeValue;
				property.getValue().get(availableFormFactorTypeValue);
				setAvailableFormFactorType(availableFormFactorTypeValue);
			}
			else if (String::equal(property.getName().getString(), "Encryption"))
			{
				Uint16 encryptionValue;
				property.getValue().get(encryptionValue);
				setEncryption(encryptionValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedDataOrganizations"))
			{
				Array<Uint16> supportedDataOrganizationsValue;
				property.getValue().get(supportedDataOrganizationsValue);
				setSupportedDataOrganizations(supportedDataOrganizationsValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableInterconnectSpeed"))
			{
				Array<Uint64> availableInterconnectSpeedValue;
				property.getValue().get(availableInterconnectSpeedValue);
				setAvailableInterconnectSpeed(availableInterconnectSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableInterconnectType"))
			{
				Array<Uint16> availableInterconnectTypeValue;
				property.getValue().get(availableInterconnectTypeValue);
				setAvailableInterconnectType(availableInterconnectTypeValue);
			}
			else if (String::equal(property.getName().getString(), "AvailableRPM"))
			{
				Array<Uint32> availableRPMValue;
				property.getValue().get(availableRPMValue);
				setAvailableRPM(availableRPMValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedCompressionRates"))
			{
				Array<Uint16> supportedCompressionRatesValue;
				property.getValue().get(supportedCompressionRatesValue);
				setSupportedCompressionRates(supportedCompressionRatesValue);
			}
	}
	return true;
}

Uint16 UNIX_StorageCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageCapabilities::invokeCreateSetting(
		Uint16 &inSettingType,
		CIMInstance &inNewSetting
	)
{
	Uint32 returnValue = Uint32(0);
	
	UNIX_StorageSetting inNewSettingObject;
	inNewSettingObject.loadInstance(inNewSetting);
	
	/* Execute method CreateSetting */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageCapabilities::invokeGetSupportedStripeLengths(
		Array<Uint16> &inStripeLengths
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedStripeLengths */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageCapabilities::invokeGetSupportedStripeLengthRange(
		Uint16 &inMinimumStripeLength,
		Uint16 &inMaximumStripeLength,
		Uint32 &inStripeLengthDivisor
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedStripeLengthRange */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageCapabilities::invokeGetSupportedParityLayouts(
		Array<Uint16> &inParityLayout
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedParityLayouts */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageCapabilities::invokeGetSupportedStripeDepths(
		Array<Uint64> &inStripeDepths
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedStripeDepths */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageCapabilities::invokeGetSupportedStripeDepthRange(
		Uint64 &inMinimumStripeDepth,
		Uint64 &inMaximumStripeDepth,
		Uint64 &inStripeDepthDivisor
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedStripeDepthRange */
	
	
	
	return returnValue;
}


Boolean UNIX_StorageCapabilities::initialize()
{
	return false;
}

Boolean UNIX_StorageCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageCapabilities");
	_generation = Uint64(0);
	_elementType = Uint16(0);
	_noSinglePointOfFailure = Boolean(false);
	_noSinglePointOfFailureDefault = Boolean(false);
	_dataRedundancyMax = Uint16(0);
	_dataRedundancyMin = Uint16(0);
	_dataRedundancyDefault = Uint16(0);
	_packageRedundancyMax = Uint16(0);
	_packageRedundancyMin = Uint16(0);
	_packageRedundancyDefault = Uint16(0);
	_deltaReservationMax = Uint16(0);
	_deltaReservationMin = Uint16(0);
	_deltaReservationDefault = Uint16(0);
	_extentStripeLengthDefault = Uint16(0);
	_parityLayoutDefault = Uint16(0);
	_userDataStripeDepthDefault = Uint64(0);
	_availableDiskType.clear();
	_availableFormFactorType.clear();
	_encryption = Uint16(0);
	_supportedDataOrganizations.clear();
	_availableInterconnectSpeed.clear();
	_availableInterconnectType.clear();
	_availableRPM.clear();
	_supportedCompressionRates.clear();
	
	return false;
}

Boolean UNIX_StorageCapabilities::finalize()
{
	return false;
}


Boolean UNIX_StorageCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageCapabilities::validateInstance()
{
	return true;
}

