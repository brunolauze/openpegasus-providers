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


UNIX_KerberosCredential::UNIX_KerberosCredential(void)
{
}

UNIX_KerberosCredential::~UNIX_KerberosCredential(void)
{
}

Boolean UNIX_KerberosCredential::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_KerberosCredential::getInstanceID() const
{
	return _instanceID;
}

void UNIX_KerberosCredential::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_KerberosCredential::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_KerberosCredential::getCaption() const
{
	return _caption;
}

void UNIX_KerberosCredential::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_KerberosCredential::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_KerberosCredential::getDescription() const
{
	return _description;
}

void UNIX_KerberosCredential::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_KerberosCredential::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_KerberosCredential::getElementName() const
{
	return _elementName;
}

void UNIX_KerberosCredential::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_KerberosCredential::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_KerberosCredential::getGeneration() const
{
	return _generation;
}

void UNIX_KerberosCredential::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_KerberosCredential::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_KerberosCredential::getIssued() const
{
	return _issued;
}

void UNIX_KerberosCredential::setIssued(CIMDateTime &value)
{
	_issued = value;
}

Boolean UNIX_KerberosCredential::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_KerberosCredential::getExpires() const
{
	return _expires;
}

void UNIX_KerberosCredential::setExpires(CIMDateTime &value)
{
	_expires = value;
}

Boolean UNIX_KerberosCredential::getValidFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_FROM, getValidFrom());
	return true;
}

CIMDateTime UNIX_KerberosCredential::getValidFrom() const
{
	return _validFrom;
}

void UNIX_KerberosCredential::setValidFrom(CIMDateTime &value)
{
	_validFrom = value;
}

Boolean UNIX_KerberosCredential::getAccessesService(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESSES_SERVICE, getAccessesService());
	return true;
}

String UNIX_KerberosCredential::getAccessesService() const
{
	return _accessesService;
}

void UNIX_KerberosCredential::setAccessesService(String &value)
{
	_accessesService = value;
}

Boolean UNIX_KerberosCredential::getRemoteID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_ID, getRemoteID());
	return true;
}

String UNIX_KerberosCredential::getRemoteID() const
{
	return _remoteID;
}

void UNIX_KerberosCredential::setRemoteID(String &value)
{
	_remoteID = value;
}

Boolean UNIX_KerberosCredential::getTicketType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TICKET_TYPE, getTicketType());
	return true;
}

Uint16 UNIX_KerberosCredential::getTicketType() const
{
	return _ticketType;
}

void UNIX_KerberosCredential::setTicketType(Uint16 &value)
{
	_ticketType = value;
}


void UNIX_KerberosCredential::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("KerberosCredential");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_accessesService = String ("");
	_remoteID = String ("");
	_ticketType = Uint16(0);

}

Boolean UNIX_KerberosCredential::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AccessesService"))
			{
				String accessesServiceValue;
				property.getValue().get(accessesServiceValue);
				setAccessesService(accessesServiceValue);
			}
			else if (String::equal(property.getName().getString(), "RemoteID"))
			{
				String remoteIDValue;
				property.getValue().get(remoteIDValue);
				setRemoteID(remoteIDValue);
			}
			else if (String::equal(property.getName().getString(), "TicketType"))
			{
				Uint16 ticketTypeValue;
				property.getValue().get(ticketTypeValue);
				setTicketType(ticketTypeValue);
			}
	}
	return true;
}


Boolean UNIX_KerberosCredential::initialize()
{
	return false;
}

Boolean UNIX_KerberosCredential::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("KerberosCredential");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_accessesService = String ("");
	_remoteID = String ("");
	_ticketType = Uint16(0);
	
	return false;
}

Boolean UNIX_KerberosCredential::finalize()
{
	return false;
}


Boolean UNIX_KerberosCredential::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_KerberosCredential::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_KerberosCredential::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_KerberosCredential::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_KerberosCredential::validateInstance()
{
	return true;
}

