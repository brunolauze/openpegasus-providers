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


UNIX_CommonDatabaseCapabilities::UNIX_CommonDatabaseCapabilities(void)
{
}

UNIX_CommonDatabaseCapabilities::~UNIX_CommonDatabaseCapabilities(void)
{
}

Boolean UNIX_CommonDatabaseCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CommonDatabaseCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_CommonDatabaseCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_CommonDatabaseCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CommonDatabaseCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_CommonDatabaseCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_CommonDatabaseCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CommonDatabaseCapabilities::getDescription() const
{
	return _description;
}

void UNIX_CommonDatabaseCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_CommonDatabaseCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CommonDatabaseCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_CommonDatabaseCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_CommonDatabaseCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_CommonDatabaseCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_CommonDatabaseCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_CommonDatabaseCapabilities::getRecoverabilityOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERABILITY_OPTIONS, getRecoverabilityOptions());
	return true;
}

Array<Uint16> UNIX_CommonDatabaseCapabilities::getRecoverabilityOptions() const
{
	return _recoverabilityOptions;
}

void UNIX_CommonDatabaseCapabilities::setRecoverabilityOptions(Array<Uint16> &value)
{
	_recoverabilityOptions = value;
}

Boolean UNIX_CommonDatabaseCapabilities::getOtherRecoverabilityOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RECOVERABILITY_OPTIONS, getOtherRecoverabilityOptions());
	return true;
}

Array<String> UNIX_CommonDatabaseCapabilities::getOtherRecoverabilityOptions() const
{
	return _otherRecoverabilityOptions;
}

void UNIX_CommonDatabaseCapabilities::setOtherRecoverabilityOptions(Array<String> &value)
{
	_otherRecoverabilityOptions = value;
}


void UNIX_CommonDatabaseCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CommonDatabaseCapabilities");
	_generation = Uint64(0);
	_recoverabilityOptions.clear();
	_otherRecoverabilityOptions.clear();

}

Boolean UNIX_CommonDatabaseCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RecoverabilityOptions"))
			{
				Array<Uint16> recoverabilityOptionsValue;
				property.getValue().get(recoverabilityOptionsValue);
				setRecoverabilityOptions(recoverabilityOptionsValue);
			}
			else if (String::equal(property.getName().getString(), "OtherRecoverabilityOptions"))
			{
				Array<String> otherRecoverabilityOptionsValue;
				property.getValue().get(otherRecoverabilityOptionsValue);
				setOtherRecoverabilityOptions(otherRecoverabilityOptionsValue);
			}
	}
	return true;
}

Uint16 UNIX_CommonDatabaseCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_CommonDatabaseCapabilities::initialize()
{
	return false;
}

Boolean UNIX_CommonDatabaseCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("CommonDatabaseCapabilities");
	_generation = Uint64(0);
	_recoverabilityOptions.clear();
	_otherRecoverabilityOptions.clear();
	
	return false;
}

Boolean UNIX_CommonDatabaseCapabilities::finalize()
{
	return false;
}


Boolean UNIX_CommonDatabaseCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CommonDatabaseCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CommonDatabaseCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CommonDatabaseCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CommonDatabaseCapabilities::validateInstance()
{
	return true;
}

