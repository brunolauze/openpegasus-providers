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
2.31.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Processing
*/


/* **** Description *** */
/*
Jobs are sometimes used to represent extrinsic method invocations that execute for times longer than the length of time is reasonable to require a client to wait. The method executing continues beyond the method return to the client. The class provides the result of the execution of a Job that was itself started by the side-effect of this extrinsic method invocation. 
The indication instances embedded an instance of this class shall be the same indications delivered to listening clients or recorded, all or in part, to logs. Basically, this approach is a corollary to the functionality provided by an instance of ListenerDestinationLog (as defined in the Interop Model). The latter provides a comprehensive, persistent mechanism for recording Job results, but is also more resource-intensive and requires supporting logging functionality. Both the extra resources and logging may not be available in all environments (for example, embedded environments). Therefore, this instance-based approach is also provided. 
The MethodResult instances shall not exist after the associated ConcreteJob is deleted.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_MethodResult:
				PreCallIndication String
				PostCallIndication String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_MethodResult:


*/

#ifndef __UNIX_METHODRESULT_H
#define __UNIX_METHODRESULT_H


#include "CIM_ManagedElement.h"

#include "UNIX_MethodResultDeps.h"


#ifndef PROPERTY_PRE_CALL_INDICATION
#define PROPERTY_PRE_CALL_INDICATION \
					"PreCallIndication"
#endif

#ifndef PROPERTY_POST_CALL_INDICATION
#define PROPERTY_POST_CALL_INDICATION \
					"PostCallIndication"
#endif



class UNIX_MethodResult :
	public CIM_ManagedElement
{
public:

	UNIX_MethodResult();
	~UNIX_MethodResult();

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
	virtual Boolean getPreCallIndication(CIMProperty&) const;
	virtual String getPreCallIndication() const;
	virtual void setPreCallIndication(String&);
	virtual Boolean getPostCallIndication(CIMProperty&) const;
	virtual String getPostCallIndication() const;
	virtual void setPostCallIndication(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _preCallIndication;
	String _postCallIndication;

#	include "UNIX_MethodResultPrivate.h"


};

#endif /* UNIX_METHODRESULT */
