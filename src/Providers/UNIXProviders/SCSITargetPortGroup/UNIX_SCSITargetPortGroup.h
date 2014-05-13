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
2.29.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageDevices
*/


/* **** Description *** */
/*
A class derived from SystemSpecificCollection that models SCSI Target Port Groups. SCSITargetPortGroup is part of the model for devices with asymmetric access to logical units - access is optimized for a subset of target ports. SCSITargetPortGroup is aggregated to SCSIProtocolEndpoints that expose a common ValueMap { 2, 3, 4, 5, 6 }, Values { Active/Optimized, Active/Non-optimized, StandBy, Unavailable, Transitioning }, access state for a set of associated logical Units (modeled by various subclasses of LogicalDevice). SCSITargetPortGroups only apply to target devices with asymmetric multipath access and not to devices with symmetric (or single path) access.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Collection:

			CIM_SystemSpecificCollection:

			UNIX_SCSITargetPortGroup:
				Asymmetric Boolean
				CurrentLoadBalanceType UInt16
				OtherCurrentLoadBalanceType String
				AutoFailbackEnabled UInt16
				PollingRateMax UInt32
				CurrentPollingRate UInt32
				AccessState UInt16
				ExplicitFailover Boolean
				Identifier UInt16
				Preferred Boolean
				SupportsLuAssignment Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_SystemSpecificCollection:

			UNIX_SCSITargetPortGroup:


*/

#ifndef __UNIX_SCSITARGETPORTGROUP_H
#define __UNIX_SCSITARGETPORTGROUP_H


#include "CIM_SystemSpecificCollection.h"

#include "UNIX_SCSITargetPortGroupDeps.h"


#ifndef PROPERTY_ASYMMETRIC
#define PROPERTY_ASYMMETRIC \
					"Asymmetric"
#endif

#ifndef PROPERTY_CURRENT_LOAD_BALANCE_TYPE
#define PROPERTY_CURRENT_LOAD_BALANCE_TYPE \
					"CurrentLoadBalanceType"
#endif

#ifndef PROPERTY_OTHER_CURRENT_LOAD_BALANCE_TYPE
#define PROPERTY_OTHER_CURRENT_LOAD_BALANCE_TYPE \
					"OtherCurrentLoadBalanceType"
#endif

#ifndef PROPERTY_AUTO_FAILBACK_ENABLED
#define PROPERTY_AUTO_FAILBACK_ENABLED \
					"AutoFailbackEnabled"
#endif

#ifndef PROPERTY_POLLING_RATE_MAX
#define PROPERTY_POLLING_RATE_MAX \
					"PollingRateMax"
#endif

#ifndef PROPERTY_CURRENT_POLLING_RATE
#define PROPERTY_CURRENT_POLLING_RATE \
					"CurrentPollingRate"
#endif

#ifndef PROPERTY_ACCESS_STATE
#define PROPERTY_ACCESS_STATE \
					"AccessState"
#endif

#ifndef PROPERTY_EXPLICIT_FAILOVER
#define PROPERTY_EXPLICIT_FAILOVER \
					"ExplicitFailover"
#endif

#ifndef PROPERTY_IDENTIFIER
#define PROPERTY_IDENTIFIER \
					"Identifier"
#endif

#ifndef PROPERTY_PREFERRED
#define PROPERTY_PREFERRED \
					"Preferred"
#endif

#ifndef PROPERTY_SUPPORTS_LU_ASSIGNMENT
#define PROPERTY_SUPPORTS_LU_ASSIGNMENT \
					"SupportsLuAssignment"
#endif



class UNIX_SCSITargetPortGroup :
	public CIM_SystemSpecificCollection
{
public:

	UNIX_SCSITargetPortGroup();
	~UNIX_SCSITargetPortGroup();

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
	virtual Boolean getAsymmetric(CIMProperty&) const;
	virtual Boolean getAsymmetric() const;
	virtual void setAsymmetric(Boolean&);
	virtual Boolean getCurrentLoadBalanceType(CIMProperty&) const;
	virtual Uint16 getCurrentLoadBalanceType() const;
	virtual void setCurrentLoadBalanceType(Uint16&);
	virtual Boolean getOtherCurrentLoadBalanceType(CIMProperty&) const;
	virtual String getOtherCurrentLoadBalanceType() const;
	virtual void setOtherCurrentLoadBalanceType(String&);
	virtual Boolean getAutoFailbackEnabled(CIMProperty&) const;
	virtual Uint16 getAutoFailbackEnabled() const;
	virtual void setAutoFailbackEnabled(Uint16&);
	virtual Boolean getPollingRateMax(CIMProperty&) const;
	virtual Uint32 getPollingRateMax() const;
	virtual void setPollingRateMax(Uint32&);
	virtual Boolean getCurrentPollingRate(CIMProperty&) const;
	virtual Uint32 getCurrentPollingRate() const;
	virtual void setCurrentPollingRate(Uint32&);
	virtual Boolean getAccessState(CIMProperty&) const;
	virtual Uint16 getAccessState() const;
	virtual void setAccessState(Uint16&);
	virtual Boolean getExplicitFailover(CIMProperty&) const;
	virtual Boolean getExplicitFailover() const;
	virtual void setExplicitFailover(Boolean&);
	virtual Boolean getIdentifier(CIMProperty&) const;
	virtual Uint16 getIdentifier() const;
	virtual void setIdentifier(Uint16&);
	virtual Boolean getPreferred(CIMProperty&) const;
	virtual Boolean getPreferred() const;
	virtual void setPreferred(Boolean&);
	virtual Boolean getSupportsLuAssignment(CIMProperty&) const;
	virtual Boolean getSupportsLuAssignment() const;
	virtual void setSupportsLuAssignment(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Boolean _asymmetric;
	Uint16 _currentLoadBalanceType;
	String _otherCurrentLoadBalanceType;
	Uint16 _autoFailbackEnabled;
	Uint32 _pollingRateMax;
	Uint32 _currentPollingRate;
	Uint16 _accessState;
	Boolean _explicitFailover;
	Uint16 _identifier;
	Boolean _preferred;
	Boolean _supportsLuAssignment;

#	include "UNIX_SCSITargetPortGroupPrivate.h"


};

#endif /* UNIX_SCSITARGETPORTGROUP */
