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


UNIX_NamedCredential::UNIX_NamedCredential(void)
{
}

UNIX_NamedCredential::~UNIX_NamedCredential(void)
{
}

Boolean UNIX_NamedCredential::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NamedCredential::getInstanceID() const
{
	return _instanceID;
}

void UNIX_NamedCredential::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_NamedCredential::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NamedCredential::getCaption() const
{
	return _caption;
}

void UNIX_NamedCredential::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_NamedCredential::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NamedCredential::getDescription() const
{
	return _description;
}

void UNIX_NamedCredential::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_NamedCredential::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NamedCredential::getElementName() const
{
	return _elementName;
}

void UNIX_NamedCredential::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_NamedCredential::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_NamedCredential::getGeneration() const
{
	return _generation;
}

void UNIX_NamedCredential::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_NamedCredential::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_NamedCredential::getIssued() const
{
	return _issued;
}

void UNIX_NamedCredential::setIssued(CIMDateTime &value)
{
	_issued = value;
}

Boolean UNIX_NamedCredential::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_NamedCredential::getExpires() const
{
	return _expires;
}

void UNIX_NamedCredential::setExpires(CIMDateTime &value)
{
	_expires = value;
}

Boolean UNIX_NamedCredential::getValidFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_FROM, getValidFrom());
	return true;
}

CIMDateTime UNIX_NamedCredential::getValidFrom() const
{
	return _validFrom;
}

void UNIX_NamedCredential::setValidFrom(CIMDateTime &value)
{
	_validFrom = value;
}

Boolean UNIX_NamedCredential::getLocalIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_IDENTITY, getLocalIdentity());
	return true;
}

String UNIX_NamedCredential::getLocalIdentity() const
{
	return _localIdentity;
}

void UNIX_NamedCredential::setLocalIdentity(String &value)
{
	_localIdentity = value;
}

Boolean UNIX_NamedCredential::getLocalIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_IDENTITY_TYPE, getLocalIdentityType());
	return true;
}

Uint16 UNIX_NamedCredential::getLocalIdentityType() const
{
	return _localIdentityType;
}

void UNIX_NamedCredential::setLocalIdentityType(Uint16 &value)
{
	_localIdentityType = value;
}

Boolean UNIX_NamedCredential::getPeerIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTITY, getPeerIdentity());
	return true;
}

String UNIX_NamedCredential::getPeerIdentity() const
{
	return _peerIdentity;
}

void UNIX_NamedCredential::setPeerIdentity(String &value)
{
	_peerIdentity = value;
}

Boolean UNIX_NamedCredential::getPeerIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTITY_TYPE, getPeerIdentityType());
	return true;
}

Uint16 UNIX_NamedCredential::getPeerIdentityType() const
{
	return _peerIdentityType;
}

void UNIX_NamedCredential::setPeerIdentityType(Uint16 &value)
{
	_peerIdentityType = value;
}

Boolean UNIX_NamedCredential::getSharedSecretName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARED_SECRET_NAME, getSharedSecretName());
	return true;
}

String UNIX_NamedCredential::getSharedSecretName() const
{
	return _sharedSecretName;
}

void UNIX_NamedCredential::setSharedSecretName(String &value)
{
	_sharedSecretName = value;
}


void UNIX_NamedCredential::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NamedCredential");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_localIdentity = String ("");
	_localIdentityType = Uint16(0);
	_peerIdentity = String ("");
	_peerIdentityType = Uint16(0);
	_sharedSecretName = String ("");

}

Boolean UNIX_NamedCredential::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LocalIdentity"))
			{
				String localIdentityValue;
				property.getValue().get(localIdentityValue);
				setLocalIdentity(localIdentityValue);
			}
			else if (String::equal(property.getName().getString(), "LocalIdentityType"))
			{
				Uint16 localIdentityTypeValue;
				property.getValue().get(localIdentityTypeValue);
				setLocalIdentityType(localIdentityTypeValue);
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
			else if (String::equal(property.getName().getString(), "SharedSecretName"))
			{
				String sharedSecretNameValue;
				property.getValue().get(sharedSecretNameValue);
				setSharedSecretName(sharedSecretNameValue);
			}
	}
	return true;
}


Boolean UNIX_NamedCredential::initialize()
{
	return false;
}

Boolean UNIX_NamedCredential::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NamedCredential");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_localIdentity = String ("");
	_localIdentityType = Uint16(0);
	_peerIdentity = String ("");
	_peerIdentityType = Uint16(0);
	_sharedSecretName = String ("");
	
	return false;
}

Boolean UNIX_NamedCredential::finalize()
{
	return false;
}


Boolean UNIX_NamedCredential::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_NamedCredential::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NamedCredential::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NamedCredential::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NamedCredential::validateInstance()
{
	return true;
}

