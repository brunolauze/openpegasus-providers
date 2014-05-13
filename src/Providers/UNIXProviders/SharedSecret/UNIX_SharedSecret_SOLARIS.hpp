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


UNIX_SharedSecret::UNIX_SharedSecret(void)
{
}

UNIX_SharedSecret::~UNIX_SharedSecret(void)
{
}

Boolean UNIX_SharedSecret::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SharedSecret::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SharedSecret::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SharedSecret::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SharedSecret::getCaption() const
{
	return _caption;
}

void UNIX_SharedSecret::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SharedSecret::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SharedSecret::getDescription() const
{
	return _description;
}

void UNIX_SharedSecret::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SharedSecret::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SharedSecret::getElementName() const
{
	return _elementName;
}

void UNIX_SharedSecret::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SharedSecret::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SharedSecret::getGeneration() const
{
	return _generation;
}

void UNIX_SharedSecret::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SharedSecret::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_SharedSecret::getIssued() const
{
	return _issued;
}

void UNIX_SharedSecret::setIssued(CIMDateTime &value)
{
	_issued = value;
}

Boolean UNIX_SharedSecret::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_SharedSecret::getExpires() const
{
	return _expires;
}

void UNIX_SharedSecret::setExpires(CIMDateTime &value)
{
	_expires = value;
}

Boolean UNIX_SharedSecret::getValidFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_FROM, getValidFrom());
	return true;
}

CIMDateTime UNIX_SharedSecret::getValidFrom() const
{
	return _validFrom;
}

void UNIX_SharedSecret::setValidFrom(CIMDateTime &value)
{
	_validFrom = value;
}

Boolean UNIX_SharedSecret::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SharedSecret::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_SharedSecret::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_SharedSecret::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SharedSecret::getSystemName() const
{
	return _systemName;
}

void UNIX_SharedSecret::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_SharedSecret::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_SharedSecret::getServiceCreationClassName() const
{
	return _serviceCreationClassName;
}

void UNIX_SharedSecret::setServiceCreationClassName(String &value)
{
	_serviceCreationClassName = value;
}

Boolean UNIX_SharedSecret::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_SharedSecret::getServiceName() const
{
	return _serviceName;
}

void UNIX_SharedSecret::setServiceName(String &value)
{
	_serviceName = value;
}

Boolean UNIX_SharedSecret::getRemoteID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_ID, getRemoteID());
	return true;
}

String UNIX_SharedSecret::getRemoteID() const
{
	return _remoteID;
}

void UNIX_SharedSecret::setRemoteID(String &value)
{
	_remoteID = value;
}

Boolean UNIX_SharedSecret::getSecret(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECRET, getSecret());
	return true;
}

String UNIX_SharedSecret::getSecret() const
{
	return _secret;
}

void UNIX_SharedSecret::setSecret(String &value)
{
	_secret = value;
}

Boolean UNIX_SharedSecret::getAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALGORITHM, getAlgorithm());
	return true;
}

String UNIX_SharedSecret::getAlgorithm() const
{
	return _algorithm;
}

void UNIX_SharedSecret::setAlgorithm(String &value)
{
	_algorithm = value;
}

Boolean UNIX_SharedSecret::getProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL, getProtocol());
	return true;
}

String UNIX_SharedSecret::getProtocol() const
{
	return _protocol;
}

void UNIX_SharedSecret::setProtocol(String &value)
{
	_protocol = value;
}


void UNIX_SharedSecret::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SharedSecret");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_remoteID = String ("");
	_secret = String ("");
	_algorithm = String ("");
	_protocol = String ("");

}

Boolean UNIX_SharedSecret::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RemoteID"))
			{
				String remoteIDValue;
				property.getValue().get(remoteIDValue);
				setRemoteID(remoteIDValue);
			}
			else if (String::equal(property.getName().getString(), "Secret"))
			{
				String secretValue;
				property.getValue().get(secretValue);
				setSecret(secretValue);
			}
			else if (String::equal(property.getName().getString(), "Algorithm"))
			{
				String algorithmValue;
				property.getValue().get(algorithmValue);
				setAlgorithm(algorithmValue);
			}
			else if (String::equal(property.getName().getString(), "Protocol"))
			{
				String protocolValue;
				property.getValue().get(protocolValue);
				setProtocol(protocolValue);
			}
	}
	return true;
}


Boolean UNIX_SharedSecret::initialize()
{
	return false;
}

Boolean UNIX_SharedSecret::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SharedSecret");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_remoteID = String ("");
	_secret = String ("");
	_algorithm = String ("");
	_protocol = String ("");
	
	return false;
}

Boolean UNIX_SharedSecret::finalize()
{
	return false;
}


Boolean UNIX_SharedSecret::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String serviceCreationClassNameKey;
	String serviceNameKey;
	String remoteIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_CREATION_CLASS_NAME)) serviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_NAME)) serviceNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_REMOTE_ID)) remoteIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getServiceCreationClassName(), serviceCreationClassNameKey)) && 
			(String::equalNoCase(getServiceName(), serviceNameKey)) && 
			(String::equalNoCase(getRemoteID(), remoteIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SharedSecret::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharedSecret::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharedSecret::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharedSecret::validateInstance()
{
	return true;
}

