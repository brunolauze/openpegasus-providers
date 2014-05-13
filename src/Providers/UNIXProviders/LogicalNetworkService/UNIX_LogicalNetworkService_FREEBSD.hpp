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


UNIX_LogicalNetworkService::UNIX_LogicalNetworkService(void)
{
}

UNIX_LogicalNetworkService::~UNIX_LogicalNetworkService(void)
{
}

Boolean UNIX_LogicalNetworkService::getNetwork(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK, getNetwork());
	return true;
}

CIMInstance UNIX_LogicalNetworkService::getNetwork() const
{
	return _network;
}

void UNIX_LogicalNetworkService::setNetwork(CIMInstance &value)
{
	_network = value;
}

Boolean UNIX_LogicalNetworkService::getNetworkService(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_SERVICE, getNetworkService());
	return true;
}

CIMInstance UNIX_LogicalNetworkService::getNetworkService() const
{
	return _networkService;
}

void UNIX_LogicalNetworkService::setNetworkService(CIMInstance &value)
{
	_networkService = value;
}

Boolean UNIX_LogicalNetworkService::getContainmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTAINMENT_TYPE, getContainmentType());
	return true;
}

Uint16 UNIX_LogicalNetworkService::getContainmentType() const
{
	return _containmentType;
}

void UNIX_LogicalNetworkService::setContainmentType(Uint16 &value)
{
	_containmentType = value;
}


void UNIX_LogicalNetworkService::clearInstance()
{

	_network = CIMInstance(CIMName("CIM_IPXNetwork"));
	_networkService = CIMInstance(CIMName("CIM_BGPService"));
	_containmentType = Uint16(0);

}

Boolean UNIX_LogicalNetworkService::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Network"))
			{
				CIMInstance networkValue;
				property.getValue().get(networkValue);
				setNetwork(networkValue);
			}
			else if (String::equal(property.getName().getString(), "NetworkService"))
			{
				CIMInstance networkServiceValue;
				property.getValue().get(networkServiceValue);
				setNetworkService(networkServiceValue);
			}
			else if (String::equal(property.getName().getString(), "ContainmentType"))
			{
				Uint16 containmentTypeValue;
				property.getValue().get(containmentTypeValue);
				setContainmentType(containmentTypeValue);
			}
	}
	return true;
}


Boolean UNIX_LogicalNetworkService::initialize()
{
	return false;
}

Boolean UNIX_LogicalNetworkService::load(int &pIndex)
{
	
	_network = CIMInstance(CIMName("CIM_IPXNetwork"));
	_networkService = CIMInstance(CIMName("CIM_BGPService"));
	_containmentType = Uint16(0);
	
	return false;
}

Boolean UNIX_LogicalNetworkService::finalize()
{
	return false;
}


Boolean UNIX_LogicalNetworkService::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String networkKey;
	String networkServiceKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NETWORK)) networkKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NETWORK_SERVICE)) networkServiceKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getNetwork().getPath().toString(), networkKey)) && 
			(String::equalNoCase(getNetworkService().getPath().toString(), networkServiceKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_LogicalNetworkService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogicalNetworkService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogicalNetworkService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LogicalNetworkService::validateInstance()
{
	return true;
}

