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


UNIX_ZoneSet::UNIX_ZoneSet(void)
{
}

UNIX_ZoneSet::~UNIX_ZoneSet(void)
{
}

Boolean UNIX_ZoneSet::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ZoneSet::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ZoneSet::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ZoneSet::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ZoneSet::getCaption() const
{
	return _caption;
}

void UNIX_ZoneSet::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ZoneSet::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ZoneSet::getDescription() const
{
	return _description;
}

void UNIX_ZoneSet::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ZoneSet::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ZoneSet::getElementName() const
{
	return _elementName;
}

void UNIX_ZoneSet::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ZoneSet::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ZoneSet::getGeneration() const
{
	return _generation;
}

void UNIX_ZoneSet::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ZoneSet::getConnectivityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTIVITY_STATUS, getConnectivityStatus());
	return true;
}

Uint16 UNIX_ZoneSet::getConnectivityStatus() const
{
	return _connectivityStatus;
}

void UNIX_ZoneSet::setConnectivityStatus(Uint16 &value)
{
	_connectivityStatus = value;
}

Boolean UNIX_ZoneSet::getActive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE, getActive());
	return true;
}

Boolean UNIX_ZoneSet::getActive() const
{
	return _active;
}

void UNIX_ZoneSet::setActive(Boolean &value)
{
	_active = value;
}


void UNIX_ZoneSet::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ZoneSet");
	_generation = Uint64(0);
	_connectivityStatus = Uint16(0);
	_active = Boolean(false);

}

Boolean UNIX_ZoneSet::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_ZoneSet::initialize()
{
	return false;
}

Boolean UNIX_ZoneSet::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ZoneSet");
	_generation = Uint64(0);
	_connectivityStatus = Uint16(0);
	_active = Boolean(false);
	
	return false;
}

Boolean UNIX_ZoneSet::finalize()
{
	return false;
}


Boolean UNIX_ZoneSet::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ZoneSet::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ZoneSet::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ZoneSet::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ZoneSet::validateInstance()
{
	return true;
}

