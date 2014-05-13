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


UNIX_PublicPrivateKeyPair::UNIX_PublicPrivateKeyPair(void)
{
}

UNIX_PublicPrivateKeyPair::~UNIX_PublicPrivateKeyPair(void)
{
}

Boolean UNIX_PublicPrivateKeyPair::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_PublicPrivateKeyPair::getAntecedent() const
{
	return _antecedent;
}

void UNIX_PublicPrivateKeyPair::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_PublicPrivateKeyPair::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_PublicPrivateKeyPair::getDependent() const
{
	return _dependent;
}

void UNIX_PublicPrivateKeyPair::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_PublicPrivateKeyPair::getUse(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE, getUse());
	return true;
}

Uint16 UNIX_PublicPrivateKeyPair::getUse() const
{
	return _use;
}

void UNIX_PublicPrivateKeyPair::setUse(Uint16 &value)
{
	_use = value;
}

Boolean UNIX_PublicPrivateKeyPair::getNonRepudiation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_REPUDIATION, getNonRepudiation());
	return true;
}

Boolean UNIX_PublicPrivateKeyPair::getNonRepudiation() const
{
	return _nonRepudiation;
}

void UNIX_PublicPrivateKeyPair::setNonRepudiation(Boolean &value)
{
	_nonRepudiation = value;
}

Boolean UNIX_PublicPrivateKeyPair::getBackedUp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BACKED_UP, getBackedUp());
	return true;
}

Boolean UNIX_PublicPrivateKeyPair::getBackedUp() const
{
	return _backedUp;
}

void UNIX_PublicPrivateKeyPair::setBackedUp(Boolean &value)
{
	_backedUp = value;
}

Boolean UNIX_PublicPrivateKeyPair::getRepository(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPOSITORY, getRepository());
	return true;
}

String UNIX_PublicPrivateKeyPair::getRepository() const
{
	return _repository;
}

void UNIX_PublicPrivateKeyPair::setRepository(String &value)
{
	_repository = value;
}


void UNIX_PublicPrivateKeyPair::clearInstance()
{

	_antecedent = _antecedentPublicKeyCertificateProvider.constructInstance(
		CIMName("UNIX_PublicKeyCertificate"),
		CIMNamespaceName("root/cimv2"),
		_antecedentPublicKeyCertificate);
	_dependent = _dependentUsersAccessProvider.constructInstance(
		CIMName("UNIX_UsersAccess"),
		CIMNamespaceName("root/cimv2"),
		_dependentUsersAccess);
	_use = Uint16(0);
	_nonRepudiation = Boolean(false);
	_backedUp = Boolean(false);
	_repository = String ("");

}

Boolean UNIX_PublicPrivateKeyPair::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Use"))
			{
				Uint16 useValue;
				property.getValue().get(useValue);
				setUse(useValue);
			}
			else if (String::equal(property.getName().getString(), "NonRepudiation"))
			{
				Boolean nonRepudiationValue;
				property.getValue().get(nonRepudiationValue);
				setNonRepudiation(nonRepudiationValue);
			}
			else if (String::equal(property.getName().getString(), "BackedUp"))
			{
				Boolean backedUpValue;
				property.getValue().get(backedUpValue);
				setBackedUp(backedUpValue);
			}
			else if (String::equal(property.getName().getString(), "Repository"))
			{
				String repositoryValue;
				property.getValue().get(repositoryValue);
				setRepository(repositoryValue);
			}
	}
	return true;
}


Boolean UNIX_PublicPrivateKeyPair::initialize()
{
	_antecedentPublicKeyCertificate.initialize();
	_dependentUsersAccess.initialize();
	return true;
}
Boolean UNIX_PublicPrivateKeyPair::load(int &pIndex)
{

	_antecedent = _antecedentPublicKeyCertificateProvider.constructInstance(
		CIMName("UNIX_PublicKeyCertificate"),
		CIMNamespaceName("root/cimv2"),
		_antecedentPublicKeyCertificate);
	_dependent = _dependentUsersAccessProvider.constructInstance(
		CIMName("UNIX_UsersAccess"),
		CIMNamespaceName("root/cimv2"),
		_dependentUsersAccess);
	_use = Uint16(0);
	_nonRepudiation = Boolean(false);
	_backedUp = Boolean(false);
	_repository = String ("");

	return false;
}

Boolean UNIX_PublicPrivateKeyPair::finalize()
{
	_antecedentPublicKeyCertificate.finalize();
	_dependentUsersAccess.finalize();
	return true;
}


Boolean UNIX_PublicPrivateKeyPair::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PublicPrivateKeyPair::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PublicPrivateKeyPair::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PublicPrivateKeyPair::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PublicPrivateKeyPair::validateInstance()
{
	return true;
}

