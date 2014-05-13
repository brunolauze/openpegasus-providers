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
CIM::Network::Filtering
*/


/* **** Description *** */
/*
8021Filter allows 802.1.source and destination MAC addresses, as well as the 802.1 protocol ID, priority, and VLAN identifier fields, to be expressed in a single object to classify and identify traffic.
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

			CIM_FilterEntryBase:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				IsNegated Boolean

			UNIX_Hdr8021Filter:
				HdrSrcMACAddr8021 UInt8
				HdrSrcMACMask8021 UInt8
				HdrDestMACAddr8021 UInt8
				HdrDestMACMask8021 UInt8
				HdrProtocolID8021 UInt16
				HdrPriorityValue8021 UInt8
				HdrVLANID8021 UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_FilterEntryBase:

			UNIX_Hdr8021Filter:


*/

#ifndef __UNIX_HDR8021FILTER_H
#define __UNIX_HDR8021FILTER_H


#include "CIM_FilterEntryBase.h"

#include "UNIX_Hdr8021FilterDeps.h"


#ifndef PROPERTY_HDR_SRC_M_A_C_ADDR_8_0_2_1
#define PROPERTY_HDR_SRC_M_A_C_ADDR_8_0_2_1 \
					"HdrSrcMACAddr8021"
#endif

#ifndef PROPERTY_HDR_SRC_M_A_C_MASK_8_0_2_1
#define PROPERTY_HDR_SRC_M_A_C_MASK_8_0_2_1 \
					"HdrSrcMACMask8021"
#endif

#ifndef PROPERTY_HDR_DEST_M_A_C_ADDR_8_0_2_1
#define PROPERTY_HDR_DEST_M_A_C_ADDR_8_0_2_1 \
					"HdrDestMACAddr8021"
#endif

#ifndef PROPERTY_HDR_DEST_M_A_C_MASK_8_0_2_1
#define PROPERTY_HDR_DEST_M_A_C_MASK_8_0_2_1 \
					"HdrDestMACMask8021"
#endif

#ifndef PROPERTY_HDR_PROTOCOL_ID_8_0_2_1
#define PROPERTY_HDR_PROTOCOL_ID_8_0_2_1 \
					"HdrProtocolID8021"
#endif

#ifndef PROPERTY_HDR_PRIORITY_VALUE_8_0_2_1
#define PROPERTY_HDR_PRIORITY_VALUE_8_0_2_1 \
					"HdrPriorityValue8021"
#endif

#ifndef PROPERTY_HDR_VLAN_ID_8_0_2_1
#define PROPERTY_HDR_VLAN_ID_8_0_2_1 \
					"HdrVLANID8021"
#endif



class UNIX_Hdr8021Filter :
	public CIM_FilterEntryBase
{
public:

	UNIX_Hdr8021Filter();
	~UNIX_Hdr8021Filter();

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
	virtual Boolean getIsNegated(CIMProperty&) const;
	virtual Boolean getIsNegated() const;
	virtual void setIsNegated(Boolean&);
	virtual Boolean getHdrSrcMACAddr8021(CIMProperty&) const;
	virtual Array<Uint8> getHdrSrcMACAddr8021() const;
	virtual void setHdrSrcMACAddr8021(Array<Uint8>&);
	virtual Boolean getHdrSrcMACMask8021(CIMProperty&) const;
	virtual Array<Uint8> getHdrSrcMACMask8021() const;
	virtual void setHdrSrcMACMask8021(Array<Uint8>&);
	virtual Boolean getHdrDestMACAddr8021(CIMProperty&) const;
	virtual Array<Uint8> getHdrDestMACAddr8021() const;
	virtual void setHdrDestMACAddr8021(Array<Uint8>&);
	virtual Boolean getHdrDestMACMask8021(CIMProperty&) const;
	virtual Array<Uint8> getHdrDestMACMask8021() const;
	virtual void setHdrDestMACMask8021(Array<Uint8>&);
	virtual Boolean getHdrProtocolID8021(CIMProperty&) const;
	virtual Uint16 getHdrProtocolID8021() const;
	virtual void setHdrProtocolID8021(Uint16&);
	virtual Boolean getHdrPriorityValue8021(CIMProperty&) const;
	virtual Uint8 getHdrPriorityValue8021() const;
	virtual void setHdrPriorityValue8021(Uint8&);
	virtual Boolean getHdrVLANID8021(CIMProperty&) const;
	virtual Uint32 getHdrVLANID8021() const;
	virtual void setHdrVLANID8021(Uint32&);


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
	Boolean _isNegated;
	Array<Uint8> _hdrSrcMACAddr8021;
	Array<Uint8> _hdrSrcMACMask8021;
	Array<Uint8> _hdrDestMACAddr8021;
	Array<Uint8> _hdrDestMACMask8021;
	Uint16 _hdrProtocolID8021;
	Uint8 _hdrPriorityValue8021;
	Uint32 _hdrVLANID8021;

#	include "UNIX_Hdr8021FilterPrivate.h"


};

#endif /* UNIX_HDR8021FILTER */
