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


UNIX_CASignsPublicKeyCertificate::UNIX_CASignsPublicKeyCertificate(void)
{
}

UNIX_CASignsPublicKeyCertificate::~UNIX_CASignsPublicKeyCertificate(void)
{
}

Boolean UNIX_CASignsPublicKeyCertificate::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_CASignsPublicKeyCertificate::getAntecedent() const
{
	return _antecedent;
}

void UNIX_CASignsPublicKeyCertificate::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_CASignsPublicKeyCertificate::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_CASignsPublicKeyCertificate::getDependent() const
{
	return _dependent;
}

void UNIX_CASignsPublicKeyCertificate::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_CASignsPublicKeyCertificate::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_CASignsPublicKeyCertificate::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_CASignsPublicKeyCertificate::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_CASignsPublicKeyCertificate::getSignature(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE, getSignature());
	return true;
}

Array<Uint8> UNIX_CASignsPublicKeyCertificate::getSignature() const
{
	return _signature;
}

void UNIX_CASignsPublicKeyCertificate::setSignature(Array<Uint8> &value)
{
	_signature = value;
}

Boolean UNIX_CASignsPublicKeyCertificate::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_CASignsPublicKeyCertificate::getExpires() const
{
	return _expires;
}

void UNIX_CASignsPublicKeyCertificate::setExpires(CIMDateTime &value)
{
	_expires = value;
}

Boolean UNIX_CASignsPublicKeyCertificate::getCRLDistributionPoint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRL_DISTRIBUTION_POINT, getCRLDistributionPoint());
	return true;
}

Array<String> UNIX_CASignsPublicKeyCertificate::getCRLDistributionPoint() const
{
	return _cRLDistributionPoint;
}

void UNIX_CASignsPublicKeyCertificate::setCRLDistributionPoint(Array<String> &value)
{
	_cRLDistributionPoint = value;
}


void UNIX_CASignsPublicKeyCertificate::clearInstance()
{

	_antecedent = _antecedentCertificateAuthorityProvider.constructInstance(
		CIMName("UNIX_CertificateAuthority"),
		CIMNamespaceName("root/cimv2"),
		_antecedentCertificateAuthority);
	_dependent = _dependentPublicKeyCertificateProvider.constructInstance(
		CIMName("UNIX_PublicKeyCertificate"),
		CIMNamespaceName("root/cimv2"),
		_dependentPublicKeyCertificate);
	_serialNumber = String ("");
	_signature.clear();
	_expires = CIMHelper::getCurrentTime();
	_cRLDistributionPoint.clear();

}

Boolean UNIX_CASignsPublicKeyCertificate::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SerialNumber"))
			{
				String serialNumberValue;
				property.getValue().get(serialNumberValue);
				setSerialNumber(serialNumberValue);
			}
			else if (String::equal(property.getName().getString(), "Signature"))
			{
				Array<Uint8> signatureValue;
				property.getValue().get(signatureValue);
				setSignature(signatureValue);
			}
			else if (String::equal(property.getName().getString(), "Expires"))
			{
				CIMDateTime expiresValue;
				property.getValue().get(expiresValue);
				setExpires(expiresValue);
			}
			else if (String::equal(property.getName().getString(), "CRLDistributionPoint"))
			{
				Array<String> cRLDistributionPointValue;
				property.getValue().get(cRLDistributionPointValue);
				setCRLDistributionPoint(cRLDistributionPointValue);
			}
	}
	return true;
}


Boolean UNIX_CASignsPublicKeyCertificate::initialize()
{
	_antecedentCertificateAuthority.initialize();
	_dependentPublicKeyCertificate.initialize();
	return true;
}
Boolean UNIX_CASignsPublicKeyCertificate::load(int &pIndex)
{

	_antecedent = _antecedentCertificateAuthorityProvider.constructInstance(
		CIMName("UNIX_CertificateAuthority"),
		CIMNamespaceName("root/cimv2"),
		_antecedentCertificateAuthority);
	_dependent = _dependentPublicKeyCertificateProvider.constructInstance(
		CIMName("UNIX_PublicKeyCertificate"),
		CIMNamespaceName("root/cimv2"),
		_dependentPublicKeyCertificate);
	_serialNumber = String ("");
	_signature.clear();
	_expires = CIMHelper::getCurrentTime();
	_cRLDistributionPoint.clear();

	return false;
}

Boolean UNIX_CASignsPublicKeyCertificate::finalize()
{
	_antecedentCertificateAuthority.finalize();
	_dependentPublicKeyCertificate.finalize();
	return true;
}


Boolean UNIX_CASignsPublicKeyCertificate::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CASignsPublicKeyCertificate::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CASignsPublicKeyCertificate::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CASignsPublicKeyCertificate::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CASignsPublicKeyCertificate::validateInstance()
{
	return true;
}

