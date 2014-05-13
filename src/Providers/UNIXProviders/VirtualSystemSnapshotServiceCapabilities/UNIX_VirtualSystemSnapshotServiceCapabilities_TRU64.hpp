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


UNIX_VirtualSystemSnapshotServiceCapabilities::UNIX_VirtualSystemSnapshotServiceCapabilities(void)
{
}

UNIX_VirtualSystemSnapshotServiceCapabilities::~UNIX_VirtualSystemSnapshotServiceCapabilities(void)
{
}

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VirtualSystemSnapshotServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VirtualSystemSnapshotServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VirtualSystemSnapshotServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_VirtualSystemSnapshotServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VirtualSystemSnapshotServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_VirtualSystemSnapshotServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VirtualSystemSnapshotServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_VirtualSystemSnapshotServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VirtualSystemSnapshotServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_VirtualSystemSnapshotServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::getSynchronousMethodsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYNCHRONOUS_METHODS_SUPPORTED, getSynchronousMethodsSupported());
	return true;
}

Array<Uint16> UNIX_VirtualSystemSnapshotServiceCapabilities::getSynchronousMethodsSupported() const
{
	return _synchronousMethodsSupported;
}

void UNIX_VirtualSystemSnapshotServiceCapabilities::setSynchronousMethodsSupported(Array<Uint16> &value)
{
	_synchronousMethodsSupported = value;
}

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::getAynchronousMethodsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AYNCHRONOUS_METHODS_SUPPORTED, getAynchronousMethodsSupported());
	return true;
}

Array<Uint16> UNIX_VirtualSystemSnapshotServiceCapabilities::getAynchronousMethodsSupported() const
{
	return _aynchronousMethodsSupported;
}

void UNIX_VirtualSystemSnapshotServiceCapabilities::setAynchronousMethodsSupported(Array<Uint16> &value)
{
	_aynchronousMethodsSupported = value;
}

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::getSnapshotTypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SNAPSHOT_TYPES_SUPPORTED, getSnapshotTypesSupported());
	return true;
}

Array<Uint16> UNIX_VirtualSystemSnapshotServiceCapabilities::getSnapshotTypesSupported() const
{
	return _snapshotTypesSupported;
}

void UNIX_VirtualSystemSnapshotServiceCapabilities::setSnapshotTypesSupported(Array<Uint16> &value)
{
	_snapshotTypesSupported = value;
}


void UNIX_VirtualSystemSnapshotServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VirtualSystemSnapshotServiceCapabilities");
	_generation = Uint64(0);
	_synchronousMethodsSupported.clear();
	_aynchronousMethodsSupported.clear();
	_snapshotTypesSupported.clear();

}

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AynchronousMethodsSupported"))
			{
				Array<Uint16> aynchronousMethodsSupportedValue;
				property.getValue().get(aynchronousMethodsSupportedValue);
				setAynchronousMethodsSupported(aynchronousMethodsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "SnapshotTypesSupported"))
			{
				Array<Uint16> snapshotTypesSupportedValue;
				property.getValue().get(snapshotTypesSupportedValue);
				setSnapshotTypesSupported(snapshotTypesSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_VirtualSystemSnapshotServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VirtualSystemSnapshotServiceCapabilities");
	_generation = Uint64(0);
	_synchronousMethodsSupported.clear();
	_aynchronousMethodsSupported.clear();
	_snapshotTypesSupported.clear();
	
	return false;
}

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VirtualSystemSnapshotServiceCapabilities::validateInstance()
{
	return true;
}

