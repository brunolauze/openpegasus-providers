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


UNIX_CorrespondingSettingDataRecord::UNIX_CorrespondingSettingDataRecord(void)
{
}

UNIX_CorrespondingSettingDataRecord::~UNIX_CorrespondingSettingDataRecord(void)
{
}

Boolean UNIX_CorrespondingSettingDataRecord::getDataRecord(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_RECORD, getDataRecord());
	return true;
}

CIMInstance UNIX_CorrespondingSettingDataRecord::getDataRecord() const
{
	return _dataRecord;
}

void UNIX_CorrespondingSettingDataRecord::setDataRecord(CIMInstance &value)
{
	_dataRecord = value;
}

Boolean UNIX_CorrespondingSettingDataRecord::getSettingsRecord(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTINGS_RECORD, getSettingsRecord());
	return true;
}

CIMInstance UNIX_CorrespondingSettingDataRecord::getSettingsRecord() const
{
	return _settingsRecord;
}

void UNIX_CorrespondingSettingDataRecord::setSettingsRecord(CIMInstance &value)
{
	_settingsRecord = value;
}


void UNIX_CorrespondingSettingDataRecord::clearInstance()
{

	_dataRecord = CIMInstance(CIMName("CIM_DiagnosticServiceRecord"));
	_settingsRecord = CIMInstance(CIMName("CIM_DiagnosticSettingDataRecord"));

}

Boolean UNIX_CorrespondingSettingDataRecord::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "DataRecord"))
			{
				CIMInstance dataRecordValue;
				property.getValue().get(dataRecordValue);
				setDataRecord(dataRecordValue);
			}
			else if (String::equal(property.getName().getString(), "SettingsRecord"))
			{
				CIMInstance settingsRecordValue;
				property.getValue().get(settingsRecordValue);
				setSettingsRecord(settingsRecordValue);
			}
	}
	return true;
}


Boolean UNIX_CorrespondingSettingDataRecord::initialize()
{
	return false;
}

Boolean UNIX_CorrespondingSettingDataRecord::load(int &pIndex)
{
	
	_dataRecord = CIMInstance(CIMName("CIM_DiagnosticServiceRecord"));
	_settingsRecord = CIMInstance(CIMName("CIM_DiagnosticSettingDataRecord"));
	
	return false;
}

Boolean UNIX_CorrespondingSettingDataRecord::finalize()
{
	return false;
}


Boolean UNIX_CorrespondingSettingDataRecord::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String dataRecordKey;
	String settingsRecordKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_DATA_RECORD)) dataRecordKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SETTINGS_RECORD)) settingsRecordKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getDataRecord().getPath().toString(), dataRecordKey)) && 
			(String::equalNoCase(getSettingsRecord().getPath().toString(), settingsRecordKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_CorrespondingSettingDataRecord::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CorrespondingSettingDataRecord::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CorrespondingSettingDataRecord::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CorrespondingSettingDataRecord::validateInstance()
{
	return true;
}

