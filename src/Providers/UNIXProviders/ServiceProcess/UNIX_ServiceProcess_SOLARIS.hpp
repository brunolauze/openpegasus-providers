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


UNIX_ServiceProcess::UNIX_ServiceProcess(void)
{
}

UNIX_ServiceProcess::~UNIX_ServiceProcess(void)
{
}

Boolean UNIX_ServiceProcess::getService(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE, getService());
	return true;
}

CIMInstance UNIX_ServiceProcess::getService() const
{
	return _service;
}

void UNIX_ServiceProcess::setService(CIMInstance &value)
{
	_service = value;
}

Boolean UNIX_ServiceProcess::getProcess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS, getProcess());
	return true;
}

CIMInstance UNIX_ServiceProcess::getProcess() const
{
	return _process;
}

void UNIX_ServiceProcess::setProcess(CIMInstance &value)
{
	_process = value;
}

Boolean UNIX_ServiceProcess::getExecutionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_TYPE, getExecutionType());
	return true;
}

Uint16 UNIX_ServiceProcess::getExecutionType() const
{
	return _executionType;
}

void UNIX_ServiceProcess::setExecutionType(Uint16 &value)
{
	_executionType = value;
}


void UNIX_ServiceProcess::clearInstance()
{

	_service = CIMInstance(CIMName("CIM_FibreProtocolService"));
	_process = CIMInstance(CIMName("CIM_Process"));
	_executionType = Uint16(0);

}

Boolean UNIX_ServiceProcess::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Service"))
			{
				CIMInstance serviceValue;
				property.getValue().get(serviceValue);
				setService(serviceValue);
			}
			else if (String::equal(property.getName().getString(), "Process"))
			{
				CIMInstance processValue;
				property.getValue().get(processValue);
				setProcess(processValue);
			}
			else if (String::equal(property.getName().getString(), "ExecutionType"))
			{
				Uint16 executionTypeValue;
				property.getValue().get(executionTypeValue);
				setExecutionType(executionTypeValue);
			}
	}
	return true;
}


Boolean UNIX_ServiceProcess::initialize()
{
	return false;
}

Boolean UNIX_ServiceProcess::load(int &pIndex)
{
	
	_service = CIMInstance(CIMName("CIM_FibreProtocolService"));
	_process = CIMInstance(CIMName("CIM_Process"));
	_executionType = Uint16(0);
	
	return false;
}

Boolean UNIX_ServiceProcess::finalize()
{
	return false;
}


Boolean UNIX_ServiceProcess::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String serviceKey;
	String processKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SERVICE)) serviceKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PROCESS)) processKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getService().getPath().toString(), serviceKey)) && 
			(String::equalNoCase(getProcess().getPath().toString(), processKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ServiceProcess::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ServiceProcess::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ServiceProcess::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ServiceProcess::validateInstance()
{
	return true;
}

