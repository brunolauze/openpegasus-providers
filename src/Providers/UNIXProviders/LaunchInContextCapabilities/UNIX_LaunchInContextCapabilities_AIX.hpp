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


UNIX_LaunchInContextCapabilities::UNIX_LaunchInContextCapabilities(void)
{
}

UNIX_LaunchInContextCapabilities::~UNIX_LaunchInContextCapabilities(void)
{
}

Boolean UNIX_LaunchInContextCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LaunchInContextCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LaunchInContextCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LaunchInContextCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LaunchInContextCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_LaunchInContextCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LaunchInContextCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LaunchInContextCapabilities::getDescription() const
{
	return _description;
}

void UNIX_LaunchInContextCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LaunchInContextCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LaunchInContextCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_LaunchInContextCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LaunchInContextCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LaunchInContextCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_LaunchInContextCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LaunchInContextCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_LaunchInContextCapabilities::getElementNameEditSupported() const
{
	return _elementNameEditSupported;
}

void UNIX_LaunchInContextCapabilities::setElementNameEditSupported(Boolean &value)
{
	_elementNameEditSupported = value;
}

Boolean UNIX_LaunchInContextCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_LaunchInContextCapabilities::getMaxElementNameLen() const
{
	return _maxElementNameLen;
}

void UNIX_LaunchInContextCapabilities::setMaxElementNameLen(Uint16 &value)
{
	_maxElementNameLen = value;
}

Boolean UNIX_LaunchInContextCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_LaunchInContextCapabilities::getRequestedStatesSupported() const
{
	return _requestedStatesSupported;
}

void UNIX_LaunchInContextCapabilities::setRequestedStatesSupported(Array<Uint16> &value)
{
	_requestedStatesSupported = value;
}

Boolean UNIX_LaunchInContextCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_LaunchInContextCapabilities::getElementNameMask() const
{
	return _elementNameMask;
}

void UNIX_LaunchInContextCapabilities::setElementNameMask(String &value)
{
	_elementNameMask = value;
}

Boolean UNIX_LaunchInContextCapabilities::getStateAwareness(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_AWARENESS, getStateAwareness());
	return true;
}

Array<Uint16> UNIX_LaunchInContextCapabilities::getStateAwareness() const
{
	return _stateAwareness;
}

void UNIX_LaunchInContextCapabilities::setStateAwareness(Array<Uint16> &value)
{
	_stateAwareness = value;
}

Boolean UNIX_LaunchInContextCapabilities::getMaxRestrictionListSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_RESTRICTION_LIST_SIZE, getMaxRestrictionListSize());
	return true;
}

Uint16 UNIX_LaunchInContextCapabilities::getMaxRestrictionListSize() const
{
	return _maxRestrictionListSize;
}

void UNIX_LaunchInContextCapabilities::setMaxRestrictionListSize(Uint16 &value)
{
	_maxRestrictionListSize = value;
}

Boolean UNIX_LaunchInContextCapabilities::getMaxLaunchPoints(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LAUNCH_POINTS, getMaxLaunchPoints());
	return true;
}

Uint16 UNIX_LaunchInContextCapabilities::getMaxLaunchPoints() const
{
	return _maxLaunchPoints;
}

void UNIX_LaunchInContextCapabilities::setMaxLaunchPoints(Uint16 &value)
{
	_maxLaunchPoints = value;
}


void UNIX_LaunchInContextCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LaunchInContextCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_maxRestrictionListSize = Uint16(0);
	_maxLaunchPoints = Uint16(0);

}

Boolean UNIX_LaunchInContextCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MaxRestrictionListSize"))
			{
				Uint16 maxRestrictionListSizeValue;
				property.getValue().get(maxRestrictionListSizeValue);
				setMaxRestrictionListSize(maxRestrictionListSizeValue);
			}
			else if (String::equal(property.getName().getString(), "MaxLaunchPoints"))
			{
				Uint16 maxLaunchPointsValue;
				property.getValue().get(maxLaunchPointsValue);
				setMaxLaunchPoints(maxLaunchPointsValue);
			}
	}
	return true;
}

Uint16 UNIX_LaunchInContextCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_LaunchInContextCapabilities::initialize()
{
	return false;
}

Boolean UNIX_LaunchInContextCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LaunchInContextCapabilities");
	_generation = Uint64(0);
	_elementNameEditSupported = Boolean(false);
	_maxElementNameLen = Uint16(0);
	_requestedStatesSupported.clear();
	_elementNameMask = String ("");
	_stateAwareness.clear();
	_maxRestrictionListSize = Uint16(0);
	_maxLaunchPoints = Uint16(0);
	
	return false;
}

Boolean UNIX_LaunchInContextCapabilities::finalize()
{
	return false;
}


Boolean UNIX_LaunchInContextCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LaunchInContextCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LaunchInContextCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LaunchInContextCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LaunchInContextCapabilities::validateInstance()
{
	return true;
}

