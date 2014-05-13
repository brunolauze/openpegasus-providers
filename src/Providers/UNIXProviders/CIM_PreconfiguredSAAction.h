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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::IPsecPolicy
*/


/* **** Description *** */
/*
Subclasses of PreconfiguredSAAction are used to create SAs using preconfigured, hard-wired algorithms and keys. No negotiation is necessary. Note that this class is defined as concrete, since its superclass is also concrete. However, it should not be directly instantiated, but one of its subclasses used instead. 

Also note that: 
- The SPI for a preconfigured SA action is contained in the association, TransformOfPreconfiguredAction. 
- The session key (if applicable) is contained in an instance of SharedSecret. For an instance of the SharedSecret class: The session key is stored in the Secret property; the property protocol contains one of the values, "ESP-encrypt", "ESP-auth" or "AH"; and, the class' property algorithm contains the algorithm used to protect the secret. (The latter can be "PLAINTEXT" if the IPsec entity has no secret storage.) The value of the class' RemoteID property is the concatenation of the remote IPsec peer IP address in dotted decimal, of the character "/", of "IN" (or respectively "OUT") for inbound/outbound SAs, of the character "/" and of the hexadecimal representation of the SPI.
*/


/* **** MappingStrings *** */
/*
IPSP Policy Model.IETF|PreconfiguredSAAction
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

			CIM_SAAction:
				DoPacketLogging Boolean

			CIM_SAStaticAction:
				LifetimeSeconds UInt64

			CIM_PreconfiguredSAAction:
				LifetimeKilobytes UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Policy:

			CIM_PolicyAction:

			CIM_SAAction:

			CIM_SAStaticAction:

			CIM_PreconfiguredSAAction:


*/

#ifndef __CIM_PRECONFIGUREDSAACTION_H
#define __CIM_PRECONFIGUREDSAACTION_H


#include "CIM_SAStaticAction.h"


#ifndef PROPERTY_LIFETIME_KILOBYTES
#define PROPERTY_LIFETIME_KILOBYTES \
					"LifetimeKilobytes"
#endif



class CIM_PreconfiguredSAAction :
	public CIM_SAStaticAction
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getLifetimeKilobytes(CIMProperty&) const=0;
	virtual Uint64 getLifetimeKilobytes() const=0;
	virtual void setLifetimeKilobytes(Uint64&)=0;


private:

};

#endif /* CIM_PRECONFIGUREDSAACTION */
