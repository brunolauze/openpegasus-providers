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


UNIX_LogOfIndication::UNIX_LogOfIndication(void)
{
}

UNIX_LogOfIndication::~UNIX_LogOfIndication(void)
{
}

Boolean UNIX_LogOfIndication::getListenerDestination(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LISTENER_DESTINATION, getListenerDestination());
	return true;
}

CIMInstance UNIX_LogOfIndication::getListenerDestination() const
{
	return _listenerDestination;
}

void UNIX_LogOfIndication::setListenerDestination(CIMInstance &value)
{
	_listenerDestination = value;
}

Boolean UNIX_LogOfIndication::getLog(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG, getLog());
	return true;
}

CIMInstance UNIX_LogOfIndication::getLog() const
{
	return _log;
}

void UNIX_LogOfIndication::setLog(CIMInstance &value)
{
	_log = value;
}


void UNIX_LogOfIndication::clearInstance()
{

	_listenerDestination = CIMInstance(CIMName("CIM_ListenerDestinationLog"));
	_log = CIMInstance(CIMName("CIM_MessageLog"));

}

Boolean UNIX_LogOfIndication::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "ListenerDestination"))
			{
				CIMInstance listenerDestinationValue;
				property.getValue().get(listenerDestinationValue);
				setListenerDestination(listenerDestinationValue);
			}
			else if (String::equal(property.getName().getString(), "Log"))
			{
				CIMInstance logValue;
				property.getValue().get(logValue);
				setLog(logValue);
			}
	}
	return true;
}


Boolean UNIX_LogOfIndication::initialize()
{
	return false;
}

Boolean UNIX_LogOfIndication::load(int &pIndex)
{
	
	_listenerDestination = CIMInstance(CIMName("CIM_ListenerDestinationLog"));
	_log = CIMInstance(CIMName("CIM_MessageLog"));
	
	return false;
}

Boolean UNIX_LogOfIndication::finalize()
{
	return false;
}


Boolean UNIX_LogOfIndication::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String listenerDestinationKey;
	String logKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_LISTENER_DESTINATION)) listenerDestinationKey = kb.getValue();
		else if (keyName.equal(PROPERTY_LOG)) logKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getListenerDestination().getPath().toString(), listenerDestinationKey)) && 
			(String::equalNoCase(getLog().getPath().toString(), logKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_LogOfIndication::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogOfIndication::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogOfIndication::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogOfIndication::validateInstance()
{
	return true;
}

