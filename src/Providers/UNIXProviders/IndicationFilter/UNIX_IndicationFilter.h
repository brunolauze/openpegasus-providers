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


/* **** Version *** */
/*
2.31.1
*/


/* **** UMLPackagePath *** */
/*
CIM::Event
*/


/* **** Description *** */
/*
CIM_IndicationFilter defines the criteria for generating an instance of CIM_Indication and what data should be returned in that instance. It is derived from CIM_ManagedElement to allow modeling the dependency of the filter on a specific service.
If used with the "DMTF:CQLT" language, the processing and CQLT tokens that must be supported are described in the description of the QueryLanguage property
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_IndicationFilter:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				Name String
				SourceNamespace String
				SourceNamespaces String
				IndividualSubscriptionSupported Boolean
				Query String
				QueryLanguage String
				TemplateVariable String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_IndicationFilter:


*/

#ifndef __UNIX_INDICATIONFILTER_H
#define __UNIX_INDICATIONFILTER_H


#include "CIM_ManagedElement.h"

#include "UNIX_IndicationFilterDeps.h"


#ifndef PROPERTY_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_SYSTEM_CREATION_CLASS_NAME \
					"SystemCreationClassName"
#endif

#ifndef PROPERTY_SYSTEM_NAME
#define PROPERTY_SYSTEM_NAME \
					"SystemName"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_SOURCE_NAMESPACE
#define PROPERTY_SOURCE_NAMESPACE \
					"SourceNamespace"
#endif

#ifndef PROPERTY_SOURCE_NAMESPACES
#define PROPERTY_SOURCE_NAMESPACES \
					"SourceNamespaces"
#endif

#ifndef PROPERTY_INDIVIDUAL_SUBSCRIPTION_SUPPORTED
#define PROPERTY_INDIVIDUAL_SUBSCRIPTION_SUPPORTED \
					"IndividualSubscriptionSupported"
#endif

#ifndef PROPERTY_QUERY
#define PROPERTY_QUERY \
					"Query"
#endif

#ifndef PROPERTY_QUERY_LANGUAGE
#define PROPERTY_QUERY_LANGUAGE \
					"QueryLanguage"
#endif

#ifndef PROPERTY_TEMPLATE_VARIABLE
#define PROPERTY_TEMPLATE_VARIABLE \
					"TemplateVariable"
#endif



class UNIX_IndicationFilter :
	public CIM_ManagedElement
{
public:

	UNIX_IndicationFilter();
	~UNIX_IndicationFilter();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
	virtual Boolean finalize();
	virtual Boolean find(const Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);
	virtual void setCIMOMHandle(CIMOMHandle&);
	virtual void clearInstance();
	virtual Boolean loadInstance(const CIMInstance&);
	virtual Boolean createInstance(const OperationContext&);
	virtual Boolean modifyInstance(const OperationContext&);
	virtual Boolean deleteInstance(const OperationContext&);
	virtual Boolean validateInstance();

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getSourceNamespace(CIMProperty&) const;
	virtual String getSourceNamespace() const;
	virtual void setSourceNamespace(String&);
	virtual Boolean getSourceNamespaces(CIMProperty&) const;
	virtual Array<String> getSourceNamespaces() const;
	virtual void setSourceNamespaces(Array<String>&);
	virtual Boolean getIndividualSubscriptionSupported(CIMProperty&) const;
	virtual Boolean getIndividualSubscriptionSupported() const;
	virtual void setIndividualSubscriptionSupported(Boolean&);
	virtual Boolean getQuery(CIMProperty&) const;
	virtual String getQuery() const;
	virtual void setQuery(String&);
	virtual Boolean getQueryLanguage(CIMProperty&) const;
	virtual String getQueryLanguage() const;
	virtual void setQueryLanguage(String&);
	virtual Boolean getTemplateVariable(CIMProperty&) const;
	virtual Array<String> getTemplateVariable() const;
	virtual void setTemplateVariable(Array<String>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _systemCreationClassName;
	String _systemName;
	String _creationClassName;
	String _name;
	String _sourceNamespace;
	Array<String> _sourceNamespaces;
	Boolean _individualSubscriptionSupported;
	String _query;
	String _queryLanguage;
	Array<String> _templateVariable;

#	include "UNIX_IndicationFilterPrivate.h"


};

#endif /* UNIX_INDICATIONFILTER */
