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


UNIX_RedundancySetCapabilities::UNIX_RedundancySetCapabilities(void)
{
}

UNIX_RedundancySetCapabilities::~UNIX_RedundancySetCapabilities(void)
{
}

Boolean UNIX_RedundancySetCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RedundancySetCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_RedundancySetCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_RedundancySetCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RedundancySetCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_RedundancySetCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_RedundancySetCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RedundancySetCapabilities::getDescription() const
{
	return _description;
}

void UNIX_RedundancySetCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_RedundancySetCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RedundancySetCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_RedundancySetCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_RedundancySetCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_RedundancySetCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_RedundancySetCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_RedundancySetCapabilities::getSupportedTypesOfSets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_TYPES_OF_SETS, getSupportedTypesOfSets());
	return true;
}

Array<Uint16> UNIX_RedundancySetCapabilities::getSupportedTypesOfSets() const
{
	return _supportedTypesOfSets;
}

void UNIX_RedundancySetCapabilities::setSupportedTypesOfSets(Array<Uint16> &value)
{
	_supportedTypesOfSets = value;
}

Boolean UNIX_RedundancySetCapabilities::getMaxNumberSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_SUPPORTED, getMaxNumberSupported());
	return true;
}

Uint32 UNIX_RedundancySetCapabilities::getMaxNumberSupported() const
{
	return _maxNumberSupported;
}

void UNIX_RedundancySetCapabilities::setMaxNumberSupported(Uint32 &value)
{
	_maxNumberSupported = value;
}

Boolean UNIX_RedundancySetCapabilities::getSupportedLoadBalanceAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOAD_BALANCE_ALGORITHMS, getSupportedLoadBalanceAlgorithms());
	return true;
}

Array<Uint16> UNIX_RedundancySetCapabilities::getSupportedLoadBalanceAlgorithms() const
{
	return _supportedLoadBalanceAlgorithms;
}

void UNIX_RedundancySetCapabilities::setSupportedLoadBalanceAlgorithms(Array<Uint16> &value)
{
	_supportedLoadBalanceAlgorithms = value;
}


void UNIX_RedundancySetCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RedundancySetCapabilities");
	_generation = Uint64(0);
	_supportedTypesOfSets.clear();
	_maxNumberSupported = Uint32(0);
	_supportedLoadBalanceAlgorithms.clear();

}

Boolean UNIX_RedundancySetCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedTypesOfSets"))
			{
				Array<Uint16> supportedTypesOfSetsValue;
				property.getValue().get(supportedTypesOfSetsValue);
				setSupportedTypesOfSets(supportedTypesOfSetsValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumberSupported"))
			{
				Uint32 maxNumberSupportedValue;
				property.getValue().get(maxNumberSupportedValue);
				setMaxNumberSupported(maxNumberSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedLoadBalanceAlgorithms"))
			{
				Array<Uint16> supportedLoadBalanceAlgorithmsValue;
				property.getValue().get(supportedLoadBalanceAlgorithmsValue);
				setSupportedLoadBalanceAlgorithms(supportedLoadBalanceAlgorithmsValue);
			}
	}
	return true;
}

Uint16 UNIX_RedundancySetCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_RedundancySetCapabilities::initialize()
{
	return false;
}

Boolean UNIX_RedundancySetCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RedundancySetCapabilities");
	_generation = Uint64(0);
	_supportedTypesOfSets.clear();
	_maxNumberSupported = Uint32(0);
	_supportedLoadBalanceAlgorithms.clear();
	
	return false;
}

Boolean UNIX_RedundancySetCapabilities::finalize()
{
	return false;
}


Boolean UNIX_RedundancySetCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_RedundancySetCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RedundancySetCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RedundancySetCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RedundancySetCapabilities::validateInstance()
{
	return true;
}

