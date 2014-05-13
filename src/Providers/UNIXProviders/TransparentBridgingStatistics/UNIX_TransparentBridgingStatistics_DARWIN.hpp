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


UNIX_TransparentBridgingStatistics::UNIX_TransparentBridgingStatistics(void)
{
}

UNIX_TransparentBridgingStatistics::~UNIX_TransparentBridgingStatistics(void)
{
}

Boolean UNIX_TransparentBridgingStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TransparentBridgingStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_TransparentBridgingStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_TransparentBridgingStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TransparentBridgingStatistics::getCaption() const
{
	return _caption;
}

void UNIX_TransparentBridgingStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_TransparentBridgingStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TransparentBridgingStatistics::getDescription() const
{
	return _description;
}

void UNIX_TransparentBridgingStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_TransparentBridgingStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TransparentBridgingStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_TransparentBridgingStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_TransparentBridgingStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_TransparentBridgingStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_TransparentBridgingStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_TransparentBridgingStatistics::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_TransparentBridgingStatistics::getName() const
{
	return _name;
}

void UNIX_TransparentBridgingStatistics::setName(String &value)
{
	_name = value;
}

Boolean UNIX_TransparentBridgingStatistics::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_TransparentBridgingStatistics::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_TransparentBridgingStatistics::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_TransparentBridgingStatistics::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_TransparentBridgingStatistics::getSystemName() const
{
	return _systemName;
}

void UNIX_TransparentBridgingStatistics::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_TransparentBridgingStatistics::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_TransparentBridgingStatistics::getServiceCreationClassName() const
{
	return _serviceCreationClassName;
}

void UNIX_TransparentBridgingStatistics::setServiceCreationClassName(String &value)
{
	_serviceCreationClassName = value;
}

Boolean UNIX_TransparentBridgingStatistics::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_TransparentBridgingStatistics::getServiceName() const
{
	return _serviceName;
}

void UNIX_TransparentBridgingStatistics::setServiceName(String &value)
{
	_serviceName = value;
}

Boolean UNIX_TransparentBridgingStatistics::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_TransparentBridgingStatistics::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_TransparentBridgingStatistics::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_TransparentBridgingStatistics::getLearnedEntryDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LEARNED_ENTRY_DISCARDS, getLearnedEntryDiscards());
	return true;
}

Uint32 UNIX_TransparentBridgingStatistics::getLearnedEntryDiscards() const
{
	return _learnedEntryDiscards;
}

void UNIX_TransparentBridgingStatistics::setLearnedEntryDiscards(Uint32 &value)
{
	_learnedEntryDiscards = value;
}


void UNIX_TransparentBridgingStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TransparentBridgingStatistics");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_creationClassName = String("UNIX_TransparentBridgingStatistics");
	_learnedEntryDiscards = Uint32(0);

}

Boolean UNIX_TransparentBridgingStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LearnedEntryDiscards"))
			{
				Uint32 learnedEntryDiscardsValue;
				property.getValue().get(learnedEntryDiscardsValue);
				setLearnedEntryDiscards(learnedEntryDiscardsValue);
			}
	}
	return true;
}


Boolean UNIX_TransparentBridgingStatistics::initialize()
{
	return false;
}

Boolean UNIX_TransparentBridgingStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("TransparentBridgingStatistics");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_creationClassName = String("UNIX_TransparentBridgingStatistics");
	_learnedEntryDiscards = Uint32(0);
	
	return false;
}

Boolean UNIX_TransparentBridgingStatistics::finalize()
{
	return false;
}

Boolean UNIX_TransparentBridgingStatistics::loadByName(const String name)
{
	return false;
}

Boolean UNIX_TransparentBridgingStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TransparentBridgingStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TransparentBridgingStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TransparentBridgingStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TransparentBridgingStatistics::validateInstance()
{
	return true;
}

