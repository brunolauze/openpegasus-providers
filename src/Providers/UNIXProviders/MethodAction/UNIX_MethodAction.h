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
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Policy
*/


/* **** Description *** */
/*
MethodAction is a PolicyAction that MAY invoke methods as defined by a query. If there are no results returned from the query, then no methods are called, otherwise each query result row defines the method to call and its parameters. The called method MAY be either an intrinsic method of a CIM Namespace or an extrinsic method of a CIM_ManagedElement. 

In order to correlate between methods called by this MethodAction and any other invoked Methods, InstMethodCall indications MAY be created for the method calls that result from this MethodAction. These indications are named by the value in the InstMethodCallName property. These indications MUST be produced if that InstMethodCallName value is included in the FROM clause of the query of some other MethodAction instance within the same PolicyRule. (The details of how this is accomplished are implementation dependent.) 

The input parameters to the method are defined by the query and MAY be fixed values defined by literals or MAY be defined by reference to one or more properties of classes named in the FROM clause of the query. The referenced objects MAY be those produced by QueryConditions or MethodActions instances associated to the same PolicyRule instance.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Policy:
				CommonName String
				PolicyKeywords String

			CIM_PolicyAction:
				SystemCreationClassName String
				SystemName String
				PolicyRuleCreationClassName String
				PolicyRuleName String
				CreationClassName String
				PolicyActionName String
				DoActionLogging Boolean

			UNIX_MethodAction:
				InstMethodCallName String
				Query String
				QueryLanguage UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Policy:

			CIM_PolicyAction:

			UNIX_MethodAction:


*/

#ifndef __UNIX_METHODACTION_H
#define __UNIX_METHODACTION_H


#include "CIM_PolicyAction.h"

#include "UNIX_MethodActionDeps.h"


#ifndef PROPERTY_INST_METHOD_CALL_NAME
#define PROPERTY_INST_METHOD_CALL_NAME \
					"InstMethodCallName"
#endif

#ifndef PROPERTY_QUERY
#define PROPERTY_QUERY \
					"Query"
#endif

#ifndef PROPERTY_QUERY_LANGUAGE
#define PROPERTY_QUERY_LANGUAGE \
					"QueryLanguage"
#endif



class UNIX_MethodAction :
	public CIM_PolicyAction
{
public:

	UNIX_MethodAction();
	~UNIX_MethodAction();

	virtual Boolean initialize();
	virtual Boolean load(int&);
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
	virtual Boolean getCommonName(CIMProperty&) const;
	virtual String getCommonName() const;
	virtual void setCommonName(String&);
	virtual Boolean getPolicyKeywords(CIMProperty&) const;
	virtual Array<String> getPolicyKeywords() const;
	virtual void setPolicyKeywords(Array<String>&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getPolicyRuleCreationClassName(CIMProperty&) const;
	virtual String getPolicyRuleCreationClassName() const;
	virtual void setPolicyRuleCreationClassName(String&);
	virtual Boolean getPolicyRuleName(CIMProperty&) const;
	virtual String getPolicyRuleName() const;
	virtual void setPolicyRuleName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getPolicyActionName(CIMProperty&) const;
	virtual String getPolicyActionName() const;
	virtual void setPolicyActionName(String&);
	virtual Boolean getDoActionLogging(CIMProperty&) const;
	virtual Boolean getDoActionLogging() const;
	virtual void setDoActionLogging(Boolean&);
	virtual Boolean getInstMethodCallName(CIMProperty&) const;
	virtual String getInstMethodCallName() const;
	virtual void setInstMethodCallName(String&);
	virtual Boolean getQuery(CIMProperty&) const;
	virtual String getQuery() const;
	virtual void setQuery(String&);
	virtual Boolean getQueryLanguage(CIMProperty&) const;
	virtual Uint16 getQueryLanguage() const;
	virtual void setQueryLanguage(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _commonName;
	Array<String> _policyKeywords;
	String _systemCreationClassName;
	String _systemName;
	String _policyRuleCreationClassName;
	String _policyRuleName;
	String _creationClassName;
	String _policyActionName;
	Boolean _doActionLogging;
	String _instMethodCallName;
	String _query;
	Uint16 _queryLanguage;

#	include "UNIX_MethodActionPrivate.h"


};

#endif /* UNIX_METHODACTION */
