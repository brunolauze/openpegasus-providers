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


UNIX_DiagnosticSettingDataRecord::UNIX_DiagnosticSettingDataRecord(void)
{
}

UNIX_DiagnosticSettingDataRecord::~UNIX_DiagnosticSettingDataRecord(void)
{
}

Boolean UNIX_DiagnosticSettingDataRecord::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DiagnosticSettingDataRecord::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getCaption() const
{
	return _caption;
}

void UNIX_DiagnosticSettingDataRecord::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getDescription() const
{
	return _description;
}

void UNIX_DiagnosticSettingDataRecord::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getElementName() const
{
	return _elementName;
}

void UNIX_DiagnosticSettingDataRecord::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DiagnosticSettingDataRecord::getGeneration() const
{
	return _generation;
}

void UNIX_DiagnosticSettingDataRecord::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getRecordFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_FORMAT, getRecordFormat());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getRecordFormat() const
{
	return _recordFormat;
}

void UNIX_DiagnosticSettingDataRecord::setRecordFormat(String &value)
{
	_recordFormat = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getRecordData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_DATA, getRecordData());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getRecordData() const
{
	return _recordData;
}

void UNIX_DiagnosticSettingDataRecord::setRecordData(String &value)
{
	_recordData = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getLocale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALE, getLocale());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getLocale() const
{
	return _locale;
}

void UNIX_DiagnosticSettingDataRecord::setLocale(String &value)
{
	_locale = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getPerceivedSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCEIVED_SEVERITY, getPerceivedSeverity());
	return true;
}

Uint16 UNIX_DiagnosticSettingDataRecord::getPerceivedSeverity() const
{
	return _perceivedSeverity;
}

void UNIX_DiagnosticSettingDataRecord::setPerceivedSeverity(Uint16 &value)
{
	_perceivedSeverity = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getServiceName() const
{
	return _serviceName;
}

void UNIX_DiagnosticSettingDataRecord::setServiceName(String &value)
{
	_serviceName = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getManagedElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_ELEMENT_NAME, getManagedElementName());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getManagedElementName() const
{
	return _managedElementName;
}

void UNIX_DiagnosticSettingDataRecord::setManagedElementName(String &value)
{
	_managedElementName = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getExpirationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRATION_DATE, getExpirationDate());
	return true;
}

CIMDateTime UNIX_DiagnosticSettingDataRecord::getExpirationDate() const
{
	return _expirationDate;
}

void UNIX_DiagnosticSettingDataRecord::setExpirationDate(CIMDateTime &value)
{
	_expirationDate = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getRecordType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_TYPE, getRecordType());
	return true;
}

Uint16 UNIX_DiagnosticSettingDataRecord::getRecordType() const
{
	return _recordType;
}

void UNIX_DiagnosticSettingDataRecord::setRecordType(Uint16 &value)
{
	_recordType = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getOtherRecordTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RECORD_TYPE_DESCRIPTION, getOtherRecordTypeDescription());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getOtherRecordTypeDescription() const
{
	return _otherRecordTypeDescription;
}

void UNIX_DiagnosticSettingDataRecord::setOtherRecordTypeDescription(String &value)
{
	_otherRecordTypeDescription = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getCreationTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME_STAMP, getCreationTimeStamp());
	return true;
}

CIMDateTime UNIX_DiagnosticSettingDataRecord::getCreationTimeStamp() const
{
	return _creationTimeStamp;
}

void UNIX_DiagnosticSettingDataRecord::setCreationTimeStamp(CIMDateTime &value)
{
	_creationTimeStamp = value;
}

Boolean UNIX_DiagnosticSettingDataRecord::getSettings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTINGS, getSettings());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getSettings() const
{
	return _settings;
}

void UNIX_DiagnosticSettingDataRecord::setSettings(String &value)
{
	_settings = value;
}


void UNIX_DiagnosticSettingDataRecord::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiagnosticSettingDataRecord");
	_generation = Uint64(0);
	_recordFormat = String ("");
	_recordData = String ("");
	_locale = String ("");
	_perceivedSeverity = Uint16(0);
	_serviceName = String ("");
	_managedElementName = String ("");
	_expirationDate = CIMHelper::getCurrentTime();
	_recordType = Uint16(0);
	_otherRecordTypeDescription = String ("");
	_creationTimeStamp = CIMHelper::getCurrentTime();
	_settings = String ("");

}

Boolean UNIX_DiagnosticSettingDataRecord::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RecordFormat"))
			{
				String recordFormatValue;
				property.getValue().get(recordFormatValue);
				setRecordFormat(recordFormatValue);
			}
			else if (String::equal(property.getName().getString(), "RecordData"))
			{
				String recordDataValue;
				property.getValue().get(recordDataValue);
				setRecordData(recordDataValue);
			}
			else if (String::equal(property.getName().getString(), "Locale"))
			{
				String localeValue;
				property.getValue().get(localeValue);
				setLocale(localeValue);
			}
			else if (String::equal(property.getName().getString(), "PerceivedSeverity"))
			{
				Uint16 perceivedSeverityValue;
				property.getValue().get(perceivedSeverityValue);
				setPerceivedSeverity(perceivedSeverityValue);
			}
			else if (String::equal(property.getName().getString(), "ServiceName"))
			{
				String serviceNameValue;
				property.getValue().get(serviceNameValue);
				setServiceName(serviceNameValue);
			}
			else if (String::equal(property.getName().getString(), "ManagedElementName"))
			{
				String managedElementNameValue;
				property.getValue().get(managedElementNameValue);
				setManagedElementName(managedElementNameValue);
			}
			else if (String::equal(property.getName().getString(), "ExpirationDate"))
			{
				CIMDateTime expirationDateValue;
				property.getValue().get(expirationDateValue);
				setExpirationDate(expirationDateValue);
			}
			else if (String::equal(property.getName().getString(), "RecordType"))
			{
				Uint16 recordTypeValue;
				property.getValue().get(recordTypeValue);
				setRecordType(recordTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherRecordTypeDescription"))
			{
				String otherRecordTypeDescriptionValue;
				property.getValue().get(otherRecordTypeDescriptionValue);
				setOtherRecordTypeDescription(otherRecordTypeDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "CreationTimeStamp"))
			{
				CIMDateTime creationTimeStampValue;
				property.getValue().get(creationTimeStampValue);
				setCreationTimeStamp(creationTimeStampValue);
			}
			else if (String::equal(property.getName().getString(), "Settings"))
			{
				String settingsValue;
				property.getValue().get(settingsValue);
				setSettings(settingsValue);
			}
	}
	return true;
}


Boolean UNIX_DiagnosticSettingDataRecord::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticSettingDataRecord::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiagnosticSettingDataRecord");
	_generation = Uint64(0);
	_recordFormat = String ("");
	_recordData = String ("");
	_locale = String ("");
	_perceivedSeverity = Uint16(0);
	_serviceName = String ("");
	_managedElementName = String ("");
	_expirationDate = CIMHelper::getCurrentTime();
	_recordType = Uint16(0);
	_otherRecordTypeDescription = String ("");
	_creationTimeStamp = CIMHelper::getCurrentTime();
	_settings = String ("");
	
	return false;
}

Boolean UNIX_DiagnosticSettingDataRecord::finalize()
{
	return false;
}


Boolean UNIX_DiagnosticSettingDataRecord::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DiagnosticSettingDataRecord::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticSettingDataRecord::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticSettingDataRecord::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticSettingDataRecord::validateInstance()
{
	return true;
}

