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


UNIX_PolicyRoleCollection::UNIX_PolicyRoleCollection(void)
{
}

UNIX_PolicyRoleCollection::~UNIX_PolicyRoleCollection(void)
{
}

Boolean UNIX_PolicyRoleCollection::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PolicyRoleCollection::getInstanceID() const
{
	return _instanceID;
}

void UNIX_PolicyRoleCollection::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_PolicyRoleCollection::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PolicyRoleCollection::getCaption() const
{
	return _caption;
}

void UNIX_PolicyRoleCollection::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_PolicyRoleCollection::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PolicyRoleCollection::getDescription() const
{
	return _description;
}

void UNIX_PolicyRoleCollection::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_PolicyRoleCollection::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PolicyRoleCollection::getElementName() const
{
	return _elementName;
}

void UNIX_PolicyRoleCollection::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_PolicyRoleCollection::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_PolicyRoleCollection::getGeneration() const
{
	return _generation;
}

void UNIX_PolicyRoleCollection::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_PolicyRoleCollection::getPolicyRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ROLE, getPolicyRole());
	return true;
}

String UNIX_PolicyRoleCollection::getPolicyRole() const
{
	return _policyRole;
}

void UNIX_PolicyRoleCollection::setPolicyRole(String &value)
{
	_policyRole = value;
}


void UNIX_PolicyRoleCollection::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PolicyRoleCollection");
	_generation = Uint64(0);
	_policyRole = String ("");

}

Boolean UNIX_PolicyRoleCollection::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PolicyRole"))
			{
				String policyRoleValue;
				property.getValue().get(policyRoleValue);
				setPolicyRole(policyRoleValue);
			}
	}
	return true;
}

Uint32 UNIX_PolicyRoleCollection::invokeActivatePolicySet(
		CIMInstance &inElement
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ActivatePolicySet */
	
	
	
	return returnValue;
}

Uint32 UNIX_PolicyRoleCollection::invokeDeactivatePolicySet(
		CIMInstance &inElement
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method DeactivatePolicySet */
	
	
	
	return returnValue;
}


Boolean UNIX_PolicyRoleCollection::initialize()
{
	return false;
}

Boolean UNIX_PolicyRoleCollection::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("PolicyRoleCollection");
	_generation = Uint64(0);
	_policyRole = String ("");
	
	return false;
}

Boolean UNIX_PolicyRoleCollection::finalize()
{
	return false;
}


Boolean UNIX_PolicyRoleCollection::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PolicyRoleCollection::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyRoleCollection::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyRoleCollection::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PolicyRoleCollection::validateInstance()
{
	return true;
}

