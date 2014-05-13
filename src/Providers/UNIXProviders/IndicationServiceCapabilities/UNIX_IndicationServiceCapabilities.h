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
CIM::Core::Capabilities
*/


/* **** Description *** */
/*
IndicationServiceCapabilities describes whether properties on the Indication Service can be modified by a client.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Capabilities:

			UNIX_IndicationServiceCapabilities:
				FilterCreationEnabledIsSettable Boolean
				DeliveryRetryAttemptsIsSettable Boolean
				DeliveryRetryIntervalIsSettable Boolean
				SubscriptionRemovalActionIsSettable Boolean
				SubscriptionRemovalTimeIntervalIsSettable Boolean
				MaxListenerDestinations UInt32
				MaxActiveSubscriptions UInt32
				SubscriptionsPersisted Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_IndicationServiceCapabilities:


*/

#ifndef __UNIX_INDICATIONSERVICECAPABILITIES_H
#define __UNIX_INDICATIONSERVICECAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_IndicationServiceCapabilitiesDeps.h"


#ifndef PROPERTY_FILTER_CREATION_ENABLED_IS_SETTABLE
#define PROPERTY_FILTER_CREATION_ENABLED_IS_SETTABLE \
					"FilterCreationEnabledIsSettable"
#endif

#ifndef PROPERTY_DELIVERY_RETRY_ATTEMPTS_IS_SETTABLE
#define PROPERTY_DELIVERY_RETRY_ATTEMPTS_IS_SETTABLE \
					"DeliveryRetryAttemptsIsSettable"
#endif

#ifndef PROPERTY_DELIVERY_RETRY_INTERVAL_IS_SETTABLE
#define PROPERTY_DELIVERY_RETRY_INTERVAL_IS_SETTABLE \
					"DeliveryRetryIntervalIsSettable"
#endif

#ifndef PROPERTY_SUBSCRIPTION_REMOVAL_ACTION_IS_SETTABLE
#define PROPERTY_SUBSCRIPTION_REMOVAL_ACTION_IS_SETTABLE \
					"SubscriptionRemovalActionIsSettable"
#endif

#ifndef PROPERTY_SUBSCRIPTION_REMOVAL_TIME_INTERVAL_IS_SETTABLE
#define PROPERTY_SUBSCRIPTION_REMOVAL_TIME_INTERVAL_IS_SETTABLE \
					"SubscriptionRemovalTimeIntervalIsSettable"
#endif

#ifndef PROPERTY_MAX_LISTENER_DESTINATIONS
#define PROPERTY_MAX_LISTENER_DESTINATIONS \
					"MaxListenerDestinations"
#endif

#ifndef PROPERTY_MAX_ACTIVE_SUBSCRIPTIONS
#define PROPERTY_MAX_ACTIVE_SUBSCRIPTIONS \
					"MaxActiveSubscriptions"
#endif

#ifndef PROPERTY_SUBSCRIPTIONS_PERSISTED
#define PROPERTY_SUBSCRIPTIONS_PERSISTED \
					"SubscriptionsPersisted"
#endif



class UNIX_IndicationServiceCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_IndicationServiceCapabilities();
	~UNIX_IndicationServiceCapabilities();

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
	virtual Boolean getFilterCreationEnabledIsSettable(CIMProperty&) const;
	virtual Boolean getFilterCreationEnabledIsSettable() const;
	virtual void setFilterCreationEnabledIsSettable(Boolean&);
	virtual Boolean getDeliveryRetryAttemptsIsSettable(CIMProperty&) const;
	virtual Boolean getDeliveryRetryAttemptsIsSettable() const;
	virtual void setDeliveryRetryAttemptsIsSettable(Boolean&);
	virtual Boolean getDeliveryRetryIntervalIsSettable(CIMProperty&) const;
	virtual Boolean getDeliveryRetryIntervalIsSettable() const;
	virtual void setDeliveryRetryIntervalIsSettable(Boolean&);
	virtual Boolean getSubscriptionRemovalActionIsSettable(CIMProperty&) const;
	virtual Boolean getSubscriptionRemovalActionIsSettable() const;
	virtual void setSubscriptionRemovalActionIsSettable(Boolean&);
	virtual Boolean getSubscriptionRemovalTimeIntervalIsSettable(CIMProperty&) const;
	virtual Boolean getSubscriptionRemovalTimeIntervalIsSettable() const;
	virtual void setSubscriptionRemovalTimeIntervalIsSettable(Boolean&);
	virtual Boolean getMaxListenerDestinations(CIMProperty&) const;
	virtual Uint32 getMaxListenerDestinations() const;
	virtual void setMaxListenerDestinations(Uint32&);
	virtual Boolean getMaxActiveSubscriptions(CIMProperty&) const;
	virtual Uint32 getMaxActiveSubscriptions() const;
	virtual void setMaxActiveSubscriptions(Uint32&);
	virtual Boolean getSubscriptionsPersisted(CIMProperty&) const;
	virtual Boolean getSubscriptionsPersisted() const;
	virtual void setSubscriptionsPersisted(Boolean&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Boolean _filterCreationEnabledIsSettable;
	Boolean _deliveryRetryAttemptsIsSettable;
	Boolean _deliveryRetryIntervalIsSettable;
	Boolean _subscriptionRemovalActionIsSettable;
	Boolean _subscriptionRemovalTimeIntervalIsSettable;
	Uint32 _maxListenerDestinations;
	Uint32 _maxActiveSubscriptions;
	Boolean _subscriptionsPersisted;

#	include "UNIX_IndicationServiceCapabilitiesPrivate.h"


};

#endif /* UNIX_INDICATIONSERVICECAPABILITIES */
