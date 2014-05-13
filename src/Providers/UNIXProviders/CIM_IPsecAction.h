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
IPsecAction specifies the parameters to use for an IPsec phase 2 negotiation.
*/


/* **** MappingStrings *** */
/*
IPSP Policy Model.IETF|IPsecAction
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

			CIM_SANegotiationAction:
				MinLifetimeSeconds UInt64
				IdleDurationSeconds UInt64
				MinLifetimeKilobytes UInt64

			CIM_IPsecAction:
				UsePFS Boolean
				UsePhase1Group Boolean
				GroupId UInt16
				VendorID String
				Granularity UInt16
				OtherGranularity String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Policy:

			CIM_PolicyAction:

			CIM_SAAction:

			CIM_SANegotiationAction:

			CIM_IPsecAction:


*/

#ifndef __CIM_IPSECACTION_H
#define __CIM_IPSECACTION_H


#include "CIM_SANegotiationAction.h"


#ifndef PROPERTY_USE_P_FS
#define PROPERTY_USE_P_FS \
					"UsePFS"
#endif

#ifndef PROPERTY_USE_PHASE_1_GROUP
#define PROPERTY_USE_PHASE_1_GROUP \
					"UsePhase1Group"
#endif

#ifndef PROPERTY_GROUP_ID
#define PROPERTY_GROUP_ID \
					"GroupId"
#endif

#ifndef PROPERTY_VENDOR_ID
#define PROPERTY_VENDOR_ID \
					"VendorID"
#endif

#ifndef PROPERTY_GRANULARITY
#define PROPERTY_GRANULARITY \
					"Granularity"
#endif

#ifndef PROPERTY_OTHER_GRANULARITY
#define PROPERTY_OTHER_GRANULARITY \
					"OtherGranularity"
#endif



class CIM_IPsecAction :
	public CIM_SANegotiationAction
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

	virtual Boolean getUsePFS(CIMProperty&) const=0;
	virtual Boolean getUsePFS() const=0;
	virtual void setUsePFS(Boolean&)=0;
	virtual Boolean getUsePhase1Group(CIMProperty&) const=0;
	virtual Boolean getUsePhase1Group() const=0;
	virtual void setUsePhase1Group(Boolean&)=0;
	virtual Boolean getGroupId(CIMProperty&) const=0;
	virtual Uint16 getGroupId() const=0;
	virtual void setGroupId(Uint16&)=0;
	virtual Boolean getVendorID(CIMProperty&) const=0;
	virtual String getVendorID() const=0;
	virtual void setVendorID(String&)=0;
	virtual Boolean getGranularity(CIMProperty&) const=0;
	virtual Uint16 getGranularity() const=0;
	virtual void setGranularity(Uint16&)=0;
	virtual Boolean getOtherGranularity(CIMProperty&) const=0;
	virtual String getOtherGranularity() const=0;
	virtual void setOtherGranularity(String&)=0;


private:

};

#endif /* CIM_IPSECACTION */
