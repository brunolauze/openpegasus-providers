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
This class contains performance information for MPLS entities such as an MPLS Endpoint or LSP Tunnel. The statistics are associated with the MPSL entity, using the general CIM_ElementStatisticalData relationship.
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

			UNIX_MPLSPerformance:
				NumberOfPacketsLost UInt32
				NumberOfPacketsTransmitted UInt32
				NumberOfOctets UInt32
				Delay UInt16
				Availability UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_MPLSPerformance:


*/

#ifndef __UNIX_MPLSPERFORMANCE_H
#define __UNIX_MPLSPERFORMANCE_H


#include "CIM_StatisticalData.h"

#include "UNIX_MPLSPerformanceDeps.h"


#ifndef PROPERTY_NUMBER_OF_PACKETS_LOST
#define PROPERTY_NUMBER_OF_PACKETS_LOST \
					"NumberOfPacketsLost"
#endif

#ifndef PROPERTY_NUMBER_OF_PACKETS_TRANSMITTED
#define PROPERTY_NUMBER_OF_PACKETS_TRANSMITTED \
					"NumberOfPacketsTransmitted"
#endif

#ifndef PROPERTY_NUMBER_OF_OCTETS
#define PROPERTY_NUMBER_OF_OCTETS \
					"NumberOfOctets"
#endif

#ifndef PROPERTY_DELAY
#define PROPERTY_DELAY \
					"Delay"
#endif

#ifndef PROPERTY_AVAILABILITY
#define PROPERTY_AVAILABILITY \
					"Availability"
#endif



class UNIX_MPLSPerformance :
	public CIM_StatisticalData
{
public:

	UNIX_MPLSPerformance();
	~UNIX_MPLSPerformance();

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
	virtual Boolean getNumberOfPacketsLost(CIMProperty&) const;
	virtual Uint32 getNumberOfPacketsLost() const;
	virtual void setNumberOfPacketsLost(Uint32&);
	virtual Boolean getNumberOfPacketsTransmitted(CIMProperty&) const;
	virtual Uint32 getNumberOfPacketsTransmitted() const;
	virtual void setNumberOfPacketsTransmitted(Uint32&);
	virtual Boolean getNumberOfOctets(CIMProperty&) const;
	virtual Uint32 getNumberOfOctets() const;
	virtual void setNumberOfOctets(Uint32&);
	virtual Boolean getDelay(CIMProperty&) const;
	virtual Uint16 getDelay() const;
	virtual void setDelay(Uint16&);
	virtual Boolean getAvailability(CIMProperty&) const;
	virtual Uint16 getAvailability() const;
	virtual void setAvailability(Uint16&);

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
	Uint32 _numberOfPacketsLost;
	Uint32 _numberOfPacketsTransmitted;
	Uint32 _numberOfOctets;
	Uint16 _delay;
	Uint16 _availability;

#	include "UNIX_MPLSPerformancePrivate.h"


};

#endif /* UNIX_MPLSPERFORMANCE */
