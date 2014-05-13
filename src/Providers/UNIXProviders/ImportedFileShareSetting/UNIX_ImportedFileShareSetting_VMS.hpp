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


UNIX_ImportedFileShareSetting::UNIX_ImportedFileShareSetting(void)
{
}

UNIX_ImportedFileShareSetting::~UNIX_ImportedFileShareSetting(void)
{
}

Boolean UNIX_ImportedFileShareSetting::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ImportedFileShareSetting::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ImportedFileShareSetting::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ImportedFileShareSetting::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ImportedFileShareSetting::getCaption() const
{
	return _caption;
}

void UNIX_ImportedFileShareSetting::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ImportedFileShareSetting::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ImportedFileShareSetting::getDescription() const
{
	return _description;
}

void UNIX_ImportedFileShareSetting::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ImportedFileShareSetting::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ImportedFileShareSetting::getElementName() const
{
	return _elementName;
}

void UNIX_ImportedFileShareSetting::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ImportedFileShareSetting::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ImportedFileShareSetting::getGeneration() const
{
	return _generation;
}

void UNIX_ImportedFileShareSetting::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ImportedFileShareSetting::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_ImportedFileShareSetting::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_ImportedFileShareSetting::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_ImportedFileShareSetting::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_ImportedFileShareSetting::getChangeableType() const
{
	return _changeableType;
}

void UNIX_ImportedFileShareSetting::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_ImportedFileShareSetting::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_ImportedFileShareSetting::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_ImportedFileShareSetting::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_ImportedFileShareSetting::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_ImportedFileShareSetting::getSoID() const
{
	return _soID;
}

void UNIX_ImportedFileShareSetting::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_ImportedFileShareSetting::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_ImportedFileShareSetting::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_ImportedFileShareSetting::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_ImportedFileShareSetting::getFileSharingProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SHARING_PROTOCOL, getFileSharingProtocol());
	return true;
}

Uint16 UNIX_ImportedFileShareSetting::getFileSharingProtocol() const
{
	return _fileSharingProtocol;
}

void UNIX_ImportedFileShareSetting::setFileSharingProtocol(Uint16 &value)
{
	_fileSharingProtocol = value;
}

Boolean UNIX_ImportedFileShareSetting::getProtocolVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_VERSIONS, getProtocolVersions());
	return true;
}

Array<String> UNIX_ImportedFileShareSetting::getProtocolVersions() const
{
	return _protocolVersions;
}

void UNIX_ImportedFileShareSetting::setProtocolVersions(Array<String> &value)
{
	_protocolVersions = value;
}

Boolean UNIX_ImportedFileShareSetting::getInitialEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_ENABLED_STATE, getInitialEnabledState());
	return true;
}

Uint16 UNIX_ImportedFileShareSetting::getInitialEnabledState() const
{
	return _initialEnabledState;
}

void UNIX_ImportedFileShareSetting::setInitialEnabledState(Uint16 &value)
{
	_initialEnabledState = value;
}

Boolean UNIX_ImportedFileShareSetting::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ImportedFileShareSetting::getOtherEnabledState() const
{
	return _otherEnabledState;
}

void UNIX_ImportedFileShareSetting::setOtherEnabledState(String &value)
{
	_otherEnabledState = value;
}

Boolean UNIX_ImportedFileShareSetting::getRequestRetryPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUEST_RETRY_POLICY, getRequestRetryPolicy());
	return true;
}

Uint16 UNIX_ImportedFileShareSetting::getRequestRetryPolicy() const
{
	return _requestRetryPolicy;
}

void UNIX_ImportedFileShareSetting::setRequestRetryPolicy(Uint16 &value)
{
	_requestRetryPolicy = value;
}

Boolean UNIX_ImportedFileShareSetting::getTransmissionRetriesMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMISSION_RETRIES_MAX, getTransmissionRetriesMax());
	return true;
}

Uint32 UNIX_ImportedFileShareSetting::getTransmissionRetriesMax() const
{
	return _transmissionRetriesMax;
}

void UNIX_ImportedFileShareSetting::setTransmissionRetriesMax(Uint32 &value)
{
	_transmissionRetriesMax = value;
}

Boolean UNIX_ImportedFileShareSetting::getRetransmissionTimeoutMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RETRANSMISSION_TIMEOUT_MIN, getRetransmissionTimeoutMin());
	return true;
}

Uint32 UNIX_ImportedFileShareSetting::getRetransmissionTimeoutMin() const
{
	return _retransmissionTimeoutMin;
}

void UNIX_ImportedFileShareSetting::setRetransmissionTimeoutMin(Uint32 &value)
{
	_retransmissionTimeoutMin = value;
}

Boolean UNIX_ImportedFileShareSetting::getImportFailurePolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPORT_FAILURE_POLICY, getImportFailurePolicy());
	return true;
}

Uint16 UNIX_ImportedFileShareSetting::getImportFailurePolicy() const
{
	return _importFailurePolicy;
}

void UNIX_ImportedFileShareSetting::setImportFailurePolicy(Uint16 &value)
{
	_importFailurePolicy = value;
}

Boolean UNIX_ImportedFileShareSetting::getImportRetriesMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPORT_RETRIES_MAX, getImportRetriesMax());
	return true;
}

Uint32 UNIX_ImportedFileShareSetting::getImportRetriesMax() const
{
	return _importRetriesMax;
}

void UNIX_ImportedFileShareSetting::setImportRetriesMax(Uint32 &value)
{
	_importRetriesMax = value;
}

Boolean UNIX_ImportedFileShareSetting::getReadBufferSizeMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_BUFFER_SIZE_MIN, getReadBufferSizeMin());
	return true;
}

Uint32 UNIX_ImportedFileShareSetting::getReadBufferSizeMin() const
{
	return _readBufferSizeMin;
}

void UNIX_ImportedFileShareSetting::setReadBufferSizeMin(Uint32 &value)
{
	_readBufferSizeMin = value;
}

Boolean UNIX_ImportedFileShareSetting::getReadBufferSizeMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_BUFFER_SIZE_MAX, getReadBufferSizeMax());
	return true;
}

Uint32 UNIX_ImportedFileShareSetting::getReadBufferSizeMax() const
{
	return _readBufferSizeMax;
}

void UNIX_ImportedFileShareSetting::setReadBufferSizeMax(Uint32 &value)
{
	_readBufferSizeMax = value;
}

Boolean UNIX_ImportedFileShareSetting::getWriteBufferSizeMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_BUFFER_SIZE_MIN, getWriteBufferSizeMin());
	return true;
}

Uint32 UNIX_ImportedFileShareSetting::getWriteBufferSizeMin() const
{
	return _writeBufferSizeMin;
}

void UNIX_ImportedFileShareSetting::setWriteBufferSizeMin(Uint32 &value)
{
	_writeBufferSizeMin = value;
}

Boolean UNIX_ImportedFileShareSetting::getWriteBufferSizeMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_BUFFER_SIZE_MAX, getWriteBufferSizeMax());
	return true;
}

Uint32 UNIX_ImportedFileShareSetting::getWriteBufferSizeMax() const
{
	return _writeBufferSizeMax;
}

void UNIX_ImportedFileShareSetting::setWriteBufferSizeMax(Uint32 &value)
{
	_writeBufferSizeMax = value;
}

Boolean UNIX_ImportedFileShareSetting::getAttributeCaching(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_CACHING, getAttributeCaching());
	return true;
}

Array<Uint16> UNIX_ImportedFileShareSetting::getAttributeCaching() const
{
	return _attributeCaching;
}

void UNIX_ImportedFileShareSetting::setAttributeCaching(Array<Uint16> &value)
{
	_attributeCaching = value;
}

Boolean UNIX_ImportedFileShareSetting::getAttributeCachingObjects(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_CACHING_OBJECTS, getAttributeCachingObjects());
	return true;
}

Array<Uint16> UNIX_ImportedFileShareSetting::getAttributeCachingObjects() const
{
	return _attributeCachingObjects;
}

void UNIX_ImportedFileShareSetting::setAttributeCachingObjects(Array<Uint16> &value)
{
	_attributeCachingObjects = value;
}

Boolean UNIX_ImportedFileShareSetting::getAttributeCachingTimeMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_CACHING_TIME_MIN, getAttributeCachingTimeMin());
	return true;
}

Array<Uint32> UNIX_ImportedFileShareSetting::getAttributeCachingTimeMin() const
{
	return _attributeCachingTimeMin;
}

void UNIX_ImportedFileShareSetting::setAttributeCachingTimeMin(Array<Uint32> &value)
{
	_attributeCachingTimeMin = value;
}

Boolean UNIX_ImportedFileShareSetting::getAttributeCachingTimeMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_CACHING_TIME_MAX, getAttributeCachingTimeMax());
	return true;
}

Array<Uint32> UNIX_ImportedFileShareSetting::getAttributeCachingTimeMax() const
{
	return _attributeCachingTimeMax;
}

void UNIX_ImportedFileShareSetting::setAttributeCachingTimeMax(Array<Uint32> &value)
{
	_attributeCachingTimeMax = value;
}

Boolean UNIX_ImportedFileShareSetting::getAccessPoints(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_POINTS, getAccessPoints());
	return true;
}

Uint16 UNIX_ImportedFileShareSetting::getAccessPoints() const
{
	return _accessPoints;
}

void UNIX_ImportedFileShareSetting::setAccessPoints(Uint16 &value)
{
	_accessPoints = value;
}

Boolean UNIX_ImportedFileShareSetting::getReadWritePolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_WRITE_POLICY, getReadWritePolicy());
	return true;
}

Uint16 UNIX_ImportedFileShareSetting::getReadWritePolicy() const
{
	return _readWritePolicy;
}

void UNIX_ImportedFileShareSetting::setReadWritePolicy(Uint16 &value)
{
	_readWritePolicy = value;
}

Boolean UNIX_ImportedFileShareSetting::getCIFSLocksSupportPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_I_FS_LOCKS_SUPPORT_POLICY, getCIFSLocksSupportPolicy());
	return true;
}

Array<Uint16> UNIX_ImportedFileShareSetting::getCIFSLocksSupportPolicy() const
{
	return _cIFSLocksSupportPolicy;
}

void UNIX_ImportedFileShareSetting::setCIFSLocksSupportPolicy(Array<Uint16> &value)
{
	_cIFSLocksSupportPolicy = value;
}

Boolean UNIX_ImportedFileShareSetting::getCifsNotificationPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIFS_NOTIFICATION_POLICY, getCifsNotificationPolicy());
	return true;
}

Array<Uint16> UNIX_ImportedFileShareSetting::getCifsNotificationPolicy() const
{
	return _cifsNotificationPolicy;
}

void UNIX_ImportedFileShareSetting::setCifsNotificationPolicy(Array<Uint16> &value)
{
	_cifsNotificationPolicy = value;
}

Boolean UNIX_ImportedFileShareSetting::getAccessPolicies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_POLICIES, getAccessPolicies());
	return true;
}

Array<Uint16> UNIX_ImportedFileShareSetting::getAccessPolicies() const
{
	return _accessPolicies;
}

void UNIX_ImportedFileShareSetting::setAccessPolicies(Array<Uint16> &value)
{
	_accessPolicies = value;
}

Boolean UNIX_ImportedFileShareSetting::getOtherAccessPoliciesParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ACCESS_POLICIES_PARAMETERS, getOtherAccessPoliciesParameters());
	return true;
}

Array<String> UNIX_ImportedFileShareSetting::getOtherAccessPoliciesParameters() const
{
	return _otherAccessPoliciesParameters;
}

void UNIX_ImportedFileShareSetting::setOtherAccessPoliciesParameters(Array<String> &value)
{
	_otherAccessPoliciesParameters = value;
}

Boolean UNIX_ImportedFileShareSetting::getCifsLockPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIFS_LOCK_POLICY, getCifsLockPolicy());
	return true;
}

Uint16 UNIX_ImportedFileShareSetting::getCifsLockPolicy() const
{
	return _cifsLockPolicy;
}

void UNIX_ImportedFileShareSetting::setCifsLockPolicy(Uint16 &value)
{
	_cifsLockPolicy = value;
}

Boolean UNIX_ImportedFileShareSetting::getCachingOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CACHING_OPTIONS, getCachingOptions());
	return true;
}

Uint16 UNIX_ImportedFileShareSetting::getCachingOptions() const
{
	return _cachingOptions;
}

void UNIX_ImportedFileShareSetting::setCachingOptions(Uint16 &value)
{
	_cachingOptions = value;
}

Boolean UNIX_ImportedFileShareSetting::getImportOnServiceStart(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPORT_ON_SERVICE_START, getImportOnServiceStart());
	return true;
}

Uint16 UNIX_ImportedFileShareSetting::getImportOnServiceStart() const
{
	return _importOnServiceStart;
}

void UNIX_ImportedFileShareSetting::setImportOnServiceStart(Uint16 &value)
{
	_importOnServiceStart = value;
}

Boolean UNIX_ImportedFileShareSetting::getReadWritePref(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_WRITE_PREF, getReadWritePref());
	return true;
}

String UNIX_ImportedFileShareSetting::getReadWritePref() const
{
	return _readWritePref;
}

void UNIX_ImportedFileShareSetting::setReadWritePref(String &value)
{
	_readWritePref = value;
}

Boolean UNIX_ImportedFileShareSetting::getExecutePref(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTE_PREF, getExecutePref());
	return true;
}

Uint16 UNIX_ImportedFileShareSetting::getExecutePref() const
{
	return _executePref;
}

void UNIX_ImportedFileShareSetting::setExecutePref(Uint16 &value)
{
	_executePref = value;
}

Boolean UNIX_ImportedFileShareSetting::getRootAccessPref(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOT_ACCESS_PREF, getRootAccessPref());
	return true;
}

String UNIX_ImportedFileShareSetting::getRootAccessPref() const
{
	return _rootAccessPref;
}

void UNIX_ImportedFileShareSetting::setRootAccessPref(String &value)
{
	_rootAccessPref = value;
}


void UNIX_ImportedFileShareSetting::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ImportedFileShareSetting");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_fileSharingProtocol = Uint16(0);
	_protocolVersions.clear();
	_initialEnabledState = Uint16(0);
	_otherEnabledState = String ("");
	_requestRetryPolicy = Uint16(0);
	_transmissionRetriesMax = Uint32(0);
	_retransmissionTimeoutMin = Uint32(0);
	_importFailurePolicy = Uint16(0);
	_importRetriesMax = Uint32(0);
	_readBufferSizeMin = Uint32(0);
	_readBufferSizeMax = Uint32(0);
	_writeBufferSizeMin = Uint32(0);
	_writeBufferSizeMax = Uint32(0);
	_attributeCaching.clear();
	_attributeCachingObjects.clear();
	_attributeCachingTimeMin.clear();
	_attributeCachingTimeMax.clear();
	_accessPoints = Uint16(0);
	_readWritePolicy = Uint16(0);
	_cIFSLocksSupportPolicy.clear();
	_cifsNotificationPolicy.clear();
	_accessPolicies.clear();
	_otherAccessPoliciesParameters.clear();
	_cifsLockPolicy = Uint16(0);
	_cachingOptions = Uint16(0);
	_importOnServiceStart = Uint16(0);
	_readWritePref = String ("");
	_executePref = Uint16(0);
	_rootAccessPref = String ("");

}

Boolean UNIX_ImportedFileShareSetting::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConfigurationName"))
			{
				String configurationNameValue;
				property.getValue().get(configurationNameValue);
				setConfigurationName(configurationNameValue);
			}
			else if (String::equal(property.getName().getString(), "ChangeableType"))
			{
				Uint16 changeableTypeValue;
				property.getValue().get(changeableTypeValue);
				setChangeableType(changeableTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ComponentSetting"))
			{
				Array<String> componentSettingValue;
				property.getValue().get(componentSettingValue);
				setComponentSetting(componentSettingValue);
			}
			else if (String::equal(property.getName().getString(), "SoID"))
			{
				String soIDValue;
				property.getValue().get(soIDValue);
				setSoID(soIDValue);
			}
			else if (String::equal(property.getName().getString(), "SoOrgID"))
			{
				String soOrgIDValue;
				property.getValue().get(soOrgIDValue);
				setSoOrgID(soOrgIDValue);
			}
			else if (String::equal(property.getName().getString(), "FileSharingProtocol"))
			{
				Uint16 fileSharingProtocolValue;
				property.getValue().get(fileSharingProtocolValue);
				setFileSharingProtocol(fileSharingProtocolValue);
			}
			else if (String::equal(property.getName().getString(), "ProtocolVersions"))
			{
				Array<String> protocolVersionsValue;
				property.getValue().get(protocolVersionsValue);
				setProtocolVersions(protocolVersionsValue);
			}
			else if (String::equal(property.getName().getString(), "InitialEnabledState"))
			{
				Uint16 initialEnabledStateValue;
				property.getValue().get(initialEnabledStateValue);
				setInitialEnabledState(initialEnabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "OtherEnabledState"))
			{
				String otherEnabledStateValue;
				property.getValue().get(otherEnabledStateValue);
				setOtherEnabledState(otherEnabledStateValue);
			}
			else if (String::equal(property.getName().getString(), "RequestRetryPolicy"))
			{
				Uint16 requestRetryPolicyValue;
				property.getValue().get(requestRetryPolicyValue);
				setRequestRetryPolicy(requestRetryPolicyValue);
			}
			else if (String::equal(property.getName().getString(), "TransmissionRetriesMax"))
			{
				Uint32 transmissionRetriesMaxValue;
				property.getValue().get(transmissionRetriesMaxValue);
				setTransmissionRetriesMax(transmissionRetriesMaxValue);
			}
			else if (String::equal(property.getName().getString(), "RetransmissionTimeoutMin"))
			{
				Uint32 retransmissionTimeoutMinValue;
				property.getValue().get(retransmissionTimeoutMinValue);
				setRetransmissionTimeoutMin(retransmissionTimeoutMinValue);
			}
			else if (String::equal(property.getName().getString(), "ImportFailurePolicy"))
			{
				Uint16 importFailurePolicyValue;
				property.getValue().get(importFailurePolicyValue);
				setImportFailurePolicy(importFailurePolicyValue);
			}
			else if (String::equal(property.getName().getString(), "ImportRetriesMax"))
			{
				Uint32 importRetriesMaxValue;
				property.getValue().get(importRetriesMaxValue);
				setImportRetriesMax(importRetriesMaxValue);
			}
			else if (String::equal(property.getName().getString(), "ReadBufferSizeMin"))
			{
				Uint32 readBufferSizeMinValue;
				property.getValue().get(readBufferSizeMinValue);
				setReadBufferSizeMin(readBufferSizeMinValue);
			}
			else if (String::equal(property.getName().getString(), "ReadBufferSizeMax"))
			{
				Uint32 readBufferSizeMaxValue;
				property.getValue().get(readBufferSizeMaxValue);
				setReadBufferSizeMax(readBufferSizeMaxValue);
			}
			else if (String::equal(property.getName().getString(), "WriteBufferSizeMin"))
			{
				Uint32 writeBufferSizeMinValue;
				property.getValue().get(writeBufferSizeMinValue);
				setWriteBufferSizeMin(writeBufferSizeMinValue);
			}
			else if (String::equal(property.getName().getString(), "WriteBufferSizeMax"))
			{
				Uint32 writeBufferSizeMaxValue;
				property.getValue().get(writeBufferSizeMaxValue);
				setWriteBufferSizeMax(writeBufferSizeMaxValue);
			}
			else if (String::equal(property.getName().getString(), "AttributeCaching"))
			{
				Array<Uint16> attributeCachingValue;
				property.getValue().get(attributeCachingValue);
				setAttributeCaching(attributeCachingValue);
			}
			else if (String::equal(property.getName().getString(), "AttributeCachingObjects"))
			{
				Array<Uint16> attributeCachingObjectsValue;
				property.getValue().get(attributeCachingObjectsValue);
				setAttributeCachingObjects(attributeCachingObjectsValue);
			}
			else if (String::equal(property.getName().getString(), "AttributeCachingTimeMin"))
			{
				Array<Uint32> attributeCachingTimeMinValue;
				property.getValue().get(attributeCachingTimeMinValue);
				setAttributeCachingTimeMin(attributeCachingTimeMinValue);
			}
			else if (String::equal(property.getName().getString(), "AttributeCachingTimeMax"))
			{
				Array<Uint32> attributeCachingTimeMaxValue;
				property.getValue().get(attributeCachingTimeMaxValue);
				setAttributeCachingTimeMax(attributeCachingTimeMaxValue);
			}
			else if (String::equal(property.getName().getString(), "AccessPoints"))
			{
				Uint16 accessPointsValue;
				property.getValue().get(accessPointsValue);
				setAccessPoints(accessPointsValue);
			}
			else if (String::equal(property.getName().getString(), "ReadWritePolicy"))
			{
				Uint16 readWritePolicyValue;
				property.getValue().get(readWritePolicyValue);
				setReadWritePolicy(readWritePolicyValue);
			}
			else if (String::equal(property.getName().getString(), "CIFSLocksSupportPolicy"))
			{
				Array<Uint16> cIFSLocksSupportPolicyValue;
				property.getValue().get(cIFSLocksSupportPolicyValue);
				setCIFSLocksSupportPolicy(cIFSLocksSupportPolicyValue);
			}
			else if (String::equal(property.getName().getString(), "CifsNotificationPolicy"))
			{
				Array<Uint16> cifsNotificationPolicyValue;
				property.getValue().get(cifsNotificationPolicyValue);
				setCifsNotificationPolicy(cifsNotificationPolicyValue);
			}
			else if (String::equal(property.getName().getString(), "AccessPolicies"))
			{
				Array<Uint16> accessPoliciesValue;
				property.getValue().get(accessPoliciesValue);
				setAccessPolicies(accessPoliciesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAccessPoliciesParameters"))
			{
				Array<String> otherAccessPoliciesParametersValue;
				property.getValue().get(otherAccessPoliciesParametersValue);
				setOtherAccessPoliciesParameters(otherAccessPoliciesParametersValue);
			}
			else if (String::equal(property.getName().getString(), "CifsLockPolicy"))
			{
				Uint16 cifsLockPolicyValue;
				property.getValue().get(cifsLockPolicyValue);
				setCifsLockPolicy(cifsLockPolicyValue);
			}
			else if (String::equal(property.getName().getString(), "CachingOptions"))
			{
				Uint16 cachingOptionsValue;
				property.getValue().get(cachingOptionsValue);
				setCachingOptions(cachingOptionsValue);
			}
			else if (String::equal(property.getName().getString(), "ImportOnServiceStart"))
			{
				Uint16 importOnServiceStartValue;
				property.getValue().get(importOnServiceStartValue);
				setImportOnServiceStart(importOnServiceStartValue);
			}
			else if (String::equal(property.getName().getString(), "ReadWritePref"))
			{
				String readWritePrefValue;
				property.getValue().get(readWritePrefValue);
				setReadWritePref(readWritePrefValue);
			}
			else if (String::equal(property.getName().getString(), "ExecutePref"))
			{
				Uint16 executePrefValue;
				property.getValue().get(executePrefValue);
				setExecutePref(executePrefValue);
			}
			else if (String::equal(property.getName().getString(), "RootAccessPref"))
			{
				String rootAccessPrefValue;
				property.getValue().get(rootAccessPrefValue);
				setRootAccessPref(rootAccessPrefValue);
			}
	}
	return true;
}


Boolean UNIX_ImportedFileShareSetting::initialize()
{
	return false;
}

Boolean UNIX_ImportedFileShareSetting::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ImportedFileShareSetting");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_fileSharingProtocol = Uint16(0);
	_protocolVersions.clear();
	_initialEnabledState = Uint16(0);
	_otherEnabledState = String ("");
	_requestRetryPolicy = Uint16(0);
	_transmissionRetriesMax = Uint32(0);
	_retransmissionTimeoutMin = Uint32(0);
	_importFailurePolicy = Uint16(0);
	_importRetriesMax = Uint32(0);
	_readBufferSizeMin = Uint32(0);
	_readBufferSizeMax = Uint32(0);
	_writeBufferSizeMin = Uint32(0);
	_writeBufferSizeMax = Uint32(0);
	_attributeCaching.clear();
	_attributeCachingObjects.clear();
	_attributeCachingTimeMin.clear();
	_attributeCachingTimeMax.clear();
	_accessPoints = Uint16(0);
	_readWritePolicy = Uint16(0);
	_cIFSLocksSupportPolicy.clear();
	_cifsNotificationPolicy.clear();
	_accessPolicies.clear();
	_otherAccessPoliciesParameters.clear();
	_cifsLockPolicy = Uint16(0);
	_cachingOptions = Uint16(0);
	_importOnServiceStart = Uint16(0);
	_readWritePref = String ("");
	_executePref = Uint16(0);
	_rootAccessPref = String ("");
	
	return false;
}

Boolean UNIX_ImportedFileShareSetting::finalize()
{
	return false;
}


Boolean UNIX_ImportedFileShareSetting::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ImportedFileShareSetting::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImportedFileShareSetting::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImportedFileShareSetting::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ImportedFileShareSetting::validateInstance()
{
	return true;
}

