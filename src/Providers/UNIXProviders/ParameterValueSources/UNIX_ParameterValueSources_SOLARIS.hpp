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


UNIX_ParameterValueSources::UNIX_ParameterValueSources(void)
{
}

UNIX_ParameterValueSources::~UNIX_ParameterValueSources(void)
{
}

Boolean UNIX_ParameterValueSources::getParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETERS, getParameters());
	return true;
}

CIMInstance UNIX_ParameterValueSources::getParameters() const
{
	return _parameters;
}

void UNIX_ParameterValueSources::setParameters(CIMInstance &value)
{
	_parameters = value;
}

Boolean UNIX_ParameterValueSources::getValueSource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALUE_SOURCE, getValueSource());
	return true;
}

CIMInstance UNIX_ParameterValueSources::getValueSource() const
{
	return _valueSource;
}

void UNIX_ParameterValueSources::setValueSource(CIMInstance &value)
{
	_valueSource = value;
}


void UNIX_ParameterValueSources::clearInstance()
{

	_parameters = CIMInstance(CIMName("CIM_MethodParameters"));
	// _valueSource = CIMInstance(CIMName("CIM_ManagedElement"));

}

Boolean UNIX_ParameterValueSources::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ValueSource"))
			{
				CIMInstance valueSourceValue;
				property.getValue().get(valueSourceValue);
				setValueSource(valueSourceValue);
			}
	}
	return true;
}


Boolean UNIX_ParameterValueSources::initialize()
{
	return false;
}

Boolean UNIX_ParameterValueSources::load(int &pIndex)
{
	
	_parameters = CIMInstance(CIMName("CIM_MethodParameters"));
	// _valueSource = CIMInstance(CIMName("CIM_ManagedElement"));
	
	return false;
}

Boolean UNIX_ParameterValueSources::finalize()
{
	return false;
}


Boolean UNIX_ParameterValueSources::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String parametersKey;
	String valueSourceKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_PARAMETERS)) parametersKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VALUE_SOURCE)) valueSourceKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getParameters().getPath().toString(), parametersKey)) && 
			(String::equalNoCase(getValueSource().getPath().toString(), valueSourceKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ParameterValueSources::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ParameterValueSources::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ParameterValueSources::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ParameterValueSources::validateInstance()
{
	return true;
}

