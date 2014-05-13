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


UNIX_DiagnosticResultForMSE::UNIX_DiagnosticResultForMSE(void)
{
}

UNIX_DiagnosticResultForMSE::~UNIX_DiagnosticResultForMSE(void)
{
}

Boolean UNIX_DiagnosticResultForMSE::getResult(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESULT, getResult());
	return true;
}

CIMInstance UNIX_DiagnosticResultForMSE::getResult() const
{
	return _result;
}

void UNIX_DiagnosticResultForMSE::setResult(CIMInstance &value)
{
	_result = value;
}

Boolean UNIX_DiagnosticResultForMSE::getSystemElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_ELEMENT, getSystemElement());
	return true;
}

CIMInstance UNIX_DiagnosticResultForMSE::getSystemElement() const
{
	return _systemElement;
}

void UNIX_DiagnosticResultForMSE::setSystemElement(CIMInstance &value)
{
	_systemElement = value;
}


void UNIX_DiagnosticResultForMSE::clearInstance()
{

	_result = CIMInstance(CIMName("CIM_DiagnosticResult"));
	// _systemElement = CIMInstance(CIMName("CIM_ManagedSystemElement"));

}

Boolean UNIX_DiagnosticResultForMSE::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Result"))
			{
				CIMInstance resultValue;
				property.getValue().get(resultValue);
				setResult(resultValue);
			}
			else if (String::equal(property.getName().getString(), "SystemElement"))
			{
				CIMInstance systemElementValue;
				property.getValue().get(systemElementValue);
				setSystemElement(systemElementValue);
			}
	}
	return true;
}


Boolean UNIX_DiagnosticResultForMSE::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticResultForMSE::load(int &pIndex)
{
	
	_result = CIMInstance(CIMName("CIM_DiagnosticResult"));
	// _systemElement = CIMInstance(CIMName("CIM_ManagedSystemElement"));
	
	return false;
}

Boolean UNIX_DiagnosticResultForMSE::finalize()
{
	return false;
}


Boolean UNIX_DiagnosticResultForMSE::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String resultKey;
	String systemElementKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_RESULT)) resultKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_ELEMENT)) systemElementKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getResult().getPath().toString(), resultKey)) && 
			(String::equalNoCase(getSystemElement().getPath().toString(), systemElementKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_DiagnosticResultForMSE::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticResultForMSE::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticResultForMSE::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticResultForMSE::validateInstance()
{
	return true;
}

