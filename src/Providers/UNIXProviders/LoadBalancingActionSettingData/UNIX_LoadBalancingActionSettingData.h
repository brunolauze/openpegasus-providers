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
This class describes the configuration of a load balancing policy action.
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

			UNIX_NetworkPolicyActionSettingData:

			UNIX_LoadBalancingActionSettingData:
				HealthCheckPolicyType UInt16
				HealthCheckPolicyValueType UInt16
				HealthCheckPolicyValue String
				HealthCheckPolicyFailDetectCount UInt16
				HealthCheckPolicyInterval DateTime
				HealthCheckPolicyIntervalForRecovery DateTime
				HealthCheckTimeout DateTime
				HealthCheckHitsForRecovery UInt16
				PersistenceType UInt16
				PersistenceValueType UInt16
				PersistenceValue String
				PersistenceTimeout DateTime
				ConnectionNormalLimit UInt64
				ConnectionMaxLimit UInt64
				BandwidthNormalLimit UInt64
				BandwidthMaxLimit UInt64
				EncryptionAlgorithm UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_NetworkPolicyActionSettingData:

			UNIX_LoadBalancingActionSettingData:


*/

#ifndef __UNIX_LOADBALANCINGACTIONSETTINGDATA_H
#define __UNIX_LOADBALANCINGACTIONSETTINGDATA_H


#include <NetworkPolicyActionSettingData/UNIX_NetworkPolicyActionSettingData.h>

#include "UNIX_LoadBalancingActionSettingDataDeps.h"


#ifndef PROPERTY_HEALTH_CHECK_POLICY_TYPE
#define PROPERTY_HEALTH_CHECK_POLICY_TYPE \
					"HealthCheckPolicyType"
#endif

#ifndef PROPERTY_HEALTH_CHECK_POLICY_VALUE_TYPE
#define PROPERTY_HEALTH_CHECK_POLICY_VALUE_TYPE \
					"HealthCheckPolicyValueType"
#endif

#ifndef PROPERTY_HEALTH_CHECK_POLICY_VALUE
#define PROPERTY_HEALTH_CHECK_POLICY_VALUE \
					"HealthCheckPolicyValue"
#endif

#ifndef PROPERTY_HEALTH_CHECK_POLICY_FAIL_DETECT_COUNT
#define PROPERTY_HEALTH_CHECK_POLICY_FAIL_DETECT_COUNT \
					"HealthCheckPolicyFailDetectCount"
#endif

#ifndef PROPERTY_HEALTH_CHECK_POLICY_INTERVAL
#define PROPERTY_HEALTH_CHECK_POLICY_INTERVAL \
					"HealthCheckPolicyInterval"
#endif

#ifndef PROPERTY_HEALTH_CHECK_POLICY_INTERVAL_FOR_RECOVERY
#define PROPERTY_HEALTH_CHECK_POLICY_INTERVAL_FOR_RECOVERY \
					"HealthCheckPolicyIntervalForRecovery"
#endif

#ifndef PROPERTY_HEALTH_CHECK_TIMEOUT
#define PROPERTY_HEALTH_CHECK_TIMEOUT \
					"HealthCheckTimeout"
#endif

#ifndef PROPERTY_HEALTH_CHECK_HITS_FOR_RECOVERY
#define PROPERTY_HEALTH_CHECK_HITS_FOR_RECOVERY \
					"HealthCheckHitsForRecovery"
#endif

#ifndef PROPERTY_PERSISTENCE_TYPE
#define PROPERTY_PERSISTENCE_TYPE \
					"PersistenceType"
#endif

#ifndef PROPERTY_PERSISTENCE_VALUE_TYPE
#define PROPERTY_PERSISTENCE_VALUE_TYPE \
					"PersistenceValueType"
#endif

#ifndef PROPERTY_PERSISTENCE_VALUE
#define PROPERTY_PERSISTENCE_VALUE \
					"PersistenceValue"
#endif

#ifndef PROPERTY_PERSISTENCE_TIMEOUT
#define PROPERTY_PERSISTENCE_TIMEOUT \
					"PersistenceTimeout"
#endif

#ifndef PROPERTY_CONNECTION_NORMAL_LIMIT
#define PROPERTY_CONNECTION_NORMAL_LIMIT \
					"ConnectionNormalLimit"
#endif

#ifndef PROPERTY_CONNECTION_MAX_LIMIT
#define PROPERTY_CONNECTION_MAX_LIMIT \
					"ConnectionMaxLimit"
#endif

#ifndef PROPERTY_BANDWIDTH_NORMAL_LIMIT
#define PROPERTY_BANDWIDTH_NORMAL_LIMIT \
					"BandwidthNormalLimit"
#endif

#ifndef PROPERTY_BANDWIDTH_MAX_LIMIT
#define PROPERTY_BANDWIDTH_MAX_LIMIT \
					"BandwidthMaxLimit"
#endif

#ifndef PROPERTY_ENCRYPTION_ALGORITHM
#define PROPERTY_ENCRYPTION_ALGORITHM \
					"EncryptionAlgorithm"
#endif



class UNIX_LoadBalancingActionSettingData :
	public UNIX_NetworkPolicyActionSettingData
{
public:

	UNIX_LoadBalancingActionSettingData();
	~UNIX_LoadBalancingActionSettingData();

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
	virtual Boolean getHealthCheckPolicyType(CIMProperty&) const;
	virtual Uint16 getHealthCheckPolicyType() const;
	virtual void setHealthCheckPolicyType(Uint16&);
	virtual Boolean getHealthCheckPolicyValueType(CIMProperty&) const;
	virtual Uint16 getHealthCheckPolicyValueType() const;
	virtual void setHealthCheckPolicyValueType(Uint16&);
	virtual Boolean getHealthCheckPolicyValue(CIMProperty&) const;
	virtual String getHealthCheckPolicyValue() const;
	virtual void setHealthCheckPolicyValue(String&);
	virtual Boolean getHealthCheckPolicyFailDetectCount(CIMProperty&) const;
	virtual Uint16 getHealthCheckPolicyFailDetectCount() const;
	virtual void setHealthCheckPolicyFailDetectCount(Uint16&);
	virtual Boolean getHealthCheckPolicyInterval(CIMProperty&) const;
	virtual CIMDateTime getHealthCheckPolicyInterval() const;
	virtual void setHealthCheckPolicyInterval(CIMDateTime&);
	virtual Boolean getHealthCheckPolicyIntervalForRecovery(CIMProperty&) const;
	virtual CIMDateTime getHealthCheckPolicyIntervalForRecovery() const;
	virtual void setHealthCheckPolicyIntervalForRecovery(CIMDateTime&);
	virtual Boolean getHealthCheckTimeout(CIMProperty&) const;
	virtual CIMDateTime getHealthCheckTimeout() const;
	virtual void setHealthCheckTimeout(CIMDateTime&);
	virtual Boolean getHealthCheckHitsForRecovery(CIMProperty&) const;
	virtual Uint16 getHealthCheckHitsForRecovery() const;
	virtual void setHealthCheckHitsForRecovery(Uint16&);
	virtual Boolean getPersistenceType(CIMProperty&) const;
	virtual Uint16 getPersistenceType() const;
	virtual void setPersistenceType(Uint16&);
	virtual Boolean getPersistenceValueType(CIMProperty&) const;
	virtual Uint16 getPersistenceValueType() const;
	virtual void setPersistenceValueType(Uint16&);
	virtual Boolean getPersistenceValue(CIMProperty&) const;
	virtual String getPersistenceValue() const;
	virtual void setPersistenceValue(String&);
	virtual Boolean getPersistenceTimeout(CIMProperty&) const;
	virtual CIMDateTime getPersistenceTimeout() const;
	virtual void setPersistenceTimeout(CIMDateTime&);
	virtual Boolean getConnectionNormalLimit(CIMProperty&) const;
	virtual Uint64 getConnectionNormalLimit() const;
	virtual void setConnectionNormalLimit(Uint64&);
	virtual Boolean getConnectionMaxLimit(CIMProperty&) const;
	virtual Uint64 getConnectionMaxLimit() const;
	virtual void setConnectionMaxLimit(Uint64&);
	virtual Boolean getBandwidthNormalLimit(CIMProperty&) const;
	virtual Uint64 getBandwidthNormalLimit() const;
	virtual void setBandwidthNormalLimit(Uint64&);
	virtual Boolean getBandwidthMaxLimit(CIMProperty&) const;
	virtual Uint64 getBandwidthMaxLimit() const;
	virtual void setBandwidthMaxLimit(Uint64&);
	virtual Boolean getEncryptionAlgorithm(CIMProperty&) const;
	virtual Uint16 getEncryptionAlgorithm() const;
	virtual void setEncryptionAlgorithm(Uint16&);


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
	Uint16 _healthCheckPolicyType;
	Uint16 _healthCheckPolicyValueType;
	String _healthCheckPolicyValue;
	Uint16 _healthCheckPolicyFailDetectCount;
	CIMDateTime _healthCheckPolicyInterval;
	CIMDateTime _healthCheckPolicyIntervalForRecovery;
	CIMDateTime _healthCheckTimeout;
	Uint16 _healthCheckHitsForRecovery;
	Uint16 _persistenceType;
	Uint16 _persistenceValueType;
	String _persistenceValue;
	CIMDateTime _persistenceTimeout;
	Uint64 _connectionNormalLimit;
	Uint64 _connectionMaxLimit;
	Uint64 _bandwidthNormalLimit;
	Uint64 _bandwidthMaxLimit;
	Uint16 _encryptionAlgorithm;

#	include "UNIX_LoadBalancingActionSettingDataPrivate.h"


};

#endif /* UNIX_LOADBALANCINGACTIONSETTINGDATA */
