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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Filtering
*/


/* **** Description *** */
/*
IPHeadersFilter contains the most commonly required properties for performing filtering on IP, TCP or UDP headers. Properties not present in an instance of the IPHeadersFilter are treated as 'all values'.
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

			UNIX_IPHeadersFilter:
				HdrIPVersion UInt8
				HdrSrcAddress UInt8
				HdrSrcAddressEndOfRange UInt8
				HdrSrcMask UInt8
				HdrDestAddress UInt8
				HdrDestAddressEndOfRange UInt8
				HdrDestMask UInt8
				HdrProtocolID UInt8
				HdrSrcPortStart UInt16
				HdrSrcPortEnd UInt16
				HdrDestPortStart UInt16
				HdrDestPortEnd UInt16
				HdrDSCP UInt8
				HdrFlowLabel UInt8


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_FilterEntryBase:

			UNIX_IPHeadersFilter:


*/

#ifndef __UNIX_IPHEADERSFILTER_H
#define __UNIX_IPHEADERSFILTER_H


#include "CIM_FilterEntryBase.h"

#include "UNIX_IPHeadersFilterDeps.h"


#ifndef PROPERTY_HDR_IP_VERSION
#define PROPERTY_HDR_IP_VERSION \
					"HdrIPVersion"
#endif

#ifndef PROPERTY_HDR_SRC_ADDRESS
#define PROPERTY_HDR_SRC_ADDRESS \
					"HdrSrcAddress"
#endif

#ifndef PROPERTY_HDR_SRC_ADDRESS_END_OF_RANGE
#define PROPERTY_HDR_SRC_ADDRESS_END_OF_RANGE \
					"HdrSrcAddressEndOfRange"
#endif

#ifndef PROPERTY_HDR_SRC_MASK
#define PROPERTY_HDR_SRC_MASK \
					"HdrSrcMask"
#endif

#ifndef PROPERTY_HDR_DEST_ADDRESS
#define PROPERTY_HDR_DEST_ADDRESS \
					"HdrDestAddress"
#endif

#ifndef PROPERTY_HDR_DEST_ADDRESS_END_OF_RANGE
#define PROPERTY_HDR_DEST_ADDRESS_END_OF_RANGE \
					"HdrDestAddressEndOfRange"
#endif

#ifndef PROPERTY_HDR_DEST_MASK
#define PROPERTY_HDR_DEST_MASK \
					"HdrDestMask"
#endif

#ifndef PROPERTY_HDR_PROTOCOL_ID
#define PROPERTY_HDR_PROTOCOL_ID \
					"HdrProtocolID"
#endif

#ifndef PROPERTY_HDR_SRC_PORT_START
#define PROPERTY_HDR_SRC_PORT_START \
					"HdrSrcPortStart"
#endif

#ifndef PROPERTY_HDR_SRC_PORT_END
#define PROPERTY_HDR_SRC_PORT_END \
					"HdrSrcPortEnd"
#endif

#ifndef PROPERTY_HDR_DEST_PORT_START
#define PROPERTY_HDR_DEST_PORT_START \
					"HdrDestPortStart"
#endif

#ifndef PROPERTY_HDR_DEST_PORT_END
#define PROPERTY_HDR_DEST_PORT_END \
					"HdrDestPortEnd"
#endif

#ifndef PROPERTY_HDR_DSCP
#define PROPERTY_HDR_DSCP \
					"HdrDSCP"
#endif

#ifndef PROPERTY_HDR_FLOW_LABEL
#define PROPERTY_HDR_FLOW_LABEL \
					"HdrFlowLabel"
#endif



class UNIX_IPHeadersFilter :
	public CIM_FilterEntryBase
{
public:

	UNIX_IPHeadersFilter();
	~UNIX_IPHeadersFilter();

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
	virtual Boolean getHdrIPVersion(CIMProperty&) const;
	virtual Uint8 getHdrIPVersion() const;
	virtual void setHdrIPVersion(Uint8&);
	virtual Boolean getHdrSrcAddress(CIMProperty&) const;
	virtual Array<Uint8> getHdrSrcAddress() const;
	virtual void setHdrSrcAddress(Array<Uint8>&);
	virtual Boolean getHdrSrcAddressEndOfRange(CIMProperty&) const;
	virtual Array<Uint8> getHdrSrcAddressEndOfRange() const;
	virtual void setHdrSrcAddressEndOfRange(Array<Uint8>&);
	virtual Boolean getHdrSrcMask(CIMProperty&) const;
	virtual Array<Uint8> getHdrSrcMask() const;
	virtual void setHdrSrcMask(Array<Uint8>&);
	virtual Boolean getHdrDestAddress(CIMProperty&) const;
	virtual Array<Uint8> getHdrDestAddress() const;
	virtual void setHdrDestAddress(Array<Uint8>&);
	virtual Boolean getHdrDestAddressEndOfRange(CIMProperty&) const;
	virtual Array<Uint8> getHdrDestAddressEndOfRange() const;
	virtual void setHdrDestAddressEndOfRange(Array<Uint8>&);
	virtual Boolean getHdrDestMask(CIMProperty&) const;
	virtual Array<Uint8> getHdrDestMask() const;
	virtual void setHdrDestMask(Array<Uint8>&);
	virtual Boolean getHdrProtocolID(CIMProperty&) const;
	virtual Uint8 getHdrProtocolID() const;
	virtual void setHdrProtocolID(Uint8&);
	virtual Boolean getHdrSrcPortStart(CIMProperty&) const;
	virtual Uint16 getHdrSrcPortStart() const;
	virtual void setHdrSrcPortStart(Uint16&);
	virtual Boolean getHdrSrcPortEnd(CIMProperty&) const;
	virtual Uint16 getHdrSrcPortEnd() const;
	virtual void setHdrSrcPortEnd(Uint16&);
	virtual Boolean getHdrDestPortStart(CIMProperty&) const;
	virtual Uint16 getHdrDestPortStart() const;
	virtual void setHdrDestPortStart(Uint16&);
	virtual Boolean getHdrDestPortEnd(CIMProperty&) const;
	virtual Uint16 getHdrDestPortEnd() const;
	virtual void setHdrDestPortEnd(Uint16&);
	virtual Boolean getHdrDSCP(CIMProperty&) const;
	virtual Array<Uint8> getHdrDSCP() const;
	virtual void setHdrDSCP(Array<Uint8>&);
	virtual Boolean getHdrFlowLabel(CIMProperty&) const;
	virtual Array<Uint8> getHdrFlowLabel() const;
	virtual void setHdrFlowLabel(Array<Uint8>&);


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
	Uint8 _hdrIPVersion;
	Array<Uint8> _hdrSrcAddress;
	Array<Uint8> _hdrSrcAddressEndOfRange;
	Array<Uint8> _hdrSrcMask;
	Array<Uint8> _hdrDestAddress;
	Array<Uint8> _hdrDestAddressEndOfRange;
	Array<Uint8> _hdrDestMask;
	Uint8 _hdrProtocolID;
	Uint16 _hdrSrcPortStart;
	Uint16 _hdrSrcPortEnd;
	Uint16 _hdrDestPortStart;
	Uint16 _hdrDestPortEnd;
	Array<Uint8> _hdrDSCP;
	Array<Uint8> _hdrFlowLabel;

#	include "UNIX_IPHeadersFilterPrivate.h"


};

#endif /* UNIX_IPHEADERSFILTER */
