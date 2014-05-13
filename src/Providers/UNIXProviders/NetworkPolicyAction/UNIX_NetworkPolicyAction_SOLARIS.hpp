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


UNIX_NetworkPolicyAction::UNIX_NetworkPolicyAction(void)
{
}

UNIX_NetworkPolicyAction::~UNIX_NetworkPolicyAction(void)
{
}

Boolean UNIX_NetworkPolicyAction::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NetworkPolicyAction::getInstanceID() const
{
	return _instanceID;
}

void UNIX_NetworkPolicyAction::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_NetworkPolicyAction::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NetworkPolicyAction::getCaption() const
{
	return _caption;
}

void UNIX_NetworkPolicyAction::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_NetworkPolicyAction::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NetworkPolicyAction::getDescription() const
{
	return _description;
}

void UNIX_NetworkPolicyAction::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_NetworkPolicyAction::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NetworkPolicyAction::getElementName() const
{
	return _elementName;
}

void UNIX_NetworkPolicyAction::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_NetworkPolicyAction::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_NetworkPolicyAction::getGeneration() const
{
	return _generation;
}

void UNIX_NetworkPolicyAction::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_NetworkPolicyAction::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_NetworkPolicyAction::getCommonName() const
{
	return _commonName;
}

void UNIX_NetworkPolicyAction::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_NetworkPolicyAction::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_NetworkPolicyAction::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_NetworkPolicyAction::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_NetworkPolicyAction::getActionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_TYPE, getActionType());
	return true;
}

Array<Uint16> UNIX_NetworkPolicyAction::getActionType() const
{
	return _actionType;
}

void UNIX_NetworkPolicyAction::setActionType(Array<Uint16> &value)
{
	_actionType = value;
}

Boolean UNIX_NetworkPolicyAction::getActionTypeValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_TYPE_VALUE, getActionTypeValue());
	return true;
}

Array<String> UNIX_NetworkPolicyAction::getActionTypeValue() const
{
	return _actionTypeValue;
}

void UNIX_NetworkPolicyAction::setActionTypeValue(Array<String> &value)
{
	_actionTypeValue = value;
}


void UNIX_NetworkPolicyAction::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NetworkPolicyAction");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_actionType.clear();
	_actionTypeValue.clear();

}

Boolean UNIX_NetworkPolicyAction::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CommonName"))
			{
				String commonNameValue;
				property.getValue().get(commonNameValue);
				setCommonName(commonNameValue);
			}
			else if (String::equal(property.getName().getString(), "PolicyKeywords"))
			{
				Array<String> policyKeywordsValue;
				property.getValue().get(policyKeywordsValue);
				setPolicyKeywords(policyKeywordsValue);
			}
			else if (String::equal(property.getName().getString(), "ActionType"))
			{
				Array<Uint16> actionTypeValue;
				property.getValue().get(actionTypeValue);
				setActionType(actionTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ActionTypeValue"))
			{
				Array<String> actionTypeValueValue;
				property.getValue().get(actionTypeValueValue);
				setActionTypeValue(actionTypeValueValue);
			}
	}
	return true;
}


Boolean UNIX_NetworkPolicyAction::initialize()
{
	return false;
}

Boolean UNIX_NetworkPolicyAction::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NetworkPolicyAction");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_actionType.clear();
	_actionTypeValue.clear();
	
	return false;
}

Boolean UNIX_NetworkPolicyAction::finalize()
{
	return false;
}


Boolean UNIX_NetworkPolicyAction::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_NetworkPolicyAction::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkPolicyAction::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkPolicyAction::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkPolicyAction::validateInstance()
{
	return true;
}

