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


UNIX_UsersCredential::UNIX_UsersCredential(void)
{
}

UNIX_UsersCredential::~UNIX_UsersCredential(void)
{
}

Boolean UNIX_UsersCredential::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_UsersCredential::getAntecedent() const
{
	return _antecedent;
}

void UNIX_UsersCredential::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_UsersCredential::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_UsersCredential::getDependent() const
{
	return _dependent;
}

void UNIX_UsersCredential::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_UsersCredential::clearInstance()
{

	_antecedent = _antecedentUnsignedPublicKeyProvider.constructInstance(
		CIMName("UNIX_UnsignedPublicKey"),
		CIMNamespaceName("root/cimv2"),
		_antecedentUnsignedPublicKey);
	_dependent = _dependentUsersAccessProvider.constructInstance(
		CIMName("UNIX_UsersAccess"),
		CIMNamespaceName("root/cimv2"),
		_dependentUsersAccess);

}

Boolean UNIX_UsersCredential::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_UsersCredential::initialize()
{
	_antecedentUnsignedPublicKey.initialize();
	_antecedentNamedSharedIKESecret.initialize();
	_antecedentFingerprintImage.initialize();
	_antecedentUnsignedCredential.initialize();
	_antecedentSharedCredential.initialize();
	_antecedentKerberosCredential.initialize();
	_antecedentKerberosTicket.initialize();
	_antecedentNamedCredential.initialize();
	_antecedentX509Certificate.initialize();
	_antecedentX509CRL.initialize();
	_antecedentPublicKeyCertificate.initialize();
	_antecedentFingerprintTemplate.initialize();
	_antecedentSharedSecret.initialize();
	_dependentUsersAccess.initialize();
	return true;
}
Boolean UNIX_UsersCredential::load(int &pIndex)
{

	_antecedent = _antecedentUnsignedPublicKeyProvider.constructInstance(
		CIMName("UNIX_UnsignedPublicKey"),
		CIMNamespaceName("root/cimv2"),
		_antecedentUnsignedPublicKey);
	_dependent = _dependentUsersAccessProvider.constructInstance(
		CIMName("UNIX_UsersAccess"),
		CIMNamespaceName("root/cimv2"),
		_dependentUsersAccess);

	return false;
}

Boolean UNIX_UsersCredential::finalize()
{
	_antecedentUnsignedPublicKey.finalize();
	_antecedentNamedSharedIKESecret.finalize();
	_antecedentFingerprintImage.finalize();
	_antecedentUnsignedCredential.finalize();
	_antecedentSharedCredential.finalize();
	_antecedentKerberosCredential.finalize();
	_antecedentKerberosTicket.finalize();
	_antecedentNamedCredential.finalize();
	_antecedentX509Certificate.finalize();
	_antecedentX509CRL.finalize();
	_antecedentPublicKeyCertificate.finalize();
	_antecedentFingerprintTemplate.finalize();
	_antecedentSharedSecret.finalize();
	_dependentUsersAccess.finalize();
	return true;
}


Boolean UNIX_UsersCredential::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_UsersCredential::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UsersCredential::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UsersCredential::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UsersCredential::validateInstance()
{
	return true;
}

