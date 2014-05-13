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


UNIX_ProcessorCapabilities::UNIX_ProcessorCapabilities(void)
{
}

UNIX_ProcessorCapabilities::~UNIX_ProcessorCapabilities(void)
{
}

Boolean UNIX_ProcessorCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ProcessorCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ProcessorCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ProcessorCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ProcessorCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_ProcessorCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ProcessorCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ProcessorCapabilities::getDescription() const
{
	return _description;
}

void UNIX_ProcessorCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ProcessorCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ProcessorCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_ProcessorCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ProcessorCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ProcessorCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_ProcessorCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ProcessorCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_ProcessorCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_ProcessorCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_ProcessorCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_ProcessorCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_ProcessorCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_ProcessorCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_ProcessorCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_ProcessorCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_ProcessorCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_ProcessorCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_ProcessorCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_ProcessorCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_ProcessorCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_ProcessorCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_ProcessorCapabilities::getNumberOfProcessorCores(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PROCESSOR_CORES, getNumberOfProcessorCores());
	return true;
}

Uint16 UNIX_ProcessorCapabilities::getNumberOfProcessorCores() const
{
	return _numberOfProcessorCores;
}

void UNIX_ProcessorCapabilities::setNumberOfProcessorCores(Uint16 &value)
{
	_numberOfProcessorCores = value;
}

Boolean UNIX_ProcessorCapabilities::getNumberOfHardwareThreads(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_HARDWARE_THREADS, getNumberOfHardwareThreads());
	return true;
}

Uint16 UNIX_ProcessorCapabilities::getNumberOfHardwareThreads() const
{
	return _numberOfHardwareThreads;
}

void UNIX_ProcessorCapabilities::setNumberOfHardwareThreads(Uint16 &value)
{
	_numberOfHardwareThreads = value;
}


void UNIX_ProcessorCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ProcessorCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_numberOfProcessorCores = Uint16(0);
	_numberOfHardwareThreads = Uint16(0);

}

Boolean UNIX_ProcessorCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NumberOfProcessorCores"))
			{
				Uint16 numberOfProcessorCoresValue;
				property.getValue().get(numberOfProcessorCoresValue);
				setNumberOfProcessorCores(numberOfProcessorCoresValue);
			}
			else if (String::equal(property.getName().getString(), "NumberOfHardwareThreads"))
			{
				Uint16 numberOfHardwareThreadsValue;
				property.getValue().get(numberOfHardwareThreadsValue);
				setNumberOfHardwareThreads(numberOfHardwareThreadsValue);
			}
	}
	return true;
}

Uint16 UNIX_ProcessorCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_ProcessorCapabilities::initialize()
{
	return false;
}

Boolean UNIX_ProcessorCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ProcessorCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_numberOfProcessorCores = Uint16(0);
	_numberOfHardwareThreads = Uint16(0);
	
	return false;
}

Boolean UNIX_ProcessorCapabilities::finalize()
{
	return false;
}


Boolean UNIX_ProcessorCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ProcessorCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProcessorCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProcessorCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProcessorCapabilities::validateInstance()
{
	return true;
}

