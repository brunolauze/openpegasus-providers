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
CIM::Network::MPLS
*/


/* **** Description *** */
/*
This class represents the statistics for an MPLSProtocol Endpoint. The statistics are associated with the Endpoint using the relationship CIM_ElementStatisticalData.
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

			UNIX_MPLSProtocolEndpointStats:
				InLabelsUsed UInt32
				OutLabelsUsed UInt32
				FailedLabelLookups UInt32
				NumberOfPacketsFragmented UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_MPLSProtocolEndpointStats:


*/

#ifndef __UNIX_MPLSPROTOCOLENDPOINTSTATS_H
#define __UNIX_MPLSPROTOCOLENDPOINTSTATS_H


#include "CIM_StatisticalData.h"

#include "UNIX_MPLSProtocolEndpointStatsDeps.h"


#ifndef PROPERTY_IN_LABELS_USED
#define PROPERTY_IN_LABELS_USED \
					"InLabelsUsed"
#endif

#ifndef PROPERTY_OUT_LABELS_USED
#define PROPERTY_OUT_LABELS_USED \
					"OutLabelsUsed"
#endif

#ifndef PROPERTY_FAILED_LABEL_LOOKUPS
#define PROPERTY_FAILED_LABEL_LOOKUPS \
					"FailedLabelLookups"
#endif

#ifndef PROPERTY_NUMBER_OF_PACKETS_FRAGMENTED
#define PROPERTY_NUMBER_OF_PACKETS_FRAGMENTED \
					"NumberOfPacketsFragmented"
#endif



class UNIX_MPLSProtocolEndpointStats :
	public CIM_StatisticalData
{
public:

	UNIX_MPLSProtocolEndpointStats();
	~UNIX_MPLSProtocolEndpointStats();

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
	virtual Boolean getInLabelsUsed(CIMProperty&) const;
	virtual Uint32 getInLabelsUsed() const;
	virtual void setInLabelsUsed(Uint32&);
	virtual Boolean getOutLabelsUsed(CIMProperty&) const;
	virtual Uint32 getOutLabelsUsed() const;
	virtual void setOutLabelsUsed(Uint32&);
	virtual Boolean getFailedLabelLookups(CIMProperty&) const;
	virtual Uint32 getFailedLabelLookups() const;
	virtual void setFailedLabelLookups(Uint32&);
	virtual Boolean getNumberOfPacketsFragmented(CIMProperty&) const;
	virtual Uint32 getNumberOfPacketsFragmented() const;
	virtual void setNumberOfPacketsFragmented(Uint32&);

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
	Uint32 _inLabelsUsed;
	Uint32 _outLabelsUsed;
	Uint32 _failedLabelLookups;
	Uint32 _numberOfPacketsFragmented;

#	include "UNIX_MPLSProtocolEndpointStatsPrivate.h"


};

#endif /* UNIX_MPLSPROTOCOLENDPOINTSTATS */
