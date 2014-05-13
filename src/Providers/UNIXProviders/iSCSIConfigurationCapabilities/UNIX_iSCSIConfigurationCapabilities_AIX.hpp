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


UNIX_iSCSIConfigurationCapabilities::UNIX_iSCSIConfigurationCapabilities(void)
{
}

UNIX_iSCSIConfigurationCapabilities::~UNIX_iSCSIConfigurationCapabilities(void)
{
}

Boolean UNIX_iSCSIConfigurationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSIConfigurationCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_iSCSIConfigurationCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_iSCSIConfigurationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSIConfigurationCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_iSCSIConfigurationCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_iSCSIConfigurationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSIConfigurationCapabilities::getDescription() const
{
	return _description;
}

void UNIX_iSCSIConfigurationCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_iSCSIConfigurationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSIConfigurationCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_iSCSIConfigurationCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_iSCSIConfigurationCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_iSCSIConfigurationCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_iSCSIConfigurationCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_iSCSIConfigurationCapabilities::getiSCSIProtocolEndpointCreationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_S_CS_IPROTOCOL_ENDPOINT_CREATION_SUPPORTED, getiSCSIProtocolEndpointCreationSupported());
	return true;
}

Boolean UNIX_iSCSIConfigurationCapabilities::getiSCSIProtocolEndpointCreationSupported() const
{
	return _iSCSIProtocolEndpointCreationSupported;
}

void UNIX_iSCSIConfigurationCapabilities::setiSCSIProtocolEndpointCreationSupported(Boolean &value)
{
	_iSCSIProtocolEndpointCreationSupported = value;
}

Boolean UNIX_iSCSIConfigurationCapabilities::getIdentifierSelectionSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFIER_SELECTION_SUPPORTED, getIdentifierSelectionSupported());
	return true;
}

Boolean UNIX_iSCSIConfigurationCapabilities::getIdentifierSelectionSupported() const
{
	return _identifierSelectionSupported;
}

void UNIX_iSCSIConfigurationCapabilities::setIdentifierSelectionSupported(Boolean &value)
{
	_identifierSelectionSupported = value;
}

Boolean UNIX_iSCSIConfigurationCapabilities::getiSCSINodeCreationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_S_CS_I_NODE_CREATION_SUPPORTED, getiSCSINodeCreationSupported());
	return true;
}

Boolean UNIX_iSCSIConfigurationCapabilities::getiSCSINodeCreationSupported() const
{
	return _iSCSINodeCreationSupported;
}

void UNIX_iSCSIConfigurationCapabilities::setiSCSINodeCreationSupported(Boolean &value)
{
	_iSCSINodeCreationSupported = value;
}


void UNIX_iSCSIConfigurationCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSIConfigurationCapabilities");
	_generation = Uint64(0);
	_iSCSIProtocolEndpointCreationSupported = Boolean(false);
	_identifierSelectionSupported = Boolean(false);
	_iSCSINodeCreationSupported = Boolean(false);

}

Boolean UNIX_iSCSIConfigurationCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "iSCSIProtocolEndpointCreationSupported"))
			{
				Boolean iSCSIProtocolEndpointCreationSupportedValue;
				property.getValue().get(iSCSIProtocolEndpointCreationSupportedValue);
				setiSCSIProtocolEndpointCreationSupported(iSCSIProtocolEndpointCreationSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "IdentifierSelectionSupported"))
			{
				Boolean identifierSelectionSupportedValue;
				property.getValue().get(identifierSelectionSupportedValue);
				setIdentifierSelectionSupported(identifierSelectionSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "iSCSINodeCreationSupported"))
			{
				Boolean iSCSINodeCreationSupportedValue;
				property.getValue().get(iSCSINodeCreationSupportedValue);
				setiSCSINodeCreationSupported(iSCSINodeCreationSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_iSCSIConfigurationCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_iSCSIConfigurationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_iSCSIConfigurationCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSIConfigurationCapabilities");
	_generation = Uint64(0);
	_iSCSIProtocolEndpointCreationSupported = Boolean(false);
	_identifierSelectionSupported = Boolean(false);
	_iSCSINodeCreationSupported = Boolean(false);
	
	return false;
}

Boolean UNIX_iSCSIConfigurationCapabilities::finalize()
{
	return false;
}


Boolean UNIX_iSCSIConfigurationCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_iSCSIConfigurationCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSIConfigurationCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSIConfigurationCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSIConfigurationCapabilities::validateInstance()
{
	return true;
}

