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


UNIX_Privilege::UNIX_Privilege(void)
{
}

UNIX_Privilege::~UNIX_Privilege(void)
{
}

Boolean UNIX_Privilege::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Privilege::getInstanceID() const
{
	return _instanceID;
}

void UNIX_Privilege::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_Privilege::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Privilege::getCaption() const
{
	return _caption;
}

void UNIX_Privilege::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_Privilege::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Privilege::getDescription() const
{
	return _description;
}

void UNIX_Privilege::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_Privilege::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Privilege::getElementName() const
{
	return _elementName;
}

void UNIX_Privilege::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_Privilege::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Privilege::getGeneration() const
{
	return _generation;
}

void UNIX_Privilege::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_Privilege::getPrivilegeGranted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIVILEGE_GRANTED, getPrivilegeGranted());
	return true;
}

Boolean UNIX_Privilege::getPrivilegeGranted() const
{
	return _privilegeGranted;
}

void UNIX_Privilege::setPrivilegeGranted(Boolean &value)
{
	_privilegeGranted = value;
}

Boolean UNIX_Privilege::getActivities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVITIES, getActivities());
	return true;
}

Array<Uint16> UNIX_Privilege::getActivities() const
{
	return _activities;
}

void UNIX_Privilege::setActivities(Array<Uint16> &value)
{
	_activities = value;
}

Boolean UNIX_Privilege::getActivityQualifiers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVITY_QUALIFIERS, getActivityQualifiers());
	return true;
}

Array<String> UNIX_Privilege::getActivityQualifiers() const
{
	return _activityQualifiers;
}

void UNIX_Privilege::setActivityQualifiers(Array<String> &value)
{
	_activityQualifiers = value;
}

Boolean UNIX_Privilege::getQualifierFormats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUALIFIER_FORMATS, getQualifierFormats());
	return true;
}

Array<Uint16> UNIX_Privilege::getQualifierFormats() const
{
	return _qualifierFormats;
}

void UNIX_Privilege::setQualifierFormats(Array<Uint16> &value)
{
	_qualifierFormats = value;
}

Boolean UNIX_Privilege::getRepresentsAuthorizationRights(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPRESENTS_AUTHORIZATION_RIGHTS, getRepresentsAuthorizationRights());
	return true;
}

Boolean UNIX_Privilege::getRepresentsAuthorizationRights() const
{
	return _representsAuthorizationRights;
}

void UNIX_Privilege::setRepresentsAuthorizationRights(Boolean &value)
{
	_representsAuthorizationRights = value;
}


void UNIX_Privilege::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Privilege");
	_generation = Uint64(0);
	_privilegeGranted = Boolean(false);
	_activities.clear();
	_activityQualifiers.clear();
	_qualifierFormats.clear();
	_representsAuthorizationRights = Boolean(false);

}

Boolean UNIX_Privilege::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "PrivilegeGranted"))
			{
				Boolean privilegeGrantedValue;
				property.getValue().get(privilegeGrantedValue);
				setPrivilegeGranted(privilegeGrantedValue);
			}
			else if (String::equal(property.getName().getString(), "Activities"))
			{
				Array<Uint16> activitiesValue;
				property.getValue().get(activitiesValue);
				setActivities(activitiesValue);
			}
			else if (String::equal(property.getName().getString(), "ActivityQualifiers"))
			{
				Array<String> activityQualifiersValue;
				property.getValue().get(activityQualifiersValue);
				setActivityQualifiers(activityQualifiersValue);
			}
			else if (String::equal(property.getName().getString(), "QualifierFormats"))
			{
				Array<Uint16> qualifierFormatsValue;
				property.getValue().get(qualifierFormatsValue);
				setQualifierFormats(qualifierFormatsValue);
			}
			else if (String::equal(property.getName().getString(), "RepresentsAuthorizationRights"))
			{
				Boolean representsAuthorizationRightsValue;
				property.getValue().get(representsAuthorizationRightsValue);
				setRepresentsAuthorizationRights(representsAuthorizationRightsValue);
			}
	}
	return true;
}


Boolean UNIX_Privilege::initialize()
{
	return false;
}

Boolean UNIX_Privilege::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("Privilege");
	_generation = Uint64(0);
	_privilegeGranted = Boolean(false);
	_activities.clear();
	_activityQualifiers.clear();
	_qualifierFormats.clear();
	_representsAuthorizationRights = Boolean(false);
	
	return false;
}

Boolean UNIX_Privilege::finalize()
{
	return false;
}


Boolean UNIX_Privilege::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_Privilege::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Privilege::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Privilege::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Privilege::validateInstance()
{
	return true;
}

