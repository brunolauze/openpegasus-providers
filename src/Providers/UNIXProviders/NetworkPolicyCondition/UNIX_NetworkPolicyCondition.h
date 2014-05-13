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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.32.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network
*/


/* **** Description *** */
/*
This class describes network policy conditions that can be applied to policy rules.
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

			UNIX_NetworkPolicyCondition:
				ParameterType UInt16
				Operator UInt16
				ParameterValue String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Policy:

			UNIX_NetworkPolicyCondition:


*/

#ifndef __UNIX_NETWORKPOLICYCONDITION_H
#define __UNIX_NETWORKPOLICYCONDITION_H


#include "CIM_Policy.h"

#include "UNIX_NetworkPolicyConditionDeps.h"


#ifndef PROPERTY_PARAMETER_TYPE
#define PROPERTY_PARAMETER_TYPE \
					"ParameterType"
#endif

#ifndef PROPERTY_OPERATOR
#define PROPERTY_OPERATOR \
					"Operator"
#endif

#ifndef PROPERTY_PARAMETER_VALUE
#define PROPERTY_PARAMETER_VALUE \
					"ParameterValue"
#endif



class UNIX_NetworkPolicyCondition :
	public CIM_Policy
{
public:

	UNIX_NetworkPolicyCondition();
	~UNIX_NetworkPolicyCondition();

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
	virtual Boolean getParameterType(CIMProperty&) const;
	virtual Uint16 getParameterType() const;
	virtual void setParameterType(Uint16&);
	virtual Boolean getOperator(CIMProperty&) const;
	virtual Uint16 getOperator() const;
	virtual void setOperator(Uint16&);
	virtual Boolean getParameterValue(CIMProperty&) const;
	virtual String getParameterValue() const;
	virtual void setParameterValue(String&);


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
	Uint16 _parameterType;
	Uint16 _operator;
	String _parameterValue;

#	include "UNIX_NetworkPolicyConditionPrivate.h"


};

#endif /* UNIX_NETWORKPOLICYCONDITION */
