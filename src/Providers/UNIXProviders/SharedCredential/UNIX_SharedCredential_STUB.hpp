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


UNIX_SharedCredential::UNIX_SharedCredential(void)
{
}

UNIX_SharedCredential::~UNIX_SharedCredential(void)
{
}

Boolean UNIX_SharedCredential::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SharedCredential::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SharedCredential::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SharedCredential::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SharedCredential::getCaption() const
{
	return _caption;
}

void UNIX_SharedCredential::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SharedCredential::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SharedCredential::getDescription() const
{
	return _description;
}

void UNIX_SharedCredential::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SharedCredential::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SharedCredential::getElementName() const
{
	return _elementName;
}

void UNIX_SharedCredential::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SharedCredential::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SharedCredential::getGeneration() const
{
	return _generation;
}

void UNIX_SharedCredential::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SharedCredential::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_SharedCredential::getIssued() const
{
	return _issued;
}

void UNIX_SharedCredential::setIssued(CIMDateTime &value)
{
	_issued = value;
}

Boolean UNIX_SharedCredential::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_SharedCredential::getExpires() const
{
	return _expires;
}

void UNIX_SharedCredential::setExpires(CIMDateTime &value)
{
	_expires = value;
}

Boolean UNIX_SharedCredential::getValidFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_FROM, getValidFrom());
	return true;
}

CIMDateTime UNIX_SharedCredential::getValidFrom() const
{
	return _validFrom;
}

void UNIX_SharedCredential::setValidFrom(CIMDateTime &value)
{
	_validFrom = value;
}

Boolean UNIX_SharedCredential::getRemoteID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_ID, getRemoteID());
	return true;
}

String UNIX_SharedCredential::getRemoteID() const
{
	return _remoteID;
}

void UNIX_SharedCredential::setRemoteID(String &value)
{
	_remoteID = value;
}

Boolean UNIX_SharedCredential::getSecret(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECRET, getSecret());
	return true;
}

String UNIX_SharedCredential::getSecret() const
{
	return _secret;
}

void UNIX_SharedCredential::setSecret(String &value)
{
	_secret = value;
}

Boolean UNIX_SharedCredential::getAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALGORITHM, getAlgorithm());
	return true;
}

String UNIX_SharedCredential::getAlgorithm() const
{
	return _algorithm;
}

void UNIX_SharedCredential::setAlgorithm(String &value)
{
	_algorithm = value;
}

Boolean UNIX_SharedCredential::getProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL, getProtocol());
	return true;
}

String UNIX_SharedCredential::getProtocol() const
{
	return _protocol;
}

void UNIX_SharedCredential::setProtocol(String &value)
{
	_protocol = value;
}


void UNIX_SharedCredential::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SharedCredential");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_remoteID = String ("");
	_secret = String ("");
	_algorithm = String ("");
	_protocol = String ("");

}

Boolean UNIX_SharedCredential::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_SharedCredential::initialize()
{
	return false;
}

Boolean UNIX_SharedCredential::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SharedCredential");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_remoteID = String ("");
	_secret = String ("");
	_algorithm = String ("");
	_protocol = String ("");
	
	return false;
}

Boolean UNIX_SharedCredential::finalize()
{
	return false;
}


Boolean UNIX_SharedCredential::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SharedCredential::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharedCredential::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharedCredential::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SharedCredential::validateInstance()
{
	return true;
}

