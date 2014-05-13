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


UNIX_StorageLibraryCapabilities::UNIX_StorageLibraryCapabilities(void)
{
}

UNIX_StorageLibraryCapabilities::~UNIX_StorageLibraryCapabilities(void)
{
}

Boolean UNIX_StorageLibraryCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageLibraryCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageLibraryCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageLibraryCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageLibraryCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_StorageLibraryCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageLibraryCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageLibraryCapabilities::getDescription() const
{
	return _description;
}

void UNIX_StorageLibraryCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageLibraryCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageLibraryCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_StorageLibraryCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageLibraryCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageLibraryCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_StorageLibraryCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageLibraryCapabilities::getSupportedCapacityOptimizations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_CAPACITY_OPTIMIZATIONS, getSupportedCapacityOptimizations());
	return true;
}

Array<String> UNIX_StorageLibraryCapabilities::getSupportedCapacityOptimizations() const
{
	return _supportedCapacityOptimizations;
}

void UNIX_StorageLibraryCapabilities::setSupportedCapacityOptimizations(Array<String> &value)
{
	_supportedCapacityOptimizations = value;
}

Boolean UNIX_StorageLibraryCapabilities::getSupportedViews(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_VIEWS, getSupportedViews());
	return true;
}

Array<String> UNIX_StorageLibraryCapabilities::getSupportedViews() const
{
	return _supportedViews;
}

void UNIX_StorageLibraryCapabilities::setSupportedViews(Array<String> &value)
{
	_supportedViews = value;
}

Boolean UNIX_StorageLibraryCapabilities::getSupportedElementNameCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ELEMENT_NAME_CODE_SET, getSupportedElementNameCodeSet());
	return true;
}

Uint16 UNIX_StorageLibraryCapabilities::getSupportedElementNameCodeSet() const
{
	return _supportedElementNameCodeSet;
}

void UNIX_StorageLibraryCapabilities::setSupportedElementNameCodeSet(Uint16 &value)
{
	_supportedElementNameCodeSet = value;
}

Boolean UNIX_StorageLibraryCapabilities::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_StorageLibraryCapabilities::getCapabilities() const
{
	return _capabilities;
}

void UNIX_StorageLibraryCapabilities::setCapabilities(Array<Uint16> &value)
{
	_capabilities = value;
}

Boolean UNIX_StorageLibraryCapabilities::getMaxAuditTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_AUDIT_TIME, getMaxAuditTime());
	return true;
}

Uint64 UNIX_StorageLibraryCapabilities::getMaxAuditTime() const
{
	return _maxAuditTime;
}

void UNIX_StorageLibraryCapabilities::setMaxAuditTime(Uint64 &value)
{
	_maxAuditTime = value;
}


void UNIX_StorageLibraryCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageLibraryCapabilities");
	_generation = Uint64(0);
	_supportedCapacityOptimizations.clear();
	_supportedViews.clear();
	_supportedElementNameCodeSet = Uint16(0);
	_capabilities.clear();
	_maxAuditTime = Uint64(0);

}

Boolean UNIX_StorageLibraryCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedCapacityOptimizations"))
			{
				Array<String> supportedCapacityOptimizationsValue;
				property.getValue().get(supportedCapacityOptimizationsValue);
				setSupportedCapacityOptimizations(supportedCapacityOptimizationsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedViews"))
			{
				Array<String> supportedViewsValue;
				property.getValue().get(supportedViewsValue);
				setSupportedViews(supportedViewsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedElementNameCodeSet"))
			{
				Uint16 supportedElementNameCodeSetValue;
				property.getValue().get(supportedElementNameCodeSetValue);
				setSupportedElementNameCodeSet(supportedElementNameCodeSetValue);
			}
			else if (String::equal(property.getName().getString(), "Capabilities"))
			{
				Array<Uint16> capabilitiesValue;
				property.getValue().get(capabilitiesValue);
				setCapabilities(capabilitiesValue);
			}
			else if (String::equal(property.getName().getString(), "MaxAuditTime"))
			{
				Uint64 maxAuditTimeValue;
				property.getValue().get(maxAuditTimeValue);
				setMaxAuditTime(maxAuditTimeValue);
			}
	}
	return true;
}

Uint16 UNIX_StorageLibraryCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_StorageLibraryCapabilities::initialize()
{
	return false;
}

Boolean UNIX_StorageLibraryCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageLibraryCapabilities");
	_generation = Uint64(0);
	_supportedCapacityOptimizations.clear();
	_supportedViews.clear();
	_supportedElementNameCodeSet = Uint16(0);
	_capabilities.clear();
	_maxAuditTime = Uint64(0);
	
	return false;
}

Boolean UNIX_StorageLibraryCapabilities::finalize()
{
	return false;
}


Boolean UNIX_StorageLibraryCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageLibraryCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageLibraryCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageLibraryCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageLibraryCapabilities::validateInstance()
{
	return true;
}

