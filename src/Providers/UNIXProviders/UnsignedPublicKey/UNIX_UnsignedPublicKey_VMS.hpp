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


UNIX_UnsignedPublicKey::UNIX_UnsignedPublicKey(void)
{
}

UNIX_UnsignedPublicKey::~UNIX_UnsignedPublicKey(void)
{
}

Boolean UNIX_UnsignedPublicKey::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_UnsignedPublicKey::getInstanceID() const
{
	return _instanceID;
}

void UNIX_UnsignedPublicKey::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_UnsignedPublicKey::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_UnsignedPublicKey::getCaption() const
{
	return _caption;
}

void UNIX_UnsignedPublicKey::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_UnsignedPublicKey::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_UnsignedPublicKey::getDescription() const
{
	return _description;
}

void UNIX_UnsignedPublicKey::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_UnsignedPublicKey::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_UnsignedPublicKey::getElementName() const
{
	return _elementName;
}

void UNIX_UnsignedPublicKey::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_UnsignedPublicKey::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_UnsignedPublicKey::getGeneration() const
{
	return _generation;
}

void UNIX_UnsignedPublicKey::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_UnsignedPublicKey::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_UnsignedPublicKey::getIssued() const
{
	return _issued;
}

void UNIX_UnsignedPublicKey::setIssued(CIMDateTime &value)
{
	_issued = value;
}

Boolean UNIX_UnsignedPublicKey::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_UnsignedPublicKey::getExpires() const
{
	return _expires;
}

void UNIX_UnsignedPublicKey::setExpires(CIMDateTime &value)
{
	_expires = value;
}

Boolean UNIX_UnsignedPublicKey::getValidFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_FROM, getValidFrom());
	return true;
}

CIMDateTime UNIX_UnsignedPublicKey::getValidFrom() const
{
	return _validFrom;
}

void UNIX_UnsignedPublicKey::setValidFrom(CIMDateTime &value)
{
	_validFrom = value;
}

Boolean UNIX_UnsignedPublicKey::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_UnsignedPublicKey::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_UnsignedPublicKey::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_UnsignedPublicKey::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_UnsignedPublicKey::getSystemName() const
{
	return _systemName;
}

void UNIX_UnsignedPublicKey::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_UnsignedPublicKey::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_UnsignedPublicKey::getServiceCreationClassName() const
{
	return _serviceCreationClassName;
}

void UNIX_UnsignedPublicKey::setServiceCreationClassName(String &value)
{
	_serviceCreationClassName = value;
}

Boolean UNIX_UnsignedPublicKey::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_UnsignedPublicKey::getServiceName() const
{
	return _serviceName;
}

void UNIX_UnsignedPublicKey::setServiceName(String &value)
{
	_serviceName = value;
}

Boolean UNIX_UnsignedPublicKey::getPeerIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTITY, getPeerIdentity());
	return true;
}

String UNIX_UnsignedPublicKey::getPeerIdentity() const
{
	return _peerIdentity;
}

void UNIX_UnsignedPublicKey::setPeerIdentity(String &value)
{
	_peerIdentity = value;
}

Boolean UNIX_UnsignedPublicKey::getPeerIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTITY_TYPE, getPeerIdentityType());
	return true;
}

Uint16 UNIX_UnsignedPublicKey::getPeerIdentityType() const
{
	return _peerIdentityType;
}

void UNIX_UnsignedPublicKey::setPeerIdentityType(Uint16 &value)
{
	_peerIdentityType = value;
}

Boolean UNIX_UnsignedPublicKey::getPublicKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUBLIC_KEY, getPublicKey());
	return true;
}

Array<Uint8> UNIX_UnsignedPublicKey::getPublicKey() const
{
	return _publicKey;
}

void UNIX_UnsignedPublicKey::setPublicKey(Array<Uint8> &value)
{
	_publicKey = value;
}


void UNIX_UnsignedPublicKey::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("UnsignedPublicKey");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_peerIdentity = String ("");
	_peerIdentityType = Uint16(0);
	_publicKey.clear();

}

Boolean UNIX_UnsignedPublicKey::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SystemCreationClassName"))
			{
				String systemCreationClassNameValue;
				property.getValue().get(systemCreationClassNameValue);
				setSystemCreationClassName(systemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemName"))
			{
				String systemNameValue;
				property.getValue().get(systemNameValue);
				setSystemName(systemNameValue);
			}
			else if (String::equal(property.getName().getString(), "ServiceCreationClassName"))
			{
				String serviceCreationClassNameValue;
				property.getValue().get(serviceCreationClassNameValue);
				setServiceCreationClassName(serviceCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "ServiceName"))
			{
				String serviceNameValue;
				property.getValue().get(serviceNameValue);
				setServiceName(serviceNameValue);
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
				Array<Uint8> publicKeyValue;
				property.getValue().get(publicKeyValue);
				setPublicKey(publicKeyValue);
			}
	}
	return true;
}


Boolean UNIX_UnsignedPublicKey::initialize()
{
	return false;
}

Boolean UNIX_UnsignedPublicKey::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("UnsignedPublicKey");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_peerIdentity = String ("");
	_peerIdentityType = Uint16(0);
	_publicKey.clear();
	
	return false;
}

Boolean UNIX_UnsignedPublicKey::finalize()
{
	return false;
}


Boolean UNIX_UnsignedPublicKey::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String serviceCreationClassNameKey;
	String serviceNameKey;
	String peerIdentityKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_CREATION_CLASS_NAME)) serviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_NAME)) serviceNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PEER_IDENTITY)) peerIdentityKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getServiceCreationClassName(), serviceCreationClassNameKey)) && 
			(String::equalNoCase(getServiceName(), serviceNameKey)) && 
			(String::equalNoCase(getPeerIdentity(), peerIdentityKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_UnsignedPublicKey::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UnsignedPublicKey::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UnsignedPublicKey::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_UnsignedPublicKey::validateInstance()
{
	return true;
}

