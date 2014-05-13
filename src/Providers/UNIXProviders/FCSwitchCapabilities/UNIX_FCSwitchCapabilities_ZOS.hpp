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


UNIX_FCSwitchCapabilities::UNIX_FCSwitchCapabilities(void)
{
}

UNIX_FCSwitchCapabilities::~UNIX_FCSwitchCapabilities(void)
{
}

Boolean UNIX_FCSwitchCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCSwitchCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FCSwitchCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FCSwitchCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCSwitchCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_FCSwitchCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FCSwitchCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCSwitchCapabilities::getDescription() const
{
	return _description;
}

void UNIX_FCSwitchCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FCSwitchCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCSwitchCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_FCSwitchCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FCSwitchCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FCSwitchCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_FCSwitchCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FCSwitchCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_FCSwitchCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_FCSwitchCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_FCSwitchCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_FCSwitchCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_FCSwitchCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_FCSwitchCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_FCSwitchCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_FCSwitchCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_FCSwitchCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_FCSwitchCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_FCSwitchCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_FCSwitchCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_FCSwitchCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_FCSwitchCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_FCSwitchCapabilities::getDomainIDConfigureable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOMAIN_ID_CONFIGUREABLE, getDomainIDConfigureable());
	return true;
}

Boolean UNIX_FCSwitchCapabilities::getDomainIDConfigureable() const
{
	return _domainIDConfigureable;
}

void UNIX_FCSwitchCapabilities::setDomainIDConfigureable(Boolean &value)
{
	_domainIDConfigureable = value;
}

Boolean UNIX_FCSwitchCapabilities::getMinDomainID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_DOMAIN_ID, getMinDomainID());
	return true;
}

Uint8 UNIX_FCSwitchCapabilities::getMinDomainID() const
{
	return _minDomainID;
}

void UNIX_FCSwitchCapabilities::setMinDomainID(Uint8 &value)
{
	_minDomainID = value;
}

Boolean UNIX_FCSwitchCapabilities::getMaxDomainID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DOMAIN_ID, getMaxDomainID());
	return true;
}

Uint8 UNIX_FCSwitchCapabilities::getMaxDomainID() const
{
	return _maxDomainID;
}

void UNIX_FCSwitchCapabilities::setMaxDomainID(Uint8 &value)
{
	_maxDomainID = value;
}

Boolean UNIX_FCSwitchCapabilities::getDomainIDLockedSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOMAIN_ID_LOCKED_SUPPORTED, getDomainIDLockedSupported());
	return true;
}

Boolean UNIX_FCSwitchCapabilities::getDomainIDLockedSupported() const
{
	return _domainIDLockedSupported;
}

void UNIX_FCSwitchCapabilities::setDomainIDLockedSupported(Boolean &value)
{
	_domainIDLockedSupported = value;
}

Boolean UNIX_FCSwitchCapabilities::getPrincipalPrioritiesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRINCIPAL_PRIORITIES_SUPPORTED, getPrincipalPrioritiesSupported());
	return true;
}

Array<Uint16> UNIX_FCSwitchCapabilities::getPrincipalPrioritiesSupported() const
{
	return _principalPrioritiesSupported;
}

void UNIX_FCSwitchCapabilities::setPrincipalPrioritiesSupported(Array<Uint16> &value)
{
	_principalPrioritiesSupported = value;
}

Boolean UNIX_FCSwitchCapabilities::getNPIVSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_N_P_I_V_SUPPORTED, getNPIVSupported());
	return true;
}

Boolean UNIX_FCSwitchCapabilities::getNPIVSupported() const
{
	return _nPIVSupported;
}

void UNIX_FCSwitchCapabilities::setNPIVSupported(Boolean &value)
{
	_nPIVSupported = value;
}


void UNIX_FCSwitchCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCSwitchCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_domainIDConfigureable = Boolean(false);
	_minDomainID = Uint8(0);
	_maxDomainID = Uint8(0);
	_domainIDLockedSupported = Boolean(false);
	_principalPrioritiesSupported.clear();
	_nPIVSupported = Boolean(false);

}

Boolean UNIX_FCSwitchCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ElementNameEditSupported"))
			{
				Boolean elementNameEditSupportedValue;
				property.getValue().get(elementNameEditSupportedValue);
				setElementNameEditSupported(elementNameEditSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MaxElementNameLen"))
			{
				Uint16 maxElementNameLenValue;
				property.getValue().get(maxElementNameLenValue);
				setMaxElementNameLen(maxElementNameLenValue);
			}
			else if (String::equal(property.getName().getString(), "RequestedStatesSupported"))
			{
				Array<Uint16> requestedStatesSupportedValue;
				property.getValue().get(requestedStatesSupportedValue);
				setRequestedStatesSupported(requestedStatesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ElementNameMask"))
			{
				String elementNameMaskValue;
				property.getValue().get(elementNameMaskValue);
				setElementNameMask(elementNameMaskValue);
			}
			else if (String::equal(property.getName().getString(), "StateAwareness"))
			{
				Array<Uint16> stateAwarenessValue;
				property.getValue().get(stateAwarenessValue);
				setStateAwareness(stateAwarenessValue);
			}
			else if (String::equal(property.getName().getString(), "DomainIDConfigureable"))
			{
				Boolean domainIDConfigureableValue;
				property.getValue().get(domainIDConfigureableValue);
				setDomainIDConfigureable(domainIDConfigureableValue);
			}
			else if (String::equal(property.getName().getString(), "MinDomainID"))
			{
				Uint8 minDomainIDValue;
				property.getValue().get(minDomainIDValue);
				setMinDomainID(minDomainIDValue);
			}
			else if (String::equal(property.getName().getString(), "MaxDomainID"))
			{
				Uint8 maxDomainIDValue;
				property.getValue().get(maxDomainIDValue);
				setMaxDomainID(maxDomainIDValue);
			}
			else if (String::equal(property.getName().getString(), "DomainIDLockedSupported"))
			{
				Boolean domainIDLockedSupportedValue;
				property.getValue().get(domainIDLockedSupportedValue);
				setDomainIDLockedSupported(domainIDLockedSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "PrincipalPrioritiesSupported"))
			{
				Array<Uint16> principalPrioritiesSupportedValue;
				property.getValue().get(principalPrioritiesSupportedValue);
				setPrincipalPrioritiesSupported(principalPrioritiesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "NPIVSupported"))
			{
				Boolean nPIVSupportedValue;
				property.getValue().get(nPIVSupportedValue);
				setNPIVSupported(nPIVSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_FCSwitchCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_FCSwitchCapabilities::initialize()
{
	return false;
}

Boolean UNIX_FCSwitchCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCSwitchCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_domainIDConfigureable = Boolean(false);
	_minDomainID = Uint8(0);
	_maxDomainID = Uint8(0);
	_domainIDLockedSupported = Boolean(false);
	_principalPrioritiesSupported.clear();
	_nPIVSupported = Boolean(false);
	
	return false;
}

Boolean UNIX_FCSwitchCapabilities::finalize()
{
	return false;
}


Boolean UNIX_FCSwitchCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FCSwitchCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCSwitchCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCSwitchCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCSwitchCapabilities::validateInstance()
{
	return true;
}

