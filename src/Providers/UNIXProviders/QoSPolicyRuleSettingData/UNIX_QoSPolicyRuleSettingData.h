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
2.32.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network
*/


/* **** Description *** */
/*
This class describes the configuration of a QoS policy rule.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_SettingData:
				ConfigurationName String
				ChangeableType UInt16
				ComponentSetting String
				SoID String
				SoOrgID String

			CIM_NetworkPolicyRuleSettingData:

			UNIX_QoSPolicyRuleSettingData:
				TransmitBandwidthLimit UInt64
				TransmitBandwidthReservation UInt64
				MaxTrafficDelay UInt64
				MaxTrafficJitter UInt64
				MaxTrafficLoss Real64
				MaxBurstSize UInt64
				MinBurstSize UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_NetworkPolicyRuleSettingData:

			UNIX_QoSPolicyRuleSettingData:


*/

#ifndef __UNIX_QOSPOLICYRULESETTINGDATA_H
#define __UNIX_QOSPOLICYRULESETTINGDATA_H


#include "CIM_NetworkPolicyRuleSettingData.h"

#include "UNIX_QoSPolicyRuleSettingDataDeps.h"


#ifndef PROPERTY_TRANSMIT_BANDWIDTH_LIMIT
#define PROPERTY_TRANSMIT_BANDWIDTH_LIMIT \
					"TransmitBandwidthLimit"
#endif

#ifndef PROPERTY_TRANSMIT_BANDWIDTH_RESERVATION
#define PROPERTY_TRANSMIT_BANDWIDTH_RESERVATION \
					"TransmitBandwidthReservation"
#endif

#ifndef PROPERTY_MAX_TRAFFIC_DELAY
#define PROPERTY_MAX_TRAFFIC_DELAY \
					"MaxTrafficDelay"
#endif

#ifndef PROPERTY_MAX_TRAFFIC_JITTER
#define PROPERTY_MAX_TRAFFIC_JITTER \
					"MaxTrafficJitter"
#endif

#ifndef PROPERTY_MAX_TRAFFIC_LOSS
#define PROPERTY_MAX_TRAFFIC_LOSS \
					"MaxTrafficLoss"
#endif

#ifndef PROPERTY_MAX_BURST_SIZE
#define PROPERTY_MAX_BURST_SIZE \
					"MaxBurstSize"
#endif

#ifndef PROPERTY_MIN_BURST_SIZE
#define PROPERTY_MIN_BURST_SIZE \
					"MinBurstSize"
#endif



class UNIX_QoSPolicyRuleSettingData :
	public CIM_NetworkPolicyRuleSettingData
{
public:

	UNIX_QoSPolicyRuleSettingData();
	~UNIX_QoSPolicyRuleSettingData();

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
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual void setConfigurationName(String&);
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual void setChangeableType(Uint16&);
	virtual Boolean getComponentSetting(CIMProperty&) const;
	virtual Array<String> getComponentSetting() const;
	virtual void setComponentSetting(Array<String>&);
	virtual Boolean getSoID(CIMProperty&) const;
	virtual String getSoID() const;
	virtual void setSoID(String&);
	virtual Boolean getSoOrgID(CIMProperty&) const;
	virtual String getSoOrgID() const;
	virtual void setSoOrgID(String&);
	virtual Boolean getTransmitBandwidthLimit(CIMProperty&) const;
	virtual Uint64 getTransmitBandwidthLimit() const;
	virtual void setTransmitBandwidthLimit(Uint64&);
	virtual Boolean getTransmitBandwidthReservation(CIMProperty&) const;
	virtual Uint64 getTransmitBandwidthReservation() const;
	virtual void setTransmitBandwidthReservation(Uint64&);
	virtual Boolean getMaxTrafficDelay(CIMProperty&) const;
	virtual Uint64 getMaxTrafficDelay() const;
	virtual void setMaxTrafficDelay(Uint64&);
	virtual Boolean getMaxTrafficJitter(CIMProperty&) const;
	virtual Uint64 getMaxTrafficJitter() const;
	virtual void setMaxTrafficJitter(Uint64&);
	virtual Boolean getMaxTrafficLoss(CIMProperty&) const;
	virtual Real64 getMaxTrafficLoss() const;
	virtual void setMaxTrafficLoss(Real64&);
	virtual Boolean getMaxBurstSize(CIMProperty&) const;
	virtual Uint64 getMaxBurstSize() const;
	virtual void setMaxBurstSize(Uint64&);
	virtual Boolean getMinBurstSize(CIMProperty&) const;
	virtual Uint64 getMinBurstSize() const;
	virtual void setMinBurstSize(Uint64&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _configurationName;
	Uint16 _changeableType;
	Array<String> _componentSetting;
	String _soID;
	String _soOrgID;
	Uint64 _transmitBandwidthLimit;
	Uint64 _transmitBandwidthReservation;
	Uint64 _maxTrafficDelay;
	Uint64 _maxTrafficJitter;
	Real64 _maxTrafficLoss;
	Uint64 _maxBurstSize;
	Uint64 _minBurstSize;

#	include "UNIX_QoSPolicyRuleSettingDataPrivate.h"


};

#endif /* UNIX_QOSPOLICYRULESETTINGDATA */
