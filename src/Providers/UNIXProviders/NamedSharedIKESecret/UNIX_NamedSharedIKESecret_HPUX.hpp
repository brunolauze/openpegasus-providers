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


UNIX_NamedSharedIKESecret::UNIX_NamedSharedIKESecret(void)
{
}

UNIX_NamedSharedIKESecret::~UNIX_NamedSharedIKESecret(void)
{
}

Boolean UNIX_NamedSharedIKESecret::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NamedSharedIKESecret::getInstanceID() const
{
	return _instanceID;
}

void UNIX_NamedSharedIKESecret::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_NamedSharedIKESecret::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NamedSharedIKESecret::getCaption() const
{
	return _caption;
}

void UNIX_NamedSharedIKESecret::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_NamedSharedIKESecret::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NamedSharedIKESecret::getDescription() const
{
	return _description;
}

void UNIX_NamedSharedIKESecret::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_NamedSharedIKESecret::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NamedSharedIKESecret::getElementName() const
{
	return _elementName;
}

void UNIX_NamedSharedIKESecret::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_NamedSharedIKESecret::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_NamedSharedIKESecret::getGeneration() const
{
	return _generation;
}

void UNIX_NamedSharedIKESecret::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_NamedSharedIKESecret::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_NamedSharedIKESecret::getIssued() const
{
	return _issued;
}

void UNIX_NamedSharedIKESecret::setIssued(CIMDateTime &value)
{
	_issued = value;
}

Boolean UNIX_NamedSharedIKESecret::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_NamedSharedIKESecret::getExpires() const
{
	return _expires;
}

void UNIX_NamedSharedIKESecret::setExpires(CIMDateTime &value)
{
	_expires = value;
}

Boolean UNIX_NamedSharedIKESecret::getValidFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_FROM, getValidFrom());
	return true;
}

CIMDateTime UNIX_NamedSharedIKESecret::getValidFrom() const
{
	return _validFrom;
}

void UNIX_NamedSharedIKESecret::setValidFrom(CIMDateTime &value)
{
	_validFrom = value;
}

Boolean UNIX_NamedSharedIKESecret::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_NamedSharedIKESecret::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_NamedSharedIKESecret::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_NamedSharedIKESecret::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_NamedSharedIKESecret::getSystemName() const
{
	return _systemName;
}

void UNIX_NamedSharedIKESecret::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_NamedSharedIKESecret::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_NamedSharedIKESecret::getServiceCreationClassName() const
{
	return _serviceCreationClassName;
}

void UNIX_NamedSharedIKESecret::setServiceCreationClassName(String &value)
{
	_serviceCreationClassName = value;
}

Boolean UNIX_NamedSharedIKESecret::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_NamedSharedIKESecret::getServiceName() const
{
	return _serviceName;
}

void UNIX_NamedSharedIKESecret::setServiceName(String &value)
{
	_serviceName = value;
}

Boolean UNIX_NamedSharedIKESecret::getLocalIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_IDENTITY, getLocalIdentity());
	return true;
}

String UNIX_NamedSharedIKESecret::getLocalIdentity() const
{
	return _localIdentity;
}

void UNIX_NamedSharedIKESecret::setLocalIdentity(String &value)
{
	_localIdentity = value;
}

Boolean UNIX_NamedSharedIKESecret::getLocalIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_IDENTITY_TYPE, getLocalIdentityType());
	return true;
}

Uint16 UNIX_NamedSharedIKESecret::getLocalIdentityType() const
{
	return _localIdentityType;
}

void UNIX_NamedSharedIKESecret::setLocalIdentityType(Uint16 &value)
{
	_localIdentityType = value;
}

Boolean UNIX_NamedSharedIKESecret::getPeerIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTITY, getPeerIdentity());
	return true;
}

String UNIX_NamedSharedIKESecret::getPeerIdentity() const
{
	return _peerIdentity;
}

void UNIX_NamedSharedIKESecret::setPeerIdentity(String &value)
{
	_peerIdentity = value;
}

Boolean UNIX_NamedSharedIKESecret::getPeerIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTITY_TYPE, getPeerIdentityType());
	return true;
}

Uint16 UNIX_NamedSharedIKESecret::getPeerIdentityType() const
{
	return _peerIdentityType;
}

void UNIX_NamedSharedIKESecret::setPeerIdentityType(Uint16 &value)
{
	_peerIdentityType = value;
}

Boolean UNIX_NamedSharedIKESecret::getSharedSecretName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARED_SECRET_NAME, getSharedSecretName());
	return true;
}

String UNIX_NamedSharedIKESecret::getSharedSecretName() const
{
	return _sharedSecretName;
}

void UNIX_NamedSharedIKESecret::setSharedSecretName(String &value)
{
	_sharedSecretName = value;
}


void UNIX_NamedSharedIKESecret::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NamedSharedIKESecret");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_localIdentity = String ("");
	_localIdentityType = Uint16(0);
	_peerIdentity = String ("");
	_peerIdentityType = Uint16(0);
	_sharedSecretName = String ("");

}

Boolean UNIX_NamedSharedIKESecret::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_NamedSharedIKESecret::initialize()
{
	return false;
}

Boolean UNIX_NamedSharedIKESecret::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NamedSharedIKESecret");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_localIdentity = String ("");
	_localIdentityType = Uint16(0);
	_peerIdentity = String ("");
	_peerIdentityType = Uint16(0);
	_sharedSecretName = String ("");
	
	return false;
}

Boolean UNIX_NamedSharedIKESecret::finalize()
{
	return false;
}


Boolean UNIX_NamedSharedIKESecret::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String serviceCreationClassNameKey;
	String serviceNameKey;
	String localIdentityKey;
	String localIdentityTypeKey;
	String peerIdentityKey;
	String peerIdentityTypeKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_CREATION_CLASS_NAME)) serviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_NAME)) serviceNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_LOCAL_IDENTITY)) localIdentityKey = kb.getValue();
		else if (keyName.equal(PROPERTY_LOCAL_IDENTITY_TYPE)) localIdentityTypeKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PEER_IDENTITY)) peerIdentityKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PEER_IDENTITY_TYPE)) peerIdentityTypeKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getServiceCreationClassName(), serviceCreationClassNameKey)) && 
			(String::equalNoCase(getServiceName(), serviceNameKey)) && 
			(String::equalNoCase(getLocalIdentity(), localIdentityKey)) && 
			(String::equalNoCase(String(std::to_string(getLocalIdentityType()).c_str()), localIdentityTypeKey)) && 
			(String::equalNoCase(getPeerIdentity(), peerIdentityKey)) && 
			(String::equalNoCase(String(std::to_string(getPeerIdentityType()).c_str()), peerIdentityTypeKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_NamedSharedIKESecret::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NamedSharedIKESecret::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NamedSharedIKESecret::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NamedSharedIKESecret::validateInstance()
{
	return true;
}

