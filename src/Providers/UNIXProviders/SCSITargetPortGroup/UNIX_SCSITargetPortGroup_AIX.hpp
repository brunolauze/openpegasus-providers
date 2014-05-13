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


using PROVIDER_LIB_NS::CIMHelper;


UNIX_SCSITargetPortGroup::UNIX_SCSITargetPortGroup(void)
{
}

UNIX_SCSITargetPortGroup::~UNIX_SCSITargetPortGroup(void)
{
}

Boolean UNIX_SCSITargetPortGroup::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SCSITargetPortGroup::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SCSITargetPortGroup::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SCSITargetPortGroup::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SCSITargetPortGroup::getCaption() const
{
	return _caption;
}

void UNIX_SCSITargetPortGroup::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SCSITargetPortGroup::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SCSITargetPortGroup::getDescription() const
{
	return _description;
}

void UNIX_SCSITargetPortGroup::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SCSITargetPortGroup::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SCSITargetPortGroup::getElementName() const
{
	return _elementName;
}

void UNIX_SCSITargetPortGroup::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SCSITargetPortGroup::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SCSITargetPortGroup::getGeneration() const
{
	return _generation;
}

void UNIX_SCSITargetPortGroup::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SCSITargetPortGroup::getAsymmetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASYMMETRIC, getAsymmetric());
	return true;
}

Boolean UNIX_SCSITargetPortGroup::getAsymmetric() const
{
	return _asymmetric;
}

void UNIX_SCSITargetPortGroup::setAsymmetric(Boolean &value)
{
	_asymmetric = value;
}

Boolean UNIX_SCSITargetPortGroup::getCurrentLoadBalanceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_LOAD_BALANCE_TYPE, getCurrentLoadBalanceType());
	return true;
}

Uint16 UNIX_SCSITargetPortGroup::getCurrentLoadBalanceType() const
{
	return _currentLoadBalanceType;
}

void UNIX_SCSITargetPortGroup::setCurrentLoadBalanceType(Uint16 &value)
{
	_currentLoadBalanceType = value;
}

Boolean UNIX_SCSITargetPortGroup::getOtherCurrentLoadBalanceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CURRENT_LOAD_BALANCE_TYPE, getOtherCurrentLoadBalanceType());
	return true;
}

String UNIX_SCSITargetPortGroup::getOtherCurrentLoadBalanceType() const
{
	return _otherCurrentLoadBalanceType;
}

void UNIX_SCSITargetPortGroup::setOtherCurrentLoadBalanceType(String &value)
{
	_otherCurrentLoadBalanceType = value;
}

Boolean UNIX_SCSITargetPortGroup::getAutoFailbackEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_FAILBACK_ENABLED, getAutoFailbackEnabled());
	return true;
}

Uint16 UNIX_SCSITargetPortGroup::getAutoFailbackEnabled() const
{
	return _autoFailbackEnabled;
}

void UNIX_SCSITargetPortGroup::setAutoFailbackEnabled(Uint16 &value)
{
	_autoFailbackEnabled = value;
}

Boolean UNIX_SCSITargetPortGroup::getPollingRateMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLLING_RATE_MAX, getPollingRateMax());
	return true;
}

Uint32 UNIX_SCSITargetPortGroup::getPollingRateMax() const
{
	return _pollingRateMax;
}

void UNIX_SCSITargetPortGroup::setPollingRateMax(Uint32 &value)
{
	_pollingRateMax = value;
}

Boolean UNIX_SCSITargetPortGroup::getCurrentPollingRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_POLLING_RATE, getCurrentPollingRate());
	return true;
}

Uint32 UNIX_SCSITargetPortGroup::getCurrentPollingRate() const
{
	return _currentPollingRate;
}

void UNIX_SCSITargetPortGroup::setCurrentPollingRate(Uint32 &value)
{
	_currentPollingRate = value;
}

Boolean UNIX_SCSITargetPortGroup::getAccessState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_STATE, getAccessState());
	return true;
}

Uint16 UNIX_SCSITargetPortGroup::getAccessState() const
{
	return _accessState;
}

void UNIX_SCSITargetPortGroup::setAccessState(Uint16 &value)
{
	_accessState = value;
}

Boolean UNIX_SCSITargetPortGroup::getExplicitFailover(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPLICIT_FAILOVER, getExplicitFailover());
	return true;
}

Boolean UNIX_SCSITargetPortGroup::getExplicitFailover() const
{
	return _explicitFailover;
}

void UNIX_SCSITargetPortGroup::setExplicitFailover(Boolean &value)
{
	_explicitFailover = value;
}

Boolean UNIX_SCSITargetPortGroup::getIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFIER, getIdentifier());
	return true;
}

Uint16 UNIX_SCSITargetPortGroup::getIdentifier() const
{
	return _identifier;
}

void UNIX_SCSITargetPortGroup::setIdentifier(Uint16 &value)
{
	_identifier = value;
}

Boolean UNIX_SCSITargetPortGroup::getPreferred(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED, getPreferred());
	return true;
}

Boolean UNIX_SCSITargetPortGroup::getPreferred() const
{
	return _preferred;
}

void UNIX_SCSITargetPortGroup::setPreferred(Boolean &value)
{
	_preferred = value;
}

Boolean UNIX_SCSITargetPortGroup::getSupportsLuAssignment(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_LU_ASSIGNMENT, getSupportsLuAssignment());
	return true;
}

Boolean UNIX_SCSITargetPortGroup::getSupportsLuAssignment() const
{
	return _supportsLuAssignment;
}

void UNIX_SCSITargetPortGroup::setSupportsLuAssignment(Boolean &value)
{
	_supportsLuAssignment = value;
}


void UNIX_SCSITargetPortGroup::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SCSITargetPortGroup");
	_generation = Uint64(0);
	_asymmetric = Boolean(false);
	_currentLoadBalanceType = Uint16(0);
	_otherCurrentLoadBalanceType = String ("");
	_autoFailbackEnabled = Uint16(0);
	_pollingRateMax = Uint32(0);
	_currentPollingRate = Uint32(0);
	_accessState = Uint16(0);
	_explicitFailover = Boolean(false);
	_identifier = Uint16(0);
	_preferred = Boolean(false);
	_supportsLuAssignment = Boolean(false);

}

Boolean UNIX_SCSITargetPortGroup::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "Asymmetric"))
			{
				Boolean asymmetricValue;
				property.getValue().get(asymmetricValue);
				setAsymmetric(asymmetricValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentLoadBalanceType"))
			{
				Uint16 currentLoadBalanceTypeValue;
				property.getValue().get(currentLoadBalanceTypeValue);
				setCurrentLoadBalanceType(currentLoadBalanceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherCurrentLoadBalanceType"))
			{
				String otherCurrentLoadBalanceTypeValue;
				property.getValue().get(otherCurrentLoadBalanceTypeValue);
				setOtherCurrentLoadBalanceType(otherCurrentLoadBalanceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "AutoFailbackEnabled"))
			{
				Uint16 autoFailbackEnabledValue;
				property.getValue().get(autoFailbackEnabledValue);
				setAutoFailbackEnabled(autoFailbackEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "PollingRateMax"))
			{
				Uint32 pollingRateMaxValue;
				property.getValue().get(pollingRateMaxValue);
				setPollingRateMax(pollingRateMaxValue);
			}
			else if (String::equal(property.getName().getString(), "CurrentPollingRate"))
			{
				Uint32 currentPollingRateValue;
				property.getValue().get(currentPollingRateValue);
				setCurrentPollingRate(currentPollingRateValue);
			}
			else if (String::equal(property.getName().getString(), "AccessState"))
			{
				Uint16 accessStateValue;
				property.getValue().get(accessStateValue);
				setAccessState(accessStateValue);
			}
			else if (String::equal(property.getName().getString(), "ExplicitFailover"))
			{
				Boolean explicitFailoverValue;
				property.getValue().get(explicitFailoverValue);
				setExplicitFailover(explicitFailoverValue);
			}
			else if (String::equal(property.getName().getString(), "Identifier"))
			{
				Uint16 identifierValue;
				property.getValue().get(identifierValue);
				setIdentifier(identifierValue);
			}
			else if (String::equal(property.getName().getString(), "Preferred"))
			{
				Boolean preferredValue;
				property.getValue().get(preferredValue);
				setPreferred(preferredValue);
			}
			else if (String::equal(property.getName().getString(), "SupportsLuAssignment"))
			{
				Boolean supportsLuAssignmentValue;
				property.getValue().get(supportsLuAssignmentValue);
				setSupportsLuAssignment(supportsLuAssignmentValue);
			}
	}
	return true;
}


Boolean UNIX_SCSITargetPortGroup::initialize()
{
	return false;
}

Boolean UNIX_SCSITargetPortGroup::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SCSITargetPortGroup");
	_generation = Uint64(0);
	_asymmetric = Boolean(false);
	_currentLoadBalanceType = Uint16(0);
	_otherCurrentLoadBalanceType = String ("");
	_autoFailbackEnabled = Uint16(0);
	_pollingRateMax = Uint32(0);
	_currentPollingRate = Uint32(0);
	_accessState = Uint16(0);
	_explicitFailover = Boolean(false);
	_identifier = Uint16(0);
	_preferred = Boolean(false);
	_supportsLuAssignment = Boolean(false);
	
	return false;
}

Boolean UNIX_SCSITargetPortGroup::finalize()
{
	return false;
}


Boolean UNIX_SCSITargetPortGroup::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SCSITargetPortGroup::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSITargetPortGroup::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSITargetPortGroup::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SCSITargetPortGroup::validateInstance()
{
	return true;
}

