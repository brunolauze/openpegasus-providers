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


UNIX_VirtualSystemManagementCapabilities::UNIX_VirtualSystemManagementCapabilities(void)
{
}

UNIX_VirtualSystemManagementCapabilities::~UNIX_VirtualSystemManagementCapabilities(void)
{
}

Boolean UNIX_VirtualSystemManagementCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VirtualSystemManagementCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VirtualSystemManagementCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VirtualSystemManagementCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VirtualSystemManagementCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_VirtualSystemManagementCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VirtualSystemManagementCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VirtualSystemManagementCapabilities::getDescription() const
{
	return _description;
}

void UNIX_VirtualSystemManagementCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VirtualSystemManagementCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VirtualSystemManagementCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_VirtualSystemManagementCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VirtualSystemManagementCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VirtualSystemManagementCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_VirtualSystemManagementCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VirtualSystemManagementCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_VirtualSystemManagementCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_VirtualSystemManagementCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_VirtualSystemManagementCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_VirtualSystemManagementCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_VirtualSystemManagementCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_VirtualSystemManagementCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_VirtualSystemManagementCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_VirtualSystemManagementCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_VirtualSystemManagementCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_VirtualSystemManagementCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_VirtualSystemManagementCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_VirtualSystemManagementCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_VirtualSystemManagementCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_VirtualSystemManagementCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_VirtualSystemManagementCapabilities::getVirtualSystemTypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SYSTEM_TYPES_SUPPORTED, getVirtualSystemTypesSupported());
	return true;
}

Array<String> UNIX_VirtualSystemManagementCapabilities::getVirtualSystemTypesSupported() const
{
	return _virtualSystemTypesSupported;
}

void UNIX_VirtualSystemManagementCapabilities::setVirtualSystemTypesSupported(Array<String> &value)
{
	_virtualSystemTypesSupported = value;
}

Boolean UNIX_VirtualSystemManagementCapabilities::getSynchronousMethodsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYNCHRONOUS_METHODS_SUPPORTED, getSynchronousMethodsSupported());
	return true;
}

Array<Uint16> UNIX_VirtualSystemManagementCapabilities::getSynchronousMethodsSupported() const
{
	return _synchronousMethodsSupported;
}

void UNIX_VirtualSystemManagementCapabilities::setSynchronousMethodsSupported(Array<Uint16> &value)
{
	_synchronousMethodsSupported = value;
}

Boolean UNIX_VirtualSystemManagementCapabilities::getAsynchronousMethodsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASYNCHRONOUS_METHODS_SUPPORTED, getAsynchronousMethodsSupported());
	return true;
}

Array<Uint16> UNIX_VirtualSystemManagementCapabilities::getAsynchronousMethodsSupported() const
{
	return _asynchronousMethodsSupported;
}

void UNIX_VirtualSystemManagementCapabilities::setAsynchronousMethodsSupported(Array<Uint16> &value)
{
	_asynchronousMethodsSupported = value;
}

Boolean UNIX_VirtualSystemManagementCapabilities::getIndicationsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INDICATIONS_SUPPORTED, getIndicationsSupported());
	return true;
}

Array<Uint16> UNIX_VirtualSystemManagementCapabilities::getIndicationsSupported() const
{
	return _indicationsSupported;
}

void UNIX_VirtualSystemManagementCapabilities::setIndicationsSupported(Array<Uint16> &value)
{
	_indicationsSupported = value;
}


void UNIX_VirtualSystemManagementCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VirtualSystemManagementCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_virtualSystemTypesSupported.clear();
	_synchronousMethodsSupported.clear();
	_asynchronousMethodsSupported.clear();
	_indicationsSupported.clear();

}

Boolean UNIX_VirtualSystemManagementCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "VirtualSystemTypesSupported"))
			{
				Array<String> virtualSystemTypesSupportedValue;
				property.getValue().get(virtualSystemTypesSupportedValue);
				setVirtualSystemTypesSupported(virtualSystemTypesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "SynchronousMethodsSupported"))
			{
				Array<Uint16> synchronousMethodsSupportedValue;
				property.getValue().get(synchronousMethodsSupportedValue);
				setSynchronousMethodsSupported(synchronousMethodsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "AsynchronousMethodsSupported"))
			{
				Array<Uint16> asynchronousMethodsSupportedValue;
				property.getValue().get(asynchronousMethodsSupportedValue);
				setAsynchronousMethodsSupported(asynchronousMethodsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "IndicationsSupported"))
			{
				Array<Uint16> indicationsSupportedValue;
				property.getValue().get(indicationsSupportedValue);
				setIndicationsSupported(indicationsSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_VirtualSystemManagementCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_VirtualSystemManagementCapabilities::initialize()
{
	return false;
}

Boolean UNIX_VirtualSystemManagementCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VirtualSystemManagementCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_virtualSystemTypesSupported.clear();
	_synchronousMethodsSupported.clear();
	_asynchronousMethodsSupported.clear();
	_indicationsSupported.clear();
	
	return false;
}

Boolean UNIX_VirtualSystemManagementCapabilities::finalize()
{
	return false;
}


Boolean UNIX_VirtualSystemManagementCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VirtualSystemManagementCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemManagementCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemManagementCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemManagementCapabilities::validateInstance()
{
	return true;
}

