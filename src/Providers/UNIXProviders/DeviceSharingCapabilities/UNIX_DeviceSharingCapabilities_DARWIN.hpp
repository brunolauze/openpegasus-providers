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


UNIX_DeviceSharingCapabilities::UNIX_DeviceSharingCapabilities(void)
{
}

UNIX_DeviceSharingCapabilities::~UNIX_DeviceSharingCapabilities(void)
{
}

Boolean UNIX_DeviceSharingCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DeviceSharingCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DeviceSharingCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DeviceSharingCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DeviceSharingCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_DeviceSharingCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DeviceSharingCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DeviceSharingCapabilities::getDescription() const
{
	return _description;
}

void UNIX_DeviceSharingCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DeviceSharingCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DeviceSharingCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_DeviceSharingCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DeviceSharingCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DeviceSharingCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_DeviceSharingCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DeviceSharingCapabilities::getSupportedAccessModes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ACCESS_MODES, getSupportedAccessModes());
	return true;
}

Array<Uint16> UNIX_DeviceSharingCapabilities::getSupportedAccessModes() const
{
	return _supportedAccessModes;
}

void UNIX_DeviceSharingCapabilities::setSupportedAccessModes(Array<Uint16> &value)
{
	_supportedAccessModes = value;
}

Boolean UNIX_DeviceSharingCapabilities::getOtherSupportedAccessModes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_ACCESS_MODES, getOtherSupportedAccessModes());
	return true;
}

Array<String> UNIX_DeviceSharingCapabilities::getOtherSupportedAccessModes() const
{
	return _otherSupportedAccessModes;
}

void UNIX_DeviceSharingCapabilities::setOtherSupportedAccessModes(Array<String> &value)
{
	_otherSupportedAccessModes = value;
}


void UNIX_DeviceSharingCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DeviceSharingCapabilities");
	_generation = Uint64(0);
	_supportedAccessModes.clear();
	_otherSupportedAccessModes.clear();

}

Boolean UNIX_DeviceSharingCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedAccessModes"))
			{
				Array<Uint16> supportedAccessModesValue;
				property.getValue().get(supportedAccessModesValue);
				setSupportedAccessModes(supportedAccessModesValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSupportedAccessModes"))
			{
				Array<String> otherSupportedAccessModesValue;
				property.getValue().get(otherSupportedAccessModesValue);
				setOtherSupportedAccessModes(otherSupportedAccessModesValue);
			}
	}
	return true;
}

Uint16 UNIX_DeviceSharingCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_DeviceSharingCapabilities::initialize()
{
	return false;
}

Boolean UNIX_DeviceSharingCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DeviceSharingCapabilities");
	_generation = Uint64(0);
	_supportedAccessModes.clear();
	_otherSupportedAccessModes.clear();
	
	return false;
}

Boolean UNIX_DeviceSharingCapabilities::finalize()
{
	return false;
}


Boolean UNIX_DeviceSharingCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DeviceSharingCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceSharingCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceSharingCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DeviceSharingCapabilities::validateInstance()
{
	return true;
}

