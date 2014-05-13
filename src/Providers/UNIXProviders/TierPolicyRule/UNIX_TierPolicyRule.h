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
CIM::Policy
*/


/* **** Description *** */
/*
This class is inherited from CIM_PolicyRule to include properties specific to storage tiering.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Policy:
				CommonName String
				PolicyKeywords String

			CIM_PolicySet:
				PolicyDecisionStrategy UInt16
				PolicyRoles String
				Enabled UInt16

			CIM_PolicyRule:
				SystemCreationClassName String
				SystemName String
				CreationClassName String
				PolicyRuleName String
				ConditionListType UInt16
				RuleUsage String
				Priority UInt16
				Mandatory Boolean
				SequencedActions UInt16
				ExecutionStrategy UInt16

			UNIX_TierPolicyRule:
				Activity UInt16
				ProvisioningType UInt16
				DataMovementRate UInt16
				RuleDiscriminator String
				TimePeriodCondition UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Policy:

			CIM_PolicySet:

			CIM_PolicyRule:

			UNIX_TierPolicyRule:


*/

#ifndef __UNIX_TIERPOLICYRULE_H
#define __UNIX_TIERPOLICYRULE_H


#include "CIM_PolicyRule.h"

#include "UNIX_TierPolicyRuleDeps.h"


#ifndef PROPERTY_ACTIVITY
#define PROPERTY_ACTIVITY \
					"Activity"
#endif

#ifndef PROPERTY_PROVISIONING_TYPE
#define PROPERTY_PROVISIONING_TYPE \
					"ProvisioningType"
#endif

#ifndef PROPERTY_DATA_MOVEMENT_RATE
#define PROPERTY_DATA_MOVEMENT_RATE \
					"DataMovementRate"
#endif

#ifndef PROPERTY_RULE_DISCRIMINATOR
#define PROPERTY_RULE_DISCRIMINATOR \
					"RuleDiscriminator"
#endif

#ifndef PROPERTY_TIME_PERIOD_CONDITION
#define PROPERTY_TIME_PERIOD_CONDITION \
					"TimePeriodCondition"
#endif



class UNIX_TierPolicyRule :
	public CIM_PolicyRule
{
public:

	UNIX_TierPolicyRule();
	~UNIX_TierPolicyRule();

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
	virtual Boolean getCommonName(CIMProperty&) const;
	virtual String getCommonName() const;
	virtual void setCommonName(String&);
	virtual Boolean getPolicyKeywords(CIMProperty&) const;
	virtual Array<String> getPolicyKeywords() const;
	virtual void setPolicyKeywords(Array<String>&);
	virtual Boolean getPolicyDecisionStrategy(CIMProperty&) const;
	virtual Uint16 getPolicyDecisionStrategy() const;
	virtual void setPolicyDecisionStrategy(Uint16&);
	virtual Boolean getPolicyRoles(CIMProperty&) const;
	virtual Array<String> getPolicyRoles() const;
	virtual void setPolicyRoles(Array<String>&);
	virtual Boolean getEnabled(CIMProperty&) const;
	virtual Uint16 getEnabled() const;
	virtual void setEnabled(Uint16&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getPolicyRuleName(CIMProperty&) const;
	virtual String getPolicyRuleName() const;
	virtual void setPolicyRuleName(String&);
	virtual Boolean getConditionListType(CIMProperty&) const;
	virtual Uint16 getConditionListType() const;
	virtual void setConditionListType(Uint16&);
	virtual Boolean getRuleUsage(CIMProperty&) const;
	virtual String getRuleUsage() const;
	virtual void setRuleUsage(String&);
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint16 getPriority() const;
	virtual void setPriority(Uint16&);
	virtual Boolean getMandatory(CIMProperty&) const;
	virtual Boolean getMandatory() const;
	virtual void setMandatory(Boolean&);
	virtual Boolean getSequencedActions(CIMProperty&) const;
	virtual Uint16 getSequencedActions() const;
	virtual void setSequencedActions(Uint16&);
	virtual Boolean getExecutionStrategy(CIMProperty&) const;
	virtual Uint16 getExecutionStrategy() const;
	virtual void setExecutionStrategy(Uint16&);
	virtual Boolean getActivity(CIMProperty&) const;
	virtual Uint16 getActivity() const;
	virtual void setActivity(Uint16&);
	virtual Boolean getProvisioningType(CIMProperty&) const;
	virtual Uint16 getProvisioningType() const;
	virtual void setProvisioningType(Uint16&);
	virtual Boolean getDataMovementRate(CIMProperty&) const;
	virtual Uint16 getDataMovementRate() const;
	virtual void setDataMovementRate(Uint16&);
	virtual Boolean getRuleDiscriminator(CIMProperty&) const;
	virtual Array<String> getRuleDiscriminator() const;
	virtual void setRuleDiscriminator(Array<String>&);
	virtual Boolean getTimePeriodCondition(CIMProperty&) const;
	virtual Uint16 getTimePeriodCondition() const;
	virtual void setTimePeriodCondition(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _commonName;
	Array<String> _policyKeywords;
	Uint16 _policyDecisionStrategy;
	Array<String> _policyRoles;
	Uint16 _enabled;
	String _systemCreationClassName;
	String _systemName;
	String _creationClassName;
	String _policyRuleName;
	Uint16 _conditionListType;
	String _ruleUsage;
	Uint16 _priority;
	Boolean _mandatory;
	Uint16 _sequencedActions;
	Uint16 _executionStrategy;
	Uint16 _activity;
	Uint16 _provisioningType;
	Uint16 _dataMovementRate;
	Array<String> _ruleDiscriminator;
	Uint16 _timePeriodCondition;

#	include "UNIX_TierPolicyRulePrivate.h"


};

#endif /* UNIX_TIERPOLICYRULE */
