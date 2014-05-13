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


UNIX_StorageServerAsymmetryCapabilities::UNIX_StorageServerAsymmetryCapabilities(void)
{
}

UNIX_StorageServerAsymmetryCapabilities::~UNIX_StorageServerAsymmetryCapabilities(void)
{
}

Boolean UNIX_StorageServerAsymmetryCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageServerAsymmetryCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageServerAsymmetryCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageServerAsymmetryCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_StorageServerAsymmetryCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageServerAsymmetryCapabilities::getDescription() const
{
	return _description;
}

void UNIX_StorageServerAsymmetryCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageServerAsymmetryCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_StorageServerAsymmetryCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageServerAsymmetryCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_StorageServerAsymmetryCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::getStorageResourceSymmetryCapability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_RESOURCE_SYMMETRY_CAPABILITY, getStorageResourceSymmetryCapability());
	return true;
}

Uint16 UNIX_StorageServerAsymmetryCapabilities::getStorageResourceSymmetryCapability() const
{
	return _storageResourceSymmetryCapability;
}

void UNIX_StorageServerAsymmetryCapabilities::setStorageResourceSymmetryCapability(Uint16 &value)
{
	_storageResourceSymmetryCapability = value;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::getStorageResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_RESOURCE_TYPE, getStorageResourceType());
	return true;
}

Uint16 UNIX_StorageServerAsymmetryCapabilities::getStorageResourceType() const
{
	return _storageResourceType;
}

void UNIX_StorageServerAsymmetryCapabilities::setStorageResourceType(Uint16 &value)
{
	_storageResourceType = value;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::getStorageResourceAffinityAssignable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_RESOURCE_AFFINITY_ASSIGNABLE, getStorageResourceAffinityAssignable());
	return true;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::getStorageResourceAffinityAssignable() const
{
	return _storageResourceAffinityAssignable;
}

void UNIX_StorageServerAsymmetryCapabilities::setStorageResourceAffinityAssignable(Boolean &value)
{
	_storageResourceAffinityAssignable = value;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::getPortGroupFailoverBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_GROUP_FAILOVER_BEHAVIOR, getPortGroupFailoverBehavior());
	return true;
}

Uint16 UNIX_StorageServerAsymmetryCapabilities::getPortGroupFailoverBehavior() const
{
	return _portGroupFailoverBehavior;
}

void UNIX_StorageServerAsymmetryCapabilities::setPortGroupFailoverBehavior(Uint16 &value)
{
	_portGroupFailoverBehavior = value;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::getTargetPortSymmetryCapability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_PORT_SYMMETRY_CAPABILITY, getTargetPortSymmetryCapability());
	return true;
}

Uint16 UNIX_StorageServerAsymmetryCapabilities::getTargetPortSymmetryCapability() const
{
	return _targetPortSymmetryCapability;
}

void UNIX_StorageServerAsymmetryCapabilities::setTargetPortSymmetryCapability(Uint16 &value)
{
	_targetPortSymmetryCapability = value;
}


void UNIX_StorageServerAsymmetryCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageServerAsymmetryCapabilities");
	_generation = Uint64(0);
	_storageResourceSymmetryCapability = Uint16(0);
	_storageResourceType = Uint16(0);
	_storageResourceAffinityAssignable = Boolean(false);
	_portGroupFailoverBehavior = Uint16(0);
	_targetPortSymmetryCapability = Uint16(0);

}

Boolean UNIX_StorageServerAsymmetryCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "StorageResourceSymmetryCapability"))
			{
				Uint16 storageResourceSymmetryCapabilityValue;
				property.getValue().get(storageResourceSymmetryCapabilityValue);
				setStorageResourceSymmetryCapability(storageResourceSymmetryCapabilityValue);
			}
			else if (String::equal(property.getName().getString(), "StorageResourceType"))
			{
				Uint16 storageResourceTypeValue;
				property.getValue().get(storageResourceTypeValue);
				setStorageResourceType(storageResourceTypeValue);
			}
			else if (String::equal(property.getName().getString(), "StorageResourceAffinityAssignable"))
			{
				Boolean storageResourceAffinityAssignableValue;
				property.getValue().get(storageResourceAffinityAssignableValue);
				setStorageResourceAffinityAssignable(storageResourceAffinityAssignableValue);
			}
			else if (String::equal(property.getName().getString(), "PortGroupFailoverBehavior"))
			{
				Uint16 portGroupFailoverBehaviorValue;
				property.getValue().get(portGroupFailoverBehaviorValue);
				setPortGroupFailoverBehavior(portGroupFailoverBehaviorValue);
			}
			else if (String::equal(property.getName().getString(), "TargetPortSymmetryCapability"))
			{
				Uint16 targetPortSymmetryCapabilityValue;
				property.getValue().get(targetPortSymmetryCapabilityValue);
				setTargetPortSymmetryCapability(targetPortSymmetryCapabilityValue);
			}
	}
	return true;
}

Uint16 UNIX_StorageServerAsymmetryCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_StorageServerAsymmetryCapabilities::initialize()
{
	return false;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageServerAsymmetryCapabilities");
	_generation = Uint64(0);
	_storageResourceSymmetryCapability = Uint16(0);
	_storageResourceType = Uint16(0);
	_storageResourceAffinityAssignable = Boolean(false);
	_portGroupFailoverBehavior = Uint16(0);
	_targetPortSymmetryCapability = Uint16(0);
	
	return false;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::finalize()
{
	return false;
}


Boolean UNIX_StorageServerAsymmetryCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageServerAsymmetryCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageServerAsymmetryCapabilities::validateInstance()
{
	return true;
}

