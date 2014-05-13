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


UNIX_UseOfMessageLog::UNIX_UseOfMessageLog(void)
{
}

UNIX_UseOfMessageLog::~UNIX_UseOfMessageLog(void)
{
}

Boolean UNIX_UseOfMessageLog::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_UseOfMessageLog::getAntecedent() const
{
	return _antecedent;
}

void UNIX_UseOfMessageLog::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_UseOfMessageLog::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_UseOfMessageLog::getDependent() const
{
	return _dependent;
}

void UNIX_UseOfMessageLog::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_UseOfMessageLog::getRecordedData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORDED_DATA, getRecordedData());
	return true;
}

String UNIX_UseOfMessageLog::getRecordedData() const
{
	return _recordedData;
}

void UNIX_UseOfMessageLog::setRecordedData(String &value)
{
	_recordedData = value;
}


void UNIX_UseOfMessageLog::clearInstance()
{

	_antecedent = _antecedentMessageLogProvider.constructInstance(
		CIMName("UNIX_MessageLog"),
		CIMNamespaceName("root/cimv2"),
		_antecedentMessageLog);
	// _dependent = CIMInstance(CIMName("CIM_ManagedSystemElement"));
	_recordedData = String ("");

}

Boolean UNIX_UseOfMessageLog::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Antecedent"))
			{
				CIMInstance antecedentValue;
				property.getValue().get(antecedentValue);
				setAntecedent(antecedentValue);
			}
			else if (String::equal(property.getName().getString(), "Dependent"))
			{
				CIMInstance dependentValue;
				property.getValue().get(dependentValue);
				setDependent(dependentValue);
			}
			else if (String::equal(property.getName().getString(), "RecordedData"))
			{
				String recordedDataValue;
				property.getValue().get(recordedDataValue);
				setRecordedData(recordedDataValue);
			}
	}
	return true;
}


Boolean UNIX_UseOfMessageLog::initialize()
{
	/* Related Instances are Abstract */
	return false;
	return true;
}
Boolean UNIX_UseOfMessageLog::load(int &pIndex)
{

	_antecedent = _antecedentMessageLogProvider.constructInstance(
		CIMName("UNIX_MessageLog"),
		CIMNamespaceName("root/cimv2"),
		_antecedentMessageLog);
	// _dependent = CIMInstance(CIMName("CIM_ManagedSystemElement"));
	_recordedData = String ("");

	return false;
}

Boolean UNIX_UseOfMessageLog::finalize()
{
	_antecedentMessageLog.finalize();
	return true;
}


Boolean UNIX_UseOfMessageLog::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String antecedentKey;
	String dependentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ANTECEDENT)) antecedentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEPENDENT)) dependentKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getAntecedent().getPath().toString(), antecedentKey)) && 
			(String::equalNoCase(getDependent().getPath().toString(), dependentKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_UseOfMessageLog::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UseOfMessageLog::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UseOfMessageLog::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UseOfMessageLog::validateInstance()
{
	return true;
}

