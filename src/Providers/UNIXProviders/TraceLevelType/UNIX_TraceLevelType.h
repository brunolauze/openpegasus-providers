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
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Metrics::UnitOfWork
*/


/* **** Description *** */
/*
TraceLevelType defines the encoding and semantics of trace levels. A trace is data that is produced during the execution of program code in order to provide information on the behaviour of the code (e.g. textual data written to files). Traces may be used for error detection/analysis or debugging. Trace levels define the granularity and/or type of the traces that are to be produced by the program code. Depending on the program implementation, levels may be applied on the fly. The possible levels are also implementation dependent, since no general rules or standards exist. In consequence, program developers could reuse their existing trace level scheme. 
Traces are valuable information sources for management applications in cases of error detection/analysis. In order to correctly set trace levels to the level needed (exciting exhaustive tracing by accident may result in significant system resources consumption in terms of processing time and storage) and to efficiently interpret which level of detail to expect from traces already produced by some resource, the possible trace level values and their meaning (semantics) must be known by the user and/or the management application. The type does not define the location or access method of the traces, since traces of a particular type can have multiple locations as well as multiple access methods.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_TraceLevelType:
				BaseType UInt16
				TraceValues UInt32
				ValueDescriptions String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_TraceLevelType:


*/

#ifndef __UNIX_TRACELEVELTYPE_H
#define __UNIX_TRACELEVELTYPE_H


#include "CIM_ManagedElement.h"

#include "UNIX_TraceLevelTypeDeps.h"


#ifndef PROPERTY_BASE_TYPE
#define PROPERTY_BASE_TYPE \
					"BaseType"
#endif

#ifndef PROPERTY_TRACE_VALUES
#define PROPERTY_TRACE_VALUES \
					"TraceValues"
#endif

#ifndef PROPERTY_VALUE_DESCRIPTIONS
#define PROPERTY_VALUE_DESCRIPTIONS \
					"ValueDescriptions"
#endif



class UNIX_TraceLevelType :
	public CIM_ManagedElement
{
public:

	UNIX_TraceLevelType();
	~UNIX_TraceLevelType();

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
	virtual Boolean getBaseType(CIMProperty&) const;
	virtual Uint16 getBaseType() const;
	virtual void setBaseType(Uint16&);
	virtual Boolean getTraceValues(CIMProperty&) const;
	virtual Array<Uint32> getTraceValues() const;
	virtual void setTraceValues(Array<Uint32>&);
	virtual Boolean getValueDescriptions(CIMProperty&) const;
	virtual Array<String> getValueDescriptions() const;
	virtual void setValueDescriptions(Array<String>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint16 _baseType;
	Array<Uint32> _traceValues;
	Array<String> _valueDescriptions;

#	include "UNIX_TraceLevelTypePrivate.h"


};

#endif /* UNIX_TRACELEVELTYPE */
