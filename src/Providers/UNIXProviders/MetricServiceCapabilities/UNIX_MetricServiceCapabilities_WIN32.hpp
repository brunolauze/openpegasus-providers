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


UNIX_MetricServiceCapabilities::UNIX_MetricServiceCapabilities(void)
{
}

UNIX_MetricServiceCapabilities::~UNIX_MetricServiceCapabilities(void)
{
}

Boolean UNIX_MetricServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MetricServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MetricServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MetricServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MetricServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_MetricServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MetricServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MetricServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_MetricServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MetricServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MetricServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_MetricServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MetricServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MetricServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_MetricServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MetricServiceCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_MetricServiceCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_MetricServiceCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_MetricServiceCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_MetricServiceCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_MetricServiceCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_MetricServiceCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_MetricServiceCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_MetricServiceCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_MetricServiceCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_MetricServiceCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_MetricServiceCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_MetricServiceCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_MetricServiceCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_MetricServiceCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_MetricServiceCapabilities::getControllableMetrics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTROLLABLE_METRICS, getControllableMetrics());
	return true;
}

Array<String> UNIX_MetricServiceCapabilities::getControllableMetrics() const
{
	return _controllableMetrics;
}

void UNIX_MetricServiceCapabilities::setControllableMetrics(Array<String> &value)
{
	_controllableMetrics = value;
}

Boolean UNIX_MetricServiceCapabilities::getMetricsControlTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METRICS_CONTROL_TYPES, getMetricsControlTypes());
	return true;
}

Array<Uint16> UNIX_MetricServiceCapabilities::getMetricsControlTypes() const
{
	return _metricsControlTypes;
}

void UNIX_MetricServiceCapabilities::setMetricsControlTypes(Array<Uint16> &value)
{
	_metricsControlTypes = value;
}

Boolean UNIX_MetricServiceCapabilities::getControllableManagedElements(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTROLLABLE_MANAGED_ELEMENTS, getControllableManagedElements());
	return true;
}

Array<String> UNIX_MetricServiceCapabilities::getControllableManagedElements() const
{
	return _controllableManagedElements;
}

void UNIX_MetricServiceCapabilities::setControllableManagedElements(Array<String> &value)
{
	_controllableManagedElements = value;
}

Boolean UNIX_MetricServiceCapabilities::getManagedElementControlTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_ELEMENT_CONTROL_TYPES, getManagedElementControlTypes());
	return true;
}

Array<Uint16> UNIX_MetricServiceCapabilities::getManagedElementControlTypes() const
{
	return _managedElementControlTypes;
}

void UNIX_MetricServiceCapabilities::setManagedElementControlTypes(Array<Uint16> &value)
{
	_managedElementControlTypes = value;
}

Boolean UNIX_MetricServiceCapabilities::getSupportedMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_METHODS, getSupportedMethods());
	return true;
}

Array<Uint16> UNIX_MetricServiceCapabilities::getSupportedMethods() const
{
	return _supportedMethods;
}

void UNIX_MetricServiceCapabilities::setSupportedMethods(Array<Uint16> &value)
{
	_supportedMethods = value;
}


void UNIX_MetricServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MetricServiceCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_controllableMetrics.clear();
	_metricsControlTypes.clear();
	_controllableManagedElements.clear();
	_managedElementControlTypes.clear();
	_supportedMethods.clear();

}

Boolean UNIX_MetricServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ControllableMetrics"))
			{
				Array<String> controllableMetricsValue;
				property.getValue().get(controllableMetricsValue);
				setControllableMetrics(controllableMetricsValue);
			}
			else if (String::equal(property.getName().getString(), "MetricsControlTypes"))
			{
				Array<Uint16> metricsControlTypesValue;
				property.getValue().get(metricsControlTypesValue);
				setMetricsControlTypes(metricsControlTypesValue);
			}
			else if (String::equal(property.getName().getString(), "ControllableManagedElements"))
			{
				Array<String> controllableManagedElementsValue;
				property.getValue().get(controllableManagedElementsValue);
				setControllableManagedElements(controllableManagedElementsValue);
			}
			else if (String::equal(property.getName().getString(), "ManagedElementControlTypes"))
			{
				Array<Uint16> managedElementControlTypesValue;
				property.getValue().get(managedElementControlTypesValue);
				setManagedElementControlTypes(managedElementControlTypesValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedMethods"))
			{
				Array<Uint16> supportedMethodsValue;
				property.getValue().get(supportedMethodsValue);
				setSupportedMethods(supportedMethodsValue);
			}
	}
	return true;
}

Uint16 UNIX_MetricServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_MetricServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_MetricServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MetricServiceCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_controllableMetrics.clear();
	_metricsControlTypes.clear();
	_controllableManagedElements.clear();
	_managedElementControlTypes.clear();
	_supportedMethods.clear();
	
	return false;
}

Boolean UNIX_MetricServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_MetricServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MetricServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MetricServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MetricServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MetricServiceCapabilities::validateInstance()
{
	return true;
}

