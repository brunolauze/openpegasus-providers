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


UNIX_StorageElementCompositionCapabilities::UNIX_StorageElementCompositionCapabilities(void)
{
}

UNIX_StorageElementCompositionCapabilities::~UNIX_StorageElementCompositionCapabilities(void)
{
}

Boolean UNIX_StorageElementCompositionCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageElementCompositionCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageElementCompositionCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageElementCompositionCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_StorageElementCompositionCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageElementCompositionCapabilities::getDescription() const
{
	return _description;
}

void UNIX_StorageElementCompositionCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageElementCompositionCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_StorageElementCompositionCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageElementCompositionCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_StorageElementCompositionCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getSupportsComposites(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_COMPOSITES, getSupportsComposites());
	return true;
}

Boolean UNIX_StorageElementCompositionCapabilities::getSupportsComposites() const
{
	return _supportsComposites;
}

void UNIX_StorageElementCompositionCapabilities::setSupportsComposites(Boolean &value)
{
	_supportsComposites = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getMaxCompositeSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_COMPOSITE_SIZE, getMaxCompositeSize());
	return true;
}

Uint64 UNIX_StorageElementCompositionCapabilities::getMaxCompositeSize() const
{
	return _maxCompositeSize;
}

void UNIX_StorageElementCompositionCapabilities::setMaxCompositeSize(Uint64 &value)
{
	_maxCompositeSize = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getMaxCompositeElements(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_COMPOSITE_ELEMENTS, getMaxCompositeElements());
	return true;
}

Uint64 UNIX_StorageElementCompositionCapabilities::getMaxCompositeElements() const
{
	return _maxCompositeElements;
}

void UNIX_StorageElementCompositionCapabilities::setMaxCompositeElements(Uint64 &value)
{
	_maxCompositeElements = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getCompositionCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPOSITION_CHARACTERISTICS, getCompositionCharacteristics());
	return true;
}

Array<Uint16> UNIX_StorageElementCompositionCapabilities::getCompositionCharacteristics() const
{
	return _compositionCharacteristics;
}

void UNIX_StorageElementCompositionCapabilities::setCompositionCharacteristics(Array<Uint16> &value)
{
	_compositionCharacteristics = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getSupportedAsynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS, getSupportedAsynchronousActions());
	return true;
}

Array<Uint16> UNIX_StorageElementCompositionCapabilities::getSupportedAsynchronousActions() const
{
	return _supportedAsynchronousActions;
}

void UNIX_StorageElementCompositionCapabilities::setSupportedAsynchronousActions(Array<Uint16> &value)
{
	_supportedAsynchronousActions = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS, getSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_StorageElementCompositionCapabilities::getSupportedSynchronousActions() const
{
	return _supportedSynchronousActions;
}

void UNIX_StorageElementCompositionCapabilities::setSupportedSynchronousActions(Array<Uint16> &value)
{
	_supportedSynchronousActions = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getSupportedStorageElements(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_ELEMENTS, getSupportedStorageElements());
	return true;
}

Array<Uint16> UNIX_StorageElementCompositionCapabilities::getSupportedStorageElements() const
{
	return _supportedStorageElements;
}

void UNIX_StorageElementCompositionCapabilities::setSupportedStorageElements(Array<Uint16> &value)
{
	_supportedStorageElements = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getCompositionMethodsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPOSITION_METHODS_SUPPORTED, getCompositionMethodsSupported());
	return true;
}

Array<Uint16> UNIX_StorageElementCompositionCapabilities::getCompositionMethodsSupported() const
{
	return _compositionMethodsSupported;
}

void UNIX_StorageElementCompositionCapabilities::setCompositionMethodsSupported(Array<Uint16> &value)
{
	_compositionMethodsSupported = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getCompositeSourcesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPOSITE_SOURCES_SUPPORTED, getCompositeSourcesSupported());
	return true;
}

Array<Uint16> UNIX_StorageElementCompositionCapabilities::getCompositeSourcesSupported() const
{
	return _compositeSourcesSupported;
}

void UNIX_StorageElementCompositionCapabilities::setCompositeSourcesSupported(Array<Uint16> &value)
{
	_compositeSourcesSupported = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getSupportsCompositeNaming(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_COMPOSITE_NAMING, getSupportsCompositeNaming());
	return true;
}

Boolean UNIX_StorageElementCompositionCapabilities::getSupportsCompositeNaming() const
{
	return _supportsCompositeNaming;
}

void UNIX_StorageElementCompositionCapabilities::setSupportsCompositeNaming(Boolean &value)
{
	_supportsCompositeNaming = value;
}

Boolean UNIX_StorageElementCompositionCapabilities::getSupportsRepresentativeElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_REPRESENTATIVE_ELEMENT, getSupportsRepresentativeElement());
	return true;
}

Boolean UNIX_StorageElementCompositionCapabilities::getSupportsRepresentativeElement() const
{
	return _supportsRepresentativeElement;
}

void UNIX_StorageElementCompositionCapabilities::setSupportsRepresentativeElement(Boolean &value)
{
	_supportsRepresentativeElement = value;
}


void UNIX_StorageElementCompositionCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageElementCompositionCapabilities");
	_generation = Uint64(0);
	_supportsComposites = Boolean(false);
	_maxCompositeSize = Uint64(0);
	_maxCompositeElements = Uint64(0);
	_compositionCharacteristics.clear();
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_supportedStorageElements.clear();
	_compositionMethodsSupported.clear();
	_compositeSourcesSupported.clear();
	_supportsCompositeNaming = Boolean(false);
	_supportsRepresentativeElement = Boolean(false);

}

Boolean UNIX_StorageElementCompositionCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportsComposites"))
			{
				Boolean supportsCompositesValue;
				property.getValue().get(supportsCompositesValue);
				setSupportsComposites(supportsCompositesValue);
			}
			else if (String::equal(property.getName().getString(), "MaxCompositeSize"))
			{
				Uint64 maxCompositeSizeValue;
				property.getValue().get(maxCompositeSizeValue);
				setMaxCompositeSize(maxCompositeSizeValue);
			}
			else if (String::equal(property.getName().getString(), "MaxCompositeElements"))
			{
				Uint64 maxCompositeElementsValue;
				property.getValue().get(maxCompositeElementsValue);
				setMaxCompositeElements(maxCompositeElementsValue);
			}
			else if (String::equal(property.getName().getString(), "CompositionCharacteristics"))
			{
				Array<Uint16> compositionCharacteristicsValue;
				property.getValue().get(compositionCharacteristicsValue);
				setCompositionCharacteristics(compositionCharacteristicsValue);
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
			else if (String::equal(property.getName().getString(), "SupportedStorageElements"))
			{
				Array<Uint16> supportedStorageElementsValue;
				property.getValue().get(supportedStorageElementsValue);
				setSupportedStorageElements(supportedStorageElementsValue);
			}
			else if (String::equal(property.getName().getString(), "CompositionMethodsSupported"))
			{
				Array<Uint16> compositionMethodsSupportedValue;
				property.getValue().get(compositionMethodsSupportedValue);
				setCompositionMethodsSupported(compositionMethodsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "CompositeSourcesSupported"))
			{
				Array<Uint16> compositeSourcesSupportedValue;
				property.getValue().get(compositeSourcesSupportedValue);
				setCompositeSourcesSupported(compositeSourcesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "SupportsCompositeNaming"))
			{
				Boolean supportsCompositeNamingValue;
				property.getValue().get(supportsCompositeNamingValue);
				setSupportsCompositeNaming(supportsCompositeNamingValue);
			}
			else if (String::equal(property.getName().getString(), "SupportsRepresentativeElement"))
			{
				Boolean supportsRepresentativeElementValue;
				property.getValue().get(supportsRepresentativeElementValue);
				setSupportsRepresentativeElement(supportsRepresentativeElementValue);
			}
	}
	return true;
}

Uint16 UNIX_StorageElementCompositionCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_StorageElementCompositionCapabilities::initialize()
{
	return false;
}

Boolean UNIX_StorageElementCompositionCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageElementCompositionCapabilities");
	_generation = Uint64(0);
	_supportsComposites = Boolean(false);
	_maxCompositeSize = Uint64(0);
	_maxCompositeElements = Uint64(0);
	_compositionCharacteristics.clear();
	_supportedAsynchronousActions.clear();
	_supportedSynchronousActions.clear();
	_supportedStorageElements.clear();
	_compositionMethodsSupported.clear();
	_compositeSourcesSupported.clear();
	_supportsCompositeNaming = Boolean(false);
	_supportsRepresentativeElement = Boolean(false);
	
	return false;
}

Boolean UNIX_StorageElementCompositionCapabilities::finalize()
{
	return false;
}


Boolean UNIX_StorageElementCompositionCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageElementCompositionCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageElementCompositionCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageElementCompositionCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageElementCompositionCapabilities::validateInstance()
{
	return true;
}

