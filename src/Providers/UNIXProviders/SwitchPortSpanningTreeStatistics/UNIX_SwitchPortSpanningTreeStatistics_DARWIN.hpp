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


UNIX_SwitchPortSpanningTreeStatistics::UNIX_SwitchPortSpanningTreeStatistics(void)
{
}

UNIX_SwitchPortSpanningTreeStatistics::~UNIX_SwitchPortSpanningTreeStatistics(void)
{
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SwitchPortSpanningTreeStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SwitchPortSpanningTreeStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SwitchPortSpanningTreeStatistics::getCaption() const
{
	return _caption;
}

void UNIX_SwitchPortSpanningTreeStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SwitchPortSpanningTreeStatistics::getDescription() const
{
	return _description;
}

void UNIX_SwitchPortSpanningTreeStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SwitchPortSpanningTreeStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_SwitchPortSpanningTreeStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SwitchPortSpanningTreeStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_SwitchPortSpanningTreeStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SwitchPortSpanningTreeStatistics::getName() const
{
	return _name;
}

void UNIX_SwitchPortSpanningTreeStatistics::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SwitchPortSpanningTreeStatistics::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_SwitchPortSpanningTreeStatistics::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SwitchPortSpanningTreeStatistics::getSystemName() const
{
	return _systemName;
}

void UNIX_SwitchPortSpanningTreeStatistics::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::getSAPCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAP_CREATION_CLASS_NAME, getSAPCreationClassName());
	return true;
}

String UNIX_SwitchPortSpanningTreeStatistics::getSAPCreationClassName() const
{
	return _sAPCreationClassName;
}

void UNIX_SwitchPortSpanningTreeStatistics::setSAPCreationClassName(String &value)
{
	_sAPCreationClassName = value;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::getSAPName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAP_NAME, getSAPName());
	return true;
}

String UNIX_SwitchPortSpanningTreeStatistics::getSAPName() const
{
	return _sAPName;
}

void UNIX_SwitchPortSpanningTreeStatistics::setSAPName(String &value)
{
	_sAPName = value;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SwitchPortSpanningTreeStatistics::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_SwitchPortSpanningTreeStatistics::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::getForwardTransitions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORWARD_TRANSITIONS, getForwardTransitions());
	return true;
}

Uint32 UNIX_SwitchPortSpanningTreeStatistics::getForwardTransitions() const
{
	return _forwardTransitions;
}

void UNIX_SwitchPortSpanningTreeStatistics::setForwardTransitions(Uint32 &value)
{
	_forwardTransitions = value;
}


void UNIX_SwitchPortSpanningTreeStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SwitchPortSpanningTreeStatistics");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_sAPCreationClassName = String ("");
	_sAPName = String ("");
	_creationClassName = String("UNIX_SwitchPortSpanningTreeStatistics");
	_forwardTransitions = Uint32(0);

}

Boolean UNIX_SwitchPortSpanningTreeStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SAPCreationClassName"))
			{
				String sAPCreationClassNameValue;
				property.getValue().get(sAPCreationClassNameValue);
				setSAPCreationClassName(sAPCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SAPName"))
			{
				String sAPNameValue;
				property.getValue().get(sAPNameValue);
				setSAPName(sAPNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "ForwardTransitions"))
			{
				Uint32 forwardTransitionsValue;
				property.getValue().get(forwardTransitionsValue);
				setForwardTransitions(forwardTransitionsValue);
			}
	}
	return true;
}


Boolean UNIX_SwitchPortSpanningTreeStatistics::initialize()
{
	return false;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SwitchPortSpanningTreeStatistics");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_sAPCreationClassName = String ("");
	_sAPName = String ("");
	_creationClassName = String("UNIX_SwitchPortSpanningTreeStatistics");
	_forwardTransitions = Uint32(0);
	
	return false;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::finalize()
{
	return false;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String sAPCreationClassNameKey;
	String sAPNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SAP_CREATION_CLASS_NAME)) sAPCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SAP_NAME)) sAPNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getSAPCreationClassName(), sAPCreationClassNameKey)) && 
			(String::equalNoCase(getSAPName(), sAPNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortSpanningTreeStatistics::validateInstance()
{
	return true;
}

