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


UNIX_RoleBasedManagementCapabilities::UNIX_RoleBasedManagementCapabilities(void)
{
}

UNIX_RoleBasedManagementCapabilities::~UNIX_RoleBasedManagementCapabilities(void)
{
}

Boolean UNIX_RoleBasedManagementCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RoleBasedManagementCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_RoleBasedManagementCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_RoleBasedManagementCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RoleBasedManagementCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_RoleBasedManagementCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_RoleBasedManagementCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RoleBasedManagementCapabilities::getDescription() const
{
	return _description;
}

void UNIX_RoleBasedManagementCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_RoleBasedManagementCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RoleBasedManagementCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_RoleBasedManagementCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_RoleBasedManagementCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_RoleBasedManagementCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_RoleBasedManagementCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_RoleBasedManagementCapabilities::getSharedPrivilegeSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARED_PRIVILEGE_SUPPORTED, getSharedPrivilegeSupported());
	return true;
}

Boolean UNIX_RoleBasedManagementCapabilities::getSharedPrivilegeSupported() const
{
	return _sharedPrivilegeSupported;
}

void UNIX_RoleBasedManagementCapabilities::setSharedPrivilegeSupported(Boolean &value)
{
	_sharedPrivilegeSupported = value;
}

Boolean UNIX_RoleBasedManagementCapabilities::getActivitiesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVITIES_SUPPORTED, getActivitiesSupported());
	return true;
}

Array<Uint16> UNIX_RoleBasedManagementCapabilities::getActivitiesSupported() const
{
	return _activitiesSupported;
}

void UNIX_RoleBasedManagementCapabilities::setActivitiesSupported(Array<Uint16> &value)
{
	_activitiesSupported = value;
}

Boolean UNIX_RoleBasedManagementCapabilities::getActivityQualifiersSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVITY_QUALIFIERS_SUPPORTED, getActivityQualifiersSupported());
	return true;
}

Array<String> UNIX_RoleBasedManagementCapabilities::getActivityQualifiersSupported() const
{
	return _activityQualifiersSupported;
}

void UNIX_RoleBasedManagementCapabilities::setActivityQualifiersSupported(Array<String> &value)
{
	_activityQualifiersSupported = value;
}

Boolean UNIX_RoleBasedManagementCapabilities::getQualifierFormatsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUALIFIER_FORMATS_SUPPORTED, getQualifierFormatsSupported());
	return true;
}

Array<Uint16> UNIX_RoleBasedManagementCapabilities::getQualifierFormatsSupported() const
{
	return _qualifierFormatsSupported;
}

void UNIX_RoleBasedManagementCapabilities::setQualifierFormatsSupported(Array<Uint16> &value)
{
	_qualifierFormatsSupported = value;
}

Boolean UNIX_RoleBasedManagementCapabilities::getSupportedMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_METHODS, getSupportedMethods());
	return true;
}

Array<Uint16> UNIX_RoleBasedManagementCapabilities::getSupportedMethods() const
{
	return _supportedMethods;
}

void UNIX_RoleBasedManagementCapabilities::setSupportedMethods(Array<Uint16> &value)
{
	_supportedMethods = value;
}


void UNIX_RoleBasedManagementCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RoleBasedManagementCapabilities");
	_generation = Uint64(0);
	_sharedPrivilegeSupported = Boolean(false);
	_activitiesSupported.clear();
	_activityQualifiersSupported.clear();
	_qualifierFormatsSupported.clear();
	_supportedMethods.clear();

}

Boolean UNIX_RoleBasedManagementCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SharedPrivilegeSupported"))
			{
				Boolean sharedPrivilegeSupportedValue;
				property.getValue().get(sharedPrivilegeSupportedValue);
				setSharedPrivilegeSupported(sharedPrivilegeSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ActivitiesSupported"))
			{
				Array<Uint16> activitiesSupportedValue;
				property.getValue().get(activitiesSupportedValue);
				setActivitiesSupported(activitiesSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "ActivityQualifiersSupported"))
			{
				Array<String> activityQualifiersSupportedValue;
				property.getValue().get(activityQualifiersSupportedValue);
				setActivityQualifiersSupported(activityQualifiersSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "QualifierFormatsSupported"))
			{
				Array<Uint16> qualifierFormatsSupportedValue;
				property.getValue().get(qualifierFormatsSupportedValue);
				setQualifierFormatsSupported(qualifierFormatsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedMethods"))
			{
				Array<Uint16> supportedMethodsValue;
				property.getValue().get(supportedMethodsValue);
				setSupportedMethods(supportedMethodsValue);
			}
	}
	return true;
}

Uint16 UNIX_RoleBasedManagementCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_RoleBasedManagementCapabilities::initialize()
{
	return false;
}

Boolean UNIX_RoleBasedManagementCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RoleBasedManagementCapabilities");
	_generation = Uint64(0);
	_sharedPrivilegeSupported = Boolean(false);
	_activitiesSupported.clear();
	_activityQualifiersSupported.clear();
	_qualifierFormatsSupported.clear();
	_supportedMethods.clear();
	
	return false;
}

Boolean UNIX_RoleBasedManagementCapabilities::finalize()
{
	return false;
}


Boolean UNIX_RoleBasedManagementCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_RoleBasedManagementCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RoleBasedManagementCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RoleBasedManagementCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RoleBasedManagementCapabilities::validateInstance()
{
	return true;
}

