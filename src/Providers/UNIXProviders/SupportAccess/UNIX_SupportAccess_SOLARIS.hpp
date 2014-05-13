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


UNIX_SupportAccess::UNIX_SupportAccess(void)
{
}

UNIX_SupportAccess::~UNIX_SupportAccess(void)
{
}

Boolean UNIX_SupportAccess::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SupportAccess::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SupportAccess::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SupportAccess::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SupportAccess::getCaption() const
{
	return _caption;
}

void UNIX_SupportAccess::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SupportAccess::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SupportAccess::getDescription() const
{
	return _description;
}

void UNIX_SupportAccess::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SupportAccess::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SupportAccess::getElementName() const
{
	return _elementName;
}

void UNIX_SupportAccess::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SupportAccess::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SupportAccess::getGeneration() const
{
	return _generation;
}

void UNIX_SupportAccess::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SupportAccess::getSupportAccessId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORT_ACCESS_ID, getSupportAccessId());
	return true;
}

String UNIX_SupportAccess::getSupportAccessId() const
{
	return _supportAccessId;
}

void UNIX_SupportAccess::setSupportAccessId(String &value)
{
	_supportAccessId = value;
}

Boolean UNIX_SupportAccess::getCommunicationInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_INFO, getCommunicationInfo());
	return true;
}

String UNIX_SupportAccess::getCommunicationInfo() const
{
	return _communicationInfo;
}

void UNIX_SupportAccess::setCommunicationInfo(String &value)
{
	_communicationInfo = value;
}

Boolean UNIX_SupportAccess::getCommunicationMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_MODE, getCommunicationMode());
	return true;
}

Uint16 UNIX_SupportAccess::getCommunicationMode() const
{
	return _communicationMode;
}

void UNIX_SupportAccess::setCommunicationMode(Uint16 &value)
{
	_communicationMode = value;
}

Boolean UNIX_SupportAccess::getLocale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALE, getLocale());
	return true;
}

String UNIX_SupportAccess::getLocale() const
{
	return _locale;
}

void UNIX_SupportAccess::setLocale(String &value)
{
	_locale = value;
}


void UNIX_SupportAccess::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SupportAccess");
	_generation = Uint64(0);
	_supportAccessId = String ("");
	_communicationInfo = String ("");
	_communicationMode = Uint16(0);
	_locale = String ("");

}

Boolean UNIX_SupportAccess::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportAccessId"))
			{
				String supportAccessIdValue;
				property.getValue().get(supportAccessIdValue);
				setSupportAccessId(supportAccessIdValue);
			}
			else if (String::equal(property.getName().getString(), "CommunicationInfo"))
			{
				String communicationInfoValue;
				property.getValue().get(communicationInfoValue);
				setCommunicationInfo(communicationInfoValue);
			}
			else if (String::equal(property.getName().getString(), "CommunicationMode"))
			{
				Uint16 communicationModeValue;
				property.getValue().get(communicationModeValue);
				setCommunicationMode(communicationModeValue);
			}
			else if (String::equal(property.getName().getString(), "Locale"))
			{
				String localeValue;
				property.getValue().get(localeValue);
				setLocale(localeValue);
			}
	}
	return true;
}


Boolean UNIX_SupportAccess::initialize()
{
	return false;
}

Boolean UNIX_SupportAccess::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SupportAccess");
	_generation = Uint64(0);
	_supportAccessId = String ("");
	_communicationInfo = String ("");
	_communicationMode = Uint16(0);
	_locale = String ("");
	
	return false;
}

Boolean UNIX_SupportAccess::finalize()
{
	return false;
}


Boolean UNIX_SupportAccess::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String supportAccessIdKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SUPPORT_ACCESS_ID)) supportAccessIdKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSupportAccessId(), supportAccessIdKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SupportAccess::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SupportAccess::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SupportAccess::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SupportAccess::validateInstance()
{
	return true;
}

