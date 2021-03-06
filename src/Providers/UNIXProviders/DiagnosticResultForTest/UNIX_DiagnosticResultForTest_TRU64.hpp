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


UNIX_DiagnosticResultForTest::UNIX_DiagnosticResultForTest(void)
{
}

UNIX_DiagnosticResultForTest::~UNIX_DiagnosticResultForTest(void)
{
}

Boolean UNIX_DiagnosticResultForTest::getDiagnosticResult(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIAGNOSTIC_RESULT, getDiagnosticResult());
	return true;
}

CIMInstance UNIX_DiagnosticResultForTest::getDiagnosticResult() const
{
	return _diagnosticResult;
}

void UNIX_DiagnosticResultForTest::setDiagnosticResult(CIMInstance &value)
{
	_diagnosticResult = value;
}

Boolean UNIX_DiagnosticResultForTest::getDiagnosticTest(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIAGNOSTIC_TEST, getDiagnosticTest());
	return true;
}

CIMInstance UNIX_DiagnosticResultForTest::getDiagnosticTest() const
{
	return _diagnosticTest;
}

void UNIX_DiagnosticResultForTest::setDiagnosticTest(CIMInstance &value)
{
	_diagnosticTest = value;
}


void UNIX_DiagnosticResultForTest::clearInstance()
{

	_diagnosticResult = CIMInstance(CIMName("CIM_DiagnosticResult"));
	_diagnosticTest = CIMInstance(CIMName("CIM_FCHBADiagnosticTest"));

}

Boolean UNIX_DiagnosticResultForTest::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "DiagnosticResult"))
			{
				CIMInstance diagnosticResultValue;
				property.getValue().get(diagnosticResultValue);
				setDiagnosticResult(diagnosticResultValue);
			}
			else if (String::equal(property.getName().getString(), "DiagnosticTest"))
			{
				CIMInstance diagnosticTestValue;
				property.getValue().get(diagnosticTestValue);
				setDiagnosticTest(diagnosticTestValue);
			}
	}
	return true;
}


Boolean UNIX_DiagnosticResultForTest::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticResultForTest::load(int &pIndex)
{
	
	_diagnosticResult = CIMInstance(CIMName("CIM_DiagnosticResult"));
	_diagnosticTest = CIMInstance(CIMName("CIM_FCHBADiagnosticTest"));
	
	return false;
}

Boolean UNIX_DiagnosticResultForTest::finalize()
{
	return false;
}


Boolean UNIX_DiagnosticResultForTest::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String diagnosticResultKey;
	String diagnosticTestKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_DIAGNOSTIC_RESULT)) diagnosticResultKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DIAGNOSTIC_TEST)) diagnosticTestKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getDiagnosticResult().getPath().toString(), diagnosticResultKey)) && 
			(String::equalNoCase(getDiagnosticTest().getPath().toString(), diagnosticTestKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_DiagnosticResultForTest::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticResultForTest::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticResultForTest::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticResultForTest::validateInstance()
{
	return true;
}

