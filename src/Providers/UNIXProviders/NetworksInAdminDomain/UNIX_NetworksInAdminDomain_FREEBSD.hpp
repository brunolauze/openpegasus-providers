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


UNIX_NetworksInAdminDomain::UNIX_NetworksInAdminDomain(void)
{
}

UNIX_NetworksInAdminDomain::~UNIX_NetworksInAdminDomain(void)
{
}

Boolean UNIX_NetworksInAdminDomain::getDomain(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOMAIN, getDomain());
	return true;
}

CIMInstance UNIX_NetworksInAdminDomain::getDomain() const
{
	return _domain;
}

void UNIX_NetworksInAdminDomain::setDomain(CIMInstance &value)
{
	_domain = value;
}

Boolean UNIX_NetworksInAdminDomain::getNetwork(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK, getNetwork());
	return true;
}

CIMInstance UNIX_NetworksInAdminDomain::getNetwork() const
{
	return _network;
}

void UNIX_NetworksInAdminDomain::setNetwork(CIMInstance &value)
{
	_network = value;
}


void UNIX_NetworksInAdminDomain::clearInstance()
{

	_domain = CIMInstance(CIMName("CIM_ReusablePolicyContainer"));
	_network = CIMInstance(CIMName("CIM_IPXNetwork"));

}

Boolean UNIX_NetworksInAdminDomain::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Domain"))
			{
				CIMInstance domainValue;
				property.getValue().get(domainValue);
				setDomain(domainValue);
			}
			else if (String::equal(property.getName().getString(), "Network"))
			{
				CIMInstance networkValue;
				property.getValue().get(networkValue);
				setNetwork(networkValue);
			}
	}
	return true;
}


Boolean UNIX_NetworksInAdminDomain::initialize()
{
	return false;
}

Boolean UNIX_NetworksInAdminDomain::load(int &pIndex)
{
	
	_domain = CIMInstance(CIMName("CIM_ReusablePolicyContainer"));
	_network = CIMInstance(CIMName("CIM_IPXNetwork"));
	
	return false;
}

Boolean UNIX_NetworksInAdminDomain::finalize()
{
	return false;
}


Boolean UNIX_NetworksInAdminDomain::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String domainKey;
	String networkKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_DOMAIN)) domainKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NETWORK)) networkKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getDomain().getPath().toString(), domainKey)) && 
			(String::equalNoCase(getNetwork().getPath().toString(), networkKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_NetworksInAdminDomain::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworksInAdminDomain::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworksInAdminDomain::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworksInAdminDomain::validateInstance()
{
	return true;
}

