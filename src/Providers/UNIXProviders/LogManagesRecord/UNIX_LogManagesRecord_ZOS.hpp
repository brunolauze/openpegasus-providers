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


UNIX_LogManagesRecord::UNIX_LogManagesRecord(void)
{
}

UNIX_LogManagesRecord::~UNIX_LogManagesRecord(void)
{
}

Boolean UNIX_LogManagesRecord::getLog(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG, getLog());
	return true;
}

CIMInstance UNIX_LogManagesRecord::getLog() const
{
	return _log;
}

void UNIX_LogManagesRecord::setLog(CIMInstance &value)
{
	_log = value;
}

Boolean UNIX_LogManagesRecord::getRecord(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD, getRecord());
	return true;
}

CIMInstance UNIX_LogManagesRecord::getRecord() const
{
	return _record;
}

void UNIX_LogManagesRecord::setRecord(CIMInstance &value)
{
	_record = value;
}


void UNIX_LogManagesRecord::clearInstance()
{

	_log = CIMInstance(CIMName("CIM_MessageLog"));
	_record = CIMInstance(CIMName("CIM_LogRecord"));

}

Boolean UNIX_LogManagesRecord::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Log"))
			{
				CIMInstance logValue;
				property.getValue().get(logValue);
				setLog(logValue);
			}
			else if (String::equal(property.getName().getString(), "Record"))
			{
				CIMInstance recordValue;
				property.getValue().get(recordValue);
				setRecord(recordValue);
			}
	}
	return true;
}


Boolean UNIX_LogManagesRecord::initialize()
{
	return false;
}

Boolean UNIX_LogManagesRecord::load(int &pIndex)
{
	
	_log = CIMInstance(CIMName("CIM_MessageLog"));
	_record = CIMInstance(CIMName("CIM_LogRecord"));
	
	return false;
}

Boolean UNIX_LogManagesRecord::finalize()
{
	return false;
}


Boolean UNIX_LogManagesRecord::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String logKey;
	String recordKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_LOG)) logKey = kb.getValue();
		else if (keyName.equal(PROPERTY_RECORD)) recordKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getLog().getPath().toString(), logKey)) && 
			(String::equalNoCase(getRecord().getPath().toString(), recordKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_LogManagesRecord::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogManagesRecord::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogManagesRecord::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogManagesRecord::validateInstance()
{
	return true;
}

