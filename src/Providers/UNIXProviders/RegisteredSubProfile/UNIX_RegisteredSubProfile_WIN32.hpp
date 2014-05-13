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


UNIX_RegisteredSubProfile::UNIX_RegisteredSubProfile(void)
{
}

UNIX_RegisteredSubProfile::~UNIX_RegisteredSubProfile(void)
{
}

Boolean UNIX_RegisteredSubProfile::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RegisteredSubProfile::getInstanceID() const
{
	return _instanceID;
}

void UNIX_RegisteredSubProfile::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_RegisteredSubProfile::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RegisteredSubProfile::getCaption() const
{
	return _caption;
}

void UNIX_RegisteredSubProfile::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_RegisteredSubProfile::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RegisteredSubProfile::getDescription() const
{
	return _description;
}

void UNIX_RegisteredSubProfile::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_RegisteredSubProfile::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RegisteredSubProfile::getElementName() const
{
	return _elementName;
}

void UNIX_RegisteredSubProfile::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_RegisteredSubProfile::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_RegisteredSubProfile::getGeneration() const
{
	return _generation;
}

void UNIX_RegisteredSubProfile::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_RegisteredSubProfile::getSpecificationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPECIFICATION_TYPE, getSpecificationType());
	return true;
}

Uint16 UNIX_RegisteredSubProfile::getSpecificationType() const
{
	return _specificationType;
}

void UNIX_RegisteredSubProfile::setSpecificationType(Uint16 &value)
{
	_specificationType = value;
}

Boolean UNIX_RegisteredSubProfile::getOtherSpecificationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SPECIFICATION_TYPE, getOtherSpecificationType());
	return true;
}

String UNIX_RegisteredSubProfile::getOtherSpecificationType() const
{
	return _otherSpecificationType;
}

void UNIX_RegisteredSubProfile::setOtherSpecificationType(String &value)
{
	_otherSpecificationType = value;
}

Boolean UNIX_RegisteredSubProfile::getRegisteredOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTERED_ORGANIZATION, getRegisteredOrganization());
	return true;
}

Uint16 UNIX_RegisteredSubProfile::getRegisteredOrganization() const
{
	return _registeredOrganization;
}

void UNIX_RegisteredSubProfile::setRegisteredOrganization(Uint16 &value)
{
	_registeredOrganization = value;
}

Boolean UNIX_RegisteredSubProfile::getOtherRegisteredOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_REGISTERED_ORGANIZATION, getOtherRegisteredOrganization());
	return true;
}

String UNIX_RegisteredSubProfile::getOtherRegisteredOrganization() const
{
	return _otherRegisteredOrganization;
}

void UNIX_RegisteredSubProfile::setOtherRegisteredOrganization(String &value)
{
	_otherRegisteredOrganization = value;
}

Boolean UNIX_RegisteredSubProfile::getRegisteredName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTERED_NAME, getRegisteredName());
	return true;
}

String UNIX_RegisteredSubProfile::getRegisteredName() const
{
	return _registeredName;
}

void UNIX_RegisteredSubProfile::setRegisteredName(String &value)
{
	_registeredName = value;
}

Boolean UNIX_RegisteredSubProfile::getRegisteredVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTERED_VERSION, getRegisteredVersion());
	return true;
}

String UNIX_RegisteredSubProfile::getRegisteredVersion() const
{
	return _registeredVersion;
}

void UNIX_RegisteredSubProfile::setRegisteredVersion(String &value)
{
	_registeredVersion = value;
}

Boolean UNIX_RegisteredSubProfile::getAdvertiseTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADVERTISE_TYPES, getAdvertiseTypes());
	return true;
}

Array<Uint16> UNIX_RegisteredSubProfile::getAdvertiseTypes() const
{
	return _advertiseTypes;
}

void UNIX_RegisteredSubProfile::setAdvertiseTypes(Array<Uint16> &value)
{
	_advertiseTypes = value;
}

Boolean UNIX_RegisteredSubProfile::getAdvertiseTypeDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADVERTISE_TYPE_DESCRIPTIONS, getAdvertiseTypeDescriptions());
	return true;
}

Array<String> UNIX_RegisteredSubProfile::getAdvertiseTypeDescriptions() const
{
	return _advertiseTypeDescriptions;
}

void UNIX_RegisteredSubProfile::setAdvertiseTypeDescriptions(Array<String> &value)
{
	_advertiseTypeDescriptions = value;
}

Boolean UNIX_RegisteredSubProfile::getImplementedFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPLEMENTED_FEATURES, getImplementedFeatures());
	return true;
}

Array<String> UNIX_RegisteredSubProfile::getImplementedFeatures() const
{
	return _implementedFeatures;
}

void UNIX_RegisteredSubProfile::setImplementedFeatures(Array<String> &value)
{
	_implementedFeatures = value;
}


void UNIX_RegisteredSubProfile::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RegisteredSubProfile");
	_generation = Uint64(0);
	_specificationType = Uint16(0);
	_otherSpecificationType = String ("");
	_registeredOrganization = Uint16(0);
	_otherRegisteredOrganization = String ("");
	_registeredName = String ("");
	_registeredVersion = String ("");
	_advertiseTypes.clear();
	_advertiseTypeDescriptions.clear();
	_implementedFeatures.clear();

}

Boolean UNIX_RegisteredSubProfile::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SpecificationType"))
			{
				Uint16 specificationTypeValue;
				property.getValue().get(specificationTypeValue);
				setSpecificationType(specificationTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSpecificationType"))
			{
				String otherSpecificationTypeValue;
				property.getValue().get(otherSpecificationTypeValue);
				setOtherSpecificationType(otherSpecificationTypeValue);
			}
			else if (String::equal(property.getName().getString(), "RegisteredOrganization"))
			{
				Uint16 registeredOrganizationValue;
				property.getValue().get(registeredOrganizationValue);
				setRegisteredOrganization(registeredOrganizationValue);
			}
			else if (String::equal(property.getName().getString(), "OtherRegisteredOrganization"))
			{
				String otherRegisteredOrganizationValue;
				property.getValue().get(otherRegisteredOrganizationValue);
				setOtherRegisteredOrganization(otherRegisteredOrganizationValue);
			}
			else if (String::equal(property.getName().getString(), "RegisteredName"))
			{
				String registeredNameValue;
				property.getValue().get(registeredNameValue);
				setRegisteredName(registeredNameValue);
			}
			else if (String::equal(property.getName().getString(), "RegisteredVersion"))
			{
				String registeredVersionValue;
				property.getValue().get(registeredVersionValue);
				setRegisteredVersion(registeredVersionValue);
			}
			else if (String::equal(property.getName().getString(), "AdvertiseTypes"))
			{
				Array<Uint16> advertiseTypesValue;
				property.getValue().get(advertiseTypesValue);
				setAdvertiseTypes(advertiseTypesValue);
			}
			else if (String::equal(property.getName().getString(), "AdvertiseTypeDescriptions"))
			{
				Array<String> advertiseTypeDescriptionsValue;
				property.getValue().get(advertiseTypeDescriptionsValue);
				setAdvertiseTypeDescriptions(advertiseTypeDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "ImplementedFeatures"))
			{
				Array<String> implementedFeaturesValue;
				property.getValue().get(implementedFeaturesValue);
				setImplementedFeatures(implementedFeaturesValue);
			}
	}
	return true;
}

Uint32 UNIX_RegisteredSubProfile::invokeCloseConformantInstances(
		String &inEnumerationContext
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method CloseConformantInstances */
	
	
	
	return returnValue;
}

Uint32 UNIX_RegisteredSubProfile::invokeOpenConformantInstances(
		String &inResultClass,
		Array<String> &inIncludedPropertyList,
		Uint32 &inOperationTimeout,
		Boolean &inContinueOnError,
		Uint32 &inMaxObjectCount,
		String &inEnumerationContext,
		Boolean &inEndOfSequence,
		Array<Uint16> &inInstanceType,
		Array<String> &inInstanceWithPathList
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method OpenConformantInstances */
	
	
	
	return returnValue;
}

Uint32 UNIX_RegisteredSubProfile::invokePullConformantInstances(
		Uint32 &inMaxObjectCount,
		String &inEnumerationContext,
		Boolean &inEndOfSequence,
		Array<Uint16> &inInstanceType,
		Array<String> &inInstanceWithPathList
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method PullConformantInstances */
	
	
	
	return returnValue;
}

Uint8 UNIX_RegisteredSubProfile::invokeGetCentralInstances(
		CIMInstance &inCentralInstances
	)
{
	Uint8 returnValue = Uint8(0);
	
	/* Execute method GetCentralInstances */
	
	
	
	return returnValue;
}


Boolean UNIX_RegisteredSubProfile::initialize()
{
	return false;
}

Boolean UNIX_RegisteredSubProfile::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RegisteredSubProfile");
	_generation = Uint64(0);
	_specificationType = Uint16(0);
	_otherSpecificationType = String ("");
	_registeredOrganization = Uint16(0);
	_otherRegisteredOrganization = String ("");
	_registeredName = String ("");
	_registeredVersion = String ("");
	_advertiseTypes.clear();
	_advertiseTypeDescriptions.clear();
	_implementedFeatures.clear();
	
	return false;
}

Boolean UNIX_RegisteredSubProfile::finalize()
{
	return false;
}


Boolean UNIX_RegisteredSubProfile::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_RegisteredSubProfile::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RegisteredSubProfile::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RegisteredSubProfile::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RegisteredSubProfile::validateInstance()
{
	return true;
}

