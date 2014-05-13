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
2.34.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Ports
*/


/* **** Description *** */
/*
This class describes LLDP statistics that applies to LLDP frames on this Ethernet Port. For more detailed descriptions on these properties, please refer to IEEE LLDP-EXT-DOT1-V2-MIB.
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

			UNIX_EthernetPortStatistics:
				SymbolErrors UInt32
				AlignmentErrors UInt32
				FCSErrors UInt32
				SingleCollisionFrames UInt32
				MultipleCollisionFrames UInt32
				SQETestErrors UInt32
				DeferredTransmissions UInt32
				LateCollisions UInt32
				ExcessiveCollisions UInt32
				InternalMACTransmitErrors UInt32
				InternalMACReceiveErrors UInt32
				CarrierSenseErrors UInt32
				FrameTooLongs UInt32

			UNIX_LLDPEthernetPortStatistics:
				TxDestMACAddress String
				TxPortFramesTotal UInt32
				TxLLDPDULengthErrors UInt32
				RxDestMACAddress String
				RxPortFramesDiscardedTotal UInt32
				RxPortFramesErrors UInt32
				RxPortTLVsDiscardedTotal UInt32
				RxPortTLVsUnrecognizedTotal UInt32
				RxPortAgeoutsTotal UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			CIM_NetworkPortStatistics:

			UNIX_EthernetPortStatistics:

			UNIX_LLDPEthernetPortStatistics:


*/

#ifndef __UNIX_LLDPETHERNETPORTSTATISTICS_H
#define __UNIX_LLDPETHERNETPORTSTATISTICS_H


#include <EthernetPortStatistics/UNIX_EthernetPortStatistics.h>

#include "UNIX_LLDPEthernetPortStatisticsDeps.h"


#ifndef PROPERTY_TX_DEST_M_A_C_ADDRESS
#define PROPERTY_TX_DEST_M_A_C_ADDRESS \
					"TxDestMACAddress"
#endif

#ifndef PROPERTY_TX_PORT_FRAMES_TOTAL
#define PROPERTY_TX_PORT_FRAMES_TOTAL \
					"TxPortFramesTotal"
#endif

#ifndef PROPERTY_TX_LLDP_D_U_LENGTH_ERRORS
#define PROPERTY_TX_LLDP_D_U_LENGTH_ERRORS \
					"TxLLDPDULengthErrors"
#endif

#ifndef PROPERTY_RX_DEST_M_A_C_ADDRESS
#define PROPERTY_RX_DEST_M_A_C_ADDRESS \
					"RxDestMACAddress"
#endif

#ifndef PROPERTY_RX_PORT_FRAMES_DISCARDED_TOTAL
#define PROPERTY_RX_PORT_FRAMES_DISCARDED_TOTAL \
					"RxPortFramesDiscardedTotal"
#endif

#ifndef PROPERTY_RX_PORT_FRAMES_ERRORS
#define PROPERTY_RX_PORT_FRAMES_ERRORS \
					"RxPortFramesErrors"
#endif

#ifndef PROPERTY_RX_PORT_T_L_VS_DISCARDED_TOTAL
#define PROPERTY_RX_PORT_T_L_VS_DISCARDED_TOTAL \
					"RxPortTLVsDiscardedTotal"
#endif

#ifndef PROPERTY_RX_PORT_T_L_VS_UNRECOGNIZED_TOTAL
#define PROPERTY_RX_PORT_T_L_VS_UNRECOGNIZED_TOTAL \
					"RxPortTLVsUnrecognizedTotal"
#endif

#ifndef PROPERTY_RX_PORT_AGEOUTS_TOTAL
#define PROPERTY_RX_PORT_AGEOUTS_TOTAL \
					"RxPortAgeoutsTotal"
#endif



class UNIX_LLDPEthernetPortStatistics :
	public UNIX_EthernetPortStatistics
{
public:

	UNIX_LLDPEthernetPortStatistics();
	~UNIX_LLDPEthernetPortStatistics();

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
	virtual Boolean getSymbolErrors(CIMProperty&) const;
	virtual Uint32 getSymbolErrors() const;
	virtual void setSymbolErrors(Uint32&);
	virtual Boolean getAlignmentErrors(CIMProperty&) const;
	virtual Uint32 getAlignmentErrors() const;
	virtual void setAlignmentErrors(Uint32&);
	virtual Boolean getFCSErrors(CIMProperty&) const;
	virtual Uint32 getFCSErrors() const;
	virtual void setFCSErrors(Uint32&);
	virtual Boolean getSingleCollisionFrames(CIMProperty&) const;
	virtual Uint32 getSingleCollisionFrames() const;
	virtual void setSingleCollisionFrames(Uint32&);
	virtual Boolean getMultipleCollisionFrames(CIMProperty&) const;
	virtual Uint32 getMultipleCollisionFrames() const;
	virtual void setMultipleCollisionFrames(Uint32&);
	virtual Boolean getSQETestErrors(CIMProperty&) const;
	virtual Uint32 getSQETestErrors() const;
	virtual void setSQETestErrors(Uint32&);
	virtual Boolean getDeferredTransmissions(CIMProperty&) const;
	virtual Uint32 getDeferredTransmissions() const;
	virtual void setDeferredTransmissions(Uint32&);
	virtual Boolean getLateCollisions(CIMProperty&) const;
	virtual Uint32 getLateCollisions() const;
	virtual void setLateCollisions(Uint32&);
	virtual Boolean getExcessiveCollisions(CIMProperty&) const;
	virtual Uint32 getExcessiveCollisions() const;
	virtual void setExcessiveCollisions(Uint32&);
	virtual Boolean getInternalMACTransmitErrors(CIMProperty&) const;
	virtual Uint32 getInternalMACTransmitErrors() const;
	virtual void setInternalMACTransmitErrors(Uint32&);
	virtual Boolean getInternalMACReceiveErrors(CIMProperty&) const;
	virtual Uint32 getInternalMACReceiveErrors() const;
	virtual void setInternalMACReceiveErrors(Uint32&);
	virtual Boolean getCarrierSenseErrors(CIMProperty&) const;
	virtual Uint32 getCarrierSenseErrors() const;
	virtual void setCarrierSenseErrors(Uint32&);
	virtual Boolean getFrameTooLongs(CIMProperty&) const;
	virtual Uint32 getFrameTooLongs() const;
	virtual void setFrameTooLongs(Uint32&);
	virtual Boolean getTxDestMACAddress(CIMProperty&) const;
	virtual Array<String> getTxDestMACAddress() const;
	virtual void setTxDestMACAddress(Array<String>&);
	virtual Boolean getTxPortFramesTotal(CIMProperty&) const;
	virtual Array<Uint32> getTxPortFramesTotal() const;
	virtual void setTxPortFramesTotal(Array<Uint32>&);
	virtual Boolean getTxLLDPDULengthErrors(CIMProperty&) const;
	virtual Array<Uint32> getTxLLDPDULengthErrors() const;
	virtual void setTxLLDPDULengthErrors(Array<Uint32>&);
	virtual Boolean getRxDestMACAddress(CIMProperty&) const;
	virtual Array<String> getRxDestMACAddress() const;
	virtual void setRxDestMACAddress(Array<String>&);
	virtual Boolean getRxPortFramesDiscardedTotal(CIMProperty&) const;
	virtual Array<Uint32> getRxPortFramesDiscardedTotal() const;
	virtual void setRxPortFramesDiscardedTotal(Array<Uint32>&);
	virtual Boolean getRxPortFramesErrors(CIMProperty&) const;
	virtual Array<Uint32> getRxPortFramesErrors() const;
	virtual void setRxPortFramesErrors(Array<Uint32>&);
	virtual Boolean getRxPortTLVsDiscardedTotal(CIMProperty&) const;
	virtual Array<Uint32> getRxPortTLVsDiscardedTotal() const;
	virtual void setRxPortTLVsDiscardedTotal(Array<Uint32>&);
	virtual Boolean getRxPortTLVsUnrecognizedTotal(CIMProperty&) const;
	virtual Array<Uint32> getRxPortTLVsUnrecognizedTotal() const;
	virtual void setRxPortTLVsUnrecognizedTotal(Array<Uint32>&);
	virtual Boolean getRxPortAgeoutsTotal(CIMProperty&) const;
	virtual Array<Uint32> getRxPortAgeoutsTotal() const;
	virtual void setRxPortAgeoutsTotal(Array<Uint32>&);

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
	Uint32 _symbolErrors;
	Uint32 _alignmentErrors;
	Uint32 _fCSErrors;
	Uint32 _singleCollisionFrames;
	Uint32 _multipleCollisionFrames;
	Uint32 _sQETestErrors;
	Uint32 _deferredTransmissions;
	Uint32 _lateCollisions;
	Uint32 _excessiveCollisions;
	Uint32 _internalMACTransmitErrors;
	Uint32 _internalMACReceiveErrors;
	Uint32 _carrierSenseErrors;
	Uint32 _frameTooLongs;
	Array<String> _txDestMACAddress;
	Array<Uint32> _txPortFramesTotal;
	Array<Uint32> _txLLDPDULengthErrors;
	Array<String> _rxDestMACAddress;
	Array<Uint32> _rxPortFramesDiscardedTotal;
	Array<Uint32> _rxPortFramesErrors;
	Array<Uint32> _rxPortTLVsDiscardedTotal;
	Array<Uint32> _rxPortTLVsUnrecognizedTotal;
	Array<Uint32> _rxPortAgeoutsTotal;

#	include "UNIX_LLDPEthernetPortStatisticsPrivate.h"


};

#endif /* UNIX_LLDPETHERNETPORTSTATISTICS */
