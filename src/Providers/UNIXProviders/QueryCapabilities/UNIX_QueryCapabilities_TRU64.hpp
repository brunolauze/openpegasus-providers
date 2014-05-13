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


UNIX_QueryCapabilities::UNIX_QueryCapabilities(void)
{
}

UNIX_QueryCapabilities::~UNIX_QueryCapabilities(void)
{
}

Boolean UNIX_QueryCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_QueryCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_QueryCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_QueryCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_QueryCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_QueryCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_QueryCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_QueryCapabilities::getDescription() const
{
	return _description;
}

void UNIX_QueryCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_QueryCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_QueryCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_QueryCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_QueryCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_QueryCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_QueryCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_QueryCapabilities::getCQLFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_Q_L_FEATURES, getCQLFeatures());
	return true;
}

Array<Uint16> UNIX_QueryCapabilities::getCQLFeatures() const
{
	return _cQLFeatures;
}

void UNIX_QueryCapabilities::setCQLFeatures(Array<Uint16> &value)
{
	_cQLFeatures = value;
}

Boolean UNIX_QueryCapabilities::getXPathFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_PATH_FEATURES, getXPathFeatures());
	return true;
}

Uint16 UNIX_QueryCapabilities::getXPathFeatures() const
{
	return _xPathFeatures;
}

void UNIX_QueryCapabilities::setXPathFeatures(Uint16 &value)
{
	_xPathFeatures = value;
}


void UNIX_QueryCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("QueryCapabilities");
	_generation = Uint64(0);
	_cQLFeatures.clear();
	_xPathFeatures = Uint16(0);

}

Boolean UNIX_QueryCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CQLFeatures"))
			{
				Array<Uint16> cQLFeaturesValue;
				property.getValue().get(cQLFeaturesValue);
				setCQLFeatures(cQLFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "XPathFeatures"))
			{
				Uint16 xPathFeaturesValue;
				property.getValue().get(xPathFeaturesValue);
				setXPathFeatures(xPathFeaturesValue);
			}
	}
	return true;
}

Uint16 UNIX_QueryCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_QueryCapabilities::initialize()
{
	return false;
}

Boolean UNIX_QueryCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("QueryCapabilities");
	_generation = Uint64(0);
	_cQLFeatures.clear();
	_xPathFeatures = Uint16(0);
	
	return false;
}

Boolean UNIX_QueryCapabilities::finalize()
{
	return false;
}


Boolean UNIX_QueryCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_QueryCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QueryCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QueryCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_QueryCapabilities::validateInstance()
{
	return true;
}

