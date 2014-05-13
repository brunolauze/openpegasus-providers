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
CIM::Network::8023LAG
*/


/* **** Description *** */
/*
Statistics for Link Aggregation Control Protocol (LACP). These statistics are for each LAGPort8023ad where LACP is enabled in a device.
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

			UNIX_LACPPortStatistics:
				PortStatsLACPDUsRx UInt32
				PortStatsMarkerPDUsRx UInt32
				PortStatsMarkerResponsePDUsRx UInt32
				PortStatsUnknownRx UInt32
				PortStatsIllegalRx UInt32
				PortStatsLACPDUsTx UInt32
				PortStatsMarkerPDUsTx UInt32
				PortStatsMarkerResponsePDUsTx UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_LACPPortStatistics:


*/

#ifndef __UNIX_LACPPORTSTATISTICS_H
#define __UNIX_LACPPORTSTATISTICS_H


#include "CIM_StatisticalData.h"

#include "UNIX_LACPPortStatisticsDeps.h"


#ifndef PROPERTY_PORT_STATS_L_A_C_P_D_US_RX
#define PROPERTY_PORT_STATS_L_A_C_P_D_US_RX \
					"PortStatsLACPDUsRx"
#endif

#ifndef PROPERTY_PORT_STATS_MARKER_P_D_US_RX
#define PROPERTY_PORT_STATS_MARKER_P_D_US_RX \
					"PortStatsMarkerPDUsRx"
#endif

#ifndef PROPERTY_PORT_STATS_MARKER_RESPONSE_P_D_US_RX
#define PROPERTY_PORT_STATS_MARKER_RESPONSE_P_D_US_RX \
					"PortStatsMarkerResponsePDUsRx"
#endif

#ifndef PROPERTY_PORT_STATS_UNKNOWN_RX
#define PROPERTY_PORT_STATS_UNKNOWN_RX \
					"PortStatsUnknownRx"
#endif

#ifndef PROPERTY_PORT_STATS_ILLEGAL_RX
#define PROPERTY_PORT_STATS_ILLEGAL_RX \
					"PortStatsIllegalRx"
#endif

#ifndef PROPERTY_PORT_STATS_L_A_C_P_D_US_TX
#define PROPERTY_PORT_STATS_L_A_C_P_D_US_TX \
					"PortStatsLACPDUsTx"
#endif

#ifndef PROPERTY_PORT_STATS_MARKER_P_D_US_TX
#define PROPERTY_PORT_STATS_MARKER_P_D_US_TX \
					"PortStatsMarkerPDUsTx"
#endif

#ifndef PROPERTY_PORT_STATS_MARKER_RESPONSE_P_D_US_TX
#define PROPERTY_PORT_STATS_MARKER_RESPONSE_P_D_US_TX \
					"PortStatsMarkerResponsePDUsTx"
#endif



class UNIX_LACPPortStatistics :
	public CIM_StatisticalData
{
public:

	UNIX_LACPPortStatistics();
	~UNIX_LACPPortStatistics();

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
	virtual Boolean getPortStatsLACPDUsRx(CIMProperty&) const;
	virtual Uint32 getPortStatsLACPDUsRx() const;
	virtual void setPortStatsLACPDUsRx(Uint32&);
	virtual Boolean getPortStatsMarkerPDUsRx(CIMProperty&) const;
	virtual Uint32 getPortStatsMarkerPDUsRx() const;
	virtual void setPortStatsMarkerPDUsRx(Uint32&);
	virtual Boolean getPortStatsMarkerResponsePDUsRx(CIMProperty&) const;
	virtual Uint32 getPortStatsMarkerResponsePDUsRx() const;
	virtual void setPortStatsMarkerResponsePDUsRx(Uint32&);
	virtual Boolean getPortStatsUnknownRx(CIMProperty&) const;
	virtual Uint32 getPortStatsUnknownRx() const;
	virtual void setPortStatsUnknownRx(Uint32&);
	virtual Boolean getPortStatsIllegalRx(CIMProperty&) const;
	virtual Uint32 getPortStatsIllegalRx() const;
	virtual void setPortStatsIllegalRx(Uint32&);
	virtual Boolean getPortStatsLACPDUsTx(CIMProperty&) const;
	virtual Uint32 getPortStatsLACPDUsTx() const;
	virtual void setPortStatsLACPDUsTx(Uint32&);
	virtual Boolean getPortStatsMarkerPDUsTx(CIMProperty&) const;
	virtual Uint32 getPortStatsMarkerPDUsTx() const;
	virtual void setPortStatsMarkerPDUsTx(Uint32&);
	virtual Boolean getPortStatsMarkerResponsePDUsTx(CIMProperty&) const;
	virtual Uint32 getPortStatsMarkerResponsePDUsTx() const;
	virtual void setPortStatsMarkerResponsePDUsTx(Uint32&);

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
	Uint32 _portStatsLACPDUsRx;
	Uint32 _portStatsMarkerPDUsRx;
	Uint32 _portStatsMarkerResponsePDUsRx;
	Uint32 _portStatsUnknownRx;
	Uint32 _portStatsIllegalRx;
	Uint32 _portStatsLACPDUsTx;
	Uint32 _portStatsMarkerPDUsTx;
	Uint32 _portStatsMarkerResponsePDUsTx;

#	include "UNIX_LACPPortStatisticsPrivate.h"


};

#endif /* UNIX_LACPPORTSTATISTICS */
