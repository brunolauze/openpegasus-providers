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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::IB
*/


/* **** Description *** */
/*
The class, IBPortStatistics, represents the statistics for the IBPort.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_StatisticalData:
				StartStatisticTime DateTime
				StatisticTime DateTime
				SampleInterval DateTime
				RateIntervalEndTime DateTime
				RateIntervalStartTime DateTime

			CIM_NetworkPortStatistics:
				BytesTransmitted UInt64
				BytesReceived UInt64
				PacketsTransmitted UInt64
				PacketsReceived UInt64

			UNIX_IBPortStatistics:
				SymbolErrorCounter UInt16
				LinkErrorRecoveryCounter UInt16
				LinkDownedCounter UInt16
				PortRcvErrors UInt16
				PortRcvRemotePhysicalErrors UInt16
				PortRcvSwitchRelayErrors UInt16
				PortXmitDiscards UInt16
				PortXmitConstraintErrors UInt16
				PortRcvConstraintErrors UInt16
				LocalLinkIntegrityErrors UInt16
				ExcessiveBufferOverrunErrors UInt16
				VL15Dropped UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			CIM_NetworkPortStatistics:

			UNIX_IBPortStatistics:


*/

#ifndef __UNIX_IBPORTSTATISTICS_H
#define __UNIX_IBPORTSTATISTICS_H


#include "CIM_NetworkPortStatistics.h"

#include "UNIX_IBPortStatisticsDeps.h"


#ifndef PROPERTY_SYMBOL_ERROR_COUNTER
#define PROPERTY_SYMBOL_ERROR_COUNTER \
					"SymbolErrorCounter"
#endif

#ifndef PROPERTY_LINK_ERROR_RECOVERY_COUNTER
#define PROPERTY_LINK_ERROR_RECOVERY_COUNTER \
					"LinkErrorRecoveryCounter"
#endif

#ifndef PROPERTY_LINK_DOWNED_COUNTER
#define PROPERTY_LINK_DOWNED_COUNTER \
					"LinkDownedCounter"
#endif

#ifndef PROPERTY_PORT_RCV_ERRORS
#define PROPERTY_PORT_RCV_ERRORS \
					"PortRcvErrors"
#endif

#ifndef PROPERTY_PORT_RCV_REMOTE_PHYSICAL_ERRORS
#define PROPERTY_PORT_RCV_REMOTE_PHYSICAL_ERRORS \
					"PortRcvRemotePhysicalErrors"
#endif

#ifndef PROPERTY_PORT_RCV_SWITCH_RELAY_ERRORS
#define PROPERTY_PORT_RCV_SWITCH_RELAY_ERRORS \
					"PortRcvSwitchRelayErrors"
#endif

#ifndef PROPERTY_PORT_XMIT_DISCARDS
#define PROPERTY_PORT_XMIT_DISCARDS \
					"PortXmitDiscards"
#endif

#ifndef PROPERTY_PORT_XMIT_CONSTRAINT_ERRORS
#define PROPERTY_PORT_XMIT_CONSTRAINT_ERRORS \
					"PortXmitConstraintErrors"
#endif

#ifndef PROPERTY_PORT_RCV_CONSTRAINT_ERRORS
#define PROPERTY_PORT_RCV_CONSTRAINT_ERRORS \
					"PortRcvConstraintErrors"
#endif

#ifndef PROPERTY_LOCAL_LINK_INTEGRITY_ERRORS
#define PROPERTY_LOCAL_LINK_INTEGRITY_ERRORS \
					"LocalLinkIntegrityErrors"
#endif

#ifndef PROPERTY_EXCESSIVE_BUFFER_OVERRUN_ERRORS
#define PROPERTY_EXCESSIVE_BUFFER_OVERRUN_ERRORS \
					"ExcessiveBufferOverrunErrors"
#endif

#ifndef PROPERTY_V_L_1_5_DROPPED
#define PROPERTY_V_L_1_5_DROPPED \
					"VL15Dropped"
#endif



class UNIX_IBPortStatistics :
	public CIM_NetworkPortStatistics
{
public:

	UNIX_IBPortStatistics();
	~UNIX_IBPortStatistics();

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
	virtual Boolean getStartStatisticTime(CIMProperty&) const;
	virtual CIMDateTime getStartStatisticTime() const;
	virtual void setStartStatisticTime(CIMDateTime&);
	virtual Boolean getStatisticTime(CIMProperty&) const;
	virtual CIMDateTime getStatisticTime() const;
	virtual void setStatisticTime(CIMDateTime&);
	virtual Boolean getSampleInterval(CIMProperty&) const;
	virtual CIMDateTime getSampleInterval() const;
	virtual void setSampleInterval(CIMDateTime&);
	virtual Boolean getRateIntervalEndTime(CIMProperty&) const;
	virtual CIMDateTime getRateIntervalEndTime() const;
	virtual void setRateIntervalEndTime(CIMDateTime&);
	virtual Boolean getRateIntervalStartTime(CIMProperty&) const;
	virtual CIMDateTime getRateIntervalStartTime() const;
	virtual void setRateIntervalStartTime(CIMDateTime&);
	virtual Boolean getBytesTransmitted(CIMProperty&) const;
	virtual Uint64 getBytesTransmitted() const;
	virtual void setBytesTransmitted(Uint64&);
	virtual Boolean getBytesReceived(CIMProperty&) const;
	virtual Uint64 getBytesReceived() const;
	virtual void setBytesReceived(Uint64&);
	virtual Boolean getPacketsTransmitted(CIMProperty&) const;
	virtual Uint64 getPacketsTransmitted() const;
	virtual void setPacketsTransmitted(Uint64&);
	virtual Boolean getPacketsReceived(CIMProperty&) const;
	virtual Uint64 getPacketsReceived() const;
	virtual void setPacketsReceived(Uint64&);
	virtual Boolean getSymbolErrorCounter(CIMProperty&) const;
	virtual Uint16 getSymbolErrorCounter() const;
	virtual void setSymbolErrorCounter(Uint16&);
	virtual Boolean getLinkErrorRecoveryCounter(CIMProperty&) const;
	virtual Uint16 getLinkErrorRecoveryCounter() const;
	virtual void setLinkErrorRecoveryCounter(Uint16&);
	virtual Boolean getLinkDownedCounter(CIMProperty&) const;
	virtual Uint16 getLinkDownedCounter() const;
	virtual void setLinkDownedCounter(Uint16&);
	virtual Boolean getPortRcvErrors(CIMProperty&) const;
	virtual Uint16 getPortRcvErrors() const;
	virtual void setPortRcvErrors(Uint16&);
	virtual Boolean getPortRcvRemotePhysicalErrors(CIMProperty&) const;
	virtual Uint16 getPortRcvRemotePhysicalErrors() const;
	virtual void setPortRcvRemotePhysicalErrors(Uint16&);
	virtual Boolean getPortRcvSwitchRelayErrors(CIMProperty&) const;
	virtual Uint16 getPortRcvSwitchRelayErrors() const;
	virtual void setPortRcvSwitchRelayErrors(Uint16&);
	virtual Boolean getPortXmitDiscards(CIMProperty&) const;
	virtual Uint16 getPortXmitDiscards() const;
	virtual void setPortXmitDiscards(Uint16&);
	virtual Boolean getPortXmitConstraintErrors(CIMProperty&) const;
	virtual Uint16 getPortXmitConstraintErrors() const;
	virtual void setPortXmitConstraintErrors(Uint16&);
	virtual Boolean getPortRcvConstraintErrors(CIMProperty&) const;
	virtual Uint16 getPortRcvConstraintErrors() const;
	virtual void setPortRcvConstraintErrors(Uint16&);
	virtual Boolean getLocalLinkIntegrityErrors(CIMProperty&) const;
	virtual Uint16 getLocalLinkIntegrityErrors() const;
	virtual void setLocalLinkIntegrityErrors(Uint16&);
	virtual Boolean getExcessiveBufferOverrunErrors(CIMProperty&) const;
	virtual Uint16 getExcessiveBufferOverrunErrors() const;
	virtual void setExcessiveBufferOverrunErrors(Uint16&);
	virtual Boolean getVL15Dropped(CIMProperty&) const;
	virtual Uint16 getVL15Dropped() const;
	virtual void setVL15Dropped(Uint16&);

	virtual Uint32 invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _startStatisticTime;
	CIMDateTime _statisticTime;
	CIMDateTime _sampleInterval;
	CIMDateTime _rateIntervalEndTime;
	CIMDateTime _rateIntervalStartTime;
	Uint64 _bytesTransmitted;
	Uint64 _bytesReceived;
	Uint64 _packetsTransmitted;
	Uint64 _packetsReceived;
	Uint16 _symbolErrorCounter;
	Uint16 _linkErrorRecoveryCounter;
	Uint16 _linkDownedCounter;
	Uint16 _portRcvErrors;
	Uint16 _portRcvRemotePhysicalErrors;
	Uint16 _portRcvSwitchRelayErrors;
	Uint16 _portXmitDiscards;
	Uint16 _portXmitConstraintErrors;
	Uint16 _portRcvConstraintErrors;
	Uint16 _localLinkIntegrityErrors;
	Uint16 _excessiveBufferOverrunErrors;
	Uint16 _vL15Dropped;

#	include "UNIX_IBPortStatisticsPrivate.h"


};

#endif /* UNIX_IBPORTSTATISTICS */
