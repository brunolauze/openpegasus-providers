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


UNIX_DiskDriveView::UNIX_DiskDriveView(void)
{
}

UNIX_DiskDriveView::~UNIX_DiskDriveView(void)
{
}

Boolean UNIX_DiskDriveView::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiskDriveView::getInstanceID() const
{
	return _instanceID;
}

void UNIX_DiskDriveView::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_DiskDriveView::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiskDriveView::getCaption() const
{
	return _caption;
}

void UNIX_DiskDriveView::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_DiskDriveView::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiskDriveView::getDescription() const
{
	return _description;
}

void UNIX_DiskDriveView::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_DiskDriveView::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiskDriveView::getElementName() const
{
	return _elementName;
}

void UNIX_DiskDriveView::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_DiskDriveView::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_DiskDriveView::getGeneration() const
{
	return _generation;
}

void UNIX_DiskDriveView::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_DiskDriveView::getSESystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_E_SYSTEM_CREATION_CLASS_NAME, getSESystemCreationClassName());
	return true;
}

String UNIX_DiskDriveView::getSESystemCreationClassName() const
{
	return _sESystemCreationClassName;
}

void UNIX_DiskDriveView::setSESystemCreationClassName(String &value)
{
	_sESystemCreationClassName = value;
}

Boolean UNIX_DiskDriveView::getSESystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_E_SYSTEM_NAME, getSESystemName());
	return true;
}

String UNIX_DiskDriveView::getSESystemName() const
{
	return _sESystemName;
}

void UNIX_DiskDriveView::setSESystemName(String &value)
{
	_sESystemName = value;
}

Boolean UNIX_DiskDriveView::getSECreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_E_CREATION_CLASS_NAME, getSECreationClassName());
	return true;
}

String UNIX_DiskDriveView::getSECreationClassName() const
{
	return _sECreationClassName;
}

void UNIX_DiskDriveView::setSECreationClassName(String &value)
{
	_sECreationClassName = value;
}

Boolean UNIX_DiskDriveView::getSEDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_E_DEVICE_ID, getSEDeviceID());
	return true;
}

String UNIX_DiskDriveView::getSEDeviceID() const
{
	return _sEDeviceID;
}

void UNIX_DiskDriveView::setSEDeviceID(String &value)
{
	_sEDeviceID = value;
}

Boolean UNIX_DiskDriveView::getSEBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_E_BLOCK_SIZE, getSEBlockSize());
	return true;
}

Uint64 UNIX_DiskDriveView::getSEBlockSize() const
{
	return _sEBlockSize;
}

void UNIX_DiskDriveView::setSEBlockSize(Uint64 &value)
{
	_sEBlockSize = value;
}

Boolean UNIX_DiskDriveView::getSENumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_E_NUMBER_OF_BLOCKS, getSENumberOfBlocks());
	return true;
}

Uint64 UNIX_DiskDriveView::getSENumberOfBlocks() const
{
	return _sENumberOfBlocks;
}

void UNIX_DiskDriveView::setSENumberOfBlocks(Uint64 &value)
{
	_sENumberOfBlocks = value;
}

Boolean UNIX_DiskDriveView::getSEConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_E_CONSUMABLE_BLOCKS, getSEConsumableBlocks());
	return true;
}

Uint64 UNIX_DiskDriveView::getSEConsumableBlocks() const
{
	return _sEConsumableBlocks;
}

void UNIX_DiskDriveView::setSEConsumableBlocks(Uint64 &value)
{
	_sEConsumableBlocks = value;
}

Boolean UNIX_DiskDriveView::getSEExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_E_EXTENT_STATUS, getSEExtentStatus());
	return true;
}

Array<Uint16> UNIX_DiskDriveView::getSEExtentStatus() const
{
	return _sEExtentStatus;
}

void UNIX_DiskDriveView::setSEExtentStatus(Array<Uint16> &value)
{
	_sEExtentStatus = value;
}

Boolean UNIX_DiskDriveView::getSEOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_E_OPERATIONAL_STATUS, getSEOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DiskDriveView::getSEOperationalStatus() const
{
	return _sEOperationalStatus;
}

void UNIX_DiskDriveView::setSEOperationalStatus(Array<Uint16> &value)
{
	_sEOperationalStatus = value;
}

Boolean UNIX_DiskDriveView::getDDSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_D_SYSTEM_CREATION_CLASS_NAME, getDDSystemCreationClassName());
	return true;
}

String UNIX_DiskDriveView::getDDSystemCreationClassName() const
{
	return _dDSystemCreationClassName;
}

void UNIX_DiskDriveView::setDDSystemCreationClassName(String &value)
{
	_dDSystemCreationClassName = value;
}

Boolean UNIX_DiskDriveView::getDDSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_D_SYSTEM_NAME, getDDSystemName());
	return true;
}

String UNIX_DiskDriveView::getDDSystemName() const
{
	return _dDSystemName;
}

void UNIX_DiskDriveView::setDDSystemName(String &value)
{
	_dDSystemName = value;
}

Boolean UNIX_DiskDriveView::getDDCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_D_CREATION_CLASS_NAME, getDDCreationClassName());
	return true;
}

String UNIX_DiskDriveView::getDDCreationClassName() const
{
	return _dDCreationClassName;
}

void UNIX_DiskDriveView::setDDCreationClassName(String &value)
{
	_dDCreationClassName = value;
}

Boolean UNIX_DiskDriveView::getDDDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_D_DEVICE_ID, getDDDeviceID());
	return true;
}

String UNIX_DiskDriveView::getDDDeviceID() const
{
	return _dDDeviceID;
}

void UNIX_DiskDriveView::setDDDeviceID(String &value)
{
	_dDDeviceID = value;
}

Boolean UNIX_DiskDriveView::getDDName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_D_NAME, getDDName());
	return true;
}

String UNIX_DiskDriveView::getDDName() const
{
	return _dDName;
}

void UNIX_DiskDriveView::setDDName(String &value)
{
	_dDName = value;
}

Boolean UNIX_DiskDriveView::getDDOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_D_OPERATIONAL_STATUS, getDDOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DiskDriveView::getDDOperationalStatus() const
{
	return _dDOperationalStatus;
}

void UNIX_DiskDriveView::setDDOperationalStatus(Array<Uint16> &value)
{
	_dDOperationalStatus = value;
}

Boolean UNIX_DiskDriveView::getPPCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_P_CREATION_CLASS_NAME, getPPCreationClassName());
	return true;
}

String UNIX_DiskDriveView::getPPCreationClassName() const
{
	return _pPCreationClassName;
}

void UNIX_DiskDriveView::setPPCreationClassName(String &value)
{
	_pPCreationClassName = value;
}

Boolean UNIX_DiskDriveView::getPPTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_P_TAG, getPPTag());
	return true;
}

String UNIX_DiskDriveView::getPPTag() const
{
	return _pPTag;
}

void UNIX_DiskDriveView::setPPTag(String &value)
{
	_pPTag = value;
}

Boolean UNIX_DiskDriveView::getPPManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_P_MANUFACTURER, getPPManufacturer());
	return true;
}

String UNIX_DiskDriveView::getPPManufacturer() const
{
	return _pPManufacturer;
}

void UNIX_DiskDriveView::setPPManufacturer(String &value)
{
	_pPManufacturer = value;
}

Boolean UNIX_DiskDriveView::getPPModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_P_MODEL, getPPModel());
	return true;
}

String UNIX_DiskDriveView::getPPModel() const
{
	return _pPModel;
}

void UNIX_DiskDriveView::setPPModel(String &value)
{
	_pPModel = value;
}

Boolean UNIX_DiskDriveView::getSIInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_I_INSTANCE_ID, getSIInstanceID());
	return true;
}

String UNIX_DiskDriveView::getSIInstanceID() const
{
	return _sIInstanceID;
}

void UNIX_DiskDriveView::setSIInstanceID(String &value)
{
	_sIInstanceID = value;
}

Boolean UNIX_DiskDriveView::getSIVersionString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_I_VERSION_STRING, getSIVersionString());
	return true;
}

String UNIX_DiskDriveView::getSIVersionString() const
{
	return _sIVersionString;
}

void UNIX_DiskDriveView::setSIVersionString(String &value)
{
	_sIVersionString = value;
}

Boolean UNIX_DiskDriveView::getDDLocationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_D_LOCATION_INDICATOR, getDDLocationIndicator());
	return true;
}

Uint16 UNIX_DiskDriveView::getDDLocationIndicator() const
{
	return _dDLocationIndicator;
}

void UNIX_DiskDriveView::setDDLocationIndicator(Uint16 &value)
{
	_dDLocationIndicator = value;
}

Boolean UNIX_DiskDriveView::getPPSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_P_SERIAL_NUMBER, getPPSerialNumber());
	return true;
}

String UNIX_DiskDriveView::getPPSerialNumber() const
{
	return _pPSerialNumber;
}

void UNIX_DiskDriveView::setPPSerialNumber(String &value)
{
	_pPSerialNumber = value;
}

Boolean UNIX_DiskDriveView::getPPPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_P_PART_NUMBER, getPPPartNumber());
	return true;
}

String UNIX_DiskDriveView::getPPPartNumber() const
{
	return _pPPartNumber;
}

void UNIX_DiskDriveView::setPPPartNumber(String &value)
{
	_pPPartNumber = value;
}

Boolean UNIX_DiskDriveView::getSIManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_I_MANUFACTURER, getSIManufacturer());
	return true;
}

String UNIX_DiskDriveView::getSIManufacturer() const
{
	return _sIManufacturer;
}

void UNIX_DiskDriveView::setSIManufacturer(String &value)
{
	_sIManufacturer = value;
}

Boolean UNIX_DiskDriveView::getSIBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_IBUILD_NUMBER, getSIBuildNumber());
	return true;
}

Uint16 UNIX_DiskDriveView::getSIBuildNumber() const
{
	return _sIBuildNumber;
}

void UNIX_DiskDriveView::setSIBuildNumber(Uint16 &value)
{
	_sIBuildNumber = value;
}

Boolean UNIX_DiskDriveView::getSIMajorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_I_MAJOR_VERSION, getSIMajorVersion());
	return true;
}

Uint16 UNIX_DiskDriveView::getSIMajorVersion() const
{
	return _sIMajorVersion;
}

void UNIX_DiskDriveView::setSIMajorVersion(Uint16 &value)
{
	_sIMajorVersion = value;
}

Boolean UNIX_DiskDriveView::getSIRevisionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_I_REVISION_NUMBER, getSIRevisionNumber());
	return true;
}

Uint16 UNIX_DiskDriveView::getSIRevisionNumber() const
{
	return _sIRevisionNumber;
}

void UNIX_DiskDriveView::setSIRevisionNumber(Uint16 &value)
{
	_sIRevisionNumber = value;
}

Boolean UNIX_DiskDriveView::getSIMinorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_I_MINOR_VERSION, getSIMinorVersion());
	return true;
}

Uint16 UNIX_DiskDriveView::getSIMinorVersion() const
{
	return _sIMinorVersion;
}

void UNIX_DiskDriveView::setSIMinorVersion(Uint16 &value)
{
	_sIMinorVersion = value;
}


void UNIX_DiskDriveView::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiskDriveView");
	_generation = Uint64(0);
	_sESystemCreationClassName = String ("");
	_sESystemName = String ("");
	_sECreationClassName = String ("");
	_sEDeviceID = String ("");
	_sEBlockSize = Uint64(0);
	_sENumberOfBlocks = Uint64(0);
	_sEConsumableBlocks = Uint64(0);
	_sEExtentStatus.clear();
	_sEOperationalStatus.clear();
	_dDSystemCreationClassName = String ("");
	_dDSystemName = String ("");
	_dDCreationClassName = String ("");
	_dDDeviceID = String ("");
	_dDName = String ("");
	_dDOperationalStatus.clear();
	_pPCreationClassName = String ("");
	_pPTag = String ("");
	_pPManufacturer = String ("");
	_pPModel = String ("");
	_sIInstanceID = String ("");
	_sIVersionString = String ("");
	_dDLocationIndicator = Uint16(0);
	_pPSerialNumber = String ("");
	_pPPartNumber = String ("");
	_sIManufacturer = String ("");
	_sIBuildNumber = Uint16(0);
	_sIMajorVersion = Uint16(0);
	_sIRevisionNumber = Uint16(0);
	_sIMinorVersion = Uint16(0);

}

Boolean UNIX_DiskDriveView::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SESystemCreationClassName"))
			{
				String sESystemCreationClassNameValue;
				property.getValue().get(sESystemCreationClassNameValue);
				setSESystemCreationClassName(sESystemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SESystemName"))
			{
				String sESystemNameValue;
				property.getValue().get(sESystemNameValue);
				setSESystemName(sESystemNameValue);
			}
			else if (String::equal(property.getName().getString(), "SECreationClassName"))
			{
				String sECreationClassNameValue;
				property.getValue().get(sECreationClassNameValue);
				setSECreationClassName(sECreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SEDeviceID"))
			{
				String sEDeviceIDValue;
				property.getValue().get(sEDeviceIDValue);
				setSEDeviceID(sEDeviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "SEBlockSize"))
			{
				Uint64 sEBlockSizeValue;
				property.getValue().get(sEBlockSizeValue);
				setSEBlockSize(sEBlockSizeValue);
			}
			else if (String::equal(property.getName().getString(), "SENumberOfBlocks"))
			{
				Uint64 sENumberOfBlocksValue;
				property.getValue().get(sENumberOfBlocksValue);
				setSENumberOfBlocks(sENumberOfBlocksValue);
			}
			else if (String::equal(property.getName().getString(), "SEConsumableBlocks"))
			{
				Uint64 sEConsumableBlocksValue;
				property.getValue().get(sEConsumableBlocksValue);
				setSEConsumableBlocks(sEConsumableBlocksValue);
			}
			else if (String::equal(property.getName().getString(), "SEExtentStatus"))
			{
				Array<Uint16> sEExtentStatusValue;
				property.getValue().get(sEExtentStatusValue);
				setSEExtentStatus(sEExtentStatusValue);
			}
			else if (String::equal(property.getName().getString(), "SEOperationalStatus"))
			{
				Array<Uint16> sEOperationalStatusValue;
				property.getValue().get(sEOperationalStatusValue);
				setSEOperationalStatus(sEOperationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "DDSystemCreationClassName"))
			{
				String dDSystemCreationClassNameValue;
				property.getValue().get(dDSystemCreationClassNameValue);
				setDDSystemCreationClassName(dDSystemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "DDSystemName"))
			{
				String dDSystemNameValue;
				property.getValue().get(dDSystemNameValue);
				setDDSystemName(dDSystemNameValue);
			}
			else if (String::equal(property.getName().getString(), "DDCreationClassName"))
			{
				String dDCreationClassNameValue;
				property.getValue().get(dDCreationClassNameValue);
				setDDCreationClassName(dDCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "DDDeviceID"))
			{
				String dDDeviceIDValue;
				property.getValue().get(dDDeviceIDValue);
				setDDDeviceID(dDDeviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "DDName"))
			{
				String dDNameValue;
				property.getValue().get(dDNameValue);
				setDDName(dDNameValue);
			}
			else if (String::equal(property.getName().getString(), "DDOperationalStatus"))
			{
				Array<Uint16> dDOperationalStatusValue;
				property.getValue().get(dDOperationalStatusValue);
				setDDOperationalStatus(dDOperationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "PPCreationClassName"))
			{
				String pPCreationClassNameValue;
				property.getValue().get(pPCreationClassNameValue);
				setPPCreationClassName(pPCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "PPTag"))
			{
				String pPTagValue;
				property.getValue().get(pPTagValue);
				setPPTag(pPTagValue);
			}
			else if (String::equal(property.getName().getString(), "PPManufacturer"))
			{
				String pPManufacturerValue;
				property.getValue().get(pPManufacturerValue);
				setPPManufacturer(pPManufacturerValue);
			}
			else if (String::equal(property.getName().getString(), "PPModel"))
			{
				String pPModelValue;
				property.getValue().get(pPModelValue);
				setPPModel(pPModelValue);
			}
			else if (String::equal(property.getName().getString(), "SIInstanceID"))
			{
				String sIInstanceIDValue;
				property.getValue().get(sIInstanceIDValue);
				setSIInstanceID(sIInstanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "SIVersionString"))
			{
				String sIVersionStringValue;
				property.getValue().get(sIVersionStringValue);
				setSIVersionString(sIVersionStringValue);
			}
			else if (String::equal(property.getName().getString(), "DDLocationIndicator"))
			{
				Uint16 dDLocationIndicatorValue;
				property.getValue().get(dDLocationIndicatorValue);
				setDDLocationIndicator(dDLocationIndicatorValue);
			}
			else if (String::equal(property.getName().getString(), "PPSerialNumber"))
			{
				String pPSerialNumberValue;
				property.getValue().get(pPSerialNumberValue);
				setPPSerialNumber(pPSerialNumberValue);
			}
			else if (String::equal(property.getName().getString(), "PPPartNumber"))
			{
				String pPPartNumberValue;
				property.getValue().get(pPPartNumberValue);
				setPPPartNumber(pPPartNumberValue);
			}
			else if (String::equal(property.getName().getString(), "SIManufacturer"))
			{
				String sIManufacturerValue;
				property.getValue().get(sIManufacturerValue);
				setSIManufacturer(sIManufacturerValue);
			}
			else if (String::equal(property.getName().getString(), "SIBuildNumber"))
			{
				Uint16 sIBuildNumberValue;
				property.getValue().get(sIBuildNumberValue);
				setSIBuildNumber(sIBuildNumberValue);
			}
			else if (String::equal(property.getName().getString(), "SIMajorVersion"))
			{
				Uint16 sIMajorVersionValue;
				property.getValue().get(sIMajorVersionValue);
				setSIMajorVersion(sIMajorVersionValue);
			}
			else if (String::equal(property.getName().getString(), "SIRevisionNumber"))
			{
				Uint16 sIRevisionNumberValue;
				property.getValue().get(sIRevisionNumberValue);
				setSIRevisionNumber(sIRevisionNumberValue);
			}
			else if (String::equal(property.getName().getString(), "SIMinorVersion"))
			{
				Uint16 sIMinorVersionValue;
				property.getValue().get(sIMinorVersionValue);
				setSIMinorVersion(sIMinorVersionValue);
			}
	}
	return true;
}


Boolean UNIX_DiskDriveView::initialize()
{
	return false;
}

Boolean UNIX_DiskDriveView::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("DiskDriveView");
	_generation = Uint64(0);
	_sESystemCreationClassName = String ("");
	_sESystemName = String ("");
	_sECreationClassName = String ("");
	_sEDeviceID = String ("");
	_sEBlockSize = Uint64(0);
	_sENumberOfBlocks = Uint64(0);
	_sEConsumableBlocks = Uint64(0);
	_sEExtentStatus.clear();
	_sEOperationalStatus.clear();
	_dDSystemCreationClassName = String ("");
	_dDSystemName = String ("");
	_dDCreationClassName = String ("");
	_dDDeviceID = String ("");
	_dDName = String ("");
	_dDOperationalStatus.clear();
	_pPCreationClassName = String ("");
	_pPTag = String ("");
	_pPManufacturer = String ("");
	_pPModel = String ("");
	_sIInstanceID = String ("");
	_sIVersionString = String ("");
	_dDLocationIndicator = Uint16(0);
	_pPSerialNumber = String ("");
	_pPPartNumber = String ("");
	_sIManufacturer = String ("");
	_sIBuildNumber = Uint16(0);
	_sIMajorVersion = Uint16(0);
	_sIRevisionNumber = Uint16(0);
	_sIMinorVersion = Uint16(0);
	
	return false;
}

Boolean UNIX_DiskDriveView::finalize()
{
	return false;
}


Boolean UNIX_DiskDriveView::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String dDSystemCreationClassNameKey;
	String dDSystemNameKey;
	String dDCreationClassNameKey;
	String dDDeviceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_D_D_SYSTEM_CREATION_CLASS_NAME)) dDSystemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_D_D_SYSTEM_NAME)) dDSystemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_D_D_CREATION_CLASS_NAME)) dDCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_D_D_DEVICE_ID)) dDDeviceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getDDSystemCreationClassName(), dDSystemCreationClassNameKey)) && 
			(String::equalNoCase(getDDSystemName(), dDSystemNameKey)) && 
			(String::equalNoCase(getDDCreationClassName(), dDCreationClassNameKey)) && 
			(String::equalNoCase(getDDDeviceID(), dDDeviceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_DiskDriveView::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskDriveView::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskDriveView::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiskDriveView::validateInstance()
{
	return true;
}

