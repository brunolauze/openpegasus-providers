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


UNIX_ProcessStatisticalInformation::UNIX_ProcessStatisticalInformation(void)
{
}

UNIX_ProcessStatisticalInformation::~UNIX_ProcessStatisticalInformation(void)
{
}

Boolean UNIX_ProcessStatisticalInformation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ProcessStatisticalInformation::getInstanceID() const
{
	return _instanceID;
}

void UNIX_ProcessStatisticalInformation::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_ProcessStatisticalInformation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ProcessStatisticalInformation::getCaption() const
{
	return _caption;
}

void UNIX_ProcessStatisticalInformation::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_ProcessStatisticalInformation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ProcessStatisticalInformation::getDescription() const
{
	return _description;
}

void UNIX_ProcessStatisticalInformation::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_ProcessStatisticalInformation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ProcessStatisticalInformation::getElementName() const
{
	return _elementName;
}

void UNIX_ProcessStatisticalInformation::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_ProcessStatisticalInformation::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ProcessStatisticalInformation::getGeneration() const
{
	return _generation;
}

void UNIX_ProcessStatisticalInformation::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_ProcessStatisticalInformation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ProcessStatisticalInformation::getName() const
{
	return _name;
}

void UNIX_ProcessStatisticalInformation::setName(String &value)
{
	_name = value;
}

Boolean UNIX_ProcessStatisticalInformation::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_ProcessStatisticalInformation::getCSCreationClassName() const
{
	return _cSCreationClassName;
}

void UNIX_ProcessStatisticalInformation::setCSCreationClassName(String &value)
{
	_cSCreationClassName = value;
}

Boolean UNIX_ProcessStatisticalInformation::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_ProcessStatisticalInformation::getCSName() const
{
	return _cSName;
}

void UNIX_ProcessStatisticalInformation::setCSName(String &value)
{
	_cSName = value;
}

Boolean UNIX_ProcessStatisticalInformation::getOSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_CREATION_CLASS_NAME, getOSCreationClassName());
	return true;
}

String UNIX_ProcessStatisticalInformation::getOSCreationClassName() const
{
	return _oSCreationClassName;
}

void UNIX_ProcessStatisticalInformation::setOSCreationClassName(String &value)
{
	_oSCreationClassName = value;
}

Boolean UNIX_ProcessStatisticalInformation::getOSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_NAME, getOSName());
	return true;
}

String UNIX_ProcessStatisticalInformation::getOSName() const
{
	return _oSName;
}

void UNIX_ProcessStatisticalInformation::setOSName(String &value)
{
	_oSName = value;
}

Boolean UNIX_ProcessStatisticalInformation::getHandle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HANDLE, getHandle());
	return true;
}

String UNIX_ProcessStatisticalInformation::getHandle() const
{
	return _handle;
}

void UNIX_ProcessStatisticalInformation::setHandle(String &value)
{
	_handle = value;
}

Boolean UNIX_ProcessStatisticalInformation::getProcessCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_CREATION_CLASS_NAME, getProcessCreationClassName());
	return true;
}

String UNIX_ProcessStatisticalInformation::getProcessCreationClassName() const
{
	return _processCreationClassName;
}

void UNIX_ProcessStatisticalInformation::setProcessCreationClassName(String &value)
{
	_processCreationClassName = value;
}

Boolean UNIX_ProcessStatisticalInformation::getCPUTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CPU_TIME, getCPUTime());
	return true;
}

Uint32 UNIX_ProcessStatisticalInformation::getCPUTime() const
{
	return _cPUTime;
}

void UNIX_ProcessStatisticalInformation::setCPUTime(Uint32 &value)
{
	_cPUTime = value;
}

Boolean UNIX_ProcessStatisticalInformation::getRealText(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REAL_TEXT, getRealText());
	return true;
}

Uint64 UNIX_ProcessStatisticalInformation::getRealText() const
{
	return _realText;
}

void UNIX_ProcessStatisticalInformation::setRealText(Uint64 &value)
{
	_realText = value;
}

Boolean UNIX_ProcessStatisticalInformation::getRealData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REAL_DATA, getRealData());
	return true;
}

Uint64 UNIX_ProcessStatisticalInformation::getRealData() const
{
	return _realData;
}

void UNIX_ProcessStatisticalInformation::setRealData(Uint64 &value)
{
	_realData = value;
}

Boolean UNIX_ProcessStatisticalInformation::getRealStack(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REAL_STACK, getRealStack());
	return true;
}

Uint64 UNIX_ProcessStatisticalInformation::getRealStack() const
{
	return _realStack;
}

void UNIX_ProcessStatisticalInformation::setRealStack(Uint64 &value)
{
	_realStack = value;
}

Boolean UNIX_ProcessStatisticalInformation::getVirtualText(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_TEXT, getVirtualText());
	return true;
}

Uint64 UNIX_ProcessStatisticalInformation::getVirtualText() const
{
	return _virtualText;
}

void UNIX_ProcessStatisticalInformation::setVirtualText(Uint64 &value)
{
	_virtualText = value;
}

Boolean UNIX_ProcessStatisticalInformation::getVirtualData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_DATA, getVirtualData());
	return true;
}

Uint64 UNIX_ProcessStatisticalInformation::getVirtualData() const
{
	return _virtualData;
}

void UNIX_ProcessStatisticalInformation::setVirtualData(Uint64 &value)
{
	_virtualData = value;
}

Boolean UNIX_ProcessStatisticalInformation::getVirtualStack(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_STACK, getVirtualStack());
	return true;
}

Uint64 UNIX_ProcessStatisticalInformation::getVirtualStack() const
{
	return _virtualStack;
}

void UNIX_ProcessStatisticalInformation::setVirtualStack(Uint64 &value)
{
	_virtualStack = value;
}

Boolean UNIX_ProcessStatisticalInformation::getVirtualMemoryMappedFileSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_MEMORY_MAPPED_FILE_SIZE, getVirtualMemoryMappedFileSize());
	return true;
}

Uint64 UNIX_ProcessStatisticalInformation::getVirtualMemoryMappedFileSize() const
{
	return _virtualMemoryMappedFileSize;
}

void UNIX_ProcessStatisticalInformation::setVirtualMemoryMappedFileSize(Uint64 &value)
{
	_virtualMemoryMappedFileSize = value;
}

Boolean UNIX_ProcessStatisticalInformation::getVirtualSharedMemory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SHARED_MEMORY, getVirtualSharedMemory());
	return true;
}

Uint64 UNIX_ProcessStatisticalInformation::getVirtualSharedMemory() const
{
	return _virtualSharedMemory;
}

void UNIX_ProcessStatisticalInformation::setVirtualSharedMemory(Uint64 &value)
{
	_virtualSharedMemory = value;
}

Boolean UNIX_ProcessStatisticalInformation::getCpuTimeDeadChildren(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CPU_TIME_DEAD_CHILDREN, getCpuTimeDeadChildren());
	return true;
}

Uint64 UNIX_ProcessStatisticalInformation::getCpuTimeDeadChildren() const
{
	return _cpuTimeDeadChildren;
}

void UNIX_ProcessStatisticalInformation::setCpuTimeDeadChildren(Uint64 &value)
{
	_cpuTimeDeadChildren = value;
}

Boolean UNIX_ProcessStatisticalInformation::getSystemTimeDeadChildren(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_TIME_DEAD_CHILDREN, getSystemTimeDeadChildren());
	return true;
}

Uint64 UNIX_ProcessStatisticalInformation::getSystemTimeDeadChildren() const
{
	return _systemTimeDeadChildren;
}

void UNIX_ProcessStatisticalInformation::setSystemTimeDeadChildren(Uint64 &value)
{
	_systemTimeDeadChildren = value;
}


void UNIX_ProcessStatisticalInformation::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ProcessStatisticalInformation");
	_generation = Uint64(0);
	_name = String ("");
	_cSCreationClassName = String("UNIX_ComputerSystem");
	_cSName = CIMHelper::HostName;
	_oSCreationClassName = String("UNIX_OperatingSystem");
	_oSName = CIMHelper::OSName;
	_handle = String ("");
	_processCreationClassName = String ("");
	_cPUTime = Uint32(0);
	_realText = Uint64(0);
	_realData = Uint64(0);
	_realStack = Uint64(0);
	_virtualText = Uint64(0);
	_virtualData = Uint64(0);
	_virtualStack = Uint64(0);
	_virtualMemoryMappedFileSize = Uint64(0);
	_virtualSharedMemory = Uint64(0);
	_cpuTimeDeadChildren = Uint64(0);
	_systemTimeDeadChildren = Uint64(0);

}

Boolean UNIX_ProcessStatisticalInformation::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CSCreationClassName"))
			{
				String cSCreationClassNameValue;
				property.getValue().get(cSCreationClassNameValue);
				setCSCreationClassName(cSCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "CSName"))
			{
				String cSNameValue;
				property.getValue().get(cSNameValue);
				setCSName(cSNameValue);
			}
			else if (String::equal(property.getName().getString(), "OSCreationClassName"))
			{
				String oSCreationClassNameValue;
				property.getValue().get(oSCreationClassNameValue);
				setOSCreationClassName(oSCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "OSName"))
			{
				String oSNameValue;
				property.getValue().get(oSNameValue);
				setOSName(oSNameValue);
			}
			else if (String::equal(property.getName().getString(), "Handle"))
			{
				String handleValue;
				property.getValue().get(handleValue);
				setHandle(handleValue);
			}
			else if (String::equal(property.getName().getString(), "ProcessCreationClassName"))
			{
				String processCreationClassNameValue;
				property.getValue().get(processCreationClassNameValue);
				setProcessCreationClassName(processCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "CPUTime"))
			{
				Uint32 cPUTimeValue;
				property.getValue().get(cPUTimeValue);
				setCPUTime(cPUTimeValue);
			}
			else if (String::equal(property.getName().getString(), "RealText"))
			{
				Uint64 realTextValue;
				property.getValue().get(realTextValue);
				setRealText(realTextValue);
			}
			else if (String::equal(property.getName().getString(), "RealData"))
			{
				Uint64 realDataValue;
				property.getValue().get(realDataValue);
				setRealData(realDataValue);
			}
			else if (String::equal(property.getName().getString(), "RealStack"))
			{
				Uint64 realStackValue;
				property.getValue().get(realStackValue);
				setRealStack(realStackValue);
			}
			else if (String::equal(property.getName().getString(), "VirtualText"))
			{
				Uint64 virtualTextValue;
				property.getValue().get(virtualTextValue);
				setVirtualText(virtualTextValue);
			}
			else if (String::equal(property.getName().getString(), "VirtualData"))
			{
				Uint64 virtualDataValue;
				property.getValue().get(virtualDataValue);
				setVirtualData(virtualDataValue);
			}
			else if (String::equal(property.getName().getString(), "VirtualStack"))
			{
				Uint64 virtualStackValue;
				property.getValue().get(virtualStackValue);
				setVirtualStack(virtualStackValue);
			}
			else if (String::equal(property.getName().getString(), "VirtualMemoryMappedFileSize"))
			{
				Uint64 virtualMemoryMappedFileSizeValue;
				property.getValue().get(virtualMemoryMappedFileSizeValue);
				setVirtualMemoryMappedFileSize(virtualMemoryMappedFileSizeValue);
			}
			else if (String::equal(property.getName().getString(), "VirtualSharedMemory"))
			{
				Uint64 virtualSharedMemoryValue;
				property.getValue().get(virtualSharedMemoryValue);
				setVirtualSharedMemory(virtualSharedMemoryValue);
			}
			else if (String::equal(property.getName().getString(), "CpuTimeDeadChildren"))
			{
				Uint64 cpuTimeDeadChildrenValue;
				property.getValue().get(cpuTimeDeadChildrenValue);
				setCpuTimeDeadChildren(cpuTimeDeadChildrenValue);
			}
			else if (String::equal(property.getName().getString(), "SystemTimeDeadChildren"))
			{
				Uint64 systemTimeDeadChildrenValue;
				property.getValue().get(systemTimeDeadChildrenValue);
				setSystemTimeDeadChildren(systemTimeDeadChildrenValue);
			}
	}
	return true;
}


Boolean UNIX_ProcessStatisticalInformation::initialize()
{
	return false;
}

Boolean UNIX_ProcessStatisticalInformation::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("ProcessStatisticalInformation");
	_generation = Uint64(0);
	_name = String ("");
	_cSCreationClassName = String("UNIX_ComputerSystem");
	_cSName = CIMHelper::HostName;
	_oSCreationClassName = String("UNIX_OperatingSystem");
	_oSName = CIMHelper::OSName;
	_handle = String ("");
	_processCreationClassName = String ("");
	_cPUTime = Uint32(0);
	_realText = Uint64(0);
	_realData = Uint64(0);
	_realStack = Uint64(0);
	_virtualText = Uint64(0);
	_virtualData = Uint64(0);
	_virtualStack = Uint64(0);
	_virtualMemoryMappedFileSize = Uint64(0);
	_virtualSharedMemory = Uint64(0);
	_cpuTimeDeadChildren = Uint64(0);
	_systemTimeDeadChildren = Uint64(0);
	
	return false;
}

Boolean UNIX_ProcessStatisticalInformation::finalize()
{
	return false;
}

Boolean UNIX_ProcessStatisticalInformation::loadByName(const String name)
{
	return false;
}

Boolean UNIX_ProcessStatisticalInformation::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String oSCreationClassNameKey;
	String oSNameKey;
	String handleKey;
	String processCreationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OS_CREATION_CLASS_NAME)) oSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OS_NAME)) oSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_HANDLE)) handleKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PROCESS_CREATION_CLASS_NAME)) processCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getCSCreationClassName(), cSCreationClassNameKey)) && 
			(String::equalNoCase(getCSName(), cSNameKey)) && 
			(String::equalNoCase(getOSCreationClassName(), oSCreationClassNameKey)) && 
			(String::equalNoCase(getOSName(), oSNameKey)) && 
			(String::equalNoCase(getHandle(), handleKey)) && 
			(String::equalNoCase(getProcessCreationClassName(), processCreationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ProcessStatisticalInformation::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProcessStatisticalInformation::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProcessStatisticalInformation::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProcessStatisticalInformation::validateInstance()
{
	return true;
}

