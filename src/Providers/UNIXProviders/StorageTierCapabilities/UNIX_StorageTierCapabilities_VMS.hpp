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


UNIX_StorageTierCapabilities::UNIX_StorageTierCapabilities(void)
{
}

UNIX_StorageTierCapabilities::~UNIX_StorageTierCapabilities(void)
{
}

Boolean UNIX_StorageTierCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageTierCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageTierCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageTierCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageTierCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_StorageTierCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageTierCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageTierCapabilities::getDescription() const
{
	return _description;
}

void UNIX_StorageTierCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageTierCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageTierCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_StorageTierCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageTierCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageTierCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_StorageTierCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageTierCapabilities::getElementType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_TYPE, getElementType());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getElementType() const
{
	return _elementType;
}

void UNIX_StorageTierCapabilities::setElementType(Uint16 &value)
{
	_elementType = value;
}

Boolean UNIX_StorageTierCapabilities::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_StorageTierCapabilities::getNoSinglePointOfFailure() const
{
	return _noSinglePointOfFailure;
}

void UNIX_StorageTierCapabilities::setNoSinglePointOfFailure(Boolean &value)
{
	_noSinglePointOfFailure = value;
}

Boolean UNIX_StorageTierCapabilities::getNoSinglePointOfFailureDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE_DEFAULT, getNoSinglePointOfFailureDefault());
	return true;
}

Boolean UNIX_StorageTierCapabilities::getNoSinglePointOfFailureDefault() const
{
	return _noSinglePointOfFailureDefault;
}

void UNIX_StorageTierCapabilities::setNoSinglePointOfFailureDefault(Boolean &value)
{
	_noSinglePointOfFailureDefault = value;
}

Boolean UNIX_StorageTierCapabilities::getDataRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MAX, getDataRedundancyMax());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getDataRedundancyMax() const
{
	return _dataRedundancyMax;
}

void UNIX_StorageTierCapabilities::setDataRedundancyMax(Uint16 &value)
{
	_dataRedundancyMax = value;
}

Boolean UNIX_StorageTierCapabilities::getDataRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MIN, getDataRedundancyMin());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getDataRedundancyMin() const
{
	return _dataRedundancyMin;
}

void UNIX_StorageTierCapabilities::setDataRedundancyMin(Uint16 &value)
{
	_dataRedundancyMin = value;
}

Boolean UNIX_StorageTierCapabilities::getDataRedundancyDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_DEFAULT, getDataRedundancyDefault());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getDataRedundancyDefault() const
{
	return _dataRedundancyDefault;
}

void UNIX_StorageTierCapabilities::setDataRedundancyDefault(Uint16 &value)
{
	_dataRedundancyDefault = value;
}

Boolean UNIX_StorageTierCapabilities::getPackageRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MAX, getPackageRedundancyMax());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getPackageRedundancyMax() const
{
	return _packageRedundancyMax;
}

void UNIX_StorageTierCapabilities::setPackageRedundancyMax(Uint16 &value)
{
	_packageRedundancyMax = value;
}

Boolean UNIX_StorageTierCapabilities::getPackageRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MIN, getPackageRedundancyMin());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getPackageRedundancyMin() const
{
	return _packageRedundancyMin;
}

void UNIX_StorageTierCapabilities::setPackageRedundancyMin(Uint16 &value)
{
	_packageRedundancyMin = value;
}

Boolean UNIX_StorageTierCapabilities::getPackageRedundancyDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_DEFAULT, getPackageRedundancyDefault());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getPackageRedundancyDefault() const
{
	return _packageRedundancyDefault;
}

void UNIX_StorageTierCapabilities::setPackageRedundancyDefault(Uint16 &value)
{
	_packageRedundancyDefault = value;
}

Boolean UNIX_StorageTierCapabilities::getDeltaReservationMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MAX, getDeltaReservationMax());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getDeltaReservationMax() const
{
	return _deltaReservationMax;
}

void UNIX_StorageTierCapabilities::setDeltaReservationMax(Uint16 &value)
{
	_deltaReservationMax = value;
}

Boolean UNIX_StorageTierCapabilities::getDeltaReservationMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MIN, getDeltaReservationMin());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getDeltaReservationMin() const
{
	return _deltaReservationMin;
}

void UNIX_StorageTierCapabilities::setDeltaReservationMin(Uint16 &value)
{
	_deltaReservationMin = value;
}

Boolean UNIX_StorageTierCapabilities::getDeltaReservationDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_DEFAULT, getDeltaReservationDefault());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getDeltaReservationDefault() const
{
	return _deltaReservationDefault;
}

void UNIX_StorageTierCapabilities::setDeltaReservationDefault(Uint16 &value)
{
	_deltaReservationDefault = value;
}

Boolean UNIX_StorageTierCapabilities::getExtentStripeLengthDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH_DEFAULT, getExtentStripeLengthDefault());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getExtentStripeLengthDefault() const
{
	return _extentStripeLengthDefault;
}

void UNIX_StorageTierCapabilities::setExtentStripeLengthDefault(Uint16 &value)
{
	_extentStripeLengthDefault = value;
}

Boolean UNIX_StorageTierCapabilities::getParityLayoutDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARITY_LAYOUT_DEFAULT, getParityLayoutDefault());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getParityLayoutDefault() const
{
	return _parityLayoutDefault;
}

void UNIX_StorageTierCapabilities::setParityLayoutDefault(Uint16 &value)
{
	_parityLayoutDefault = value;
}

Boolean UNIX_StorageTierCapabilities::getUserDataStripeDepthDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH_DEFAULT, getUserDataStripeDepthDefault());
	return true;
}

Uint64 UNIX_StorageTierCapabilities::getUserDataStripeDepthDefault() const
{
	return _userDataStripeDepthDefault;
}

void UNIX_StorageTierCapabilities::setUserDataStripeDepthDefault(Uint64 &value)
{
	_userDataStripeDepthDefault = value;
}

Boolean UNIX_StorageTierCapabilities::getAvailableDiskType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_DISK_TYPE, getAvailableDiskType());
	return true;
}

Array<Uint16> UNIX_StorageTierCapabilities::getAvailableDiskType() const
{
	return _availableDiskType;
}

void UNIX_StorageTierCapabilities::setAvailableDiskType(Array<Uint16> &value)
{
	_availableDiskType = value;
}

Boolean UNIX_StorageTierCapabilities::getAvailableFormFactorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_FORM_FACTOR_TYPE, getAvailableFormFactorType());
	return true;
}

Array<Uint16> UNIX_StorageTierCapabilities::getAvailableFormFactorType() const
{
	return _availableFormFactorType;
}

void UNIX_StorageTierCapabilities::setAvailableFormFactorType(Array<Uint16> &value)
{
	_availableFormFactorType = value;
}

Boolean UNIX_StorageTierCapabilities::getEncryption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION, getEncryption());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getEncryption() const
{
	return _encryption;
}

void UNIX_StorageTierCapabilities::setEncryption(Uint16 &value)
{
	_encryption = value;
}

Boolean UNIX_StorageTierCapabilities::getSupportedDataOrganizations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_DATA_ORGANIZATIONS, getSupportedDataOrganizations());
	return true;
}

Array<Uint16> UNIX_StorageTierCapabilities::getSupportedDataOrganizations() const
{
	return _supportedDataOrganizations;
}

void UNIX_StorageTierCapabilities::setSupportedDataOrganizations(Array<Uint16> &value)
{
	_supportedDataOrganizations = value;
}

Boolean UNIX_StorageTierCapabilities::getAvailableInterconnectSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_INTERCONNECT_SPEED, getAvailableInterconnectSpeed());
	return true;
}

Array<Uint64> UNIX_StorageTierCapabilities::getAvailableInterconnectSpeed() const
{
	return _availableInterconnectSpeed;
}

void UNIX_StorageTierCapabilities::setAvailableInterconnectSpeed(Array<Uint64> &value)
{
	_availableInterconnectSpeed = value;
}

Boolean UNIX_StorageTierCapabilities::getAvailableInterconnectType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_INTERCONNECT_TYPE, getAvailableInterconnectType());
	return true;
}

Array<Uint16> UNIX_StorageTierCapabilities::getAvailableInterconnectType() const
{
	return _availableInterconnectType;
}

void UNIX_StorageTierCapabilities::setAvailableInterconnectType(Array<Uint16> &value)
{
	_availableInterconnectType = value;
}

Boolean UNIX_StorageTierCapabilities::getAvailableRPM(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_R_P_M, getAvailableRPM());
	return true;
}

Array<Uint32> UNIX_StorageTierCapabilities::getAvailableRPM() const
{
	return _availableRPM;
}

void UNIX_StorageTierCapabilities::setAvailableRPM(Array<Uint32> &value)
{
	_availableRPM = value;
}

Boolean UNIX_StorageTierCapabilities::getSupportedCompressionRates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_COMPRESSION_RATES, getSupportedCompressionRates());
	return true;
}

Array<Uint16> UNIX_StorageTierCapabilities::getSupportedCompressionRates() const
{
	return _supportedCompressionRates;
}

void UNIX_StorageTierCapabilities::setSupportedCompressionRates(Array<Uint16> &value)
{
	_supportedCompressionRates = value;
}

Boolean UNIX_StorageTierCapabilities::getStorageTierCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_TIER_CHARACTERISTICS, getStorageTierCharacteristics());
	return true;
}

Array<Uint16> UNIX_StorageTierCapabilities::getStorageTierCharacteristics() const
{
	return _storageTierCharacteristics;
}

void UNIX_StorageTierCapabilities::setStorageTierCharacteristics(Array<Uint16> &value)
{
	_storageTierCharacteristics = value;
}

Boolean UNIX_StorageTierCapabilities::getRelativePerformanceOrderMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELATIVE_PERFORMANCE_ORDER_MIN, getRelativePerformanceOrderMin());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getRelativePerformanceOrderMin() const
{
	return _relativePerformanceOrderMin;
}

void UNIX_StorageTierCapabilities::setRelativePerformanceOrderMin(Uint16 &value)
{
	_relativePerformanceOrderMin = value;
}

Boolean UNIX_StorageTierCapabilities::getRelativePerformanceOrderMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELATIVE_PERFORMANCE_ORDER_MAX, getRelativePerformanceOrderMax());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getRelativePerformanceOrderMax() const
{
	return _relativePerformanceOrderMax;
}

void UNIX_StorageTierCapabilities::setRelativePerformanceOrderMax(Uint16 &value)
{
	_relativePerformanceOrderMax = value;
}

Boolean UNIX_StorageTierCapabilities::getRelativePerformanceOrderDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELATIVE_PERFORMANCE_ORDER_DEFAULT, getRelativePerformanceOrderDefault());
	return true;
}

Uint16 UNIX_StorageTierCapabilities::getRelativePerformanceOrderDefault() const
{
	return _relativePerformanceOrderDefault;
}

void UNIX_StorageTierCapabilities::setRelativePerformanceOrderDefault(Uint16 &value)
{
	_relativePerformanceOrderDefault = value;
}

Boolean UNIX_StorageTierCapabilities::getSupportedStorageTierMethodologies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_TIER_METHODOLOGIES, getSupportedStorageTierMethodologies());
	return true;
}

Array<Uint16> UNIX_StorageTierCapabilities::getSupportedStorageTierMethodologies() const
{
	return _supportedStorageTierMethodologies;
}

void UNIX_StorageTierCapabilities::setSupportedStorageTierMethodologies(Array<Uint16> &value)
{
	_supportedStorageTierMethodologies = value;
}


void UNIX_StorageTierCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageTierCapabilities");
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
	_storageTierCharacteristics.clear();
	_relativePerformanceOrderMin = Uint16(0);
	_relativePerformanceOrderMax = Uint16(0);
	_relativePerformanceOrderDefault = Uint16(0);
	_supportedStorageTierMethodologies.clear();

}

Boolean UNIX_StorageTierCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "StorageTierCharacteristics"))
			{
				Array<Uint16> storageTierCharacteristicsValue;
				property.getValue().get(storageTierCharacteristicsValue);
				setStorageTierCharacteristics(storageTierCharacteristicsValue);
			}
			else if (String::equal(property.getName().getString(), "RelativePerformanceOrderMin"))
			{
				Uint16 relativePerformanceOrderMinValue;
				property.getValue().get(relativePerformanceOrderMinValue);
				setRelativePerformanceOrderMin(relativePerformanceOrderMinValue);
			}
			else if (String::equal(property.getName().getString(), "RelativePerformanceOrderMax"))
			{
				Uint16 relativePerformanceOrderMaxValue;
				property.getValue().get(relativePerformanceOrderMaxValue);
				setRelativePerformanceOrderMax(relativePerformanceOrderMaxValue);
			}
			else if (String::equal(property.getName().getString(), "RelativePerformanceOrderDefault"))
			{
				Uint16 relativePerformanceOrderDefaultValue;
				property.getValue().get(relativePerformanceOrderDefaultValue);
				setRelativePerformanceOrderDefault(relativePerformanceOrderDefaultValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedStorageTierMethodologies"))
			{
				Array<Uint16> supportedStorageTierMethodologiesValue;
				property.getValue().get(supportedStorageTierMethodologiesValue);
				setSupportedStorageTierMethodologies(supportedStorageTierMethodologiesValue);
			}
	}
	return true;
}

Uint16 UNIX_StorageTierCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageTierCapabilities::invokeCreateSetting(
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

Uint32 UNIX_StorageTierCapabilities::invokeGetSupportedStripeLengths(
		Array<Uint16> &inStripeLengths
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedStripeLengths */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageTierCapabilities::invokeGetSupportedStripeLengthRange(
		Uint16 &inMinimumStripeLength,
		Uint16 &inMaximumStripeLength,
		Uint32 &inStripeLengthDivisor
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedStripeLengthRange */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageTierCapabilities::invokeGetSupportedParityLayouts(
		Array<Uint16> &inParityLayout
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedParityLayouts */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageTierCapabilities::invokeGetSupportedStripeDepths(
		Array<Uint64> &inStripeDepths
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedStripeDepths */
	
	
	
	return returnValue;
}

Uint32 UNIX_StorageTierCapabilities::invokeGetSupportedStripeDepthRange(
		Uint64 &inMinimumStripeDepth,
		Uint64 &inMaximumStripeDepth,
		Uint64 &inStripeDepthDivisor
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method GetSupportedStripeDepthRange */
	
	
	
	return returnValue;
}


Boolean UNIX_StorageTierCapabilities::initialize()
{
	return false;
}

Boolean UNIX_StorageTierCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageTierCapabilities");
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
	_storageTierCharacteristics.clear();
	_relativePerformanceOrderMin = Uint16(0);
	_relativePerformanceOrderMax = Uint16(0);
	_relativePerformanceOrderDefault = Uint16(0);
	_supportedStorageTierMethodologies.clear();
	
	return false;
}

Boolean UNIX_StorageTierCapabilities::finalize()
{
	return false;
}


Boolean UNIX_StorageTierCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageTierCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageTierCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageTierCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageTierCapabilities::validateInstance()
{
	return true;
}

