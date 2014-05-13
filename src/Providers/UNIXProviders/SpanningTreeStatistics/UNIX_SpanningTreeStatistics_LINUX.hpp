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


UNIX_SpanningTreeStatistics::UNIX_SpanningTreeStatistics(void)
{
}

UNIX_SpanningTreeStatistics::~UNIX_SpanningTreeStatistics(void)
{
}

Boolean UNIX_SpanningTreeStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SpanningTreeStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SpanningTreeStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SpanningTreeStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SpanningTreeStatistics::getCaption() const
{
	return _caption;
}

void UNIX_SpanningTreeStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SpanningTreeStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SpanningTreeStatistics::getDescription() const
{
	return _description;
}

void UNIX_SpanningTreeStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SpanningTreeStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SpanningTreeStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_SpanningTreeStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SpanningTreeStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SpanningTreeStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_SpanningTreeStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SpanningTreeStatistics::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SpanningTreeStatistics::getName() const
{
	return _name;
}

void UNIX_SpanningTreeStatistics::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SpanningTreeStatistics::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SpanningTreeStatistics::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_SpanningTreeStatistics::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_SpanningTreeStatistics::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SpanningTreeStatistics::getSystemName() const
{
	return _systemName;
}

void UNIX_SpanningTreeStatistics::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_SpanningTreeStatistics::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_SpanningTreeStatistics::getServiceCreationClassName() const
{
	return _serviceCreationClassName;
}

void UNIX_SpanningTreeStatistics::setServiceCreationClassName(String &value)
{
	_serviceCreationClassName = value;
}

Boolean UNIX_SpanningTreeStatistics::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_SpanningTreeStatistics::getServiceName() const
{
	return _serviceName;
}

void UNIX_SpanningTreeStatistics::setServiceName(String &value)
{
	_serviceName = value;
}

Boolean UNIX_SpanningTreeStatistics::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SpanningTreeStatistics::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_SpanningTreeStatistics::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_SpanningTreeStatistics::getTimeSinceTopologyChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_SINCE_TOPOLOGY_CHANGE, getTimeSinceTopologyChange());
	return true;
}

Uint32 UNIX_SpanningTreeStatistics::getTimeSinceTopologyChange() const
{
	return _timeSinceTopologyChange;
}

void UNIX_SpanningTreeStatistics::setTimeSinceTopologyChange(Uint32 &value)
{
	_timeSinceTopologyChange = value;
}

Boolean UNIX_SpanningTreeStatistics::getTopChanges(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOP_CHANGES, getTopChanges());
	return true;
}

Uint32 UNIX_SpanningTreeStatistics::getTopChanges() const
{
	return _topChanges;
}

void UNIX_SpanningTreeStatistics::setTopChanges(Uint32 &value)
{
	_topChanges = value;
}


void UNIX_SpanningTreeStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SpanningTreeStatistics");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_creationClassName = String("UNIX_SpanningTreeStatistics");
	_timeSinceTopologyChange = Uint32(0);
	_topChanges = Uint32(0);

}

Boolean UNIX_SpanningTreeStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TimeSinceTopologyChange"))
			{
				Uint32 timeSinceTopologyChangeValue;
				property.getValue().get(timeSinceTopologyChangeValue);
				setTimeSinceTopologyChange(timeSinceTopologyChangeValue);
			}
			else if (String::equal(property.getName().getString(), "TopChanges"))
			{
				Uint32 topChangesValue;
				property.getValue().get(topChangesValue);
				setTopChanges(topChangesValue);
			}
	}
	return true;
}


Boolean UNIX_SpanningTreeStatistics::initialize()
{
	return false;
}

Boolean UNIX_SpanningTreeStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SpanningTreeStatistics");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_serviceCreationClassName = String ("");
	_serviceName = String ("");
	_creationClassName = String("UNIX_SpanningTreeStatistics");
	_timeSinceTopologyChange = Uint32(0);
	_topChanges = Uint32(0);
	
	return false;
}

Boolean UNIX_SpanningTreeStatistics::finalize()
{
	return false;
}

Boolean UNIX_SpanningTreeStatistics::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SpanningTreeStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SpanningTreeStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SpanningTreeStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SpanningTreeStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SpanningTreeStatistics::validateInstance()
{
	return true;
}

