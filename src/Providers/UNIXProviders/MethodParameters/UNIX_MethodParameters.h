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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::MethodParms
*/


/* **** Description *** */
/*
CIM_MethodParameters represents a set of values to be used as the parameters of a method. These parameters can be passed to the method, directly used by the method in its invocation, or accessed by the method when it is called. The properties of a concrete subclass of MethodParameters are mapped to the parameters of a method by the method itself or by the method caller. This mapping is an implementation detail that is independent of the definition of the class. For ease of use, property names should match parameter names. 
Property values should be set before the method is invoked. The ModelCorrespondence qualifier can be used to indicate if the property value should come from the property of another class. The instances that the property values should be gleaned from should be associated with MethodParameters using the Parameter ValueSources association. 
If the property is declared as an array, then the same property value (identified by the Model Correspondence) will be retrieved from all appropriate ParameterValueSources instances and stored in the array. 
If the property is declared as an array and the Model Correspondence is to an array property, then only one instance of the array will be copied from one ParameterValueSource. 
If the property is not declared as an array and there are multiple instances of the class and property associated with it through ModelCorrespondence where the values are not all the same, then an error will occur and the value of the property will not be set. 
Several MethodParameters instances can be associated with any of the ManagedElement methods. This association allows the maintenance of 'canned' method invocation and reduces the overhead of re-creating all method parameters for every method invocation.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_MethodParameters:
				MethodParametersId String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_MethodParameters:
				ResetValues UInt32


*/

#ifndef __UNIX_METHODPARAMETERS_H
#define __UNIX_METHODPARAMETERS_H


#include "CIM_ManagedElement.h"

#include "UNIX_MethodParametersDeps.h"


#ifndef PROPERTY_METHOD_PARAMETERS_ID
#define PROPERTY_METHOD_PARAMETERS_ID \
					"MethodParametersId"
#endif



class UNIX_MethodParameters :
	public CIM_ManagedElement
{
public:

	UNIX_MethodParameters();
	~UNIX_MethodParameters();

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
	virtual Boolean getMethodParametersId(CIMProperty&) const;
	virtual String getMethodParametersId() const;
	virtual void setMethodParametersId(String&);

	virtual Uint32 invokeResetValues(
		CIMInstance &inSourceME
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _methodParametersId;

#	include "UNIX_MethodParametersPrivate.h"


};

#endif /* UNIX_METHODPARAMETERS */
