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


UNIX_UnsignedCredential::UNIX_UnsignedCredential(void)
{
}

UNIX_UnsignedCredential::~UNIX_UnsignedCredential(void)
{
}

Boolean UNIX_UnsignedCredential::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_UnsignedCredential::getInstanceID() const
{
	return _instanceID;
}

void UNIX_UnsignedCredential::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_UnsignedCredential::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_UnsignedCredential::getCaption() const
{
	return _caption;
}

void UNIX_UnsignedCredential::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_UnsignedCredential::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_UnsignedCredential::getDescription() const
{
	return _description;
}

void UNIX_UnsignedCredential::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_UnsignedCredential::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_UnsignedCredential::getElementName() const
{
	return _elementName;
}

void UNIX_UnsignedCredential::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_UnsignedCredential::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_UnsignedCredential::getGeneration() const
{
	return _generation;
}

void UNIX_UnsignedCredential::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_UnsignedCredential::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_UnsignedCredential::getIssued() const
{
	return _issued;
}

void UNIX_UnsignedCredential::setIssued(CIMDateTime &value)
{
	_issued = value;
}

Boolean UNIX_UnsignedCredential::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_UnsignedCredential::getExpires() const
{
	return _expires;
}

void UNIX_UnsignedCredential::setExpires(CIMDateTime &value)
{
	_expires = value;
}

Boolean UNIX_UnsignedCredential::getValidFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_FROM, getValidFrom());
	return true;
}

CIMDateTime UNIX_UnsignedCredential::getValidFrom() const
{
	return _validFrom;
}

void UNIX_UnsignedCredential::setValidFrom(CIMDateTime &value)
{
	_validFrom = value;
}

Boolean UNIX_UnsignedCredential::getPeerIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTITY, getPeerIdentity());
	return true;
}

String UNIX_UnsignedCredential::getPeerIdentity() const
{
	return _peerIdentity;
}

void UNIX_UnsignedCredential::setPeerIdentity(String &value)
{
	_peerIdentity = value;
}

Boolean UNIX_UnsignedCredential::getPeerIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTITY_TYPE, getPeerIdentityType());
	return true;
}

Uint16 UNIX_UnsignedCredential::getPeerIdentityType() const
{
	return _peerIdentityType;
}

void UNIX_UnsignedCredential::setPeerIdentityType(Uint16 &value)
{
	_peerIdentityType = value;
}

Boolean UNIX_UnsignedCredential::getPublicKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUBLIC_KEY, getPublicKey());
	return true;
}

Array<String> UNIX_UnsignedCredential::getPublicKey() const
{
	return _publicKey;
}

void UNIX_UnsignedCredential::setPublicKey(Array<String> &value)
{
	_publicKey = value;
}

Boolean UNIX_UnsignedCredential::getPublicKeyEncoding(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUBLIC_KEY_ENCODING, getPublicKeyEncoding());
	return true;
}

Uint16 UNIX_UnsignedCredential::getPublicKeyEncoding() const
{
	return _publicKeyEncoding;
}

void UNIX_UnsignedCredential::setPublicKeyEncoding(Uint16 &value)
{
	_publicKeyEncoding = value;
}

Boolean UNIX_UnsignedCredential::getOtherPublicKeyEncoding(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PUBLIC_KEY_ENCODING, getOtherPublicKeyEncoding());
	return true;
}

String UNIX_UnsignedCredential::getOtherPublicKeyEncoding() const
{
	return _otherPublicKeyEncoding;
}

void UNIX_UnsignedCredential::setOtherPublicKeyEncoding(String &value)
{
	_otherPublicKeyEncoding = value;
}


void UNIX_UnsignedCredential::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("UnsignedCredential");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_peerIdentity = String ("");
	_peerIdentityType = Uint16(0);
	_publicKey.clear();
	_publicKeyEncoding = Uint16(0);
	_otherPublicKeyEncoding = String ("");

}

Boolean UNIX_UnsignedCredential::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "Issued"))
			{
				CIMDateTime issuedValue;
				property.getValue().get(issuedValue);
				setIssued(issuedValue);
			}
			else if (String::equal(property.getName().getString(), "Expires"))
			{
				CIMDateTime expiresValue;
				property.getValue().get(expiresValue);
				setExpires(expiresValue);
			}
			else if (String::equal(property.getName().getString(), "ValidFrom"))
			{
				CIMDateTime validFromValue;
				property.getValue().get(validFromValue);
				setValidFrom(validFromValue);
			}
			else if (String::equal(property.getName().getString(), "PeerIdentity"))
			{
				String peerIdentityValue;
				property.getValue().get(peerIdentityValue);
				setPeerIdentity(peerIdentityValue);
			}
			else if (String::equal(property.getName().getString(), "PeerIdentityType"))
			{
				Uint16 peerIdentityTypeValue;
				property.getValue().get(peerIdentityTypeValue);
				setPeerIdentityType(peerIdentityTypeValue);
			}
			else if (String::equal(property.getName().getString(), "PublicKey"))
			{
				Array<String> publicKeyValue;
				property.getValue().get(publicKeyValue);
				setPublicKey(publicKeyValue);
			}
			else if (String::equal(property.getName().getString(), "PublicKeyEncoding"))
			{
				Uint16 publicKeyEncodingValue;
				property.getValue().get(publicKeyEncodingValue);
				setPublicKeyEncoding(publicKeyEncodingValue);
			}
			else if (String::equal(property.getName().getString(), "OtherPublicKeyEncoding"))
			{
				String otherPublicKeyEncodingValue;
				property.getValue().get(otherPublicKeyEncodingValue);
				setOtherPublicKeyEncoding(otherPublicKeyEncodingValue);
			}
	}
	return true;
}


Boolean UNIX_UnsignedCredential::initialize()
{
	return false;
}

Boolean UNIX_UnsignedCredential::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("UnsignedCredential");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_peerIdentity = String ("");
	_peerIdentityType = Uint16(0);
	_publicKey.clear();
	_publicKeyEncoding = Uint16(0);
	_otherPublicKeyEncoding = String ("");
	
	return false;
}

Boolean UNIX_UnsignedCredential::finalize()
{
	return false;
}


Boolean UNIX_UnsignedCredential::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_UnsignedCredential::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UnsignedCredential::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UnsignedCredential::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UnsignedCredential::validateInstance()
{
	return true;
}

