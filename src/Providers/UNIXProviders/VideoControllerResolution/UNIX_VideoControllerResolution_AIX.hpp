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


UNIX_VideoControllerResolution::UNIX_VideoControllerResolution(void)
{
}

UNIX_VideoControllerResolution::~UNIX_VideoControllerResolution(void)
{
}

Boolean UNIX_VideoControllerResolution::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VideoControllerResolution::getInstanceID() const
{
	return _instanceID;
}

void UNIX_VideoControllerResolution::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_VideoControllerResolution::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VideoControllerResolution::getCaption() const
{
	return _caption;
}

void UNIX_VideoControllerResolution::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_VideoControllerResolution::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VideoControllerResolution::getDescription() const
{
	return _description;
}

void UNIX_VideoControllerResolution::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_VideoControllerResolution::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VideoControllerResolution::getElementName() const
{
	return _elementName;
}

void UNIX_VideoControllerResolution::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_VideoControllerResolution::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_VideoControllerResolution::getGeneration() const
{
	return _generation;
}

void UNIX_VideoControllerResolution::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_VideoControllerResolution::getSettingID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTING_ID, getSettingID());
	return true;
}

String UNIX_VideoControllerResolution::getSettingID() const
{
	return _settingID;
}

void UNIX_VideoControllerResolution::setSettingID(String &value)
{
	_settingID = value;
}

Boolean UNIX_VideoControllerResolution::getHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HORIZONTAL_RESOLUTION, getHorizontalResolution());
	return true;
}

Uint32 UNIX_VideoControllerResolution::getHorizontalResolution() const
{
	return _horizontalResolution;
}

void UNIX_VideoControllerResolution::setHorizontalResolution(Uint32 &value)
{
	_horizontalResolution = value;
}

Boolean UNIX_VideoControllerResolution::getVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERTICAL_RESOLUTION, getVerticalResolution());
	return true;
}

Uint32 UNIX_VideoControllerResolution::getVerticalResolution() const
{
	return _verticalResolution;
}

void UNIX_VideoControllerResolution::setVerticalResolution(Uint32 &value)
{
	_verticalResolution = value;
}

Boolean UNIX_VideoControllerResolution::getRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REFRESH_RATE, getRefreshRate());
	return true;
}

Uint32 UNIX_VideoControllerResolution::getRefreshRate() const
{
	return _refreshRate;
}

void UNIX_VideoControllerResolution::setRefreshRate(Uint32 &value)
{
	_refreshRate = value;
}

Boolean UNIX_VideoControllerResolution::getMinRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_REFRESH_RATE, getMinRefreshRate());
	return true;
}

Uint32 UNIX_VideoControllerResolution::getMinRefreshRate() const
{
	return _minRefreshRate;
}

void UNIX_VideoControllerResolution::setMinRefreshRate(Uint32 &value)
{
	_minRefreshRate = value;
}

Boolean UNIX_VideoControllerResolution::getMaxRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_REFRESH_RATE, getMaxRefreshRate());
	return true;
}

Uint32 UNIX_VideoControllerResolution::getMaxRefreshRate() const
{
	return _maxRefreshRate;
}

void UNIX_VideoControllerResolution::setMaxRefreshRate(Uint32 &value)
{
	_maxRefreshRate = value;
}

Boolean UNIX_VideoControllerResolution::getScanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_MODE, getScanMode());
	return true;
}

Uint16 UNIX_VideoControllerResolution::getScanMode() const
{
	return _scanMode;
}

void UNIX_VideoControllerResolution::setScanMode(Uint16 &value)
{
	_scanMode = value;
}

Boolean UNIX_VideoControllerResolution::getNumberOfColors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_COLORS, getNumberOfColors());
	return true;
}

Uint64 UNIX_VideoControllerResolution::getNumberOfColors() const
{
	return _numberOfColors;
}

void UNIX_VideoControllerResolution::setNumberOfColors(Uint64 &value)
{
	_numberOfColors = value;
}


void UNIX_VideoControllerResolution::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VideoControllerResolution");
	_generation = Uint64(0);
	_settingID = String ("");
	_horizontalResolution = Uint32(0);
	_verticalResolution = Uint32(0);
	_refreshRate = Uint32(0);
	_minRefreshRate = Uint32(0);
	_maxRefreshRate = Uint32(0);
	_scanMode = Uint16(0);
	_numberOfColors = Uint64(0);

}

Boolean UNIX_VideoControllerResolution::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NumberOfColors"))
			{
				Uint64 numberOfColorsValue;
				property.getValue().get(numberOfColorsValue);
				setNumberOfColors(numberOfColorsValue);
			}
	}
	return true;
}

Uint32 UNIX_VideoControllerResolution::invokeVerifyOKToApplyToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method VerifyOKToApplyToMSE */
	
	
	
	return returnValue;
}

Uint32 UNIX_VideoControllerResolution::invokeApplyToMSE(
		CIMInstance &inMSE,
		CIMDateTime &inTimeToApply,
		CIMDateTime &inMustBeCompletedBy
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ApplyToMSE */
	
	
	
	return returnValue;
}

Uint32 UNIX_VideoControllerResolution::invokeVerifyOKToApplyToCollection(
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

Uint32 UNIX_VideoControllerResolution::invokeApplyToCollection(
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

Uint32 UNIX_VideoControllerResolution::invokeVerifyOKToApplyIncrementalChangeToMSE(
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

Uint32 UNIX_VideoControllerResolution::invokeApplyIncrementalChangeToMSE(
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

Uint32 UNIX_VideoControllerResolution::invokeVerifyOKToApplyIncrementalChangeToCollection(
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

Uint32 UNIX_VideoControllerResolution::invokeApplyIncrementalChangeToCollection(
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


Boolean UNIX_VideoControllerResolution::initialize()
{
	return false;
}

Boolean UNIX_VideoControllerResolution::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("VideoControllerResolution");
	_generation = Uint64(0);
	_settingID = String ("");
	_horizontalResolution = Uint32(0);
	_verticalResolution = Uint32(0);
	_refreshRate = Uint32(0);
	_minRefreshRate = Uint32(0);
	_maxRefreshRate = Uint32(0);
	_scanMode = Uint16(0);
	_numberOfColors = Uint64(0);
	
	return false;
}

Boolean UNIX_VideoControllerResolution::finalize()
{
	return false;
}


Boolean UNIX_VideoControllerResolution::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_VideoControllerResolution::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoControllerResolution::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoControllerResolution::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_VideoControllerResolution::validateInstance()
{
	return true;
}

