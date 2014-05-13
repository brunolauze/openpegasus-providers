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


UNIX_BGPStatistics::UNIX_BGPStatistics(void)
{
}

UNIX_BGPStatistics::~UNIX_BGPStatistics(void)
{
}

Boolean UNIX_BGPStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BGPStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BGPStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPStatistics::getCaption() const
{
	return _caption;
}

void UNIX_BGPStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BGPStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPStatistics::getDescription() const
{
	return _description;
}

void UNIX_BGPStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BGPStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_BGPStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BGPStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BGPStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_BGPStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BGPStatistics::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPStatistics::getName() const
{
	return _name;
}

void UNIX_BGPStatistics::setName(String &value)
{
	_name = value;
}

Boolean UNIX_BGPStatistics::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BGPStatistics::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_BGPStatistics::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_BGPStatistics::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BGPStatistics::getSystemName() const
{
	return _systemName;
}

void UNIX_BGPStatistics::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_BGPStatistics::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_BGPStatistics::getServiceCreationClassName() const
{
	return _serviceCreationClassName;
}

void UNIX_BGPStatistics::setServiceCreationClassName(String &value)
{
	_serviceCreationClassName = value;
}

Boolean UNIX_BGPStatistics::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_BGPStatistics::getServiceName() const
{
	return _serviceName;
}

void UNIX_BGPStatistics::setServiceName(String &value)
{
	_serviceName = value;
}

Boolean UNIX_BGPStatistics::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BGPStatistics::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_BGPStatistics::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_BGPStatistics::getInUpdates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_UPDATES, getInUpdates());
	return true;
}

Uint32 UNIX_BGPStatistics::getInUpdates() const
{
	return _inUpdates;
}

void UNIX_BGPStatistics::setInUpdates(Uint32 &value)
{
	_inUpdates = value;
}

Boolean UNIX_BGPStatistics::getOutUpdates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUT_UPDATES, getOutUpdates());
	return true;
}

Uint32 UNIX_BGPStatistics::getOutUpdates() const
{
	return _outUpdates;
}

void UNIX_BGPStatistics::setOutUpdates(Uint32 &value)
{
	_outUpdates = value;
}

Boolean UNIX_BGPStatistics::getInTotalMessages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_TOTAL_MESSAGES, getInTotalMessages());
	return true;
}

Uint32 UNIX_BGPStatistics::getInTotalMessages() const
{
	return _inTotalMessages;
}

void UNIX_BGPStatistics::setInTotalMessages(Uint32 &value)
{
	_inTotalMessages = value;
}

Boolean UNIX_BGPStatistics::getOutTotalMessages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUT_TOTAL_MESSAGES, getOutTotalMessages());
	return true;
}

Uint32 UNIX_BGPStatistics::getOutTotalMessages() const
{
	return _outTotalMessages;
}

void UNIX_BGPStatistics::setOutTotalMessages(Uint32 &value)
{
	_outTotalMessages = value;
}

Boolean UNIX_BGPStatistics::getLastError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR, getLastError());
	return true;
}

Array<Uint8> UNIX_BGPStatistics::getLastError() const
{
	return _lastError;
}

void UNIX_BGPStatistics::setLastError(Array<Uint8> &value)
{
	_lastError = value;
}

Boolean UNIX_BGPStatistics::getFsmEstablishedTransitions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FSM_ESTABLISHED_TRANSITIONS, getFsmEstablishedTransitions());
	return true;
}

Uint32 UNIX_BGPStatistics::getFsmEstablishedTransitions() const
{
	return _fsmEstablishedTransitions;
}

void UNIX_BGPStatistics::setFsmEstablishedTransitions(Uint32 &value)
{
	_fsmEstablishedTransitions = value;
}

Boolean UNIX_BGPStatistics::getFsmEstablishedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FSM_ESTABLISHED_TIME, getFsmEstablishedTime());
	return true;
}

Uint32 UNIX_BGPStatistics::getFsmEstablishedTime() const
{
	return _fsmEstablishedTime;
}

void UNIX_BGPStatistics::setFsmEstablishedTime(Uint32 &value)
{
	_fsmEstablishedTime = value;
}

Boolean UNIX_BGPStatistics::getInUpdateElapsedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_UPDATE_ELAPSED_TIME, getInUpdateElapsedTime());
	return true;
}

Uint32 UNIX_BGPStatistics::getInUpdateElapsedTime() const
{
	return _inUpdateElapsedTime;
}

void UNIX_BGPStatistics::setInUpdateElapsedTime(Uint32 &value)
{
	_inUpdateElapsedTime = value;
}


void UNIX_BGPStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPStatistics");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_creationClassName = String("UNIX_BGPStatistics");
	_inUpdates = Uint32(0);
	_outUpdates = Uint32(0);
	_inTotalMessages = Uint32(0);
	_outTotalMessages = Uint32(0);
	_lastError.clear();
	_fsmEstablishedTransitions = Uint32(0);
	_fsmEstablishedTime = Uint32(0);
	_inUpdateElapsedTime = Uint32(0);

}

Boolean UNIX_BGPStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
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
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "InUpdates"))
			{
				Uint32 inUpdatesValue;
				property.getValue().get(inUpdatesValue);
				setInUpdates(inUpdatesValue);
			}
			else if (String::equal(property.getName().getString(), "OutUpdates"))
			{
				Uint32 outUpdatesValue;
				property.getValue().get(outUpdatesValue);
				setOutUpdates(outUpdatesValue);
			}
			else if (String::equal(property.getName().getString(), "InTotalMessages"))
			{
				Uint32 inTotalMessagesValue;
				property.getValue().get(inTotalMessagesValue);
				setInTotalMessages(inTotalMessagesValue);
			}
			else if (String::equal(property.getName().getString(), "OutTotalMessages"))
			{
				Uint32 outTotalMessagesValue;
				property.getValue().get(outTotalMessagesValue);
				setOutTotalMessages(outTotalMessagesValue);
			}
			else if (String::equal(property.getName().getString(), "LastError"))
			{
				Array<Uint8> lastErrorValue;
				property.getValue().get(lastErrorValue);
				setLastError(lastErrorValue);
			}
			else if (String::equal(property.getName().getString(), "FsmEstablishedTransitions"))
			{
				Uint32 fsmEstablishedTransitionsValue;
				property.getValue().get(fsmEstablishedTransitionsValue);
				setFsmEstablishedTransitions(fsmEstablishedTransitionsValue);
			}
			else if (String::equal(property.getName().getString(), "FsmEstablishedTime"))
			{
				Uint32 fsmEstablishedTimeValue;
				property.getValue().get(fsmEstablishedTimeValue);
				setFsmEstablishedTime(fsmEstablishedTimeValue);
			}
			else if (String::equal(property.getName().getString(), "InUpdateElapsedTime"))
			{
				Uint32 inUpdateElapsedTimeValue;
				property.getValue().get(inUpdateElapsedTimeValue);
				setInUpdateElapsedTime(inUpdateElapsedTimeValue);
			}
	}
	return true;
}


Boolean UNIX_BGPStatistics::initialize()
{
	return false;
}

Boolean UNIX_BGPStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPStatistics");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_creationClassName = String("UNIX_BGPStatistics");
	_inUpdates = Uint32(0);
	_outUpdates = Uint32(0);
	_inTotalMessages = Uint32(0);
	_outTotalMessages = Uint32(0);
	_lastError.clear();
	_fsmEstablishedTransitions = Uint32(0);
	_fsmEstablishedTime = Uint32(0);
	_inUpdateElapsedTime = Uint32(0);
	
	return false;
}

Boolean UNIX_BGPStatistics::finalize()
{
	return false;
}

Boolean UNIX_BGPStatistics::loadByName(const String name)
{
	return false;
}

Boolean UNIX_BGPStatistics::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String serviceCreationClassNameKey;
	String serviceNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_CREATION_CLASS_NAME)) serviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_NAME)) serviceNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getServiceCreationClassName(), serviceCreationClassNameKey)) && 
			(String::equalNoCase(getServiceName(), serviceNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_BGPStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPStatistics::validateInstance()
{
	return true;
}

