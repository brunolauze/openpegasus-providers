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


UNIX_RemoteReplicationCollection::UNIX_RemoteReplicationCollection(void)
{
}

UNIX_RemoteReplicationCollection::~UNIX_RemoteReplicationCollection(void)
{
}

Boolean UNIX_RemoteReplicationCollection::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RemoteReplicationCollection::getInstanceID() const
{
	return _instanceID;
}

void UNIX_RemoteReplicationCollection::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_RemoteReplicationCollection::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RemoteReplicationCollection::getCaption() const
{
	return _caption;
}

void UNIX_RemoteReplicationCollection::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_RemoteReplicationCollection::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RemoteReplicationCollection::getDescription() const
{
	return _description;
}

void UNIX_RemoteReplicationCollection::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_RemoteReplicationCollection::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RemoteReplicationCollection::getElementName() const
{
	return _elementName;
}

void UNIX_RemoteReplicationCollection::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_RemoteReplicationCollection::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_RemoteReplicationCollection::getGeneration() const
{
	return _generation;
}

void UNIX_RemoteReplicationCollection::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_RemoteReplicationCollection::getConnectivityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTIVITY_STATUS, getConnectivityStatus());
	return true;
}

Uint16 UNIX_RemoteReplicationCollection::getConnectivityStatus() const
{
	return _connectivityStatus;
}

void UNIX_RemoteReplicationCollection::setConnectivityStatus(Uint16 &value)
{
	_connectivityStatus = value;
}

Boolean UNIX_RemoteReplicationCollection::getActive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE, getActive());
	return true;
}

Boolean UNIX_RemoteReplicationCollection::getActive() const
{
	return _active;
}

void UNIX_RemoteReplicationCollection::setActive(Boolean &value)
{
	_active = value;
}

Boolean UNIX_RemoteReplicationCollection::getDeleteOnUnassociated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_ON_UNASSOCIATED, getDeleteOnUnassociated());
	return true;
}

Boolean UNIX_RemoteReplicationCollection::getDeleteOnUnassociated() const
{
	return _deleteOnUnassociated;
}

void UNIX_RemoteReplicationCollection::setDeleteOnUnassociated(Boolean &value)
{
	_deleteOnUnassociated = value;
}

Boolean UNIX_RemoteReplicationCollection::getHardwareCompressionEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HARDWARE_COMPRESSION_ENABLED, getHardwareCompressionEnabled());
	return true;
}

Boolean UNIX_RemoteReplicationCollection::getHardwareCompressionEnabled() const
{
	return _hardwareCompressionEnabled;
}

void UNIX_RemoteReplicationCollection::setHardwareCompressionEnabled(Boolean &value)
{
	_hardwareCompressionEnabled = value;
}

Boolean UNIX_RemoteReplicationCollection::getSoftwareCompressionEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_COMPRESSION_ENABLED, getSoftwareCompressionEnabled());
	return true;
}

Boolean UNIX_RemoteReplicationCollection::getSoftwareCompressionEnabled() const
{
	return _softwareCompressionEnabled;
}

void UNIX_RemoteReplicationCollection::setSoftwareCompressionEnabled(Boolean &value)
{
	_softwareCompressionEnabled = value;
}


void UNIX_RemoteReplicationCollection::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RemoteReplicationCollection");
	_generation = Uint64(0);
	_connectivityStatus = Uint16(0);
	_active = Boolean(false);
	_deleteOnUnassociated = Boolean(false);
	_hardwareCompressionEnabled = Boolean(false);
	_softwareCompressionEnabled = Boolean(false);

}

Boolean UNIX_RemoteReplicationCollection::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ConnectivityStatus"))
			{
				Uint16 connectivityStatusValue;
				property.getValue().get(connectivityStatusValue);
				setConnectivityStatus(connectivityStatusValue);
			}
			else if (String::equal(property.getName().getString(), "Active"))
			{
				Boolean activeValue;
				property.getValue().get(activeValue);
				setActive(activeValue);
			}
			else if (String::equal(property.getName().getString(), "DeleteOnUnassociated"))
			{
				Boolean deleteOnUnassociatedValue;
				property.getValue().get(deleteOnUnassociatedValue);
				setDeleteOnUnassociated(deleteOnUnassociatedValue);
			}
			else if (String::equal(property.getName().getString(), "HardwareCompressionEnabled"))
			{
				Boolean hardwareCompressionEnabledValue;
				property.getValue().get(hardwareCompressionEnabledValue);
				setHardwareCompressionEnabled(hardwareCompressionEnabledValue);
			}
			else if (String::equal(property.getName().getString(), "SoftwareCompressionEnabled"))
			{
				Boolean softwareCompressionEnabledValue;
				property.getValue().get(softwareCompressionEnabledValue);
				setSoftwareCompressionEnabled(softwareCompressionEnabledValue);
			}
	}
	return true;
}


Boolean UNIX_RemoteReplicationCollection::initialize()
{
	return false;
}

Boolean UNIX_RemoteReplicationCollection::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RemoteReplicationCollection");
	_generation = Uint64(0);
	_connectivityStatus = Uint16(0);
	_active = Boolean(false);
	_deleteOnUnassociated = Boolean(false);
	_hardwareCompressionEnabled = Boolean(false);
	_softwareCompressionEnabled = Boolean(false);
	
	return false;
}

Boolean UNIX_RemoteReplicationCollection::finalize()
{
	return false;
}


Boolean UNIX_RemoteReplicationCollection::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_RemoteReplicationCollection::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RemoteReplicationCollection::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RemoteReplicationCollection::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RemoteReplicationCollection::validateInstance()
{
	return true;
}

