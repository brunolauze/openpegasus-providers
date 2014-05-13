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


/* **** Association *** */
/*
TRUE
*/


/* **** Deprecated *** */
/*
CIM_ActiveConnection
CIM_FCPort
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::NetworkAdapter
*/


/* **** Description *** */
/*
Note: The use of FibrePortActiveLogin is deprecated because FibrePort is deprecated. 
Deprecated description: Information for FibrePortActiveLogin is found by examining the individual FCPorts, and an ActiveConnection between the FCProtocolEndpoints that are associated with the ports. FibrePortActiveLogin indicates that two FibrePorts are connected through a login and have negotiated their Class Of Service, frame size, and other link characteristics, as specified by an instance of this class.
*/


/*
			 *** Properties ***

			UNIX_FibrePortActiveLogin:
				LoginOriginator Reference
				LoginResponder Reference
				NegotiatedCOS UInt16
				NegotiatedFrameSize UInt64
				NegotiatedSpeed UInt64
				ACKModel UInt16
				BufferToBufferModel UInt16
				OriginatorBufferCredit UInt64
				ResponderBufferCredit UInt64
				OriginatorEndCredit UInt64
				ResponderEndCredit UInt64


*/


/*
			 *** Methods ***

			UNIX_FibrePortActiveLogin:


*/

#ifndef __UNIX_FIBREPORTACTIVELOGIN_H
#define __UNIX_FIBREPORTACTIVELOGIN_H


#include "CIM_ClassBase.h"

#include "UNIX_FibrePortActiveLoginDeps.h"


#ifndef PROPERTY_LOGIN_ORIGINATOR
#define PROPERTY_LOGIN_ORIGINATOR \
					"LoginOriginator"
#endif

#ifndef PROPERTY_LOGIN_RESPONDER
#define PROPERTY_LOGIN_RESPONDER \
					"LoginResponder"
#endif

#ifndef PROPERTY_NEGOTIATED_C_OS
#define PROPERTY_NEGOTIATED_C_OS \
					"NegotiatedCOS"
#endif

#ifndef PROPERTY_NEGOTIATED_FRAME_SIZE
#define PROPERTY_NEGOTIATED_FRAME_SIZE \
					"NegotiatedFrameSize"
#endif

#ifndef PROPERTY_NEGOTIATED_SPEED
#define PROPERTY_NEGOTIATED_SPEED \
					"NegotiatedSpeed"
#endif

#ifndef PROPERTY_A_C_K_MODEL
#define PROPERTY_A_C_K_MODEL \
					"ACKModel"
#endif

#ifndef PROPERTY_BUFFER_TO_BUFFER_MODEL
#define PROPERTY_BUFFER_TO_BUFFER_MODEL \
					"BufferToBufferModel"
#endif

#ifndef PROPERTY_ORIGINATOR_BUFFER_CREDIT
#define PROPERTY_ORIGINATOR_BUFFER_CREDIT \
					"OriginatorBufferCredit"
#endif

#ifndef PROPERTY_RESPONDER_BUFFER_CREDIT
#define PROPERTY_RESPONDER_BUFFER_CREDIT \
					"ResponderBufferCredit"
#endif

#ifndef PROPERTY_ORIGINATOR_END_CREDIT
#define PROPERTY_ORIGINATOR_END_CREDIT \
					"OriginatorEndCredit"
#endif

#ifndef PROPERTY_RESPONDER_END_CREDIT
#define PROPERTY_RESPONDER_END_CREDIT \
					"ResponderEndCredit"
#endif



class UNIX_FibrePortActiveLogin :
	public CIM_ClassBase
{
public:

	UNIX_FibrePortActiveLogin();
	~UNIX_FibrePortActiveLogin();

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

	virtual Boolean getLoginOriginator(CIMProperty&) const;
	virtual CIMInstance getLoginOriginator() const;
	virtual void setLoginOriginator(CIMInstance&);
	virtual Boolean getLoginResponder(CIMProperty&) const;
	virtual CIMInstance getLoginResponder() const;
	virtual void setLoginResponder(CIMInstance&);
	virtual Boolean getNegotiatedCOS(CIMProperty&) const;
	virtual Uint16 getNegotiatedCOS() const;
	virtual void setNegotiatedCOS(Uint16&);
	virtual Boolean getNegotiatedFrameSize(CIMProperty&) const;
	virtual Uint64 getNegotiatedFrameSize() const;
	virtual void setNegotiatedFrameSize(Uint64&);
	virtual Boolean getNegotiatedSpeed(CIMProperty&) const;
	virtual Uint64 getNegotiatedSpeed() const;
	virtual void setNegotiatedSpeed(Uint64&);
	virtual Boolean getACKModel(CIMProperty&) const;
	virtual Uint16 getACKModel() const;
	virtual void setACKModel(Uint16&);
	virtual Boolean getBufferToBufferModel(CIMProperty&) const;
	virtual Uint16 getBufferToBufferModel() const;
	virtual void setBufferToBufferModel(Uint16&);
	virtual Boolean getOriginatorBufferCredit(CIMProperty&) const;
	virtual Uint64 getOriginatorBufferCredit() const;
	virtual void setOriginatorBufferCredit(Uint64&);
	virtual Boolean getResponderBufferCredit(CIMProperty&) const;
	virtual Uint64 getResponderBufferCredit() const;
	virtual void setResponderBufferCredit(Uint64&);
	virtual Boolean getOriginatorEndCredit(CIMProperty&) const;
	virtual Uint64 getOriginatorEndCredit() const;
	virtual void setOriginatorEndCredit(Uint64&);
	virtual Boolean getResponderEndCredit(CIMProperty&) const;
	virtual Uint64 getResponderEndCredit() const;
	virtual void setResponderEndCredit(Uint64&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _loginOriginator;
	CIMInstance _loginResponder;
	Uint16 _negotiatedCOS;
	Uint64 _negotiatedFrameSize;
	Uint64 _negotiatedSpeed;
	Uint16 _aCKModel;
	Uint16 _bufferToBufferModel;
	Uint64 _originatorBufferCredit;
	Uint64 _responderBufferCredit;
	Uint64 _originatorEndCredit;
	Uint64 _responderEndCredit;

#	include "UNIX_FibrePortActiveLoginPrivate.h"


};

#endif /* UNIX_FIBREPORTACTIVELOGIN */
