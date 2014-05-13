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


UNIX_LANConnectivitySegment::UNIX_LANConnectivitySegment(void)
{
}

UNIX_LANConnectivitySegment::~UNIX_LANConnectivitySegment(void)
{
}

Boolean UNIX_LANConnectivitySegment::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LANConnectivitySegment::getInstanceID() const
{
	return _instanceID;
}

void UNIX_LANConnectivitySegment::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_LANConnectivitySegment::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LANConnectivitySegment::getCaption() const
{
	return _caption;
}

void UNIX_LANConnectivitySegment::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_LANConnectivitySegment::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LANConnectivitySegment::getDescription() const
{
	return _description;
}

void UNIX_LANConnectivitySegment::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_LANConnectivitySegment::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LANConnectivitySegment::getElementName() const
{
	return _elementName;
}

void UNIX_LANConnectivitySegment::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_LANConnectivitySegment::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_LANConnectivitySegment::getGeneration() const
{
	return _generation;
}

void UNIX_LANConnectivitySegment::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_LANConnectivitySegment::getConnectivityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTIVITY_STATUS, getConnectivityStatus());
	return true;
}

Uint16 UNIX_LANConnectivitySegment::getConnectivityStatus() const
{
	return _connectivityStatus;
}

void UNIX_LANConnectivitySegment::setConnectivityStatus(Uint16 &value)
{
	_connectivityStatus = value;
}

Boolean UNIX_LANConnectivitySegment::getLANID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_A_N_ID, getLANID());
	return true;
}

String UNIX_LANConnectivitySegment::getLANID() const
{
	return _lANID;
}

void UNIX_LANConnectivitySegment::setLANID(String &value)
{
	_lANID = value;
}

Boolean UNIX_LANConnectivitySegment::getConnectivityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTIVITY_TYPE, getConnectivityType());
	return true;
}

Uint16 UNIX_LANConnectivitySegment::getConnectivityType() const
{
	return _connectivityType;
}

void UNIX_LANConnectivitySegment::setConnectivityType(Uint16 &value)
{
	_connectivityType = value;
}

Boolean UNIX_LANConnectivitySegment::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_LANConnectivitySegment::getOtherTypeDescription() const
{
	return _otherTypeDescription;
}

void UNIX_LANConnectivitySegment::setOtherTypeDescription(String &value)
{
	_otherTypeDescription = value;
}


void UNIX_LANConnectivitySegment::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LANConnectivitySegment");
	_generation = Uint64(0);
	_connectivityStatus = Uint16(0);
	_lANID = String ("");
	_connectivityType = Uint16(0);
	_otherTypeDescription = String ("");

}

Boolean UNIX_LANConnectivitySegment::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "LANID"))
			{
				String lANIDValue;
				property.getValue().get(lANIDValue);
				setLANID(lANIDValue);
			}
			else if (String::equal(property.getName().getString(), "ConnectivityType"))
			{
				Uint16 connectivityTypeValue;
				property.getValue().get(connectivityTypeValue);
				setConnectivityType(connectivityTypeValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTypeDescription"))
			{
				String otherTypeDescriptionValue;
				property.getValue().get(otherTypeDescriptionValue);
				setOtherTypeDescription(otherTypeDescriptionValue);
			}
	}
	return true;
}


Boolean UNIX_LANConnectivitySegment::initialize()
{
	return false;
}

Boolean UNIX_LANConnectivitySegment::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("LANConnectivitySegment");
	_generation = Uint64(0);
	_connectivityStatus = Uint16(0);
	_lANID = String ("");
	_connectivityType = Uint16(0);
	_otherTypeDescription = String ("");
	
	return false;
}

Boolean UNIX_LANConnectivitySegment::finalize()
{
	return false;
}


Boolean UNIX_LANConnectivitySegment::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_LANConnectivitySegment::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LANConnectivitySegment::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LANConnectivitySegment::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_LANConnectivitySegment::validateInstance()
{
	return true;
}

