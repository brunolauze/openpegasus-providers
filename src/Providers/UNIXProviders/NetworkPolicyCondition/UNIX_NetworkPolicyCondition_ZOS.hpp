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


UNIX_NetworkPolicyCondition::UNIX_NetworkPolicyCondition(void)
{
}

UNIX_NetworkPolicyCondition::~UNIX_NetworkPolicyCondition(void)
{
}

Boolean UNIX_NetworkPolicyCondition::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NetworkPolicyCondition::getInstanceID() const
{
	return _instanceID;
}

void UNIX_NetworkPolicyCondition::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_NetworkPolicyCondition::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NetworkPolicyCondition::getCaption() const
{
	return _caption;
}

void UNIX_NetworkPolicyCondition::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_NetworkPolicyCondition::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NetworkPolicyCondition::getDescription() const
{
	return _description;
}

void UNIX_NetworkPolicyCondition::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_NetworkPolicyCondition::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NetworkPolicyCondition::getElementName() const
{
	return _elementName;
}

void UNIX_NetworkPolicyCondition::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_NetworkPolicyCondition::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_NetworkPolicyCondition::getGeneration() const
{
	return _generation;
}

void UNIX_NetworkPolicyCondition::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_NetworkPolicyCondition::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_NetworkPolicyCondition::getCommonName() const
{
	return _commonName;
}

void UNIX_NetworkPolicyCondition::setCommonName(String &value)
{
	_commonName = value;
}

Boolean UNIX_NetworkPolicyCondition::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_NetworkPolicyCondition::getPolicyKeywords() const
{
	return _policyKeywords;
}

void UNIX_NetworkPolicyCondition::setPolicyKeywords(Array<String> &value)
{
	_policyKeywords = value;
}

Boolean UNIX_NetworkPolicyCondition::getParameterType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETER_TYPE, getParameterType());
	return true;
}

Uint16 UNIX_NetworkPolicyCondition::getParameterType() const
{
	return _parameterType;
}

void UNIX_NetworkPolicyCondition::setParameterType(Uint16 &value)
{
	_parameterType = value;
}

Boolean UNIX_NetworkPolicyCondition::getOperator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATOR, getOperator());
	return true;
}

Uint16 UNIX_NetworkPolicyCondition::getOperator() const
{
	return _operator;
}

void UNIX_NetworkPolicyCondition::setOperator(Uint16 &value)
{
	_operator = value;
}

Boolean UNIX_NetworkPolicyCondition::getParameterValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETER_VALUE, getParameterValue());
	return true;
}

String UNIX_NetworkPolicyCondition::getParameterValue() const
{
	return _parameterValue;
}

void UNIX_NetworkPolicyCondition::setParameterValue(String &value)
{
	_parameterValue = value;
}


void UNIX_NetworkPolicyCondition::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NetworkPolicyCondition");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_parameterType = Uint16(0);
	_operator = Uint16(0);
	_parameterValue = String ("");

}

Boolean UNIX_NetworkPolicyCondition::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ParameterType"))
			{
				Uint16 parameterTypeValue;
				property.getValue().get(parameterTypeValue);
				setParameterType(parameterTypeValue);
			}
			else if (String::equal(property.getName().getString(), "Operator"))
			{
				Uint16 operatorValue;
				property.getValue().get(operatorValue);
				setOperator(operatorValue);
			}
			else if (String::equal(property.getName().getString(), "ParameterValue"))
			{
				String parameterValueValue;
				property.getValue().get(parameterValueValue);
				setParameterValue(parameterValueValue);
			}
	}
	return true;
}


Boolean UNIX_NetworkPolicyCondition::initialize()
{
	return false;
}

Boolean UNIX_NetworkPolicyCondition::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("NetworkPolicyCondition");
	_generation = Uint64(0);
	_commonName = String ("");
	_policyKeywords.clear();
	_parameterType = Uint16(0);
	_operator = Uint16(0);
	_parameterValue = String ("");
	
	return false;
}

Boolean UNIX_NetworkPolicyCondition::finalize()
{
	return false;
}


Boolean UNIX_NetworkPolicyCondition::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_NetworkPolicyCondition::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkPolicyCondition::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkPolicyCondition::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkPolicyCondition::validateInstance()
{
	return true;
}

