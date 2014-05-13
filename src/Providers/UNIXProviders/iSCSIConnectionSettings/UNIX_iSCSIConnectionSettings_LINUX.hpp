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


UNIX_iSCSIConnectionSettings::UNIX_iSCSIConnectionSettings(void)
{
}

UNIX_iSCSIConnectionSettings::~UNIX_iSCSIConnectionSettings(void)
{
}

Boolean UNIX_iSCSIConnectionSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSIConnectionSettings::getInstanceID() const
{
	return _instanceID;
}

void UNIX_iSCSIConnectionSettings::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_iSCSIConnectionSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSIConnectionSettings::getCaption() const
{
	return _caption;
}

void UNIX_iSCSIConnectionSettings::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_iSCSIConnectionSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSIConnectionSettings::getDescription() const
{
	return _description;
}

void UNIX_iSCSIConnectionSettings::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_iSCSIConnectionSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSIConnectionSettings::getElementName() const
{
	return _elementName;
}

void UNIX_iSCSIConnectionSettings::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_iSCSIConnectionSettings::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_iSCSIConnectionSettings::getGeneration() const
{
	return _generation;
}

void UNIX_iSCSIConnectionSettings::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_iSCSIConnectionSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_iSCSIConnectionSettings::getConfigurationName() const
{
	return _configurationName;
}

void UNIX_iSCSIConnectionSettings::setConfigurationName(String &value)
{
	_configurationName = value;
}

Boolean UNIX_iSCSIConnectionSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_iSCSIConnectionSettings::getChangeableType() const
{
	return _changeableType;
}

void UNIX_iSCSIConnectionSettings::setChangeableType(Uint16 &value)
{
	_changeableType = value;
}

Boolean UNIX_iSCSIConnectionSettings::getComponentSetting(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT_SETTING, getComponentSetting());
	return true;
}

Array<String> UNIX_iSCSIConnectionSettings::getComponentSetting() const
{
	return _componentSetting;
}

void UNIX_iSCSIConnectionSettings::setComponentSetting(Array<String> &value)
{
	_componentSetting = value;
}

Boolean UNIX_iSCSIConnectionSettings::getSoID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ID, getSoID());
	return true;
}

String UNIX_iSCSIConnectionSettings::getSoID() const
{
	return _soID;
}

void UNIX_iSCSIConnectionSettings::setSoID(String &value)
{
	_soID = value;
}

Boolean UNIX_iSCSIConnectionSettings::getSoOrgID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SO_ORG_ID, getSoOrgID());
	return true;
}

String UNIX_iSCSIConnectionSettings::getSoOrgID() const
{
	return _soOrgID;
}

void UNIX_iSCSIConnectionSettings::setSoOrgID(String &value)
{
	_soOrgID = value;
}

Boolean UNIX_iSCSIConnectionSettings::getMaxReceiveDataSegmentLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_RECEIVE_DATA_SEGMENT_LENGTH, getMaxReceiveDataSegmentLength());
	return true;
}

Uint32 UNIX_iSCSIConnectionSettings::getMaxReceiveDataSegmentLength() const
{
	return _maxReceiveDataSegmentLength;
}

void UNIX_iSCSIConnectionSettings::setMaxReceiveDataSegmentLength(Uint32 &value)
{
	_maxReceiveDataSegmentLength = value;
}

Boolean UNIX_iSCSIConnectionSettings::getPrimaryHeaderDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_HEADER_DIGEST_METHOD, getPrimaryHeaderDigestMethod());
	return true;
}

Uint16 UNIX_iSCSIConnectionSettings::getPrimaryHeaderDigestMethod() const
{
	return _primaryHeaderDigestMethod;
}

void UNIX_iSCSIConnectionSettings::setPrimaryHeaderDigestMethod(Uint16 &value)
{
	_primaryHeaderDigestMethod = value;
}

Boolean UNIX_iSCSIConnectionSettings::getOtherPrimaryHeaderDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PRIMARY_HEADER_DIGEST_METHOD, getOtherPrimaryHeaderDigestMethod());
	return true;
}

String UNIX_iSCSIConnectionSettings::getOtherPrimaryHeaderDigestMethod() const
{
	return _otherPrimaryHeaderDigestMethod;
}

void UNIX_iSCSIConnectionSettings::setOtherPrimaryHeaderDigestMethod(String &value)
{
	_otherPrimaryHeaderDigestMethod = value;
}

Boolean UNIX_iSCSIConnectionSettings::getPrimaryDataDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_DATA_DIGEST_METHOD, getPrimaryDataDigestMethod());
	return true;
}

Uint16 UNIX_iSCSIConnectionSettings::getPrimaryDataDigestMethod() const
{
	return _primaryDataDigestMethod;
}

void UNIX_iSCSIConnectionSettings::setPrimaryDataDigestMethod(Uint16 &value)
{
	_primaryDataDigestMethod = value;
}

Boolean UNIX_iSCSIConnectionSettings::getOtherPrimaryDataDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PRIMARY_DATA_DIGEST_METHOD, getOtherPrimaryDataDigestMethod());
	return true;
}

String UNIX_iSCSIConnectionSettings::getOtherPrimaryDataDigestMethod() const
{
	return _otherPrimaryDataDigestMethod;
}

void UNIX_iSCSIConnectionSettings::setOtherPrimaryDataDigestMethod(String &value)
{
	_otherPrimaryDataDigestMethod = value;
}

Boolean UNIX_iSCSIConnectionSettings::getSecondaryHeaderDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDARY_HEADER_DIGEST_METHOD, getSecondaryHeaderDigestMethod());
	return true;
}

Uint16 UNIX_iSCSIConnectionSettings::getSecondaryHeaderDigestMethod() const
{
	return _secondaryHeaderDigestMethod;
}

void UNIX_iSCSIConnectionSettings::setSecondaryHeaderDigestMethod(Uint16 &value)
{
	_secondaryHeaderDigestMethod = value;
}

Boolean UNIX_iSCSIConnectionSettings::getOtherSecondaryHeaderDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SECONDARY_HEADER_DIGEST_METHOD, getOtherSecondaryHeaderDigestMethod());
	return true;
}

String UNIX_iSCSIConnectionSettings::getOtherSecondaryHeaderDigestMethod() const
{
	return _otherSecondaryHeaderDigestMethod;
}

void UNIX_iSCSIConnectionSettings::setOtherSecondaryHeaderDigestMethod(String &value)
{
	_otherSecondaryHeaderDigestMethod = value;
}

Boolean UNIX_iSCSIConnectionSettings::getSecondaryDataDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDARY_DATA_DIGEST_METHOD, getSecondaryDataDigestMethod());
	return true;
}

Uint16 UNIX_iSCSIConnectionSettings::getSecondaryDataDigestMethod() const
{
	return _secondaryDataDigestMethod;
}

void UNIX_iSCSIConnectionSettings::setSecondaryDataDigestMethod(Uint16 &value)
{
	_secondaryDataDigestMethod = value;
}

Boolean UNIX_iSCSIConnectionSettings::getOtherSecondaryDataDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SECONDARY_DATA_DIGEST_METHOD, getOtherSecondaryDataDigestMethod());
	return true;
}

String UNIX_iSCSIConnectionSettings::getOtherSecondaryDataDigestMethod() const
{
	return _otherSecondaryDataDigestMethod;
}

void UNIX_iSCSIConnectionSettings::setOtherSecondaryDataDigestMethod(String &value)
{
	_otherSecondaryDataDigestMethod = value;
}

Boolean UNIX_iSCSIConnectionSettings::getRequestingMarkersOnReceive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTING_MARKERS_ON_RECEIVE, getRequestingMarkersOnReceive());
	return true;
}

Boolean UNIX_iSCSIConnectionSettings::getRequestingMarkersOnReceive() const
{
	return _requestingMarkersOnReceive;
}

void UNIX_iSCSIConnectionSettings::setRequestingMarkersOnReceive(Boolean &value)
{
	_requestingMarkersOnReceive = value;
}

Boolean UNIX_iSCSIConnectionSettings::getPrimaryAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_AUTHENTICATION_METHOD, getPrimaryAuthenticationMethod());
	return true;
}

Uint16 UNIX_iSCSIConnectionSettings::getPrimaryAuthenticationMethod() const
{
	return _primaryAuthenticationMethod;
}

void UNIX_iSCSIConnectionSettings::setPrimaryAuthenticationMethod(Uint16 &value)
{
	_primaryAuthenticationMethod = value;
}

Boolean UNIX_iSCSIConnectionSettings::getSecondaryAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDARY_AUTHENTICATION_METHOD, getSecondaryAuthenticationMethod());
	return true;
}

Uint16 UNIX_iSCSIConnectionSettings::getSecondaryAuthenticationMethod() const
{
	return _secondaryAuthenticationMethod;
}

void UNIX_iSCSIConnectionSettings::setSecondaryAuthenticationMethod(Uint16 &value)
{
	_secondaryAuthenticationMethod = value;
}


void UNIX_iSCSIConnectionSettings::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSIConnectionSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_maxReceiveDataSegmentLength = Uint32(0);
	_primaryHeaderDigestMethod = Uint16(0);
	_otherPrimaryHeaderDigestMethod = String ("");
	_primaryDataDigestMethod = Uint16(0);
	_otherPrimaryDataDigestMethod = String ("");
	_secondaryHeaderDigestMethod = Uint16(0);
	_otherSecondaryHeaderDigestMethod = String ("");
	_secondaryDataDigestMethod = Uint16(0);
	_otherSecondaryDataDigestMethod = String ("");
	_requestingMarkersOnReceive = Boolean(false);
	_primaryAuthenticationMethod = Uint16(0);
	_secondaryAuthenticationMethod = Uint16(0);

}

Boolean UNIX_iSCSIConnectionSettings::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConfigurationName"))
			{
				String configurationNameValue;
				property.getValue().get(configurationNameValue);
				setConfigurationName(configurationNameValue);
			}
			else if (String::equal(property.getName().getString(), "ChangeableType"))
			{
				Uint16 changeableTypeValue;
				property.getValue().get(changeableTypeValue);
				setChangeableType(changeableTypeValue);
			}
			else if (String::equal(property.getName().getString(), "ComponentSetting"))
			{
				Array<String> componentSettingValue;
				property.getValue().get(componentSettingValue);
				setComponentSetting(componentSettingValue);
			}
			else if (String::equal(property.getName().getString(), "SoID"))
			{
				String soIDValue;
				property.getValue().get(soIDValue);
				setSoID(soIDValue);
			}
			else if (String::equal(property.getName().getString(), "SoOrgID"))
			{
				String soOrgIDValue;
				property.getValue().get(soOrgIDValue);
				setSoOrgID(soOrgIDValue);
			}
			else if (String::equal(property.getName().getString(), "MaxReceiveDataSegmentLength"))
			{
				Uint32 maxReceiveDataSegmentLengthValue;
				property.getValue().get(maxReceiveDataSegmentLengthValue);
				setMaxReceiveDataSegmentLength(maxReceiveDataSegmentLengthValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryHeaderDigestMethod"))
			{
				Uint16 primaryHeaderDigestMethodValue;
				property.getValue().get(primaryHeaderDigestMethodValue);
				setPrimaryHeaderDigestMethod(primaryHeaderDigestMethodValue);
			}
			else if (String::equal(property.getName().getString(), "OtherPrimaryHeaderDigestMethod"))
			{
				String otherPrimaryHeaderDigestMethodValue;
				property.getValue().get(otherPrimaryHeaderDigestMethodValue);
				setOtherPrimaryHeaderDigestMethod(otherPrimaryHeaderDigestMethodValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryDataDigestMethod"))
			{
				Uint16 primaryDataDigestMethodValue;
				property.getValue().get(primaryDataDigestMethodValue);
				setPrimaryDataDigestMethod(primaryDataDigestMethodValue);
			}
			else if (String::equal(property.getName().getString(), "OtherPrimaryDataDigestMethod"))
			{
				String otherPrimaryDataDigestMethodValue;
				property.getValue().get(otherPrimaryDataDigestMethodValue);
				setOtherPrimaryDataDigestMethod(otherPrimaryDataDigestMethodValue);
			}
			else if (String::equal(property.getName().getString(), "SecondaryHeaderDigestMethod"))
			{
				Uint16 secondaryHeaderDigestMethodValue;
				property.getValue().get(secondaryHeaderDigestMethodValue);
				setSecondaryHeaderDigestMethod(secondaryHeaderDigestMethodValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSecondaryHeaderDigestMethod"))
			{
				String otherSecondaryHeaderDigestMethodValue;
				property.getValue().get(otherSecondaryHeaderDigestMethodValue);
				setOtherSecondaryHeaderDigestMethod(otherSecondaryHeaderDigestMethodValue);
			}
			else if (String::equal(property.getName().getString(), "SecondaryDataDigestMethod"))
			{
				Uint16 secondaryDataDigestMethodValue;
				property.getValue().get(secondaryDataDigestMethodValue);
				setSecondaryDataDigestMethod(secondaryDataDigestMethodValue);
			}
			else if (String::equal(property.getName().getString(), "OtherSecondaryDataDigestMethod"))
			{
				String otherSecondaryDataDigestMethodValue;
				property.getValue().get(otherSecondaryDataDigestMethodValue);
				setOtherSecondaryDataDigestMethod(otherSecondaryDataDigestMethodValue);
			}
			else if (String::equal(property.getName().getString(), "RequestingMarkersOnReceive"))
			{
				Boolean requestingMarkersOnReceiveValue;
				property.getValue().get(requestingMarkersOnReceiveValue);
				setRequestingMarkersOnReceive(requestingMarkersOnReceiveValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryAuthenticationMethod"))
			{
				Uint16 primaryAuthenticationMethodValue;
				property.getValue().get(primaryAuthenticationMethodValue);
				setPrimaryAuthenticationMethod(primaryAuthenticationMethodValue);
			}
			else if (String::equal(property.getName().getString(), "SecondaryAuthenticationMethod"))
			{
				Uint16 secondaryAuthenticationMethodValue;
				property.getValue().get(secondaryAuthenticationMethodValue);
				setSecondaryAuthenticationMethod(secondaryAuthenticationMethodValue);
			}
	}
	return true;
}


Boolean UNIX_iSCSIConnectionSettings::initialize()
{
	return false;
}

Boolean UNIX_iSCSIConnectionSettings::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("iSCSIConnectionSettings");
	_generation = Uint64(0);
	_configurationName = String ("");
	_changeableType = Uint16(0);
	_componentSetting.clear();
	_soID = String ("");
	_soOrgID = String ("");
	_maxReceiveDataSegmentLength = Uint32(0);
	_primaryHeaderDigestMethod = Uint16(0);
	_otherPrimaryHeaderDigestMethod = String ("");
	_primaryDataDigestMethod = Uint16(0);
	_otherPrimaryDataDigestMethod = String ("");
	_secondaryHeaderDigestMethod = Uint16(0);
	_otherSecondaryHeaderDigestMethod = String ("");
	_secondaryDataDigestMethod = Uint16(0);
	_otherSecondaryDataDigestMethod = String ("");
	_requestingMarkersOnReceive = Boolean(false);
	_primaryAuthenticationMethod = Uint16(0);
	_secondaryAuthenticationMethod = Uint16(0);
	
	return false;
}

Boolean UNIX_iSCSIConnectionSettings::finalize()
{
	return false;
}


Boolean UNIX_iSCSIConnectionSettings::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_iSCSIConnectionSettings::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSIConnectionSettings::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSIConnectionSettings::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_iSCSIConnectionSettings::validateInstance()
{
	return true;
}

