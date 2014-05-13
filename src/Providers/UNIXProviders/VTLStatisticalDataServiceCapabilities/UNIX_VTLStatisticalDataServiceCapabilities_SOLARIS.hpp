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


UNIX_VTLStatisticalDataServiceCapabilities::UNIX_VTLStatisticalDataServiceCapabilities(void)
{
}

UNIX_VTLStatisticalDataServiceCapabilities::~UNIX_VTLStatisticalDataServiceCapabilities(void)
{
}

Boolean UNIX_VTLStatisticalDataServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VTLStatisticalDataServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VTLStatisticalDataServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VTLStatisticalDataServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VTLStatisticalDataServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_VTLStatisticalDataServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VTLStatisticalDataServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VTLStatisticalDataServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_VTLStatisticalDataServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VTLStatisticalDataServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VTLStatisticalDataServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_VTLStatisticalDataServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VTLStatisticalDataServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VTLStatisticalDataServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_VTLStatisticalDataServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VTLStatisticalDataServiceCapabilities::getSupportedSyncActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNC_ACTIONS, getSupportedSyncActions());
	return true;
}

Array<Uint16> UNIX_VTLStatisticalDataServiceCapabilities::getSupportedSyncActions() const
{
	return _supportedSyncActions;
}

void UNIX_VTLStatisticalDataServiceCapabilities::setSupportedSyncActions(Array<Uint16> &value)
{
	_supportedSyncActions = value;
}

Boolean UNIX_VTLStatisticalDataServiceCapabilities::getSupportedAsyncActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNC_ACTIONS, getSupportedAsyncActions());
	return true;
}

Array<Uint16> UNIX_VTLStatisticalDataServiceCapabilities::getSupportedAsyncActions() const
{
	return _supportedAsyncActions;
}

void UNIX_VTLStatisticalDataServiceCapabilities::setSupportedAsyncActions(Array<Uint16> &value)
{
	_supportedAsyncActions = value;
}


void UNIX_VTLStatisticalDataServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VTLStatisticalDataServiceCapabilities");
	_generation = Uint64(0);
	_supportedSyncActions.clear();
	_supportedAsyncActions.clear();

}

Boolean UNIX_VTLStatisticalDataServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportedSyncActions"))
			{
				Array<Uint16> supportedSyncActionsValue;
				property.getValue().get(supportedSyncActionsValue);
				setSupportedSyncActions(supportedSyncActionsValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedAsyncActions"))
			{
				Array<Uint16> supportedAsyncActionsValue;
				property.getValue().get(supportedAsyncActionsValue);
				setSupportedAsyncActions(supportedAsyncActionsValue);
			}
	}
	return true;
}

Uint16 UNIX_VTLStatisticalDataServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_VTLStatisticalDataServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_VTLStatisticalDataServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VTLStatisticalDataServiceCapabilities");
	_generation = Uint64(0);
	_supportedSyncActions.clear();
	_supportedAsyncActions.clear();
	
	return false;
}

Boolean UNIX_VTLStatisticalDataServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_VTLStatisticalDataServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VTLStatisticalDataServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VTLStatisticalDataServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VTLStatisticalDataServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VTLStatisticalDataServiceCapabilities::validateInstance()
{
	return true;
}

