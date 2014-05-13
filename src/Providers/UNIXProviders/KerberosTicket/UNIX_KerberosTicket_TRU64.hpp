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


UNIX_KerberosTicket::UNIX_KerberosTicket(void)
{
}

UNIX_KerberosTicket::~UNIX_KerberosTicket(void)
{
}

Boolean UNIX_KerberosTicket::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_KerberosTicket::getInstanceID() const
{
	return _instanceID;
}

void UNIX_KerberosTicket::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_KerberosTicket::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_KerberosTicket::getCaption() const
{
	return _caption;
}

void UNIX_KerberosTicket::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_KerberosTicket::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_KerberosTicket::getDescription() const
{
	return _description;
}

void UNIX_KerberosTicket::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_KerberosTicket::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_KerberosTicket::getElementName() const
{
	return _elementName;
}

void UNIX_KerberosTicket::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_KerberosTicket::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_KerberosTicket::getGeneration() const
{
	return _generation;
}

void UNIX_KerberosTicket::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_KerberosTicket::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_KerberosTicket::getIssued() const
{
	return _issued;
}

void UNIX_KerberosTicket::setIssued(CIMDateTime &value)
{
	_issued = value;
}

Boolean UNIX_KerberosTicket::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_KerberosTicket::getExpires() const
{
	return _expires;
}

void UNIX_KerberosTicket::setExpires(CIMDateTime &value)
{
	_expires = value;
}

Boolean UNIX_KerberosTicket::getValidFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_FROM, getValidFrom());
	return true;
}

CIMDateTime UNIX_KerberosTicket::getValidFrom() const
{
	return _validFrom;
}

void UNIX_KerberosTicket::setValidFrom(CIMDateTime &value)
{
	_validFrom = value;
}

Boolean UNIX_KerberosTicket::getAccessesService(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESSES_SERVICE, getAccessesService());
	return true;
}

String UNIX_KerberosTicket::getAccessesService() const
{
	return _accessesService;
}

void UNIX_KerberosTicket::setAccessesService(String &value)
{
	_accessesService = value;
}

Boolean UNIX_KerberosTicket::getRemoteID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_ID, getRemoteID());
	return true;
}

String UNIX_KerberosTicket::getRemoteID() const
{
	return _remoteID;
}

void UNIX_KerberosTicket::setRemoteID(String &value)
{
	_remoteID = value;
}

Boolean UNIX_KerberosTicket::getTicketType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TICKET_TYPE, getTicketType());
	return true;
}

Uint16 UNIX_KerberosTicket::getTicketType() const
{
	return _ticketType;
}

void UNIX_KerberosTicket::setTicketType(Uint16 &value)
{
	_ticketType = value;
}

Boolean UNIX_KerberosTicket::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_KerberosTicket::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_KerberosTicket::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_KerberosTicket::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_KerberosTicket::getSystemName() const
{
	return _systemName;
}

void UNIX_KerberosTicket::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_KerberosTicket::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_KerberosTicket::getServiceCreationClassName() const
{
	return _serviceCreationClassName;
}

void UNIX_KerberosTicket::setServiceCreationClassName(String &value)
{
	_serviceCreationClassName = value;
}

Boolean UNIX_KerberosTicket::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_KerberosTicket::getServiceName() const
{
	return _serviceName;
}

void UNIX_KerberosTicket::setServiceName(String &value)
{
	_serviceName = value;
}


void UNIX_KerberosTicket::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("KerberosTicket");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_accessesService = String ("");
	_remoteID = String ("");
	_ticketType = Uint16(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");

}

Boolean UNIX_KerberosTicket::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_KerberosTicket::initialize()
{
	return false;
}

Boolean UNIX_KerberosTicket::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("KerberosTicket");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_accessesService = String ("");
	_remoteID = String ("");
	_ticketType = Uint16(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	
	return false;
}

Boolean UNIX_KerberosTicket::finalize()
{
	return false;
}


Boolean UNIX_KerberosTicket::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_KerberosTicket::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_KerberosTicket::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_KerberosTicket::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_KerberosTicket::validateInstance()
{
	return true;
}

