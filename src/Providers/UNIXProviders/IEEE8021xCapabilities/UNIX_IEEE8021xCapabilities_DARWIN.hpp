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


UNIX_IEEE8021xCapabilities::UNIX_IEEE8021xCapabilities(void)
{
}

UNIX_IEEE8021xCapabilities::~UNIX_IEEE8021xCapabilities(void)
{
}

Boolean UNIX_IEEE8021xCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IEEE8021xCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IEEE8021xCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IEEE8021xCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IEEE8021xCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_IEEE8021xCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IEEE8021xCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IEEE8021xCapabilities::getDescription() const
{
	return _description;
}

void UNIX_IEEE8021xCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IEEE8021xCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IEEE8021xCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_IEEE8021xCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IEEE8021xCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IEEE8021xCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_IEEE8021xCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IEEE8021xCapabilities::getSupportedAuthenticationProtocols(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_AUTHENTICATION_PROTOCOLS, getSupportedAuthenticationProtocols());
	return true;
}

Array<Uint16> UNIX_IEEE8021xCapabilities::getSupportedAuthenticationProtocols() const
{
	return _supportedAuthenticationProtocols;
}

void UNIX_IEEE8021xCapabilities::setSupportedAuthenticationProtocols(Array<Uint16> &value)
{
	_supportedAuthenticationProtocols = value;
}

Boolean UNIX_IEEE8021xCapabilities::getRoamingSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROAMING_SUPPORTED, getRoamingSupported());
	return true;
}

Boolean UNIX_IEEE8021xCapabilities::getRoamingSupported() const
{
	return _roamingSupported;
}

void UNIX_IEEE8021xCapabilities::setRoamingSupported(Boolean &value)
{
	_roamingSupported = value;
}

Boolean UNIX_IEEE8021xCapabilities::getFastRoamingSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAST_ROAMING_SUPPORTED, getFastRoamingSupported());
	return true;
}

Boolean UNIX_IEEE8021xCapabilities::getFastRoamingSupported() const
{
	return _fastRoamingSupported;
}

void UNIX_IEEE8021xCapabilities::setFastRoamingSupported(Boolean &value)
{
	_fastRoamingSupported = value;
}


void UNIX_IEEE8021xCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IEEE8021xCapabilities");
	_generation = Uint64(0);
	_supportedAuthenticationProtocols.clear();
	_roamingSupported = Boolean(false);
	_fastRoamingSupported = Boolean(false);

}

Boolean UNIX_IEEE8021xCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedAuthenticationProtocols"))
			{
				Array<Uint16> supportedAuthenticationProtocolsValue;
				property.getValue().get(supportedAuthenticationProtocolsValue);
				setSupportedAuthenticationProtocols(supportedAuthenticationProtocolsValue);
			}
			else if (String::equal(property.getName().getString(), "RoamingSupported"))
			{
				Boolean roamingSupportedValue;
				property.getValue().get(roamingSupportedValue);
				setRoamingSupported(roamingSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "FastRoamingSupported"))
			{
				Boolean fastRoamingSupportedValue;
				property.getValue().get(fastRoamingSupportedValue);
				setFastRoamingSupported(fastRoamingSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_IEEE8021xCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_IEEE8021xCapabilities::initialize()
{
	return false;
}

Boolean UNIX_IEEE8021xCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IEEE8021xCapabilities");
	_generation = Uint64(0);
	_supportedAuthenticationProtocols.clear();
	_roamingSupported = Boolean(false);
	_fastRoamingSupported = Boolean(false);
	
	return false;
}

Boolean UNIX_IEEE8021xCapabilities::finalize()
{
	return false;
}


Boolean UNIX_IEEE8021xCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IEEE8021xCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IEEE8021xCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IEEE8021xCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IEEE8021xCapabilities::validateInstance()
{
	return true;
}

