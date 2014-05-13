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


UNIX_VLANSystemCapabilities::UNIX_VLANSystemCapabilities(void)
{
}

UNIX_VLANSystemCapabilities::~UNIX_VLANSystemCapabilities(void)
{
}

Boolean UNIX_VLANSystemCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VLANSystemCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VLANSystemCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VLANSystemCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VLANSystemCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_VLANSystemCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VLANSystemCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VLANSystemCapabilities::getDescription() const
{
	return _description;
}

void UNIX_VLANSystemCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VLANSystemCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VLANSystemCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_VLANSystemCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VLANSystemCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VLANSystemCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_VLANSystemCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VLANSystemCapabilities::getMaxMTUsize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_M_T_USIZE, getMaxMTUsize());
	return true;
}

Uint16 UNIX_VLANSystemCapabilities::getMaxMTUsize() const
{
	return _maxMTUsize;
}

void UNIX_VLANSystemCapabilities::setMaxMTUsize(Uint16 &value)
{
	_maxMTUsize = value;
}

Boolean UNIX_VLANSystemCapabilities::getMinMTUsize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_M_T_USIZE, getMinMTUsize());
	return true;
}

Uint16 UNIX_VLANSystemCapabilities::getMinMTUsize() const
{
	return _minMTUsize;
}

void UNIX_VLANSystemCapabilities::setMinMTUsize(Uint16 &value)
{
	_minMTUsize = value;
}

Boolean UNIX_VLANSystemCapabilities::getMaxSupportedVLANs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SUPPORTED_VLANS, getMaxSupportedVLANs());
	return true;
}

Uint16 UNIX_VLANSystemCapabilities::getMaxSupportedVLANs() const
{
	return _maxSupportedVLANs;
}

void UNIX_VLANSystemCapabilities::setMaxSupportedVLANs(Uint16 &value)
{
	_maxSupportedVLANs = value;
}

Boolean UNIX_VLANSystemCapabilities::getMaxVLANId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_VLAN_ID, getMaxVLANId());
	return true;
}

Uint16 UNIX_VLANSystemCapabilities::getMaxVLANId() const
{
	return _maxVLANId;
}

void UNIX_VLANSystemCapabilities::setMaxVLANId(Uint16 &value)
{
	_maxVLANId = value;
}


void UNIX_VLANSystemCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VLANSystemCapabilities");
	_generation = Uint64(0);
	_maxMTUsize = Uint16(0);
	_minMTUsize = Uint16(0);
	_maxSupportedVLANs = Uint16(0);
	_maxVLANId = Uint16(0);

}

Boolean UNIX_VLANSystemCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "MaxMTUsize"))
			{
				Uint16 maxMTUsizeValue;
				property.getValue().get(maxMTUsizeValue);
				setMaxMTUsize(maxMTUsizeValue);
			}
			else if (String::equal(property.getName().getString(), "MinMTUsize"))
			{
				Uint16 minMTUsizeValue;
				property.getValue().get(minMTUsizeValue);
				setMinMTUsize(minMTUsizeValue);
			}
			else if (String::equal(property.getName().getString(), "MaxSupportedVLANs"))
			{
				Uint16 maxSupportedVLANsValue;
				property.getValue().get(maxSupportedVLANsValue);
				setMaxSupportedVLANs(maxSupportedVLANsValue);
			}
			else if (String::equal(property.getName().getString(), "MaxVLANId"))
			{
				Uint16 maxVLANIdValue;
				property.getValue().get(maxVLANIdValue);
				setMaxVLANId(maxVLANIdValue);
			}
	}
	return true;
}

Uint16 UNIX_VLANSystemCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_VLANSystemCapabilities::initialize()
{
	return false;
}

Boolean UNIX_VLANSystemCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VLANSystemCapabilities");
	_generation = Uint64(0);
	_maxMTUsize = Uint16(0);
	_minMTUsize = Uint16(0);
	_maxSupportedVLANs = Uint16(0);
	_maxVLANId = Uint16(0);
	
	return false;
}

Boolean UNIX_VLANSystemCapabilities::finalize()
{
	return false;
}


Boolean UNIX_VLANSystemCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VLANSystemCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANSystemCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANSystemCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VLANSystemCapabilities::validateInstance()
{
	return true;
}

