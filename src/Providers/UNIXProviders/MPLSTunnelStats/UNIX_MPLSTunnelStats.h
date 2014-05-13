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
This class represents the statistics for an MPLSTunnel. The statistics are associated to the tunnel using the relationship, CIM_ElementStatisticalData.
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

			UNIX_MPLSTunnelStats:
				TunnelPrimaryTimeUp UInt32
				TunnelPathChanges UInt32
				TunnelLastPathChange UInt32
				TunnelStateTransitions UInt32
				TunnelInstanceUpTime UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_MPLSTunnelStats:


*/

#ifndef __UNIX_MPLSTUNNELSTATS_H
#define __UNIX_MPLSTUNNELSTATS_H


#include "CIM_StatisticalData.h"

#include "UNIX_MPLSTunnelStatsDeps.h"


#ifndef PROPERTY_TUNNEL_PRIMARY_TIME_UP
#define PROPERTY_TUNNEL_PRIMARY_TIME_UP \
					"TunnelPrimaryTimeUp"
#endif

#ifndef PROPERTY_TUNNEL_PATH_CHANGES
#define PROPERTY_TUNNEL_PATH_CHANGES \
					"TunnelPathChanges"
#endif

#ifndef PROPERTY_TUNNEL_LAST_PATH_CHANGE
#define PROPERTY_TUNNEL_LAST_PATH_CHANGE \
					"TunnelLastPathChange"
#endif

#ifndef PROPERTY_TUNNEL_STATE_TRANSITIONS
#define PROPERTY_TUNNEL_STATE_TRANSITIONS \
					"TunnelStateTransitions"
#endif

#ifndef PROPERTY_TUNNEL_INSTANCE_UP_TIME
#define PROPERTY_TUNNEL_INSTANCE_UP_TIME \
					"TunnelInstanceUpTime"
#endif



class UNIX_MPLSTunnelStats :
	public CIM_StatisticalData
{
public:

	UNIX_MPLSTunnelStats();
	~UNIX_MPLSTunnelStats();

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
	virtual Boolean getTunnelPrimaryTimeUp(CIMProperty&) const;
	virtual Uint32 getTunnelPrimaryTimeUp() const;
	virtual void setTunnelPrimaryTimeUp(Uint32&);
	virtual Boolean getTunnelPathChanges(CIMProperty&) const;
	virtual Uint32 getTunnelPathChanges() const;
	virtual void setTunnelPathChanges(Uint32&);
	virtual Boolean getTunnelLastPathChange(CIMProperty&) const;
	virtual Uint32 getTunnelLastPathChange() const;
	virtual void setTunnelLastPathChange(Uint32&);
	virtual Boolean getTunnelStateTransitions(CIMProperty&) const;
	virtual Uint32 getTunnelStateTransitions() const;
	virtual void setTunnelStateTransitions(Uint32&);
	virtual Boolean getTunnelInstanceUpTime(CIMProperty&) const;
	virtual Uint32 getTunnelInstanceUpTime() const;
	virtual void setTunnelInstanceUpTime(Uint32&);

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
	Uint32 _tunnelPrimaryTimeUp;
	Uint32 _tunnelPathChanges;
	Uint32 _tunnelLastPathChange;
	Uint32 _tunnelStateTransitions;
	Uint32 _tunnelInstanceUpTime;

#	include "UNIX_MPLSTunnelStatsPrivate.h"


};

#endif /* UNIX_MPLSTUNNELSTATS */
