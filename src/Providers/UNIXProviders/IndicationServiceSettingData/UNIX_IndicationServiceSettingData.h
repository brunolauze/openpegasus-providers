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
2.20.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Event
*/


/* **** Description *** */
/*
An IndicationService is a Service of the CIM Object Manager that is responsible for delivering indications. The following are available settings for the Indication Service. The following describes a possible configuration of settings for the associated Indication Service.
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

			UNIX_IndicationServiceSettingData:
				FilterCreationEnabled Boolean
				DeliveryRetryAttempts UInt16
				DeliveryRetryInterval UInt32
				SubscriptionRemovalAction UInt16
				SubscriptionRemovalTimeInterval UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_IndicationServiceSettingData:


*/

#ifndef __UNIX_INDICATIONSERVICESETTINGDATA_H
#define __UNIX_INDICATIONSERVICESETTINGDATA_H


#include "CIM_SettingData.h"

#include "UNIX_IndicationServiceSettingDataDeps.h"


#ifndef PROPERTY_FILTER_CREATION_ENABLED
#define PROPERTY_FILTER_CREATION_ENABLED \
					"FilterCreationEnabled"
#endif

#ifndef PROPERTY_DELIVERY_RETRY_ATTEMPTS
#define PROPERTY_DELIVERY_RETRY_ATTEMPTS \
					"DeliveryRetryAttempts"
#endif

#ifndef PROPERTY_DELIVERY_RETRY_INTERVAL
#define PROPERTY_DELIVERY_RETRY_INTERVAL \
					"DeliveryRetryInterval"
#endif

#ifndef PROPERTY_SUBSCRIPTION_REMOVAL_ACTION
#define PROPERTY_SUBSCRIPTION_REMOVAL_ACTION \
					"SubscriptionRemovalAction"
#endif

#ifndef PROPERTY_SUBSCRIPTION_REMOVAL_TIME_INTERVAL
#define PROPERTY_SUBSCRIPTION_REMOVAL_TIME_INTERVAL \
					"SubscriptionRemovalTimeInterval"
#endif



class UNIX_IndicationServiceSettingData :
	public CIM_SettingData
{
public:

	UNIX_IndicationServiceSettingData();
	~UNIX_IndicationServiceSettingData();

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
	virtual Boolean getFilterCreationEnabled(CIMProperty&) const;
	virtual Boolean getFilterCreationEnabled() const;
	virtual void setFilterCreationEnabled(Boolean&);
	virtual Boolean getDeliveryRetryAttempts(CIMProperty&) const;
	virtual Uint16 getDeliveryRetryAttempts() const;
	virtual void setDeliveryRetryAttempts(Uint16&);
	virtual Boolean getDeliveryRetryInterval(CIMProperty&) const;
	virtual Uint32 getDeliveryRetryInterval() const;
	virtual void setDeliveryRetryInterval(Uint32&);
	virtual Boolean getSubscriptionRemovalAction(CIMProperty&) const;
	virtual Uint16 getSubscriptionRemovalAction() const;
	virtual void setSubscriptionRemovalAction(Uint16&);
	virtual Boolean getSubscriptionRemovalTimeInterval(CIMProperty&) const;
	virtual Uint32 getSubscriptionRemovalTimeInterval() const;
	virtual void setSubscriptionRemovalTimeInterval(Uint32&);


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
	Boolean _filterCreationEnabled;
	Uint16 _deliveryRetryAttempts;
	Uint32 _deliveryRetryInterval;
	Uint16 _subscriptionRemovalAction;
	Uint32 _subscriptionRemovalTimeInterval;

#	include "UNIX_IndicationServiceSettingDataPrivate.h"


};

#endif /* UNIX_INDICATIONSERVICESETTINGDATA */
