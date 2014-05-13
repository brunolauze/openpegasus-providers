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


UNIX_PrintAlertRecord::UNIX_PrintAlertRecord(void)
{
}

UNIX_PrintAlertRecord::~UNIX_PrintAlertRecord(void)
{
}

Boolean UNIX_PrintAlertRecord::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintAlertRecord::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PrintAlertRecord::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PrintAlertRecord::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintAlertRecord::getCaption() const
{
	return _caption;
}

void UNIX_PrintAlertRecord::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PrintAlertRecord::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintAlertRecord::getDescription() const
{
	return _description;
}

void UNIX_PrintAlertRecord::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PrintAlertRecord::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintAlertRecord::getElementName() const
{
	return _elementName;
}

void UNIX_PrintAlertRecord::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PrintAlertRecord::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PrintAlertRecord::getGeneration() const
{
	return _generation;
}

void UNIX_PrintAlertRecord::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PrintAlertRecord::getRecordFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_FORMAT, getRecordFormat());
	return true;
}

String UNIX_PrintAlertRecord::getRecordFormat() const
{
	return _recordFormat;
}

void UNIX_PrintAlertRecord::setRecordFormat(String &value)
{
	_recordFormat = value;
}

Boolean UNIX_PrintAlertRecord::getRecordData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_DATA, getRecordData());
	return true;
}

String UNIX_PrintAlertRecord::getRecordData() const
{
	return _recordData;
}

void UNIX_PrintAlertRecord::setRecordData(String &value)
{
	_recordData = value;
}

Boolean UNIX_PrintAlertRecord::getLocale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALE, getLocale());
	return true;
}

String UNIX_PrintAlertRecord::getLocale() const
{
	return _locale;
}

void UNIX_PrintAlertRecord::setLocale(String &value)
{
	_locale = value;
}

Boolean UNIX_PrintAlertRecord::getPerceivedSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCEIVED_SEVERITY, getPerceivedSeverity());
	return true;
}

Uint16 UNIX_PrintAlertRecord::getPerceivedSeverity() const
{
	return _perceivedSeverity;
}

void UNIX_PrintAlertRecord::setPerceivedSeverity(Uint16 &value)
{
	_perceivedSeverity = value;
}

Boolean UNIX_PrintAlertRecord::getLogInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_INSTANCE_ID, getLogInstanceID());
	return true;
}

String UNIX_PrintAlertRecord::getLogInstanceID() const
{
	return _logInstanceID;
}

void UNIX_PrintAlertRecord::setLogInstanceID(String &value)
{
	_logInstanceID = value;
}

Boolean UNIX_PrintAlertRecord::getLogName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_NAME, getLogName());
	return true;
}

String UNIX_PrintAlertRecord::getLogName() const
{
	return _logName;
}

void UNIX_PrintAlertRecord::setLogName(String &value)
{
	_logName = value;
}

Boolean UNIX_PrintAlertRecord::getRecordID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_ID, getRecordID());
	return true;
}

String UNIX_PrintAlertRecord::getRecordID() const
{
	return _recordID;
}

void UNIX_PrintAlertRecord::setRecordID(String &value)
{
	_recordID = value;
}

Boolean UNIX_PrintAlertRecord::getCreationTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME_STAMP, getCreationTimeStamp());
	return true;
}

CIMDateTime UNIX_PrintAlertRecord::getCreationTimeStamp() const
{
	return _creationTimeStamp;
}

void UNIX_PrintAlertRecord::setCreationTimeStamp(CIMDateTime &value)
{
	_creationTimeStamp = value;
}

Boolean UNIX_PrintAlertRecord::getOwningEntity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNING_ENTITY, getOwningEntity());
	return true;
}

String UNIX_PrintAlertRecord::getOwningEntity() const
{
	return _owningEntity;
}

void UNIX_PrintAlertRecord::setOwningEntity(String &value)
{
	_owningEntity = value;
}

Boolean UNIX_PrintAlertRecord::getMessageID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_ID, getMessageID());
	return true;
}

String UNIX_PrintAlertRecord::getMessageID() const
{
	return _messageID;
}

void UNIX_PrintAlertRecord::setMessageID(String &value)
{
	_messageID = value;
}

Boolean UNIX_PrintAlertRecord::getMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE, getMessage());
	return true;
}

String UNIX_PrintAlertRecord::getMessage() const
{
	return _message;
}

void UNIX_PrintAlertRecord::setMessage(String &value)
{
	_message = value;
}

Boolean UNIX_PrintAlertRecord::getMessageArguments(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_ARGUMENTS, getMessageArguments());
	return true;
}

Array<String> UNIX_PrintAlertRecord::getMessageArguments() const
{
	return _messageArguments;
}

void UNIX_PrintAlertRecord::setMessageArguments(Array<String> &value)
{
	_messageArguments = value;
}

Boolean UNIX_PrintAlertRecord::getLocalizedDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALIZED_DESCRIPTION, getLocalizedDescription());
	return true;
}

String UNIX_PrintAlertRecord::getLocalizedDescription() const
{
	return _localizedDescription;
}

void UNIX_PrintAlertRecord::setLocalizedDescription(String &value)
{
	_localizedDescription = value;
}

Boolean UNIX_PrintAlertRecord::getCodeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_NAME, getCodeName());
	return true;
}

String UNIX_PrintAlertRecord::getCodeName() const
{
	return _codeName;
}

void UNIX_PrintAlertRecord::setCodeName(String &value)
{
	_codeName = value;
}

Boolean UNIX_PrintAlertRecord::getOtherCodeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CODE_NAME, getOtherCodeName());
	return true;
}

String UNIX_PrintAlertRecord::getOtherCodeName() const
{
	return _otherCodeName;
}

void UNIX_PrintAlertRecord::setOtherCodeName(String &value)
{
	_otherCodeName = value;
}

Boolean UNIX_PrintAlertRecord::getSeverityLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEVERITY_LEVEL, getSeverityLevel());
	return true;
}

Uint32 UNIX_PrintAlertRecord::getSeverityLevel() const
{
	return _severityLevel;
}

void UNIX_PrintAlertRecord::setSeverityLevel(Uint32 &value)
{
	_severityLevel = value;
}

Boolean UNIX_PrintAlertRecord::getOtherSeverityLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SEVERITY_LEVEL, getOtherSeverityLevel());
	return true;
}

String UNIX_PrintAlertRecord::getOtherSeverityLevel() const
{
	return _otherSeverityLevel;
}

void UNIX_PrintAlertRecord::setOtherSeverityLevel(String &value)
{
	_otherSeverityLevel = value;
}

Boolean UNIX_PrintAlertRecord::getComponentClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_CLASS_NAME, getComponentClassName());
	return true;
}

String UNIX_PrintAlertRecord::getComponentClassName() const
{
	return _componentClassName;
}

void UNIX_PrintAlertRecord::setComponentClassName(String &value)
{
	_componentClassName = value;
}

Boolean UNIX_PrintAlertRecord::getComponentElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_ELEMENT_NAME, getComponentElementName());
	return true;
}

String UNIX_PrintAlertRecord::getComponentElementName() const
{
	return _componentElementName;
}

void UNIX_PrintAlertRecord::setComponentElementName(String &value)
{
	_componentElementName = value;
}


void UNIX_PrintAlertRecord::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintAlertRecord");
	_generation = Uint64(0);
	_recordFormat = String ("");
	_recordData = String ("");
	_locale = String ("");
	_perceivedSeverity = Uint16(0);
	_logInstanceID = String ("");
	_logName = String ("");
	_recordID = String ("");
	_creationTimeStamp = CIMHelper::getCurrentTime();
	_owningEntity = String ("");
	_messageID = String ("");
	_message = String ("");
	_messageArguments.clear();
	_localizedDescription = String ("");
	_codeName = String ("");
	_otherCodeName = String ("");
	_severityLevel = Uint32(0);
	_otherSeverityLevel = String ("");
	_componentClassName = String ("");
	_componentElementName = String ("");

}

Boolean UNIX_PrintAlertRecord::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LogInstanceID"))
			{
				String logInstanceIDValue;
				property.getValue().get(logInstanceIDValue);
				setLogInstanceID(logInstanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "LogName"))
			{
				String logNameValue;
				property.getValue().get(logNameValue);
				setLogName(logNameValue);
			}
			else if (String::equal(property.getName().getString(), "RecordID"))
			{
				String recordIDValue;
				property.getValue().get(recordIDValue);
				setRecordID(recordIDValue);
			}
			else if (String::equal(property.getName().getString(), "CreationTimeStamp"))
			{
				CIMDateTime creationTimeStampValue;
				property.getValue().get(creationTimeStampValue);
				setCreationTimeStamp(creationTimeStampValue);
			}
			else if (String::equal(property.getName().getString(), "OwningEntity"))
			{
				String owningEntityValue;
				property.getValue().get(owningEntityValue);
				setOwningEntity(owningEntityValue);
			}
			else if (String::equal(property.getName().getString(), "MessageID"))
			{
				String messageIDValue;
				property.getValue().get(messageIDValue);
				setMessageID(messageIDValue);
			}
			else if (String::equal(property.getName().getString(), "Message"))
			{
				String messageValue;
				property.getValue().get(messageValue);
				setMessage(messageValue);
			}
			else if (String::equal(property.getName().getString(), "MessageArguments"))
			{
				Array<String> messageArgumentsValue;
				property.getValue().get(messageArgumentsValue);
				setMessageArguments(messageArgumentsValue);
			}
			else if (String::equal(property.getName().getString(), "LocalizedDescription"))
			{
				String localizedDescriptionValue;
				property.getValue().get(localizedDescriptionValue);
				setLocalizedDescription(localizedDescriptionValue);
			}
			else if (String::equal(property.getName().getString(), "CodeName"))
			{
				String codeNameValue;
				property.getValue().get(codeNameValue);
				setCodeName(codeNameValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCodeName"))
			{
				String otherCodeNameValue;
				property.getValue().get(otherCodeNameValue);
				setOtherCodeName(otherCodeNameValue);
			}
			else if (String::equal(property.getName().getString(), "SeverityLevel"))
			{
				Uint32 severityLevelValue;
				property.getValue().get(severityLevelValue);
				setSeverityLevel(severityLevelValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSeverityLevel"))
			{
				String otherSeverityLevelValue;
				property.getValue().get(otherSeverityLevelValue);
				setOtherSeverityLevel(otherSeverityLevelValue);
			}
			else if (String::equal(property.getName().getString(), "ComponentClassName"))
			{
				String componentClassNameValue;
				property.getValue().get(componentClassNameValue);
				setComponentClassName(componentClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "ComponentElementName"))
			{
				String componentElementNameValue;
				property.getValue().get(componentElementNameValue);
				setComponentElementName(componentElementNameValue);
			}
	}
	return true;
}


Boolean UNIX_PrintAlertRecord::initialize()
{
	return false;
}

Boolean UNIX_PrintAlertRecord::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PrintAlertRecord");
	_generation = Uint64(0);
	_recordFormat = String ("");
	_recordData = String ("");
	_locale = String ("");
	_perceivedSeverity = Uint16(0);
	_logInstanceID = String ("");
	_logName = String ("");
	_recordID = String ("");
	_creationTimeStamp = CIMHelper::getCurrentTime();
	_owningEntity = String ("");
	_messageID = String ("");
	_message = String ("");
	_messageArguments.clear();
	_localizedDescription = String ("");
	_codeName = String ("");
	_otherCodeName = String ("");
	_severityLevel = Uint32(0);
	_otherSeverityLevel = String ("");
	_componentClassName = String ("");
	_componentElementName = String ("");
	
	return false;
}

Boolean UNIX_PrintAlertRecord::finalize()
{
	return false;
}


Boolean UNIX_PrintAlertRecord::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrintAlertRecord::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintAlertRecord::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintAlertRecord::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrintAlertRecord::validateInstance()
{
	return true;
}

