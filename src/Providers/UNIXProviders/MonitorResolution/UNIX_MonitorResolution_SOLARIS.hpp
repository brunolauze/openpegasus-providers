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


UNIX_MonitorResolution::UNIX_MonitorResolution(void)
{
}

UNIX_MonitorResolution::~UNIX_MonitorResolution(void)
{
}

Boolean UNIX_MonitorResolution::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MonitorResolution::getInstanceID() const
{
	return _instanceID;
}

void UNIX_MonitorResolution::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_MonitorResolution::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MonitorResolution::getCaption() const
{
	return _caption;
}

void UNIX_MonitorResolution::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_MonitorResolution::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MonitorResolution::getDescription() const
{
	return _description;
}

void UNIX_MonitorResolution::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_MonitorResolution::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MonitorResolution::getElementName() const
{
	return _elementName;
}

void UNIX_MonitorResolution::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_MonitorResolution::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_MonitorResolution::getGeneration() const
{
	return _generation;
}

void UNIX_MonitorResolution::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_MonitorResolution::getSettingID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTING_ID, getSettingID());
	return true;
}

String UNIX_MonitorResolution::getSettingID() const
{
	return _settingID;
}

void UNIX_MonitorResolution::setSettingID(String &value)
{
	_settingID = value;
}

Boolean UNIX_MonitorResolution::getHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HORIZONTAL_RESOLUTION, getHorizontalResolution());
	return true;
}

Uint32 UNIX_MonitorResolution::getHorizontalResolution() const
{
	return _horizontalResolution;
}

void UNIX_MonitorResolution::setHorizontalResolution(Uint32 &value)
{
	_horizontalResolution = value;
}

Boolean UNIX_MonitorResolution::getVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERTICAL_RESOLUTION, getVerticalResolution());
	return true;
}

Uint32 UNIX_MonitorResolution::getVerticalResolution() const
{
	return _verticalResolution;
}

void UNIX_MonitorResolution::setVerticalResolution(Uint32 &value)
{
	_verticalResolution = value;
}

Boolean UNIX_MonitorResolution::getRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REFRESH_RATE, getRefreshRate());
	return true;
}

Uint32 UNIX_MonitorResolution::getRefreshRate() const
{
	return _refreshRate;
}

void UNIX_MonitorResolution::setRefreshRate(Uint32 &value)
{
	_refreshRate = value;
}

Boolean UNIX_MonitorResolution::getMinRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_REFRESH_RATE, getMinRefreshRate());
	return true;
}

Uint32 UNIX_MonitorResolution::getMinRefreshRate() const
{
	return _minRefreshRate;
}

void UNIX_MonitorResolution::setMinRefreshRate(Uint32 &value)
{
	_minRefreshRate = value;
}

Boolean UNIX_MonitorResolution::getMaxRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_REFRESH_RATE, getMaxRefreshRate());
	return true;
}

Uint32 UNIX_MonitorResolution::getMaxRefreshRate() const
{
	return _maxRefreshRate;
}

void UNIX_MonitorResolution::setMaxRefreshRate(Uint32 &value)
{
	_maxRefreshRate = value;
}

Boolean UNIX_MonitorResolution::getScanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_MODE, getScanMode());
	return true;
}

Uint16 UNIX_MonitorResolution::getScanMode() const
{
	return _scanMode;
}

void UNIX_MonitorResolution::setScanMode(Uint16 &value)
{
	_scanMode = value;
}


void UNIX_MonitorResolution::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MonitorResolution");
	_generation = Uint64(0);
	_settingID = String ("");
	_horizontalResolution = Uint32(0);
	_verticalResolution = Uint32(0);
	_refreshRate = Uint32(0);
	_minRefreshRate = Uint32(0);
	_maxRefreshRate = Uint32(0);
	_scanMode = Uint16(0);

}

Boolean UNIX_MonitorResolution::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SettingID"))
			{
				String settingIDValue;
				property.getValue().get(settingIDValue);
				setSettingID(settingIDValue);
			}
			else if (String::equal(property.getName().getString(), "HorizontalResolution"))
			{
				Uint32 horizontalResolutionValue;
				property.getValue().get(horizontalResolutionValue);
				setHorizontalResolution(horizontalResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "VerticalResolution"))
			{
				Uint32 verticalResolutionValue;
				property.getValue().get(verticalResolutionValue);
				setVerticalResolution(verticalResolutionValue);
			}
			else if (String::equal(property.getName().getString(), "RefreshRate"))
			{
				Uint32 refreshRateValue;
				property.getValue().get(refreshRateValue);
				setRefreshRate(refreshRateValue);
			}
			else if (String::equal(property.getName().getString(), "MinRefreshRate"))
			{
				Uint32 minRefreshRateValue;
				property.getValue().get(minRefreshRateValue);
				setMinRefreshRate(minRefreshRateValue);
			}
			else if (String::equal(property.getName().getString(), "MaxRefreshRate"))
			{
				Uint32 maxRefreshRateValue;
				property.getValue().get(maxRefreshRateValue);
				setMaxRefreshRate(maxRefreshRateValue);
			}
			else if (String::equal(property.getName().getString(), "ScanMode"))
			{
				Uint16 scanModeValue;
				property.getValue().get(scanModeValue);
				setScanMode(scanModeValue);
			}
	}
	return true;
}

Uint32 UNIX_MonitorResolution::invokeVerifyOKToApplyToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method VerifyOKToApplyToMSE */
	
	
	
	return returnValue;
}

Uint32 UNIX_MonitorResolution::invokeApplyToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ApplyToMSE */
	
	
	
	return returnValue;
}

Uint32 UNIX_MonitorResolution::invokeVerifyOKToApplyToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inCanNotApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method VerifyOKToApplyToCollection */
	
	
	
	return returnValue;
}

Uint32 UNIX_MonitorResolution::invokeApplyToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		Boolean &inContinueOnError,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inCanNotApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ApplyToCollection */
	
	
	
	return returnValue;
}

Uint32 UNIX_MonitorResolution::invokeVerifyOKToApplyIncrementalChangeToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method VerifyOKToApplyIncrementalChangeToMSE */
	
	
	
	return returnValue;
}

Uint32 UNIX_MonitorResolution::invokeApplyIncrementalChangeToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ApplyIncrementalChangeToMSE */
	
	
	
	return returnValue;
}

Uint32 UNIX_MonitorResolution::invokeVerifyOKToApplyIncrementalChangeToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply,
		Array<String> &inCanNotApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method VerifyOKToApplyIncrementalChangeToCollection */
	
	
	
	return returnValue;
}

Uint32 UNIX_MonitorResolution::invokeApplyIncrementalChangeToCollection(
		CIMInstance &inCollection,
		CIMDateTime &inTimeToApply,
		Boolean &inContinueOnError,
		CIMDateTime &inMustBeCompletedBy,
		Array<String> &inPropertiesToApply,
		Array<String> &inCanNotApply
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ApplyIncrementalChangeToCollection */
	
	
	
	return returnValue;
}


Boolean UNIX_MonitorResolution::initialize()
{
	return false;
}

Boolean UNIX_MonitorResolution::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("MonitorResolution");
	_generation = Uint64(0);
	_settingID = String ("");
	_horizontalResolution = Uint32(0);
	_verticalResolution = Uint32(0);
	_refreshRate = Uint32(0);
	_minRefreshRate = Uint32(0);
	_maxRefreshRate = Uint32(0);
	_scanMode = Uint16(0);
	
	return false;
}

Boolean UNIX_MonitorResolution::finalize()
{
	return false;
}


Boolean UNIX_MonitorResolution::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String settingIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SETTING_ID)) settingIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSettingID(), settingIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_MonitorResolution::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MonitorResolution::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MonitorResolution::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MonitorResolution::validateInstance()
{
	return true;
}

