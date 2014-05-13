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


UNIX_VirtualSystemMigrationCapabilities::UNIX_VirtualSystemMigrationCapabilities(void)
{
}

UNIX_VirtualSystemMigrationCapabilities::~UNIX_VirtualSystemMigrationCapabilities(void)
{
}

Boolean UNIX_VirtualSystemMigrationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VirtualSystemMigrationCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VirtualSystemMigrationCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VirtualSystemMigrationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VirtualSystemMigrationCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_VirtualSystemMigrationCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VirtualSystemMigrationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VirtualSystemMigrationCapabilities::getDescription() const
{
	return _description;
}

void UNIX_VirtualSystemMigrationCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VirtualSystemMigrationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VirtualSystemMigrationCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_VirtualSystemMigrationCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VirtualSystemMigrationCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VirtualSystemMigrationCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_VirtualSystemMigrationCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VirtualSystemMigrationCapabilities::getSynchronousMethodsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYNCHRONOUS_METHODS_SUPPORTED, getSynchronousMethodsSupported());
	return true;
}

Array<Uint16> UNIX_VirtualSystemMigrationCapabilities::getSynchronousMethodsSupported() const
{
	return _synchronousMethodsSupported;
}

void UNIX_VirtualSystemMigrationCapabilities::setSynchronousMethodsSupported(Array<Uint16> &value)
{
	_synchronousMethodsSupported = value;
}

Boolean UNIX_VirtualSystemMigrationCapabilities::getAsynchronousMethodsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASYNCHRONOUS_METHODS_SUPPORTED, getAsynchronousMethodsSupported());
	return true;
}

Array<Uint16> UNIX_VirtualSystemMigrationCapabilities::getAsynchronousMethodsSupported() const
{
	return _asynchronousMethodsSupported;
}

void UNIX_VirtualSystemMigrationCapabilities::setAsynchronousMethodsSupported(Array<Uint16> &value)
{
	_asynchronousMethodsSupported = value;
}

Boolean UNIX_VirtualSystemMigrationCapabilities::getDestinationHostFormatsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_HOST_FORMATS_SUPPORTED, getDestinationHostFormatsSupported());
	return true;
}

Array<Uint16> UNIX_VirtualSystemMigrationCapabilities::getDestinationHostFormatsSupported() const
{
	return _destinationHostFormatsSupported;
}

void UNIX_VirtualSystemMigrationCapabilities::setDestinationHostFormatsSupported(Array<Uint16> &value)
{
	_destinationHostFormatsSupported = value;
}


void UNIX_VirtualSystemMigrationCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VirtualSystemMigrationCapabilities");
	_generation = Uint64(0);
	_synchronousMethodsSupported.clear();
	_asynchronousMethodsSupported.clear();
	_destinationHostFormatsSupported.clear();

}

Boolean UNIX_VirtualSystemMigrationCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SynchronousMethodsSupported"))
			{
				Array<Uint16> synchronousMethodsSupportedValue;
				property.getValue().get(synchronousMethodsSupportedValue);
				setSynchronousMethodsSupported(synchronousMethodsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "AsynchronousMethodsSupported"))
			{
				Array<Uint16> asynchronousMethodsSupportedValue;
				property.getValue().get(asynchronousMethodsSupportedValue);
				setAsynchronousMethodsSupported(asynchronousMethodsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "DestinationHostFormatsSupported"))
			{
				Array<Uint16> destinationHostFormatsSupportedValue;
				property.getValue().get(destinationHostFormatsSupportedValue);
				setDestinationHostFormatsSupported(destinationHostFormatsSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_VirtualSystemMigrationCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_VirtualSystemMigrationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_VirtualSystemMigrationCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VirtualSystemMigrationCapabilities");
	_generation = Uint64(0);
	_synchronousMethodsSupported.clear();
	_asynchronousMethodsSupported.clear();
	_destinationHostFormatsSupported.clear();
	
	return false;
}

Boolean UNIX_VirtualSystemMigrationCapabilities::finalize()
{
	return false;
}


Boolean UNIX_VirtualSystemMigrationCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VirtualSystemMigrationCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemMigrationCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemMigrationCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemMigrationCapabilities::validateInstance()
{
	return true;
}

