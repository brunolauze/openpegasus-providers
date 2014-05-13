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


UNIX_DiagnosticTestInPackage::UNIX_DiagnosticTestInPackage(void)
{
}

UNIX_DiagnosticTestInPackage::~UNIX_DiagnosticTestInPackage(void)
{
}

Boolean UNIX_DiagnosticTestInPackage::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_DiagnosticTestInPackage::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_DiagnosticTestInPackage::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_DiagnosticTestInPackage::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_DiagnosticTestInPackage::getPartComponent() const
{
	return _partComponent;
}

void UNIX_DiagnosticTestInPackage::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}


void UNIX_DiagnosticTestInPackage::clearInstance()
{

	_groupComponent = CIMInstance(CIMName("CIM_FCHBADiagnosticTest"));
	_partComponent = CIMInstance(CIMName("CIM_FCHBADiagnosticTest"));

}

Boolean UNIX_DiagnosticTestInPackage::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_DiagnosticTestInPackage::initialize()
{
	groupIndex = 0;
	partIndex = 0;
	group_UNIX_FCHBADiagnosticTest_Index = -1;
	endOf_UNIX_FCHBADiagnosticTest_Group = !group_UNIX_FCHBADiagnosticTest_Component.initialize();
	group_UNIX_RAIDDiagnosticTest_Index = -1;
	endOf_UNIX_RAIDDiagnosticTest_Group = !group_UNIX_RAIDDiagnosticTest_Component.initialize();
	group_UNIX_CPUDiagnosticTest_Index = -1;
	endOf_UNIX_CPUDiagnosticTest_Group = !group_UNIX_CPUDiagnosticTest_Component.initialize();
	group_UNIX_EthernetNICDiagnosticTest_Index = -1;
	endOf_UNIX_EthernetNICDiagnosticTest_Group = !group_UNIX_EthernetNICDiagnosticTest_Component.initialize();
	group_UNIX_OpticalDriveDiagnosticTest_Index = -1;
	endOf_UNIX_OpticalDriveDiagnosticTest_Group = !group_UNIX_OpticalDriveDiagnosticTest_Component.initialize();
	group_UNIX_OpticalDriveDiagnosticSettingData_Index = -1;
	endOf_UNIX_OpticalDriveDiagnosticSettingData_Group = !group_UNIX_OpticalDriveDiagnosticSettingData_Component.initialize();
	group_UNIX_DiskDriveDiagnosticTest_Index = -1;
	endOf_UNIX_DiskDriveDiagnosticTest_Group = !group_UNIX_DiskDriveDiagnosticTest_Component.initialize();
	part_UNIX_FCHBADiagnosticTest_Index = -1;
	endOf_UNIX_FCHBADiagnosticTest_Part = !part_UNIX_FCHBADiagnosticTest_Component.initialize();
	part_UNIX_RAIDDiagnosticTest_Index = -1;
	endOf_UNIX_RAIDDiagnosticTest_Part = !part_UNIX_RAIDDiagnosticTest_Component.initialize();
	part_UNIX_CPUDiagnosticTest_Index = -1;
	endOf_UNIX_CPUDiagnosticTest_Part = !part_UNIX_CPUDiagnosticTest_Component.initialize();
	part_UNIX_EthernetNICDiagnosticTest_Index = -1;
	endOf_UNIX_EthernetNICDiagnosticTest_Part = !part_UNIX_EthernetNICDiagnosticTest_Component.initialize();
	part_UNIX_OpticalDriveDiagnosticTest_Index = -1;
	endOf_UNIX_OpticalDriveDiagnosticTest_Part = !part_UNIX_OpticalDriveDiagnosticTest_Component.initialize();
	part_UNIX_OpticalDriveDiagnosticSettingData_Index = -1;
	endOf_UNIX_OpticalDriveDiagnosticSettingData_Part = !part_UNIX_OpticalDriveDiagnosticSettingData_Component.initialize();
	part_UNIX_DiskDriveDiagnosticTest_Index = -1;
	endOf_UNIX_DiskDriveDiagnosticTest_Part = !part_UNIX_DiskDriveDiagnosticTest_Component.initialize();
	return true;
}

Boolean UNIX_DiagnosticTestInPackage::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_FCHBADiagnosticTest_Part &&
			endOf_UNIX_RAIDDiagnosticTest_Part &&
			endOf_UNIX_CPUDiagnosticTest_Part &&
			endOf_UNIX_EthernetNICDiagnosticTest_Part &&
			endOf_UNIX_OpticalDriveDiagnosticTest_Part &&
			endOf_UNIX_OpticalDriveDiagnosticSettingData_Part &&
			endOf_UNIX_DiskDriveDiagnosticTest_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_FCHBADiagnosticTest_Index++;
			endOf_UNIX_FCHBADiagnosticTest_Group = !group_UNIX_FCHBADiagnosticTest_Component.load(group_UNIX_FCHBADiagnosticTest_Index);
			if (endOf_UNIX_FCHBADiagnosticTest_Group)
			{
				endOf_UNIX_FCHBADiagnosticTest_Part = false;
				part_UNIX_FCHBADiagnosticTest_Component.setScope(CIMName("UNIX_FCHBADiagnosticTest"));
				part_UNIX_FCHBADiagnosticTest_Component.initialize();
				endOf_UNIX_RAIDDiagnosticTest_Part = false;
				part_UNIX_RAIDDiagnosticTest_Component.setScope(CIMName("UNIX_FCHBADiagnosticTest"));
				part_UNIX_RAIDDiagnosticTest_Component.initialize();
				endOf_UNIX_CPUDiagnosticTest_Part = false;
				part_UNIX_CPUDiagnosticTest_Component.setScope(CIMName("UNIX_FCHBADiagnosticTest"));
				part_UNIX_CPUDiagnosticTest_Component.initialize();
				endOf_UNIX_EthernetNICDiagnosticTest_Part = false;
				part_UNIX_EthernetNICDiagnosticTest_Component.setScope(CIMName("UNIX_FCHBADiagnosticTest"));
				part_UNIX_EthernetNICDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticTest_Part = false;
				part_UNIX_OpticalDriveDiagnosticTest_Component.setScope(CIMName("UNIX_FCHBADiagnosticTest"));
				part_UNIX_OpticalDriveDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticSettingData_Part = false;
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.setScope(CIMName("UNIX_FCHBADiagnosticTest"));
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.initialize();
				endOf_UNIX_DiskDriveDiagnosticTest_Part = false;
				part_UNIX_DiskDriveDiagnosticTest_Component.setScope(CIMName("UNIX_FCHBADiagnosticTest"));
				part_UNIX_DiskDriveDiagnosticTest_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_RAIDDiagnosticTest_Index++;
			endOf_UNIX_RAIDDiagnosticTest_Group = !group_UNIX_RAIDDiagnosticTest_Component.load(group_UNIX_RAIDDiagnosticTest_Index);
			if (endOf_UNIX_RAIDDiagnosticTest_Group)
			{
				endOf_UNIX_FCHBADiagnosticTest_Part = false;
				part_UNIX_FCHBADiagnosticTest_Component.setScope(CIMName("UNIX_RAIDDiagnosticTest"));
				part_UNIX_FCHBADiagnosticTest_Component.initialize();
				endOf_UNIX_RAIDDiagnosticTest_Part = false;
				part_UNIX_RAIDDiagnosticTest_Component.setScope(CIMName("UNIX_RAIDDiagnosticTest"));
				part_UNIX_RAIDDiagnosticTest_Component.initialize();
				endOf_UNIX_CPUDiagnosticTest_Part = false;
				part_UNIX_CPUDiagnosticTest_Component.setScope(CIMName("UNIX_RAIDDiagnosticTest"));
				part_UNIX_CPUDiagnosticTest_Component.initialize();
				endOf_UNIX_EthernetNICDiagnosticTest_Part = false;
				part_UNIX_EthernetNICDiagnosticTest_Component.setScope(CIMName("UNIX_RAIDDiagnosticTest"));
				part_UNIX_EthernetNICDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticTest_Part = false;
				part_UNIX_OpticalDriveDiagnosticTest_Component.setScope(CIMName("UNIX_RAIDDiagnosticTest"));
				part_UNIX_OpticalDriveDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticSettingData_Part = false;
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.setScope(CIMName("UNIX_RAIDDiagnosticTest"));
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.initialize();
				endOf_UNIX_DiskDriveDiagnosticTest_Part = false;
				part_UNIX_DiskDriveDiagnosticTest_Component.setScope(CIMName("UNIX_RAIDDiagnosticTest"));
				part_UNIX_DiskDriveDiagnosticTest_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 2)
		{
			group_UNIX_CPUDiagnosticTest_Index++;
			endOf_UNIX_CPUDiagnosticTest_Group = !group_UNIX_CPUDiagnosticTest_Component.load(group_UNIX_CPUDiagnosticTest_Index);
			if (endOf_UNIX_CPUDiagnosticTest_Group)
			{
				endOf_UNIX_FCHBADiagnosticTest_Part = false;
				part_UNIX_FCHBADiagnosticTest_Component.setScope(CIMName("UNIX_CPUDiagnosticTest"));
				part_UNIX_FCHBADiagnosticTest_Component.initialize();
				endOf_UNIX_RAIDDiagnosticTest_Part = false;
				part_UNIX_RAIDDiagnosticTest_Component.setScope(CIMName("UNIX_CPUDiagnosticTest"));
				part_UNIX_RAIDDiagnosticTest_Component.initialize();
				endOf_UNIX_CPUDiagnosticTest_Part = false;
				part_UNIX_CPUDiagnosticTest_Component.setScope(CIMName("UNIX_CPUDiagnosticTest"));
				part_UNIX_CPUDiagnosticTest_Component.initialize();
				endOf_UNIX_EthernetNICDiagnosticTest_Part = false;
				part_UNIX_EthernetNICDiagnosticTest_Component.setScope(CIMName("UNIX_CPUDiagnosticTest"));
				part_UNIX_EthernetNICDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticTest_Part = false;
				part_UNIX_OpticalDriveDiagnosticTest_Component.setScope(CIMName("UNIX_CPUDiagnosticTest"));
				part_UNIX_OpticalDriveDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticSettingData_Part = false;
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.setScope(CIMName("UNIX_CPUDiagnosticTest"));
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.initialize();
				endOf_UNIX_DiskDriveDiagnosticTest_Part = false;
				part_UNIX_DiskDriveDiagnosticTest_Component.setScope(CIMName("UNIX_CPUDiagnosticTest"));
				part_UNIX_DiskDriveDiagnosticTest_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 3)
		{
			group_UNIX_EthernetNICDiagnosticTest_Index++;
			endOf_UNIX_EthernetNICDiagnosticTest_Group = !group_UNIX_EthernetNICDiagnosticTest_Component.load(group_UNIX_EthernetNICDiagnosticTest_Index);
			if (endOf_UNIX_EthernetNICDiagnosticTest_Group)
			{
				endOf_UNIX_FCHBADiagnosticTest_Part = false;
				part_UNIX_FCHBADiagnosticTest_Component.setScope(CIMName("UNIX_EthernetNICDiagnosticTest"));
				part_UNIX_FCHBADiagnosticTest_Component.initialize();
				endOf_UNIX_RAIDDiagnosticTest_Part = false;
				part_UNIX_RAIDDiagnosticTest_Component.setScope(CIMName("UNIX_EthernetNICDiagnosticTest"));
				part_UNIX_RAIDDiagnosticTest_Component.initialize();
				endOf_UNIX_CPUDiagnosticTest_Part = false;
				part_UNIX_CPUDiagnosticTest_Component.setScope(CIMName("UNIX_EthernetNICDiagnosticTest"));
				part_UNIX_CPUDiagnosticTest_Component.initialize();
				endOf_UNIX_EthernetNICDiagnosticTest_Part = false;
				part_UNIX_EthernetNICDiagnosticTest_Component.setScope(CIMName("UNIX_EthernetNICDiagnosticTest"));
				part_UNIX_EthernetNICDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticTest_Part = false;
				part_UNIX_OpticalDriveDiagnosticTest_Component.setScope(CIMName("UNIX_EthernetNICDiagnosticTest"));
				part_UNIX_OpticalDriveDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticSettingData_Part = false;
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.setScope(CIMName("UNIX_EthernetNICDiagnosticTest"));
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.initialize();
				endOf_UNIX_DiskDriveDiagnosticTest_Part = false;
				part_UNIX_DiskDriveDiagnosticTest_Component.setScope(CIMName("UNIX_EthernetNICDiagnosticTest"));
				part_UNIX_DiskDriveDiagnosticTest_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 4)
		{
			group_UNIX_OpticalDriveDiagnosticTest_Index++;
			endOf_UNIX_OpticalDriveDiagnosticTest_Group = !group_UNIX_OpticalDriveDiagnosticTest_Component.load(group_UNIX_OpticalDriveDiagnosticTest_Index);
			if (endOf_UNIX_OpticalDriveDiagnosticTest_Group)
			{
				endOf_UNIX_FCHBADiagnosticTest_Part = false;
				part_UNIX_FCHBADiagnosticTest_Component.setScope(CIMName("UNIX_OpticalDriveDiagnosticTest"));
				part_UNIX_FCHBADiagnosticTest_Component.initialize();
				endOf_UNIX_RAIDDiagnosticTest_Part = false;
				part_UNIX_RAIDDiagnosticTest_Component.setScope(CIMName("UNIX_OpticalDriveDiagnosticTest"));
				part_UNIX_RAIDDiagnosticTest_Component.initialize();
				endOf_UNIX_CPUDiagnosticTest_Part = false;
				part_UNIX_CPUDiagnosticTest_Component.setScope(CIMName("UNIX_OpticalDriveDiagnosticTest"));
				part_UNIX_CPUDiagnosticTest_Component.initialize();
				endOf_UNIX_EthernetNICDiagnosticTest_Part = false;
				part_UNIX_EthernetNICDiagnosticTest_Component.setScope(CIMName("UNIX_OpticalDriveDiagnosticTest"));
				part_UNIX_EthernetNICDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticTest_Part = false;
				part_UNIX_OpticalDriveDiagnosticTest_Component.setScope(CIMName("UNIX_OpticalDriveDiagnosticTest"));
				part_UNIX_OpticalDriveDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticSettingData_Part = false;
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.setScope(CIMName("UNIX_OpticalDriveDiagnosticTest"));
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.initialize();
				endOf_UNIX_DiskDriveDiagnosticTest_Part = false;
				part_UNIX_DiskDriveDiagnosticTest_Component.setScope(CIMName("UNIX_OpticalDriveDiagnosticTest"));
				part_UNIX_DiskDriveDiagnosticTest_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 5)
		{
			group_UNIX_OpticalDriveDiagnosticSettingData_Index++;
			endOf_UNIX_OpticalDriveDiagnosticSettingData_Group = !group_UNIX_OpticalDriveDiagnosticSettingData_Component.load(group_UNIX_OpticalDriveDiagnosticSettingData_Index);
			if (endOf_UNIX_OpticalDriveDiagnosticSettingData_Group)
			{
				endOf_UNIX_FCHBADiagnosticTest_Part = false;
				part_UNIX_FCHBADiagnosticTest_Component.setScope(CIMName("UNIX_OpticalDriveDiagnosticSettingData"));
				part_UNIX_FCHBADiagnosticTest_Component.initialize();
				endOf_UNIX_RAIDDiagnosticTest_Part = false;
				part_UNIX_RAIDDiagnosticTest_Component.setScope(CIMName("UNIX_OpticalDriveDiagnosticSettingData"));
				part_UNIX_RAIDDiagnosticTest_Component.initialize();
				endOf_UNIX_CPUDiagnosticTest_Part = false;
				part_UNIX_CPUDiagnosticTest_Component.setScope(CIMName("UNIX_OpticalDriveDiagnosticSettingData"));
				part_UNIX_CPUDiagnosticTest_Component.initialize();
				endOf_UNIX_EthernetNICDiagnosticTest_Part = false;
				part_UNIX_EthernetNICDiagnosticTest_Component.setScope(CIMName("UNIX_OpticalDriveDiagnosticSettingData"));
				part_UNIX_EthernetNICDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticTest_Part = false;
				part_UNIX_OpticalDriveDiagnosticTest_Component.setScope(CIMName("UNIX_OpticalDriveDiagnosticSettingData"));
				part_UNIX_OpticalDriveDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticSettingData_Part = false;
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.setScope(CIMName("UNIX_OpticalDriveDiagnosticSettingData"));
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.initialize();
				endOf_UNIX_DiskDriveDiagnosticTest_Part = false;
				part_UNIX_DiskDriveDiagnosticTest_Component.setScope(CIMName("UNIX_OpticalDriveDiagnosticSettingData"));
				part_UNIX_DiskDriveDiagnosticTest_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 6)
		{
			group_UNIX_DiskDriveDiagnosticTest_Index++;
			endOf_UNIX_DiskDriveDiagnosticTest_Group = !group_UNIX_DiskDriveDiagnosticTest_Component.load(group_UNIX_DiskDriveDiagnosticTest_Index);
			if (endOf_UNIX_DiskDriveDiagnosticTest_Group)
			{
				endOf_UNIX_FCHBADiagnosticTest_Part = false;
				part_UNIX_FCHBADiagnosticTest_Component.setScope(CIMName("UNIX_DiskDriveDiagnosticTest"));
				part_UNIX_FCHBADiagnosticTest_Component.initialize();
				endOf_UNIX_RAIDDiagnosticTest_Part = false;
				part_UNIX_RAIDDiagnosticTest_Component.setScope(CIMName("UNIX_DiskDriveDiagnosticTest"));
				part_UNIX_RAIDDiagnosticTest_Component.initialize();
				endOf_UNIX_CPUDiagnosticTest_Part = false;
				part_UNIX_CPUDiagnosticTest_Component.setScope(CIMName("UNIX_DiskDriveDiagnosticTest"));
				part_UNIX_CPUDiagnosticTest_Component.initialize();
				endOf_UNIX_EthernetNICDiagnosticTest_Part = false;
				part_UNIX_EthernetNICDiagnosticTest_Component.setScope(CIMName("UNIX_DiskDriveDiagnosticTest"));
				part_UNIX_EthernetNICDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticTest_Part = false;
				part_UNIX_OpticalDriveDiagnosticTest_Component.setScope(CIMName("UNIX_DiskDriveDiagnosticTest"));
				part_UNIX_OpticalDriveDiagnosticTest_Component.initialize();
				endOf_UNIX_OpticalDriveDiagnosticSettingData_Part = false;
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.setScope(CIMName("UNIX_DiskDriveDiagnosticTest"));
				part_UNIX_OpticalDriveDiagnosticSettingData_Component.initialize();
				endOf_UNIX_DiskDriveDiagnosticTest_Part = false;
				part_UNIX_DiskDriveDiagnosticTest_Component.setScope(CIMName("UNIX_DiskDriveDiagnosticTest"));
				part_UNIX_DiskDriveDiagnosticTest_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_FCHBADiagnosticTest_Index++;
	endOf_UNIX_FCHBADiagnosticTest_Part = !part_UNIX_FCHBADiagnosticTest_Component.load(part_UNIX_FCHBADiagnosticTest_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_RAIDDiagnosticTest_Index++;
	endOf_UNIX_RAIDDiagnosticTest_Part = !part_UNIX_RAIDDiagnosticTest_Component.load(part_UNIX_RAIDDiagnosticTest_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_CPUDiagnosticTest_Index++;
	endOf_UNIX_CPUDiagnosticTest_Part = !part_UNIX_CPUDiagnosticTest_Component.load(part_UNIX_CPUDiagnosticTest_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_EthernetNICDiagnosticTest_Index++;
	endOf_UNIX_EthernetNICDiagnosticTest_Part = !part_UNIX_EthernetNICDiagnosticTest_Component.load(part_UNIX_EthernetNICDiagnosticTest_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_OpticalDriveDiagnosticTest_Index++;
	endOf_UNIX_OpticalDriveDiagnosticTest_Part = !part_UNIX_OpticalDriveDiagnosticTest_Component.load(part_UNIX_OpticalDriveDiagnosticTest_Index);
	}
	if (partIndex == 5)
	{
		part_UNIX_OpticalDriveDiagnosticSettingData_Index++;
	endOf_UNIX_OpticalDriveDiagnosticSettingData_Part = !part_UNIX_OpticalDriveDiagnosticSettingData_Component.load(part_UNIX_OpticalDriveDiagnosticSettingData_Index);
	}
	if (partIndex == 6)
	{
		part_UNIX_DiskDriveDiagnosticTest_Index++;
	endOf_UNIX_DiskDriveDiagnosticTest_Part = !part_UNIX_DiskDriveDiagnosticTest_Component.load(part_UNIX_DiskDriveDiagnosticTest_Index);
	}
	if (partIndex == 0 && endOf_UNIX_FCHBADiagnosticTest_Part)
	{
		part_UNIX_FCHBADiagnosticTest_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_RAIDDiagnosticTest_Part)
	{
		part_UNIX_RAIDDiagnosticTest_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_CPUDiagnosticTest_Part)
	{
		part_UNIX_CPUDiagnosticTest_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_EthernetNICDiagnosticTest_Part)
	{
		part_UNIX_EthernetNICDiagnosticTest_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_OpticalDriveDiagnosticTest_Part)
	{
		part_UNIX_OpticalDriveDiagnosticTest_Component.finalize();
		partIndex++;
	}
	if (partIndex == 5 && endOf_UNIX_OpticalDriveDiagnosticSettingData_Part)
	{
		part_UNIX_OpticalDriveDiagnosticSettingData_Component.finalize();
		partIndex++;
	}
	if (partIndex == 6 && endOf_UNIX_DiskDriveDiagnosticTest_Part)
	{
		part_UNIX_DiskDriveDiagnosticTest_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_FCHBADiagnosticTest_Group &&
		endOf_UNIX_RAIDDiagnosticTest_Group &&
		endOf_UNIX_CPUDiagnosticTest_Group &&
		endOf_UNIX_EthernetNICDiagnosticTest_Group &&
		endOf_UNIX_OpticalDriveDiagnosticTest_Group &&
		endOf_UNIX_OpticalDriveDiagnosticSettingData_Group &&
		endOf_UNIX_DiskDriveDiagnosticTest_Group &&
		endOf_UNIX_FCHBADiagnosticTest_Part &&
		endOf_UNIX_RAIDDiagnosticTest_Part &&
		endOf_UNIX_CPUDiagnosticTest_Part &&
		endOf_UNIX_EthernetNICDiagnosticTest_Part &&
		endOf_UNIX_OpticalDriveDiagnosticTest_Part &&
		endOf_UNIX_OpticalDriveDiagnosticSettingData_Part &&
		endOf_UNIX_DiskDriveDiagnosticTest_Part)		return false;
	return true;
}

Boolean UNIX_DiagnosticTestInPackage::finalize()
{
	group_UNIX_FCHBADiagnosticTest_Component.finalize();
	group_UNIX_RAIDDiagnosticTest_Component.finalize();
	group_UNIX_CPUDiagnosticTest_Component.finalize();
	group_UNIX_EthernetNICDiagnosticTest_Component.finalize();
	group_UNIX_OpticalDriveDiagnosticTest_Component.finalize();
	group_UNIX_OpticalDriveDiagnosticSettingData_Component.finalize();
	group_UNIX_DiskDriveDiagnosticTest_Component.finalize();
	part_UNIX_FCHBADiagnosticTest_Component.finalize();
	part_UNIX_RAIDDiagnosticTest_Component.finalize();
	part_UNIX_CPUDiagnosticTest_Component.finalize();
	part_UNIX_EthernetNICDiagnosticTest_Component.finalize();
	part_UNIX_OpticalDriveDiagnosticTest_Component.finalize();
	part_UNIX_OpticalDriveDiagnosticSettingData_Component.finalize();
	part_UNIX_DiskDriveDiagnosticTest_Component.finalize();
	return true;
}


Boolean UNIX_DiagnosticTestInPackage::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_DiagnosticTestInPackage::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticTestInPackage::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticTestInPackage::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DiagnosticTestInPackage::validateInstance()
{
	return true;
}

