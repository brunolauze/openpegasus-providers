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


UNIX_SpareConfigurationCapabilities::UNIX_SpareConfigurationCapabilities(void)
{
}

UNIX_SpareConfigurationCapabilities::~UNIX_SpareConfigurationCapabilities(void)
{
}

Boolean UNIX_SpareConfigurationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SpareConfigurationCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SpareConfigurationCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SpareConfigurationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SpareConfigurationCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_SpareConfigurationCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SpareConfigurationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SpareConfigurationCapabilities::getDescription() const
{
	return _description;
}

void UNIX_SpareConfigurationCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SpareConfigurationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SpareConfigurationCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_SpareConfigurationCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SpareConfigurationCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SpareConfigurationCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_SpareConfigurationCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SpareConfigurationCapabilities::getSupportedAsynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS, getSupportedAsynchronousActions());
	return true;
}

Array<Uint16> UNIX_SpareConfigurationCapabilities::getSupportedAsynchronousActions() const
{
	return _supportedAsynchronousActions;
}

void UNIX_SpareConfigurationCapabilities::setSupportedAsynchronousActions(Array<Uint16> &value)
{
	_supportedAsynchronousActions = value;
}

Boolean UNIX_SpareConfigurationCapabilities::getSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS, getSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_SpareConfigurationCapabilities::getSupportedSynchronousActions() const
{
	return _supportedSynchronousActions;
}

void UNIX_SpareConfigurationCapabilities::setSupportedSynchronousActions(Array<Uint16> &value)
{
	_supportedSynchronousActions = value;
}

Boolean UNIX_SpareConfigurationCapabilities::getSystemConfiguredSpares(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CONFIGURED_SPARES, getSystemConfiguredSpares());
	return true;
}

Boolean UNIX_SpareConfigurationCapabilities::getSystemConfiguredSpares() const
{
	return _systemConfiguredSpares;
}

void UNIX_SpareConfigurationCapabilities::setSystemConfiguredSpares(Boolean &value)
{
	_systemConfiguredSpares = value;
}

Boolean UNIX_SpareConfigurationCapabilities::getAutomaticFailOver(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_FAIL_OVER, getAutomaticFailOver());
	return true;
}

Boolean UNIX_SpareConfigurationCapabilities::getAutomaticFailOver() const
{
	return _automaticFailOver;
}

void UNIX_SpareConfigurationCapabilities::setAutomaticFailOver(Boolean &value)
{
	_automaticFailOver = value;
}

Boolean UNIX_SpareConfigurationCapabilities::getMaximumSpareStorageExtents(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_SPARE_STORAGE_EXTENTS, getMaximumSpareStorageExtents());
	return true;
}

Uint32 UNIX_SpareConfigurationCapabilities::getMaximumSpareStorageExtents() const
{
	return _maximumSpareStorageExtents;
}

void UNIX_SpareConfigurationCapabilities::setMaximumSpareStorageExtents(Uint32 &value)
{
	_maximumSpareStorageExtents = value;
}

Boolean UNIX_SpareConfigurationCapabilities::getSupportedStorageElementCheck(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_ELEMENT_CHECK, getSupportedStorageElementCheck());
	return true;
}

Array<Uint16> UNIX_SpareConfigurationCapabilities::getSupportedStorageElementCheck() const
{
	return _supportedStorageElementCheck;
}

void UNIX_SpareConfigurationCapabilities::setSupportedStorageElementCheck(Array<Uint16> &value)
{
	_supportedStorageElementCheck = value;
}


void UNIX_SpareConfigurationCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SpareConfigurationCapabilities");
	_generation = Uint64(0);
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_systemConfiguredSpares = Boolean(false);
	_automaticFailOver = Boolean(false);
	_maximumSpareStorageExtents = Uint32(0);
	_supportedStorageElementCheck.clear();

}

Boolean UNIX_SpareConfigurationCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedAsynchronousActions"))
			{
				Array<Uint16> supportedAsynchronousActionsValue;
				property.getValue().get(supportedAsynchronousActionsValue);
				setSupportedAsynchronousActions(supportedAsynchronousActionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedSynchronousActions"))
			{
				Array<Uint16> supportedSynchronousActionsValue;
				property.getValue().get(supportedSynchronousActionsValue);
				setSupportedSynchronousActions(supportedSynchronousActionsValue);
			}
			else if (String::equal(property.getName().getString(), "SystemConfiguredSpares"))
			{
				Boolean systemConfiguredSparesValue;
				property.getValue().get(systemConfiguredSparesValue);
				setSystemConfiguredSpares(systemConfiguredSparesValue);
			}
			else if (String::equal(property.getName().getString(), "AutomaticFailOver"))
			{
				Boolean automaticFailOverValue;
				property.getValue().get(automaticFailOverValue);
				setAutomaticFailOver(automaticFailOverValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumSpareStorageExtents"))
			{
				Uint32 maximumSpareStorageExtentsValue;
				property.getValue().get(maximumSpareStorageExtentsValue);
				setMaximumSpareStorageExtents(maximumSpareStorageExtentsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedStorageElementCheck"))
			{
				Array<Uint16> supportedStorageElementCheckValue;
				property.getValue().get(supportedStorageElementCheckValue);
				setSupportedStorageElementCheck(supportedStorageElementCheckValue);
			}
	}
	return true;
}

Uint16 UNIX_SpareConfigurationCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_SpareConfigurationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_SpareConfigurationCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SpareConfigurationCapabilities");
	_generation = Uint64(0);
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_systemConfiguredSpares = Boolean(false);
	_automaticFailOver = Boolean(false);
	_maximumSpareStorageExtents = Uint32(0);
	_supportedStorageElementCheck.clear();
	
	return false;
}

Boolean UNIX_SpareConfigurationCapabilities::finalize()
{
	return false;
}


Boolean UNIX_SpareConfigurationCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SpareConfigurationCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SpareConfigurationCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SpareConfigurationCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SpareConfigurationCapabilities::validateInstance()
{
	return true;
}

