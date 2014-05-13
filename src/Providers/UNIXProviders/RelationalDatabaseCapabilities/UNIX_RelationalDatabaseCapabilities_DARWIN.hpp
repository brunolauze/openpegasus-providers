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


UNIX_RelationalDatabaseCapabilities::UNIX_RelationalDatabaseCapabilities(void)
{
}

UNIX_RelationalDatabaseCapabilities::~UNIX_RelationalDatabaseCapabilities(void)
{
}

Boolean UNIX_RelationalDatabaseCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RelationalDatabaseCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_RelationalDatabaseCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_RelationalDatabaseCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RelationalDatabaseCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_RelationalDatabaseCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_RelationalDatabaseCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RelationalDatabaseCapabilities::getDescription() const
{
	return _description;
}

void UNIX_RelationalDatabaseCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_RelationalDatabaseCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RelationalDatabaseCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_RelationalDatabaseCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_RelationalDatabaseCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_RelationalDatabaseCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_RelationalDatabaseCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_RelationalDatabaseCapabilities::getRecoverabilityOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERABILITY_OPTIONS, getRecoverabilityOptions());
	return true;
}

Array<Uint16> UNIX_RelationalDatabaseCapabilities::getRecoverabilityOptions() const
{
	return _recoverabilityOptions;
}

void UNIX_RelationalDatabaseCapabilities::setRecoverabilityOptions(Array<Uint16> &value)
{
	_recoverabilityOptions = value;
}

Boolean UNIX_RelationalDatabaseCapabilities::getOtherRecoverabilityOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RECOVERABILITY_OPTIONS, getOtherRecoverabilityOptions());
	return true;
}

Array<String> UNIX_RelationalDatabaseCapabilities::getOtherRecoverabilityOptions() const
{
	return _otherRecoverabilityOptions;
}

void UNIX_RelationalDatabaseCapabilities::setOtherRecoverabilityOptions(Array<String> &value)
{
	_otherRecoverabilityOptions = value;
}

Boolean UNIX_RelationalDatabaseCapabilities::getSupportedDBOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_D_B_OPERATIONS, getSupportedDBOperations());
	return true;
}

Array<Uint16> UNIX_RelationalDatabaseCapabilities::getSupportedDBOperations() const
{
	return _supportedDBOperations;
}

void UNIX_RelationalDatabaseCapabilities::setSupportedDBOperations(Array<Uint16> &value)
{
	_supportedDBOperations = value;
}

Boolean UNIX_RelationalDatabaseCapabilities::getSupportedTableOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_TABLE_OPERATIONS, getSupportedTableOperations());
	return true;
}

Array<Uint16> UNIX_RelationalDatabaseCapabilities::getSupportedTableOperations() const
{
	return _supportedTableOperations;
}

void UNIX_RelationalDatabaseCapabilities::setSupportedTableOperations(Array<Uint16> &value)
{
	_supportedTableOperations = value;
}

Boolean UNIX_RelationalDatabaseCapabilities::getSupportedColumnOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_COLUMN_OPERATIONS, getSupportedColumnOperations());
	return true;
}

Array<Uint16> UNIX_RelationalDatabaseCapabilities::getSupportedColumnOperations() const
{
	return _supportedColumnOperations;
}

void UNIX_RelationalDatabaseCapabilities::setSupportedColumnOperations(Array<Uint16> &value)
{
	_supportedColumnOperations = value;
}


void UNIX_RelationalDatabaseCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RelationalDatabaseCapabilities");
	_generation = Uint64(0);
	_recoverabilityOptions.clear();
	_otherRecoverabilityOptions.clear();
	_supportedDBOperations.clear();
	_supportedTableOperations.clear();
	_supportedColumnOperations.clear();

}

Boolean UNIX_RelationalDatabaseCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedDBOperations"))
			{
				Array<Uint16> supportedDBOperationsValue;
				property.getValue().get(supportedDBOperationsValue);
				setSupportedDBOperations(supportedDBOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedTableOperations"))
			{
				Array<Uint16> supportedTableOperationsValue;
				property.getValue().get(supportedTableOperationsValue);
				setSupportedTableOperations(supportedTableOperationsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedColumnOperations"))
			{
				Array<Uint16> supportedColumnOperationsValue;
				property.getValue().get(supportedColumnOperationsValue);
				setSupportedColumnOperations(supportedColumnOperationsValue);
			}
	}
	return true;
}

Uint16 UNIX_RelationalDatabaseCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_RelationalDatabaseCapabilities::initialize()
{
	return false;
}

Boolean UNIX_RelationalDatabaseCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RelationalDatabaseCapabilities");
	_generation = Uint64(0);
	_recoverabilityOptions.clear();
	_otherRecoverabilityOptions.clear();
	_supportedDBOperations.clear();
	_supportedTableOperations.clear();
	_supportedColumnOperations.clear();
	
	return false;
}

Boolean UNIX_RelationalDatabaseCapabilities::finalize()
{
	return false;
}


Boolean UNIX_RelationalDatabaseCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_RelationalDatabaseCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RelationalDatabaseCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RelationalDatabaseCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RelationalDatabaseCapabilities::validateInstance()
{
	return true;
}

