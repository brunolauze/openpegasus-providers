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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::FC
*/


/* **** Description *** */
/*
FCPortRateStatistics is the performance rate for the FCPort. The Frame and Byte rates report the average of a counter change per second and the maximum counter change per second over a specified interval, the SampleInterval, which is defined in the parent class, StatisticalData.
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

			UNIX_FCPortRateStatistics:
				TxFrameRate UInt64
				RxFrameRate UInt64
				MaxTxFrameRate UInt64
				MaxRxFrameRate UInt64
				TxRate UInt64
				RxRate UInt64
				PeakTxRate UInt64
				PeakRxRate UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_FCPortRateStatistics:


*/

#ifndef __UNIX_FCPORTRATESTATISTICS_H
#define __UNIX_FCPORTRATESTATISTICS_H


#include "CIM_StatisticalData.h"

#include "UNIX_FCPortRateStatisticsDeps.h"


#ifndef PROPERTY_TX_FRAME_RATE
#define PROPERTY_TX_FRAME_RATE \
					"TxFrameRate"
#endif

#ifndef PROPERTY_RX_FRAME_RATE
#define PROPERTY_RX_FRAME_RATE \
					"RxFrameRate"
#endif

#ifndef PROPERTY_MAX_TX_FRAME_RATE
#define PROPERTY_MAX_TX_FRAME_RATE \
					"MaxTxFrameRate"
#endif

#ifndef PROPERTY_MAX_RX_FRAME_RATE
#define PROPERTY_MAX_RX_FRAME_RATE \
					"MaxRxFrameRate"
#endif

#ifndef PROPERTY_TX_RATE
#define PROPERTY_TX_RATE \
					"TxRate"
#endif

#ifndef PROPERTY_RX_RATE
#define PROPERTY_RX_RATE \
					"RxRate"
#endif

#ifndef PROPERTY_PEAK_TX_RATE
#define PROPERTY_PEAK_TX_RATE \
					"PeakTxRate"
#endif

#ifndef PROPERTY_PEAK_RX_RATE
#define PROPERTY_PEAK_RX_RATE \
					"PeakRxRate"
#endif



class UNIX_FCPortRateStatistics :
	public CIM_StatisticalData
{
public:

	UNIX_FCPortRateStatistics();
	~UNIX_FCPortRateStatistics();

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
	virtual Boolean getTxFrameRate(CIMProperty&) const;
	virtual Uint64 getTxFrameRate() const;
	virtual void setTxFrameRate(Uint64&);
	virtual Boolean getRxFrameRate(CIMProperty&) const;
	virtual Uint64 getRxFrameRate() const;
	virtual void setRxFrameRate(Uint64&);
	virtual Boolean getMaxTxFrameRate(CIMProperty&) const;
	virtual Uint64 getMaxTxFrameRate() const;
	virtual void setMaxTxFrameRate(Uint64&);
	virtual Boolean getMaxRxFrameRate(CIMProperty&) const;
	virtual Uint64 getMaxRxFrameRate() const;
	virtual void setMaxRxFrameRate(Uint64&);
	virtual Boolean getTxRate(CIMProperty&) const;
	virtual Uint64 getTxRate() const;
	virtual void setTxRate(Uint64&);
	virtual Boolean getRxRate(CIMProperty&) const;
	virtual Uint64 getRxRate() const;
	virtual void setRxRate(Uint64&);
	virtual Boolean getPeakTxRate(CIMProperty&) const;
	virtual Uint64 getPeakTxRate() const;
	virtual void setPeakTxRate(Uint64&);
	virtual Boolean getPeakRxRate(CIMProperty&) const;
	virtual Uint64 getPeakRxRate() const;
	virtual void setPeakRxRate(Uint64&);

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
	Uint64 _txFrameRate;
	Uint64 _rxFrameRate;
	Uint64 _maxTxFrameRate;
	Uint64 _maxRxFrameRate;
	Uint64 _txRate;
	Uint64 _rxRate;
	Uint64 _peakTxRate;
	Uint64 _peakRxRate;

#	include "UNIX_FCPortRateStatisticsPrivate.h"


};

#endif /* UNIX_FCPORTRATESTATISTICS */
