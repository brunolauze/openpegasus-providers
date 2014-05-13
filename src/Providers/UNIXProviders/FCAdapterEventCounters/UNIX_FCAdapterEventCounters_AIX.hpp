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


UNIX_FCAdapterEventCounters::UNIX_FCAdapterEventCounters(void)
{
}

UNIX_FCAdapterEventCounters::~UNIX_FCAdapterEventCounters(void)
{
}

Boolean UNIX_FCAdapterEventCounters::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCAdapterEventCounters::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FCAdapterEventCounters::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FCAdapterEventCounters::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCAdapterEventCounters::getCaption() const
{
	return _caption;
}

void UNIX_FCAdapterEventCounters::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FCAdapterEventCounters::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCAdapterEventCounters::getDescription() const
{
	return _description;
}

void UNIX_FCAdapterEventCounters::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FCAdapterEventCounters::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCAdapterEventCounters::getElementName() const
{
	return _elementName;
}

void UNIX_FCAdapterEventCounters::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FCAdapterEventCounters::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getGeneration() const
{
	return _generation;
}

void UNIX_FCAdapterEventCounters::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FCAdapterEventCounters::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FCAdapterEventCounters::getName() const
{
	return _name;
}

void UNIX_FCAdapterEventCounters::setName(String &value)
{
	_name = value;
}

Boolean UNIX_FCAdapterEventCounters::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FCAdapterEventCounters::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_FCAdapterEventCounters::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_FCAdapterEventCounters::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FCAdapterEventCounters::getSystemName() const
{
	return _systemName;
}

void UNIX_FCAdapterEventCounters::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_FCAdapterEventCounters::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_FCAdapterEventCounters::getDeviceCreationClassName() const
{
	return _deviceCreationClassName;
}

void UNIX_FCAdapterEventCounters::setDeviceCreationClassName(String &value)
{
	_deviceCreationClassName = value;
}

Boolean UNIX_FCAdapterEventCounters::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_FCAdapterEventCounters::getDeviceID() const
{
	return _deviceID;
}

void UNIX_FCAdapterEventCounters::setDeviceID(String &value)
{
	_deviceID = value;
}

Boolean UNIX_FCAdapterEventCounters::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FCAdapterEventCounters::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_FCAdapterEventCounters::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_FCAdapterEventCounters::getABTSFramesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_B_T_S_FRAMES_RECEIVED, getABTSFramesReceived());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getABTSFramesReceived() const
{
	return _aBTSFramesReceived;
}

void UNIX_FCAdapterEventCounters::setABTSFramesReceived(Uint64 &value)
{
	_aBTSFramesReceived = value;
}

Boolean UNIX_FCAdapterEventCounters::getABTSFramesSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_B_T_S_FRAMES_SENT, getABTSFramesSent());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getABTSFramesSent() const
{
	return _aBTSFramesSent;
}

void UNIX_FCAdapterEventCounters::setABTSFramesSent(Uint64 &value)
{
	_aBTSFramesSent = value;
}

Boolean UNIX_FCAdapterEventCounters::getFBSYsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_B_S_YS_RECEIVED, getFBSYsReceived());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getFBSYsReceived() const
{
	return _fBSYsReceived;
}

void UNIX_FCAdapterEventCounters::setFBSYsReceived(Uint64 &value)
{
	_fBSYsReceived = value;
}

Boolean UNIX_FCAdapterEventCounters::getPBSYsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_B_S_YS_RECEIVED, getPBSYsReceived());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getPBSYsReceived() const
{
	return _pBSYsReceived;
}

void UNIX_FCAdapterEventCounters::setPBSYsReceived(Uint64 &value)
{
	_pBSYsReceived = value;
}

Boolean UNIX_FCAdapterEventCounters::getPBSYsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_B_S_YS_SENT, getPBSYsSent());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getPBSYsSent() const
{
	return _pBSYsSent;
}

void UNIX_FCAdapterEventCounters::setPBSYsSent(Uint64 &value)
{
	_pBSYsSent = value;
}

Boolean UNIX_FCAdapterEventCounters::getFRJTsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_R_J_TS_RECEIVED, getFRJTsReceived());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getFRJTsReceived() const
{
	return _fRJTsReceived;
}

void UNIX_FCAdapterEventCounters::setFRJTsReceived(Uint64 &value)
{
	_fRJTsReceived = value;
}

Boolean UNIX_FCAdapterEventCounters::getPRJTsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_R_J_TS_RECEIVED, getPRJTsReceived());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getPRJTsReceived() const
{
	return _pRJTsReceived;
}

void UNIX_FCAdapterEventCounters::setPRJTsReceived(Uint64 &value)
{
	_pRJTsReceived = value;
}

Boolean UNIX_FCAdapterEventCounters::getPRJTsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_R_J_TS_SENT, getPRJTsSent());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getPRJTsSent() const
{
	return _pRJTsSent;
}

void UNIX_FCAdapterEventCounters::setPRJTsSent(Uint64 &value)
{
	_pRJTsSent = value;
}

Boolean UNIX_FCAdapterEventCounters::getPRLIsRejected(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_R_L_IS_REJECTED, getPRLIsRejected());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getPRLIsRejected() const
{
	return _pRLIsRejected;
}

void UNIX_FCAdapterEventCounters::setPRLIsRejected(Uint64 &value)
{
	_pRLIsRejected = value;
}

Boolean UNIX_FCAdapterEventCounters::getPRLOsRejected(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_R_L_OS_REJECTED, getPRLOsRejected());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getPRLOsRejected() const
{
	return _pRLOsRejected;
}

void UNIX_FCAdapterEventCounters::setPRLOsRejected(Uint64 &value)
{
	_pRLOsRejected = value;
}

Boolean UNIX_FCAdapterEventCounters::getABTSFramesRejected(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_B_T_S_FRAMES_REJECTED, getABTSFramesRejected());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getABTSFramesRejected() const
{
	return _aBTSFramesRejected;
}

void UNIX_FCAdapterEventCounters::setABTSFramesRejected(Uint64 &value)
{
	_aBTSFramesRejected = value;
}


void UNIX_FCAdapterEventCounters::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCAdapterEventCounters");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_deviceCreationClassName = String ("");
	_deviceID = String ("");
	_creationClassName = String("UNIX_FCAdapterEventCounters");
	_aBTSFramesReceived = Uint64(0);
	_aBTSFramesSent = Uint64(0);
	_fBSYsReceived = Uint64(0);
	_pBSYsReceived = Uint64(0);
	_pBSYsSent = Uint64(0);
	_fRJTsReceived = Uint64(0);
	_pRJTsReceived = Uint64(0);
	_pRJTsSent = Uint64(0);
	_pRLIsRejected = Uint64(0);
	_pRLOsRejected = Uint64(0);
	_aBTSFramesRejected = Uint64(0);

}

Boolean UNIX_FCAdapterEventCounters::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemCreationClassName"))
			{
				String systemCreationClassNameValue;
				property.getValue().get(systemCreationClassNameValue);
				setSystemCreationClassName(systemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemName"))
			{
				String systemNameValue;
				property.getValue().get(systemNameValue);
				setSystemName(systemNameValue);
			}
			else if (String::equal(property.getName().getString(), "DeviceCreationClassName"))
			{
				String deviceCreationClassNameValue;
				property.getValue().get(deviceCreationClassNameValue);
				setDeviceCreationClassName(deviceCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "DeviceID"))
			{
				String deviceIDValue;
				property.getValue().get(deviceIDValue);
				setDeviceID(deviceIDValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "ABTSFramesReceived"))
			{
				Uint64 aBTSFramesReceivedValue;
				property.getValue().get(aBTSFramesReceivedValue);
				setABTSFramesReceived(aBTSFramesReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "ABTSFramesSent"))
			{
				Uint64 aBTSFramesSentValue;
				property.getValue().get(aBTSFramesSentValue);
				setABTSFramesSent(aBTSFramesSentValue);
			}
			else if (String::equal(property.getName().getString(), "FBSYsReceived"))
			{
				Uint64 fBSYsReceivedValue;
				property.getValue().get(fBSYsReceivedValue);
				setFBSYsReceived(fBSYsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "PBSYsReceived"))
			{
				Uint64 pBSYsReceivedValue;
				property.getValue().get(pBSYsReceivedValue);
				setPBSYsReceived(pBSYsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "PBSYsSent"))
			{
				Uint64 pBSYsSentValue;
				property.getValue().get(pBSYsSentValue);
				setPBSYsSent(pBSYsSentValue);
			}
			else if (String::equal(property.getName().getString(), "FRJTsReceived"))
			{
				Uint64 fRJTsReceivedValue;
				property.getValue().get(fRJTsReceivedValue);
				setFRJTsReceived(fRJTsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "PRJTsReceived"))
			{
				Uint64 pRJTsReceivedValue;
				property.getValue().get(pRJTsReceivedValue);
				setPRJTsReceived(pRJTsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "PRJTsSent"))
			{
				Uint64 pRJTsSentValue;
				property.getValue().get(pRJTsSentValue);
				setPRJTsSent(pRJTsSentValue);
			}
			else if (String::equal(property.getName().getString(), "PRLIsRejected"))
			{
				Uint64 pRLIsRejectedValue;
				property.getValue().get(pRLIsRejectedValue);
				setPRLIsRejected(pRLIsRejectedValue);
			}
			else if (String::equal(property.getName().getString(), "PRLOsRejected"))
			{
				Uint64 pRLOsRejectedValue;
				property.getValue().get(pRLOsRejectedValue);
				setPRLOsRejected(pRLOsRejectedValue);
			}
			else if (String::equal(property.getName().getString(), "ABTSFramesRejected"))
			{
				Uint64 aBTSFramesRejectedValue;
				property.getValue().get(aBTSFramesRejectedValue);
				setABTSFramesRejected(aBTSFramesRejectedValue);
			}
	}
	return true;
}

Uint32 UNIX_FCAdapterEventCounters::invokeResetCounter(
		Uint16 &inSelectedCounter
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetCounter */
	
	
	
	return returnValue;
}


Boolean UNIX_FCAdapterEventCounters::initialize()
{
	return false;
}

Boolean UNIX_FCAdapterEventCounters::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FCAdapterEventCounters");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_deviceCreationClassName = String ("");
	_deviceID = String ("");
	_creationClassName = String("UNIX_FCAdapterEventCounters");
	_aBTSFramesReceived = Uint64(0);
	_aBTSFramesSent = Uint64(0);
	_fBSYsReceived = Uint64(0);
	_pBSYsReceived = Uint64(0);
	_pBSYsSent = Uint64(0);
	_fRJTsReceived = Uint64(0);
	_pRJTsReceived = Uint64(0);
	_pRJTsSent = Uint64(0);
	_pRLIsRejected = Uint64(0);
	_pRLOsRejected = Uint64(0);
	_aBTSFramesRejected = Uint64(0);
	
	return false;
}

Boolean UNIX_FCAdapterEventCounters::finalize()
{
	return false;
}

Boolean UNIX_FCAdapterEventCounters::loadByName(const String name)
{
	return false;
}

Boolean UNIX_FCAdapterEventCounters::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String deviceCreationClassNameKey;
	String deviceIDKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_CREATION_CLASS_NAME)) deviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getDeviceCreationClassName(), deviceCreationClassNameKey)) && 
			(String::equalNoCase(getDeviceID(), deviceIDKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_FCAdapterEventCounters::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCAdapterEventCounters::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCAdapterEventCounters::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FCAdapterEventCounters::validateInstance()
{
	return true;
}

