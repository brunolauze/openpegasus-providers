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


UNIX_BlockStatisticsCapabilities::UNIX_BlockStatisticsCapabilities(void)
{
}

UNIX_BlockStatisticsCapabilities::~UNIX_BlockStatisticsCapabilities(void)
{
}

Boolean UNIX_BlockStatisticsCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BlockStatisticsCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BlockStatisticsCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BlockStatisticsCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BlockStatisticsCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_BlockStatisticsCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BlockStatisticsCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BlockStatisticsCapabilities::getDescription() const
{
	return _description;
}

void UNIX_BlockStatisticsCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BlockStatisticsCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BlockStatisticsCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_BlockStatisticsCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BlockStatisticsCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BlockStatisticsCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_BlockStatisticsCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BlockStatisticsCapabilities::getElementTypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_TYPES_SUPPORTED, getElementTypesSupported());
	return true;
}

Array<Uint16> UNIX_BlockStatisticsCapabilities::getElementTypesSupported() const
{
	return _elementTypesSupported;
}

void UNIX_BlockStatisticsCapabilities::setElementTypesSupported(Array<Uint16> &value)
{
	_elementTypesSupported = value;
}

Boolean UNIX_BlockStatisticsCapabilities::getSynchronousMethodsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYNCHRONOUS_METHODS_SUPPORTED, getSynchronousMethodsSupported());
	return true;
}

Array<Uint16> UNIX_BlockStatisticsCapabilities::getSynchronousMethodsSupported() const
{
	return _synchronousMethodsSupported;
}

void UNIX_BlockStatisticsCapabilities::setSynchronousMethodsSupported(Array<Uint16> &value)
{
	_synchronousMethodsSupported = value;
}

Boolean UNIX_BlockStatisticsCapabilities::getAsynchronousMethodsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASYNCHRONOUS_METHODS_SUPPORTED, getAsynchronousMethodsSupported());
	return true;
}

Array<Uint16> UNIX_BlockStatisticsCapabilities::getAsynchronousMethodsSupported() const
{
	return _asynchronousMethodsSupported;
}

void UNIX_BlockStatisticsCapabilities::setAsynchronousMethodsSupported(Array<Uint16> &value)
{
	_asynchronousMethodsSupported = value;
}

Boolean UNIX_BlockStatisticsCapabilities::getClockTickInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLOCK_TICK_INTERVAL, getClockTickInterval());
	return true;
}

Uint64 UNIX_BlockStatisticsCapabilities::getClockTickInterval() const
{
	return _clockTickInterval;
}

void UNIX_BlockStatisticsCapabilities::setClockTickInterval(Uint64 &value)
{
	_clockTickInterval = value;
}

Boolean UNIX_BlockStatisticsCapabilities::getSupportedFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_FEATURES, getSupportedFeatures());
	return true;
}

Array<Uint16> UNIX_BlockStatisticsCapabilities::getSupportedFeatures() const
{
	return _supportedFeatures;
}

void UNIX_BlockStatisticsCapabilities::setSupportedFeatures(Array<Uint16> &value)
{
	_supportedFeatures = value;
}

Boolean UNIX_BlockStatisticsCapabilities::getRateElementTypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_ELEMENT_TYPES_SUPPORTED, getRateElementTypesSupported());
	return true;
}

Array<Uint16> UNIX_BlockStatisticsCapabilities::getRateElementTypesSupported() const
{
	return _rateElementTypesSupported;
}

void UNIX_BlockStatisticsCapabilities::setRateElementTypesSupported(Array<Uint16> &value)
{
	_rateElementTypesSupported = value;
}


void UNIX_BlockStatisticsCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BlockStatisticsCapabilities");
	_generation = Uint64(0);
	_elementTypesSupported.clear();
	_synchronousMethodsSupported.clear();
	_asynchronousMethodsSupported.clear();
	_clockTickInterval = Uint64(0);
	_supportedFeatures.clear();
	_rateElementTypesSupported.clear();

}

Boolean UNIX_BlockStatisticsCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "ElementTypesSupported"))
			{
				Array<Uint16> elementTypesSupportedValue;
				property.getValue().get(elementTypesSupportedValue);
				setElementTypesSupported(elementTypesSupportedValue);
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
			else if (String::equal(property.getName().getString(), "ClockTickInterval"))
			{
				Uint64 clockTickIntervalValue;
				property.getValue().get(clockTickIntervalValue);
				setClockTickInterval(clockTickIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "SupportedFeatures"))
			{
				Array<Uint16> supportedFeaturesValue;
				property.getValue().get(supportedFeaturesValue);
				setSupportedFeatures(supportedFeaturesValue);
			}
			else if (String::equal(property.getName().getString(), "RateElementTypesSupported"))
			{
				Array<Uint16> rateElementTypesSupportedValue;
				property.getValue().get(rateElementTypesSupportedValue);
				setRateElementTypesSupported(rateElementTypesSupportedValue);
			}
	}
	return true;
}

Uint16 UNIX_BlockStatisticsCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_BlockStatisticsCapabilities::initialize()
{
	return false;
}

Boolean UNIX_BlockStatisticsCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BlockStatisticsCapabilities");
	_generation = Uint64(0);
	_elementTypesSupported.clear();
	_synchronousMethodsSupported.clear();
	_asynchronousMethodsSupported.clear();
	_clockTickInterval = Uint64(0);
	_supportedFeatures.clear();
	_rateElementTypesSupported.clear();
	
	return false;
}

Boolean UNIX_BlockStatisticsCapabilities::finalize()
{
	return false;
}


Boolean UNIX_BlockStatisticsCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_BlockStatisticsCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BlockStatisticsCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BlockStatisticsCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BlockStatisticsCapabilities::validateInstance()
{
	return true;
}

