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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::RoutingForwarding
*/


/* **** Description *** */
/*
This class is used to implement routing policies. It aggregates a set of FilterLists, along with other appropriate constructs, into a unit. One of the most important uses of this class is to change the routing policy by changing values of various attributes in a consistent manner. 

A RoutingPolicy is weak to the network device (i.e., the ComputerSystem) that contains it. Hence, the ComputerSystem keys are propagated to this class. 

Note that this class was defined before the Policy Model and hence is not positioned in that hierarchy. The class will be repositioned in a later release of the Network Model.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_ManagedSystemElement:
				InstallDate DateTime
				Name String
				OperationalStatus UInt16
				StatusDescriptions String
				Status String
				HealthState UInt16
				CommunicationStatus UInt16
				DetailedStatus UInt16
				OperatingStatus UInt16
				PrimaryStatus UInt16

			CIM_LogicalElement:

			UNIX_RoutingPolicy:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				Action UInt16
				AttributeAction UInt16
				BGPAction UInt16
				BGPValue String
				RemarkAction UInt16
				RemarkValue String
				ConditioningAction UInt16
				OtherConditioningAction String
				ConditioningValue String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			UNIX_RoutingPolicy:


*/

#ifndef __UNIX_ROUTINGPOLICY_H
#define __UNIX_ROUTINGPOLICY_H


#include "CIM_LogicalElement.h"

#include "UNIX_RoutingPolicyDeps.h"


#ifndef PROPERTY_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_SYSTEM_CREATION_CLASS_NAME \
					"SystemCreationClassName"
#endif

#ifndef PROPERTY_SYSTEM_NAME
#define PROPERTY_SYSTEM_NAME \
					"SystemName"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_ACTION
#define PROPERTY_ACTION \
					"Action"
#endif

#ifndef PROPERTY_ATTRIBUTE_ACTION
#define PROPERTY_ATTRIBUTE_ACTION \
					"AttributeAction"
#endif

#ifndef PROPERTY_BGP_ACTION
#define PROPERTY_BGP_ACTION \
					"BGPAction"
#endif

#ifndef PROPERTY_BGP_VALUE
#define PROPERTY_BGP_VALUE \
					"BGPValue"
#endif

#ifndef PROPERTY_REMARK_ACTION
#define PROPERTY_REMARK_ACTION \
					"RemarkAction"
#endif

#ifndef PROPERTY_REMARK_VALUE
#define PROPERTY_REMARK_VALUE \
					"RemarkValue"
#endif

#ifndef PROPERTY_CONDITIONING_ACTION
#define PROPERTY_CONDITIONING_ACTION \
					"ConditioningAction"
#endif

#ifndef PROPERTY_OTHER_CONDITIONING_ACTION
#define PROPERTY_OTHER_CONDITIONING_ACTION \
					"OtherConditioningAction"
#endif

#ifndef PROPERTY_CONDITIONING_VALUE
#define PROPERTY_CONDITIONING_VALUE \
					"ConditioningValue"
#endif



class UNIX_RoutingPolicy :
	public CIM_LogicalElement
{
public:

	UNIX_RoutingPolicy();
	~UNIX_RoutingPolicy();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual void setInstallDate(CIMDateTime&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual void setOperationalStatus(Array<Uint16>&);
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual void setStatusDescriptions(Array<String>&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual void setStatus(String&);
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual void setHealthState(Uint16&);
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual void setCommunicationStatus(Uint16&);
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual void setDetailedStatus(Uint16&);
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual void setOperatingStatus(Uint16&);
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual void setPrimaryStatus(Uint16&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getAction(CIMProperty&) const;
	virtual Uint16 getAction() const;
	virtual void setAction(Uint16&);
	virtual Boolean getAttributeAction(CIMProperty&) const;
	virtual Uint16 getAttributeAction() const;
	virtual void setAttributeAction(Uint16&);
	virtual Boolean getBGPAction(CIMProperty&) const;
	virtual Uint16 getBGPAction() const;
	virtual void setBGPAction(Uint16&);
	virtual Boolean getBGPValue(CIMProperty&) const;
	virtual String getBGPValue() const;
	virtual void setBGPValue(String&);
	virtual Boolean getRemarkAction(CIMProperty&) const;
	virtual Uint16 getRemarkAction() const;
	virtual void setRemarkAction(Uint16&);
	virtual Boolean getRemarkValue(CIMProperty&) const;
	virtual String getRemarkValue() const;
	virtual void setRemarkValue(String&);
	virtual Boolean getConditioningAction(CIMProperty&) const;
	virtual Uint16 getConditioningAction() const;
	virtual void setConditioningAction(Uint16&);
	virtual Boolean getOtherConditioningAction(CIMProperty&) const;
	virtual String getOtherConditioningAction() const;
	virtual void setOtherConditioningAction(String&);
	virtual Boolean getConditioningValue(CIMProperty&) const;
	virtual String getConditioningValue() const;
	virtual void setConditioningValue(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _installDate;
	String _name;
	Array<Uint16> _operationalStatus;
	Array<String> _statusDescriptions;
	String _status;
	Uint16 _healthState;
	Uint16 _communicationStatus;
	Uint16 _detailedStatus;
	Uint16 _operatingStatus;
	Uint16 _primaryStatus;
	String _systemCreationClassName;
	String _systemName;
	String _creationClassName;
	Uint16 _action;
	Uint16 _attributeAction;
	Uint16 _bGPAction;
	String _bGPValue;
	Uint16 _remarkAction;
	String _remarkValue;
	Uint16 _conditioningAction;
	String _otherConditioningAction;
	String _conditioningValue;

#	include "UNIX_RoutingPolicyPrivate.h"


};

#endif /* UNIX_ROUTINGPOLICY */
