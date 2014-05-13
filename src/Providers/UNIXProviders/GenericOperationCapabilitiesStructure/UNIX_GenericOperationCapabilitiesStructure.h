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


/* **** Indication *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.38.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Interop::Operations
*/


/* **** Description *** */
/*
CIM_GenericOperationCapabilitiesStructure defines a structure of the generic operations capabilities supported by a WBEM implementation (e.g. WBEM Server, WBEM Protocol, WBEM Provider, ...). One use of this strucutre would be to add to a capabilities class and associate via CIM_ElementCapabilities. For more information, see Generic Operations (DSP0223).
*/


/* **** Structure *** */
/*
TRUE
*/


/*
			 *** Properties ***

			UNIX_GenericOperationCapabilitiesStructure:
				FQLSupported Boolean
				CQLSupport UInt32
				OperationsSupported UInt32
				OtherOperationsSupportedDescriptions String
				ContinueOnErrorSupported Boolean
				MinimumOperationTimeout UInt32
				MaximumOperationTimeout UInt32


*/


/*
			 *** Methods ***

			UNIX_GenericOperationCapabilitiesStructure:


*/

#ifndef __UNIX_GENERICOPERATIONCAPABILITIESSTRUCTURE_H
#define __UNIX_GENERICOPERATIONCAPABILITIESSTRUCTURE_H


#include "CIM_ClassBase.h"

#include "UNIX_GenericOperationCapabilitiesStructureDeps.h"


#ifndef PROPERTY_F_Q_L_SUPPORTED
#define PROPERTY_F_Q_L_SUPPORTED \
					"FQLSupported"
#endif

#ifndef PROPERTY_C_Q_L_SUPPORT
#define PROPERTY_C_Q_L_SUPPORT \
					"CQLSupport"
#endif

#ifndef PROPERTY_OPERATIONS_SUPPORTED
#define PROPERTY_OPERATIONS_SUPPORTED \
					"OperationsSupported"
#endif

#ifndef PROPERTY_OTHER_OPERATIONS_SUPPORTED_DESCRIPTIONS
#define PROPERTY_OTHER_OPERATIONS_SUPPORTED_DESCRIPTIONS \
					"OtherOperationsSupportedDescriptions"
#endif

#ifndef PROPERTY_CONTINUE_ON_ERROR_SUPPORTED
#define PROPERTY_CONTINUE_ON_ERROR_SUPPORTED \
					"ContinueOnErrorSupported"
#endif

#ifndef PROPERTY_MINIMUM_OPERATION_TIMEOUT
#define PROPERTY_MINIMUM_OPERATION_TIMEOUT \
					"MinimumOperationTimeout"
#endif

#ifndef PROPERTY_MAXIMUM_OPERATION_TIMEOUT
#define PROPERTY_MAXIMUM_OPERATION_TIMEOUT \
					"MaximumOperationTimeout"
#endif



class UNIX_GenericOperationCapabilitiesStructure :
	public CIM_ClassBase
{
public:

	UNIX_GenericOperationCapabilitiesStructure();
	~UNIX_GenericOperationCapabilitiesStructure();

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

	virtual Boolean getFQLSupported(CIMProperty&) const;
	virtual Boolean getFQLSupported() const;
	virtual void setFQLSupported(Boolean&);
	virtual Boolean getCQLSupport(CIMProperty&) const;
	virtual Array<Uint32> getCQLSupport() const;
	virtual void setCQLSupport(Array<Uint32>&);
	virtual Boolean getOperationsSupported(CIMProperty&) const;
	virtual Array<Uint32> getOperationsSupported() const;
	virtual void setOperationsSupported(Array<Uint32>&);
	virtual Boolean getOtherOperationsSupportedDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherOperationsSupportedDescriptions() const;
	virtual void setOtherOperationsSupportedDescriptions(Array<String>&);
	virtual Boolean getContinueOnErrorSupported(CIMProperty&) const;
	virtual Boolean getContinueOnErrorSupported() const;
	virtual void setContinueOnErrorSupported(Boolean&);
	virtual Boolean getMinimumOperationTimeout(CIMProperty&) const;
	virtual Uint32 getMinimumOperationTimeout() const;
	virtual void setMinimumOperationTimeout(Uint32&);
	virtual Boolean getMaximumOperationTimeout(CIMProperty&) const;
	virtual Uint32 getMaximumOperationTimeout() const;
	virtual void setMaximumOperationTimeout(Uint32&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	Boolean _fQLSupported;
	Array<Uint32> _cQLSupport;
	Array<Uint32> _operationsSupported;
	Array<String> _otherOperationsSupportedDescriptions;
	Boolean _continueOnErrorSupported;
	Uint32 _minimumOperationTimeout;
	Uint32 _maximumOperationTimeout;

#	include "UNIX_GenericOperationCapabilitiesStructurePrivate.h"


};

#endif /* UNIX_GENERICOPERATIONCAPABILITIESSTRUCTURE */
