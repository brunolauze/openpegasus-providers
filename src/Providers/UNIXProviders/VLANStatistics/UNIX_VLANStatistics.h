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
CIM::Network::VLAN
*/


/* **** Description *** */
/*
Performance metrics for a either a VLAN or a port (endpoint). Depending on the switch's ability to collect statistics, these statistics may be associated with all endpoints on the port (i.e. port level stats) or they may be per VLAN per port stats. When a port (endpoint) is configured as an access port then port stats are equivalent to the VLAN stats. The AssociatedStatisticalData association is used to tie the VLAN Network (NetworkVLAN)with its statistics.
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

			UNIX_VLANStatistics:
				VLANPortInFrames UInt64
				VLANPortOutFrames UInt64
				VLANPortInFrameDiscards UInt64
				VLANId UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			UNIX_VLANStatistics:


*/

#ifndef __UNIX_VLANSTATISTICS_H
#define __UNIX_VLANSTATISTICS_H


#include "CIM_StatisticalData.h"

#include "UNIX_VLANStatisticsDeps.h"


#ifndef PROPERTY_VLAN_PORT_IN_FRAMES
#define PROPERTY_VLAN_PORT_IN_FRAMES \
					"VLANPortInFrames"
#endif

#ifndef PROPERTY_VLAN_PORT_OUT_FRAMES
#define PROPERTY_VLAN_PORT_OUT_FRAMES \
					"VLANPortOutFrames"
#endif

#ifndef PROPERTY_VLAN_PORT_IN_FRAME_DISCARDS
#define PROPERTY_VLAN_PORT_IN_FRAME_DISCARDS \
					"VLANPortInFrameDiscards"
#endif

#ifndef PROPERTY_VLAN_ID
#define PROPERTY_VLAN_ID \
					"VLANId"
#endif



class UNIX_VLANStatistics :
	public CIM_StatisticalData
{
public:

	UNIX_VLANStatistics();
	~UNIX_VLANStatistics();

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
	virtual Boolean getVLANPortInFrames(CIMProperty&) const;
	virtual Uint64 getVLANPortInFrames() const;
	virtual void setVLANPortInFrames(Uint64&);
	virtual Boolean getVLANPortOutFrames(CIMProperty&) const;
	virtual Uint64 getVLANPortOutFrames() const;
	virtual void setVLANPortOutFrames(Uint64&);
	virtual Boolean getVLANPortInFrameDiscards(CIMProperty&) const;
	virtual Uint64 getVLANPortInFrameDiscards() const;
	virtual void setVLANPortInFrameDiscards(Uint64&);
	virtual Boolean getVLANId(CIMProperty&) const;
	virtual Uint16 getVLANId() const;
	virtual void setVLANId(Uint16&);

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
	Uint64 _vLANPortInFrames;
	Uint64 _vLANPortOutFrames;
	Uint64 _vLANPortInFrameDiscards;
	Uint16 _vLANId;

#	include "UNIX_VLANStatisticsPrivate.h"


};

#endif /* UNIX_VLANSTATISTICS */
