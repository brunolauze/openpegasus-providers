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


UNIX_AssociatedPrivilege::UNIX_AssociatedPrivilege(void)
{
}

UNIX_AssociatedPrivilege::~UNIX_AssociatedPrivilege(void)
{
}

Boolean UNIX_AssociatedPrivilege::getSubject(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBJECT, getSubject());
	return true;
}

CIMInstance UNIX_AssociatedPrivilege::getSubject() const
{
	return _subject;
}

void UNIX_AssociatedPrivilege::setSubject(CIMInstance &value)
{
	_subject = value;
}

Boolean UNIX_AssociatedPrivilege::getTarget(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET, getTarget());
	return true;
}

CIMInstance UNIX_AssociatedPrivilege::getTarget() const
{
	return _target;
}

void UNIX_AssociatedPrivilege::setTarget(CIMInstance &value)
{
	_target = value;
}

Boolean UNIX_AssociatedPrivilege::getUseKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_KEY, getUseKey());
	return true;
}

String UNIX_AssociatedPrivilege::getUseKey() const
{
	return _useKey;
}

void UNIX_AssociatedPrivilege::setUseKey(String &value)
{
	_useKey = value;
}

Boolean UNIX_AssociatedPrivilege::getPrivilegeGranted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIVILEGE_GRANTED, getPrivilegeGranted());
	return true;
}

Boolean UNIX_AssociatedPrivilege::getPrivilegeGranted() const
{
	return _privilegeGranted;
}

void UNIX_AssociatedPrivilege::setPrivilegeGranted(Boolean &value)
{
	_privilegeGranted = value;
}

Boolean UNIX_AssociatedPrivilege::getActivities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVITIES, getActivities());
	return true;
}

Array<Uint16> UNIX_AssociatedPrivilege::getActivities() const
{
	return _activities;
}

void UNIX_AssociatedPrivilege::setActivities(Array<Uint16> &value)
{
	_activities = value;
}

Boolean UNIX_AssociatedPrivilege::getActivityQualifiers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVITY_QUALIFIERS, getActivityQualifiers());
	return true;
}

Array<String> UNIX_AssociatedPrivilege::getActivityQualifiers() const
{
	return _activityQualifiers;
}

void UNIX_AssociatedPrivilege::setActivityQualifiers(Array<String> &value)
{
	_activityQualifiers = value;
}

Boolean UNIX_AssociatedPrivilege::getQualifierFormats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUALIFIER_FORMATS, getQualifierFormats());
	return true;
}

Array<Uint16> UNIX_AssociatedPrivilege::getQualifierFormats() const
{
	return _qualifierFormats;
}

void UNIX_AssociatedPrivilege::setQualifierFormats(Array<Uint16> &value)
{
	_qualifierFormats = value;
}

Boolean UNIX_AssociatedPrivilege::getRepresentsAuthorizationRights(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPRESENTS_AUTHORIZATION_RIGHTS, getRepresentsAuthorizationRights());
	return true;
}

Boolean UNIX_AssociatedPrivilege::getRepresentsAuthorizationRights() const
{
	return _representsAuthorizationRights;
}

void UNIX_AssociatedPrivilege::setRepresentsAuthorizationRights(Boolean &value)
{
	_representsAuthorizationRights = value;
}


void UNIX_AssociatedPrivilege::clearInstance()
{

	// _subject = CIMInstance(CIMName("CIM_ManagedElement"));
	// _target = CIMInstance(CIMName("CIM_ManagedElement"));
	_useKey = String ("");
	_privilegeGranted = Boolean(false);
	_activities.clear();
	_activityQualifiers.clear();
	_qualifierFormats.clear();
	_representsAuthorizationRights = Boolean(false);

}

Boolean UNIX_AssociatedPrivilege::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Subject"))
			{
				CIMInstance subjectValue;
				property.getValue().get(subjectValue);
				setSubject(subjectValue);
			}
			else if (String::equal(property.getName().getString(), "Target"))
			{
				CIMInstance targetValue;
				property.getValue().get(targetValue);
				setTarget(targetValue);
			}
			else if (String::equal(property.getName().getString(), "UseKey"))
			{
				String useKeyValue;
				property.getValue().get(useKeyValue);
				setUseKey(useKeyValue);
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


Boolean UNIX_AssociatedPrivilege::initialize()
{
	return false;
}

Boolean UNIX_AssociatedPrivilege::load(int &pIndex)
{
	
	// _subject = CIMInstance(CIMName("CIM_ManagedElement"));
	// _target = CIMInstance(CIMName("CIM_ManagedElement"));
	_useKey = String ("");
	_privilegeGranted = Boolean(false);
	_activities.clear();
	_activityQualifiers.clear();
	_qualifierFormats.clear();
	_representsAuthorizationRights = Boolean(false);
	
	return false;
}

Boolean UNIX_AssociatedPrivilege::finalize()
{
	return false;
}


Boolean UNIX_AssociatedPrivilege::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String subjectKey;
	String targetKey;
	String useKeyKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SUBJECT)) subjectKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TARGET)) targetKey = kb.getValue();
		else if (keyName.equal(PROPERTY_USE_KEY)) useKeyKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSubject().getPath().toString(), subjectKey)) && 
			(String::equalNoCase(getTarget().getPath().toString(), targetKey)) && 
			(String::equalNoCase(getUseKey(), useKeyKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_AssociatedPrivilege::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AssociatedPrivilege::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AssociatedPrivilege::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AssociatedPrivilege::validateInstance()
{
	return true;
}

