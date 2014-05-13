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


UNIX_VLANEndpointCapabilities::UNIX_VLANEndpointCapabilities(void)
{
}

UNIX_VLANEndpointCapabilities::~UNIX_VLANEndpointCapabilities(void)
{
}

Boolean UNIX_VLANEndpointCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VLANEndpointCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VLANEndpointCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VLANEndpointCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VLANEndpointCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_VLANEndpointCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VLANEndpointCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VLANEndpointCapabilities::getDescription() const
{
	return _description;
}

void UNIX_VLANEndpointCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VLANEndpointCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VLANEndpointCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_VLANEndpointCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VLANEndpointCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VLANEndpointCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_VLANEndpointCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VLANEndpointCapabilities::getDot1QTagging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOT_1_Q_TAGGING, getDot1QTagging());
	return true;
}

Boolean UNIX_VLANEndpointCapabilities::getDot1QTagging() const
{
	return _dot1QTagging;
}

void UNIX_VLANEndpointCapabilities::setDot1QTagging(Boolean &value)
{
	_dot1QTagging = value;
}

Boolean UNIX_VLANEndpointCapabilities::getDot1qAcceptableVLANFramesTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOT_1Q_ACCEPTABLE_VLAN_FRAMES_TYPES, getDot1qAcceptableVLANFramesTypes());
	return true;
}

Uint16 UNIX_VLANEndpointCapabilities::getDot1qAcceptableVLANFramesTypes() const
{
	return _dot1qAcceptableVLANFramesTypes;
}

void UNIX_VLANEndpointCapabilities::setDot1qAcceptableVLANFramesTypes(Uint16 &value)
{
	_dot1qAcceptableVLANFramesTypes = value;
}

Boolean UNIX_VLANEndpointCapabilities::getDot1qIngressFiltering(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOT_1Q_INGRESS_FILTERING, getDot1qIngressFiltering());
	return true;
}

Boolean UNIX_VLANEndpointCapabilities::getDot1qIngressFiltering() const
{
	return _dot1qIngressFiltering;
}

void UNIX_VLANEndpointCapabilities::setDot1qIngressFiltering(Boolean &value)
{
	_dot1qIngressFiltering = value;
}

Boolean UNIX_VLANEndpointCapabilities::getSupportsTrunkEncapsulationNegotiation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_TRUNK_ENCAPSULATION_NEGOTIATION, getSupportsTrunkEncapsulationNegotiation());
	return true;
}

Boolean UNIX_VLANEndpointCapabilities::getSupportsTrunkEncapsulationNegotiation() const
{
	return _supportsTrunkEncapsulationNegotiation;
}

void UNIX_VLANEndpointCapabilities::setSupportsTrunkEncapsulationNegotiation(Boolean &value)
{
	_supportsTrunkEncapsulationNegotiation = value;
}


void UNIX_VLANEndpointCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VLANEndpointCapabilities");
	_generation = Uint64(0);
	_dot1QTagging = Boolean(false);
	_dot1qAcceptableVLANFramesTypes = Uint16(0);
	_dot1qIngressFiltering = Boolean(false);
	_supportsTrunkEncapsulationNegotiation = Boolean(false);

}

Boolean UNIX_VLANEndpointCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Dot1QTagging"))
			{
				Boolean dot1QTaggingValue;
				property.getValue().get(dot1QTaggingValue);
				setDot1QTagging(dot1QTaggingValue);
			}
			else if (String::equal(property.getName().getString(), "Dot1qAcceptableVLANFramesTypes"))
			{
				Uint16 dot1qAcceptableVLANFramesTypesValue;
				property.getValue().get(dot1qAcceptableVLANFramesTypesValue);
				setDot1qAcceptableVLANFramesTypes(dot1qAcceptableVLANFramesTypesValue);
			}
			else if (String::equal(property.getName().getString(), "Dot1qIngressFiltering"))
			{
				Boolean dot1qIngressFilteringValue;
				property.getValue().get(dot1qIngressFilteringValue);
				setDot1qIngressFiltering(dot1qIngressFilteringValue);
			}
			else if (String::equal(property.getName().getString(), "SupportsTrunkEncapsulationNegotiation"))
			{
				Boolean supportsTrunkEncapsulationNegotiationValue;
				property.getValue().get(supportsTrunkEncapsulationNegotiationValue);
				setSupportsTrunkEncapsulationNegotiation(supportsTrunkEncapsulationNegotiationValue);
			}
	}
	return true;
}

Uint16 UNIX_VLANEndpointCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_VLANEndpointCapabilities::initialize()
{
	return false;
}

Boolean UNIX_VLANEndpointCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VLANEndpointCapabilities");
	_generation = Uint64(0);
	_dot1QTagging = Boolean(false);
	_dot1qAcceptableVLANFramesTypes = Uint16(0);
	_dot1qIngressFiltering = Boolean(false);
	_supportsTrunkEncapsulationNegotiation = Boolean(false);
	
	return false;
}

Boolean UNIX_VLANEndpointCapabilities::finalize()
{
	return false;
}


Boolean UNIX_VLANEndpointCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VLANEndpointCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANEndpointCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANEndpointCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANEndpointCapabilities::validateInstance()
{
	return true;
}

