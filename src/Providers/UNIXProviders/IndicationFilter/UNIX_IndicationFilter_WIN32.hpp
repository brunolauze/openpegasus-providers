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


UNIX_IndicationFilter::UNIX_IndicationFilter(void)
{
}

UNIX_IndicationFilter::~UNIX_IndicationFilter(void)
{
}

Boolean UNIX_IndicationFilter::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IndicationFilter::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IndicationFilter::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IndicationFilter::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IndicationFilter::getCaption() const
{
	return _caption;
}

void UNIX_IndicationFilter::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IndicationFilter::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IndicationFilter::getDescription() const
{
	return _description;
}

void UNIX_IndicationFilter::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IndicationFilter::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IndicationFilter::getElementName() const
{
	return _elementName;
}

void UNIX_IndicationFilter::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IndicationFilter::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IndicationFilter::getGeneration() const
{
	return _generation;
}

void UNIX_IndicationFilter::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IndicationFilter::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IndicationFilter::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_IndicationFilter::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_IndicationFilter::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IndicationFilter::getSystemName() const
{
	return _systemName;
}

void UNIX_IndicationFilter::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_IndicationFilter::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IndicationFilter::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_IndicationFilter::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_IndicationFilter::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IndicationFilter::getName() const
{
	return _name;
}

void UNIX_IndicationFilter::setName(String &value)
{
	_name = value;
}

Boolean UNIX_IndicationFilter::getSourceNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOURCE_NAMESPACE, getSourceNamespace());
	return true;
}

String UNIX_IndicationFilter::getSourceNamespace() const
{
	return _sourceNamespace;
}

void UNIX_IndicationFilter::setSourceNamespace(String &value)
{
	_sourceNamespace = value;
}

Boolean UNIX_IndicationFilter::getSourceNamespaces(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOURCE_NAMESPACES, getSourceNamespaces());
	return true;
}

Array<String> UNIX_IndicationFilter::getSourceNamespaces() const
{
	return _sourceNamespaces;
}

void UNIX_IndicationFilter::setSourceNamespaces(Array<String> &value)
{
	_sourceNamespaces = value;
}

Boolean UNIX_IndicationFilter::getIndividualSubscriptionSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INDIVIDUAL_SUBSCRIPTION_SUPPORTED, getIndividualSubscriptionSupported());
	return true;
}

Boolean UNIX_IndicationFilter::getIndividualSubscriptionSupported() const
{
	return _individualSubscriptionSupported;
}

void UNIX_IndicationFilter::setIndividualSubscriptionSupported(Boolean &value)
{
	_individualSubscriptionSupported = value;
}

Boolean UNIX_IndicationFilter::getQuery(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY, getQuery());
	return true;
}

String UNIX_IndicationFilter::getQuery() const
{
	return _query;
}

void UNIX_IndicationFilter::setQuery(String &value)
{
	_query = value;
}

Boolean UNIX_IndicationFilter::getQueryLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY_LANGUAGE, getQueryLanguage());
	return true;
}

String UNIX_IndicationFilter::getQueryLanguage() const
{
	return _queryLanguage;
}

void UNIX_IndicationFilter::setQueryLanguage(String &value)
{
	_queryLanguage = value;
}

Boolean UNIX_IndicationFilter::getTemplateVariable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEMPLATE_VARIABLE, getTemplateVariable());
	return true;
}

Array<String> UNIX_IndicationFilter::getTemplateVariable() const
{
	return _templateVariable;
}

void UNIX_IndicationFilter::setTemplateVariable(Array<String> &value)
{
	_templateVariable = value;
}


void UNIX_IndicationFilter::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IndicationFilter");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_IndicationFilter");
	_name = String ("");
	_sourceNamespace = String ("");
	_sourceNamespaces.clear();
	_individualSubscriptionSupported = Boolean(false);
	_query = String ("");
	_queryLanguage = String ("");
	_templateVariable.clear();

}

Boolean UNIX_IndicationFilter::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "SourceNamespace"))
			{
				String sourceNamespaceValue;
				property.getValue().get(sourceNamespaceValue);
				setSourceNamespace(sourceNamespaceValue);
			}
			else if (String::equal(property.getName().getString(), "SourceNamespaces"))
			{
				Array<String> sourceNamespacesValue;
				property.getValue().get(sourceNamespacesValue);
				setSourceNamespaces(sourceNamespacesValue);
			}
			else if (String::equal(property.getName().getString(), "IndividualSubscriptionSupported"))
			{
				Boolean individualSubscriptionSupportedValue;
				property.getValue().get(individualSubscriptionSupportedValue);
				setIndividualSubscriptionSupported(individualSubscriptionSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "Query"))
			{
				String queryValue;
				property.getValue().get(queryValue);
				setQuery(queryValue);
			}
			else if (String::equal(property.getName().getString(), "QueryLanguage"))
			{
				String queryLanguageValue;
				property.getValue().get(queryLanguageValue);
				setQueryLanguage(queryLanguageValue);
			}
			else if (String::equal(property.getName().getString(), "TemplateVariable"))
			{
				Array<String> templateVariableValue;
				property.getValue().get(templateVariableValue);
				setTemplateVariable(templateVariableValue);
			}
	}
	return true;
}


Boolean UNIX_IndicationFilter::initialize()
{
	return false;
}

Boolean UNIX_IndicationFilter::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IndicationFilter");
	_generation = Uint64(0);
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_creationClassName = String("UNIX_IndicationFilter");
	_name = String ("");
	_sourceNamespace = String ("");
	_sourceNamespaces.clear();
	_individualSubscriptionSupported = Boolean(false);
	_query = String ("");
	_queryLanguage = String ("");
	_templateVariable.clear();
	
	return false;
}

Boolean UNIX_IndicationFilter::finalize()
{
	return false;
}

Boolean UNIX_IndicationFilter::loadByName(const String name)
{
	return false;
}

Boolean UNIX_IndicationFilter::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_IndicationFilter::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicationFilter::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicationFilter::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IndicationFilter::validateInstance()
{
	return true;
}

