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


UNIX_FileStorage::UNIX_FileStorage(void)
{
}

UNIX_FileStorage::~UNIX_FileStorage(void)
{
}

Boolean UNIX_FileStorage::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_FileStorage::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_FileStorage::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_FileStorage::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_FileStorage::getPartComponent() const
{
	return _partComponent;
}

void UNIX_FileStorage::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}


void UNIX_FileStorage::clearInstance()
{

	// _groupComponent = CIMInstance(CIMName("CIM_FileSystem"));
	_partComponent = CIMInstance(CIMName("CIM_FIFOPipeFile"));

}

Boolean UNIX_FileStorage::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "GroupComponent"))
			{
				CIMInstance groupComponentValue;
				property.getValue().get(groupComponentValue);
				setGroupComponent(groupComponentValue);
			}
			else if (String::equal(property.getName().getString(), "PartComponent"))
			{
				CIMInstance partComponentValue;
				property.getValue().get(partComponentValue);
				setPartComponent(partComponentValue);
			}
	}
	return true;
}


Boolean UNIX_FileStorage::initialize()
{
	groupIndex = 0;
	partIndex = 0;
	part_UNIX_FIFOPipeFile_Index = -1;
	endOf_UNIX_FIFOPipeFile_Part = !part_UNIX_FIFOPipeFile_Component.initialize();
	part_UNIX_Directory_Index = -1;
	endOf_UNIX_Directory_Part = !part_UNIX_Directory_Component.initialize();
	part_UNIX_DataFile_Index = -1;
	endOf_UNIX_DataFile_Part = !part_UNIX_DataFile_Component.initialize();
	part_UNIX_SymbolicLink_Index = -1;
	endOf_UNIX_SymbolicLink_Part = !part_UNIX_SymbolicLink_Component.initialize();
	part_UNIX_DeviceFile_Index = -1;
	endOf_UNIX_DeviceFile_Part = !part_UNIX_DeviceFile_Component.initialize();
	return true;
}

Boolean UNIX_FileStorage::load(int &pIndex)
{
	/* Related Instances are Abstract */
	return false;
}

Boolean UNIX_FileStorage::finalize()
{
	part_UNIX_FIFOPipeFile_Component.finalize();
	part_UNIX_Directory_Component.finalize();
	part_UNIX_DataFile_Component.finalize();
	part_UNIX_SymbolicLink_Component.finalize();
	part_UNIX_DeviceFile_Component.finalize();
	return true;
}


Boolean UNIX_FileStorage::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String groupComponentKey;
	String partComponentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_GROUP_COMPONENT)) groupComponentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PART_COMPONENT)) partComponentKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getGroupComponent().getPath().toString(), groupComponentKey)) && 
			(String::equalNoCase(getPartComponent().getPath().toString(), partComponentKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_FileStorage::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileStorage::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileStorage::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FileStorage::validateInstance()
{
	return true;
}

