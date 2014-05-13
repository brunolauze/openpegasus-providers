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


UNIX_LogRecord::UNIX_LogRecord(void)
{
}

UNIX_LogRecord::~UNIX_LogRecord(void)
{
}

Boolean UNIX_LogRecord::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LogRecord::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LogRecord::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LogRecord::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LogRecord::getCaption() const
{
	return _caption;
}

void UNIX_LogRecord::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LogRecord::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LogRecord::getDescription() const
{
	return _description;
}

void UNIX_LogRecord::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LogRecord::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LogRecord::getElementName() const
{
	return _elementName;
}

void UNIX_LogRecord::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LogRecord::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LogRecord::getGeneration() const
{
	return _generation;
}

void UNIX_LogRecord::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LogRecord::getRecordFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_FORMAT, getRecordFormat());
	return true;
}

String UNIX_LogRecord::getRecordFormat() const
{
	return _recordFormat;
}

void UNIX_LogRecord::setRecordFormat(String &value)
{
	_recordFormat = value;
}

Boolean UNIX_LogRecord::getRecordData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_DATA, getRecordData());
	return true;
}

String UNIX_LogRecord::getRecordData() const
{
	return _recordData;
}

void UNIX_LogRecord::setRecordData(String &value)
{
	_recordData = value;
}

Boolean UNIX_LogRecord::getLocale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALE, getLocale());
	return true;
}

String UNIX_LogRecord::getLocale() const
{
	return _locale;
}

void UNIX_LogRecord::setLocale(String &value)
{
	_locale = value;
}

Boolean UNIX_LogRecord::getPerceivedSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCEIVED_SEVERITY, getPerceivedSeverity());
	return true;
}

Uint16 UNIX_LogRecord::getPerceivedSeverity() const
{
	return _perceivedSeverity;
}

void UNIX_LogRecord::setPerceivedSeverity(Uint16 &value)
{
	_perceivedSeverity = value;
}

Boolean UNIX_LogRecord::getLogCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_CREATION_CLASS_NAME, getLogCreationClassName());
	return true;
}

String UNIX_LogRecord::getLogCreationClassName() const
{
	return _logCreationClassName;
}

void UNIX_LogRecord::setLogCreationClassName(String &value)
{
	_logCreationClassName = value;
}

Boolean UNIX_LogRecord::getLogName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_NAME, getLogName());
	return true;
}

String UNIX_LogRecord::getLogName() const
{
	return _logName;
}

void UNIX_LogRecord::setLogName(String &value)
{
	_logName = value;
}

Boolean UNIX_LogRecord::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LogRecord::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_LogRecord::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_LogRecord::getRecordID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_ID, getRecordID());
	return true;
}

String UNIX_LogRecord::getRecordID() const
{
	return _recordID;
}

void UNIX_LogRecord::setRecordID(String &value)
{
	_recordID = value;
}

Boolean UNIX_LogRecord::getMessageTimestamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_TIMESTAMP, getMessageTimestamp());
	return true;
}

CIMDateTime UNIX_LogRecord::getMessageTimestamp() const
{
	return _messageTimestamp;
}

void UNIX_LogRecord::setMessageTimestamp(CIMDateTime &value)
{
	_messageTimestamp = value;
}

Boolean UNIX_LogRecord::getDataFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_FORMAT, getDataFormat());
	return true;
}

String UNIX_LogRecord::getDataFormat() const
{
	return _dataFormat;
}

void UNIX_LogRecord::setDataFormat(String &value)
{
	_dataFormat = value;
}


void UNIX_LogRecord::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LogRecord");
	_generation = Uint64(0);
	_recordFormat = String ("");
	_recordData = String ("");
	_locale = String ("");
	_perceivedSeverity = Uint16(0);
	_logCreationClassName = String ("");
	_logName = String ("");
	_creationClassName = String("UNIX_LogRecord");
	_recordID = String ("");
	_messageTimestamp = CIMHelper::getCurrentTime();
	_dataFormat = String ("");

}

Boolean UNIX_LogRecord::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LogCreationClassName"))
			{
				String logCreationClassNameValue;
				property.getValue().get(logCreationClassNameValue);
				setLogCreationClassName(logCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "LogName"))
			{
				String logNameValue;
				property.getValue().get(logNameValue);
				setLogName(logNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "RecordID"))
			{
				String recordIDValue;
				property.getValue().get(recordIDValue);
				setRecordID(recordIDValue);
			}
			else if (String::equal(property.getName().getString(), "MessageTimestamp"))
			{
				CIMDateTime messageTimestampValue;
				property.getValue().get(messageTimestampValue);
				setMessageTimestamp(messageTimestampValue);
			}
			else if (String::equal(property.getName().getString(), "DataFormat"))
			{
				String dataFormatValue;
				property.getValue().get(dataFormatValue);
				setDataFormat(dataFormatValue);
			}
	}
	return true;
}


Boolean UNIX_LogRecord::initialize()
{
	return false;
}

Boolean UNIX_LogRecord::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LogRecord");
	_generation = Uint64(0);
	_recordFormat = String ("");
	_recordData = String ("");
	_locale = String ("");
	_perceivedSeverity = Uint16(0);
	_logCreationClassName = String ("");
	_logName = String ("");
	_creationClassName = String("UNIX_LogRecord");
	_recordID = String ("");
	_messageTimestamp = CIMHelper::getCurrentTime();
	_dataFormat = String ("");
	
	return false;
}

Boolean UNIX_LogRecord::finalize()
{
	return false;
}


Boolean UNIX_LogRecord::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String logCreationClassNameKey;
	String logNameKey;
	String creationClassNameKey;
	String recordIDKey;
	String messageTimestampKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_LOG_CREATION_CLASS_NAME)) logCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_LOG_NAME)) logNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_RECORD_ID)) recordIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_MESSAGE_TIMESTAMP)) messageTimestampKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getLogCreationClassName(), logCreationClassNameKey)) && 
			(String::equalNoCase(getLogName(), logNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getRecordID(), recordIDKey)) && 
			(String::equalNoCase(getMessageTimestamp().toString(), messageTimestampKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_LogRecord::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogRecord::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogRecord::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogRecord::validateInstance()
{
	return true;
}

