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


UNIX_IPNetworkIdentity::UNIX_IPNetworkIdentity(void)
{
}

UNIX_IPNetworkIdentity::~UNIX_IPNetworkIdentity(void)
{
}

Boolean UNIX_IPNetworkIdentity::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPNetworkIdentity::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IPNetworkIdentity::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IPNetworkIdentity::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPNetworkIdentity::getCaption() const
{
	return _caption;
}

void UNIX_IPNetworkIdentity::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IPNetworkIdentity::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPNetworkIdentity::getDescription() const
{
	return _description;
}

void UNIX_IPNetworkIdentity::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IPNetworkIdentity::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPNetworkIdentity::getElementName() const
{
	return _elementName;
}

void UNIX_IPNetworkIdentity::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IPNetworkIdentity::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IPNetworkIdentity::getGeneration() const
{
	return _generation;
}

void UNIX_IPNetworkIdentity::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IPNetworkIdentity::getCurrentlyAuthenticated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENTLY_AUTHENTICATED, getCurrentlyAuthenticated());
	return true;
}

Boolean UNIX_IPNetworkIdentity::getCurrentlyAuthenticated() const
{
	return _currentlyAuthenticated;
}

void UNIX_IPNetworkIdentity::setCurrentlyAuthenticated(Boolean &value)
{
	_currentlyAuthenticated = value;
}

Boolean UNIX_IPNetworkIdentity::getIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTITY_TYPE, getIdentityType());
	return true;
}

Uint16 UNIX_IPNetworkIdentity::getIdentityType() const
{
	return _identityType;
}

void UNIX_IPNetworkIdentity::setIdentityType(Uint16 &value)
{
	_identityType = value;
}

Boolean UNIX_IPNetworkIdentity::getIdentityValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTITY_VALUE, getIdentityValue());
	return true;
}

String UNIX_IPNetworkIdentity::getIdentityValue() const
{
	return _identityValue;
}

void UNIX_IPNetworkIdentity::setIdentityValue(String &value)
{
	_identityValue = value;
}


void UNIX_IPNetworkIdentity::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPNetworkIdentity");
	_generation = Uint64(0);
	_currentlyAuthenticated = Boolean(false);
	_identityType = Uint16(0);
	_identityValue = String ("");

}

Boolean UNIX_IPNetworkIdentity::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CurrentlyAuthenticated"))
			{
				Boolean currentlyAuthenticatedValue;
				property.getValue().get(currentlyAuthenticatedValue);
				setCurrentlyAuthenticated(currentlyAuthenticatedValue);
			}
			else if (String::equal(property.getName().getString(), "IdentityType"))
			{
				Uint16 identityTypeValue;
				property.getValue().get(identityTypeValue);
				setIdentityType(identityTypeValue);
			}
			else if (String::equal(property.getName().getString(), "IdentityValue"))
			{
				String identityValueValue;
				property.getValue().get(identityValueValue);
				setIdentityValue(identityValueValue);
			}
	}
	return true;
}


Boolean UNIX_IPNetworkIdentity::initialize()
{
	return false;
}

Boolean UNIX_IPNetworkIdentity::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPNetworkIdentity");
	_generation = Uint64(0);
	_currentlyAuthenticated = Boolean(false);
	_identityType = Uint16(0);
	_identityValue = String ("");
	
	return false;
}

Boolean UNIX_IPNetworkIdentity::finalize()
{
	return false;
}


Boolean UNIX_IPNetworkIdentity::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IPNetworkIdentity::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPNetworkIdentity::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPNetworkIdentity::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPNetworkIdentity::validateInstance()
{
	return true;
}

