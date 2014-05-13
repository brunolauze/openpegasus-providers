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


UNIX_MPLSCapabilities::UNIX_MPLSCapabilities(void)
{
}

UNIX_MPLSCapabilities::~UNIX_MPLSCapabilities(void)
{
}

Boolean UNIX_MPLSCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MPLSCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MPLSCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MPLSCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MPLSCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_MPLSCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MPLSCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MPLSCapabilities::getDescription() const
{
	return _description;
}

void UNIX_MPLSCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MPLSCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MPLSCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_MPLSCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MPLSCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MPLSCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_MPLSCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MPLSCapabilities::getLabelMinIn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_MIN_IN, getLabelMinIn());
	return true;
}

Uint32 UNIX_MPLSCapabilities::getLabelMinIn() const
{
	return _labelMinIn;
}

void UNIX_MPLSCapabilities::setLabelMinIn(Uint32 &value)
{
	_labelMinIn = value;
}

Boolean UNIX_MPLSCapabilities::getLabelMaxIn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_MAX_IN, getLabelMaxIn());
	return true;
}

Uint32 UNIX_MPLSCapabilities::getLabelMaxIn() const
{
	return _labelMaxIn;
}

void UNIX_MPLSCapabilities::setLabelMaxIn(Uint32 &value)
{
	_labelMaxIn = value;
}

Boolean UNIX_MPLSCapabilities::getLabelMinOut(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_MIN_OUT, getLabelMinOut());
	return true;
}

Uint32 UNIX_MPLSCapabilities::getLabelMinOut() const
{
	return _labelMinOut;
}

void UNIX_MPLSCapabilities::setLabelMinOut(Uint32 &value)
{
	_labelMinOut = value;
}

Boolean UNIX_MPLSCapabilities::getLabelMaxOut(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_MAX_OUT, getLabelMaxOut());
	return true;
}

Uint32 UNIX_MPLSCapabilities::getLabelMaxOut() const
{
	return _labelMaxOut;
}

void UNIX_MPLSCapabilities::setLabelMaxOut(Uint32 &value)
{
	_labelMaxOut = value;
}


void UNIX_MPLSCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSCapabilities");
	_generation = Uint64(0);
	_labelMinIn = Uint32(0);
	_labelMaxIn = Uint32(0);
	_labelMinOut = Uint32(0);
	_labelMaxOut = Uint32(0);

}

Boolean UNIX_MPLSCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LabelMinIn"))
			{
				Uint32 labelMinInValue;
				property.getValue().get(labelMinInValue);
				setLabelMinIn(labelMinInValue);
			}
			else if (String::equal(property.getName().getString(), "LabelMaxIn"))
			{
				Uint32 labelMaxInValue;
				property.getValue().get(labelMaxInValue);
				setLabelMaxIn(labelMaxInValue);
			}
			else if (String::equal(property.getName().getString(), "LabelMinOut"))
			{
				Uint32 labelMinOutValue;
				property.getValue().get(labelMinOutValue);
				setLabelMinOut(labelMinOutValue);
			}
			else if (String::equal(property.getName().getString(), "LabelMaxOut"))
			{
				Uint32 labelMaxOutValue;
				property.getValue().get(labelMaxOutValue);
				setLabelMaxOut(labelMaxOutValue);
			}
	}
	return true;
}

Uint16 UNIX_MPLSCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_MPLSCapabilities::initialize()
{
	return false;
}

Boolean UNIX_MPLSCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MPLSCapabilities");
	_generation = Uint64(0);
	_labelMinIn = Uint32(0);
	_labelMaxIn = Uint32(0);
	_labelMinOut = Uint32(0);
	_labelMaxOut = Uint32(0);
	
	return false;
}

Boolean UNIX_MPLSCapabilities::finalize()
{
	return false;
}


Boolean UNIX_MPLSCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MPLSCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSCapabilities::validateInstance()
{
	return true;
}

