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


UNIX_ParametersForMethod::UNIX_ParametersForMethod(void)
{
}

UNIX_ParametersForMethod::~UNIX_ParametersForMethod(void)
{
}

Boolean UNIX_ParametersForMethod::getParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETERS, getParameters());
	return true;
}

CIMInstance UNIX_ParametersForMethod::getParameters() const
{
	return _parameters;
}

void UNIX_ParametersForMethod::setParameters(CIMInstance &value)
{
	_parameters = value;
}

Boolean UNIX_ParametersForMethod::getTheMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THE_METHOD, getTheMethod());
	return true;
}

CIMInstance UNIX_ParametersForMethod::getTheMethod() const
{
	return _theMethod;
}

void UNIX_ParametersForMethod::setTheMethod(CIMInstance &value)
{
	_theMethod = value;
}

Boolean UNIX_ParametersForMethod::getMethodName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METHOD_NAME, getMethodName());
	return true;
}

String UNIX_ParametersForMethod::getMethodName() const
{
	return _methodName;
}

void UNIX_ParametersForMethod::setMethodName(String &value)
{
	_methodName = value;
}


void UNIX_ParametersForMethod::clearInstance()
{

	_parameters = CIMInstance(CIMName("CIM_MethodParameters"));
	// _theMethod = CIMInstance(CIMName("CIM_ManagedElement"));
	_methodName = String ("");

}

Boolean UNIX_ParametersForMethod::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Parameters"))
			{
				CIMInstance parametersValue;
				property.getValue().get(parametersValue);
				setParameters(parametersValue);
			}
			else if (String::equal(property.getName().getString(), "TheMethod"))
			{
				CIMInstance theMethodValue;
				property.getValue().get(theMethodValue);
				setTheMethod(theMethodValue);
			}
			else if (String::equal(property.getName().getString(), "MethodName"))
			{
				String methodNameValue;
				property.getValue().get(methodNameValue);
				setMethodName(methodNameValue);
			}
	}
	return true;
}


Boolean UNIX_ParametersForMethod::initialize()
{
	return false;
}

Boolean UNIX_ParametersForMethod::load(int &pIndex)
{
	
	_parameters = CIMInstance(CIMName("CIM_MethodParameters"));
	// _theMethod = CIMInstance(CIMName("CIM_ManagedElement"));
	_methodName = String ("");
	
	return false;
}

Boolean UNIX_ParametersForMethod::finalize()
{
	return false;
}


Boolean UNIX_ParametersForMethod::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String parametersKey;
	String theMethodKey;
	String methodNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_PARAMETERS)) parametersKey = kb.getValue();
		else if (keyName.equal(PROPERTY_THE_METHOD)) theMethodKey = kb.getValue();
		else if (keyName.equal(PROPERTY_METHOD_NAME)) methodNameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getParameters().getPath().toString(), parametersKey)) && 
			(String::equalNoCase(getTheMethod().getPath().toString(), theMethodKey)) && 
			(String::equalNoCase(getMethodName(), methodNameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ParametersForMethod::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ParametersForMethod::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ParametersForMethod::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ParametersForMethod::validateInstance()
{
	return true;
}

