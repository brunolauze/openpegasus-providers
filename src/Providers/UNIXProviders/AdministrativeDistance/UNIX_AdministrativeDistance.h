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
CIM::Network::Routes
*/


/* **** Description *** */
/*
Information in this class affects the choice of one protocol over another, when two protocols learn the same route. Properties define the preference of a protocol, called its distance. The lower the distance, the higher the preference for that protocol. This class affects ALL routes and contains the default distances. Specific administrative distances relative to an individual route and Forwarding Service are defined in the NextHopForwardedByService association, its AdminDistance property. 

AdministrativeDistance, being a global object, is weak to the AdminDomain that contains it. Hence, the AdminDomain keys are propagated to this class.
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

			UNIX_AdministrativeDistance:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				DirectConnect UInt8
				Static UInt8
				EBGP UInt8
				EIGRPInternal UInt8
				IGRP UInt8
				OSPF UInt8
				ISIS UInt8
				RIP UInt8
				EGP UInt8
				EIGRPExternal UInt8
				IBGP UInt8
				BGPLocal UInt8
				Unknown UInt8


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			UNIX_AdministrativeDistance:


*/

#ifndef __UNIX_ADMINISTRATIVEDISTANCE_H
#define __UNIX_ADMINISTRATIVEDISTANCE_H


#include "CIM_LogicalElement.h"

#include "UNIX_AdministrativeDistanceDeps.h"


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

#ifndef PROPERTY_DIRECT_CONNECT
#define PROPERTY_DIRECT_CONNECT \
					"DirectConnect"
#endif

#ifndef PROPERTY_STATIC
#define PROPERTY_STATIC \
					"Static"
#endif

#ifndef PROPERTY_E_BGP
#define PROPERTY_E_BGP \
					"EBGP"
#endif

#ifndef PROPERTY_E_I_G_R_P_INTERNAL
#define PROPERTY_E_I_G_R_P_INTERNAL \
					"EIGRPInternal"
#endif

#ifndef PROPERTY_I_G_R_P
#define PROPERTY_I_G_R_P \
					"IGRP"
#endif

#ifndef PROPERTY_OSPF
#define PROPERTY_OSPF \
					"OSPF"
#endif

#ifndef PROPERTY_I_S_I_S
#define PROPERTY_I_S_I_S \
					"ISIS"
#endif

#ifndef PROPERTY_R_IP
#define PROPERTY_R_IP \
					"RIP"
#endif

#ifndef PROPERTY_E_G_P
#define PROPERTY_E_G_P \
					"EGP"
#endif

#ifndef PROPERTY_E_I_G_R_P_EXTERNAL
#define PROPERTY_E_I_G_R_P_EXTERNAL \
					"EIGRPExternal"
#endif

#ifndef PROPERTY_IB_G_P
#define PROPERTY_IB_G_P \
					"IBGP"
#endif

#ifndef PROPERTY_BGP_LOCAL
#define PROPERTY_BGP_LOCAL \
					"BGPLocal"
#endif

#ifndef PROPERTY_UNKNOWN
#define PROPERTY_UNKNOWN \
					"Unknown"
#endif



class UNIX_AdministrativeDistance :
	public CIM_LogicalElement
{
public:

	UNIX_AdministrativeDistance();
	~UNIX_AdministrativeDistance();

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
	virtual Boolean getDirectConnect(CIMProperty&) const;
	virtual Uint8 getDirectConnect() const;
	virtual void setDirectConnect(Uint8&);
	virtual Boolean getStatic(CIMProperty&) const;
	virtual Uint8 getStatic() const;
	virtual void setStatic(Uint8&);
	virtual Boolean getEBGP(CIMProperty&) const;
	virtual Uint8 getEBGP() const;
	virtual void setEBGP(Uint8&);
	virtual Boolean getEIGRPInternal(CIMProperty&) const;
	virtual Uint8 getEIGRPInternal() const;
	virtual void setEIGRPInternal(Uint8&);
	virtual Boolean getIGRP(CIMProperty&) const;
	virtual Uint8 getIGRP() const;
	virtual void setIGRP(Uint8&);
	virtual Boolean getOSPF(CIMProperty&) const;
	virtual Uint8 getOSPF() const;
	virtual void setOSPF(Uint8&);
	virtual Boolean getISIS(CIMProperty&) const;
	virtual Uint8 getISIS() const;
	virtual void setISIS(Uint8&);
	virtual Boolean getRIP(CIMProperty&) const;
	virtual Uint8 getRIP() const;
	virtual void setRIP(Uint8&);
	virtual Boolean getEGP(CIMProperty&) const;
	virtual Uint8 getEGP() const;
	virtual void setEGP(Uint8&);
	virtual Boolean getEIGRPExternal(CIMProperty&) const;
	virtual Uint8 getEIGRPExternal() const;
	virtual void setEIGRPExternal(Uint8&);
	virtual Boolean getIBGP(CIMProperty&) const;
	virtual Uint8 getIBGP() const;
	virtual void setIBGP(Uint8&);
	virtual Boolean getBGPLocal(CIMProperty&) const;
	virtual Uint8 getBGPLocal() const;
	virtual void setBGPLocal(Uint8&);
	virtual Boolean getUnknown(CIMProperty&) const;
	virtual Uint8 getUnknown() const;
	virtual void setUnknown(Uint8&);


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
	Uint8 _directConnect;
	Uint8 _static;
	Uint8 _eBGP;
	Uint8 _eIGRPInternal;
	Uint8 _iGRP;
	Uint8 _oSPF;
	Uint8 _iSIS;
	Uint8 _rIP;
	Uint8 _eGP;
	Uint8 _eIGRPExternal;
	Uint8 _iBGP;
	Uint8 _bGPLocal;
	Uint8 _unknown;

#	include "UNIX_AdministrativeDistancePrivate.h"


};

#endif /* UNIX_ADMINISTRATIVEDISTANCE */
