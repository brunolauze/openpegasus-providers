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


UNIX_PrinterComponent::UNIX_PrinterComponent(void)
{
}

UNIX_PrinterComponent::~UNIX_PrinterComponent(void)
{
}

Boolean UNIX_PrinterComponent::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_PrinterComponent::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_PrinterComponent::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_PrinterComponent::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_PrinterComponent::getPartComponent() const
{
	return _partComponent;
}

void UNIX_PrinterComponent::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}


void UNIX_PrinterComponent::clearInstance()
{

	_groupComponent = CIMInstance(CIMName("CIM_Printer"));
	_partComponent = CIMInstance(CIMName("CIM_PrintFinisher"));

}

Boolean UNIX_PrinterComponent::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_PrinterComponent::initialize()
{
	groupIndex = 0;
	partIndex = 0;
	group_UNIX_Printer_Index = -1;
	endOf_UNIX_Printer_Group = !group_UNIX_Printer_Component.initialize();
	part_UNIX_PrintFinisher_Index = -1;
	endOf_UNIX_PrintFinisher_Part = !part_UNIX_PrintFinisher_Component.initialize();
	part_UNIX_PrintMarker_Index = -1;
	endOf_UNIX_PrintMarker_Part = !part_UNIX_PrintMarker_Component.initialize();
	part_UNIX_PrintSupply_Index = -1;
	endOf_UNIX_PrintSupply_Part = !part_UNIX_PrintSupply_Component.initialize();
	part_UNIX_PrintInterlock_Index = -1;
	endOf_UNIX_PrintInterlock_Part = !part_UNIX_PrintInterlock_Component.initialize();
	part_UNIX_PrintChannel_Index = -1;
	endOf_UNIX_PrintChannel_Part = !part_UNIX_PrintChannel_Component.initialize();
	part_UNIX_PrintInputTray_Index = -1;
	endOf_UNIX_PrintInputTray_Part = !part_UNIX_PrintInputTray_Component.initialize();
	part_UNIX_PrintOutputTray_Index = -1;
	endOf_UNIX_PrintOutputTray_Part = !part_UNIX_PrintOutputTray_Component.initialize();
	part_UNIX_PrintInterpreter_Index = -1;
	endOf_UNIX_PrintInterpreter_Part = !part_UNIX_PrintInterpreter_Component.initialize();
	part_UNIX_PrintMediaPath_Index = -1;
	endOf_UNIX_PrintMediaPath_Part = !part_UNIX_PrintMediaPath_Component.initialize();
	return true;
}

Boolean UNIX_PrinterComponent::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_PrintFinisher_Part &&
			endOf_UNIX_PrintMarker_Part &&
			endOf_UNIX_PrintSupply_Part &&
			endOf_UNIX_PrintInterlock_Part &&
			endOf_UNIX_PrintChannel_Part &&
			endOf_UNIX_PrintInputTray_Part &&
			endOf_UNIX_PrintOutputTray_Part &&
			endOf_UNIX_PrintInterpreter_Part &&
			endOf_UNIX_PrintMediaPath_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_Printer_Index++;
			endOf_UNIX_Printer_Group = !group_UNIX_Printer_Component.load(group_UNIX_Printer_Index);
			if (endOf_UNIX_Printer_Group)
			{
				endOf_UNIX_PrintFinisher_Part = false;
				part_UNIX_PrintFinisher_Component.setScope(CIMName("UNIX_Printer"));
				part_UNIX_PrintFinisher_Component.initialize();
				endOf_UNIX_PrintMarker_Part = false;
				part_UNIX_PrintMarker_Component.setScope(CIMName("UNIX_Printer"));
				part_UNIX_PrintMarker_Component.initialize();
				endOf_UNIX_PrintSupply_Part = false;
				part_UNIX_PrintSupply_Component.setScope(CIMName("UNIX_Printer"));
				part_UNIX_PrintSupply_Component.initialize();
				endOf_UNIX_PrintInterlock_Part = false;
				part_UNIX_PrintInterlock_Component.setScope(CIMName("UNIX_Printer"));
				part_UNIX_PrintInterlock_Component.initialize();
				endOf_UNIX_PrintChannel_Part = false;
				part_UNIX_PrintChannel_Component.setScope(CIMName("UNIX_Printer"));
				part_UNIX_PrintChannel_Component.initialize();
				endOf_UNIX_PrintInputTray_Part = false;
				part_UNIX_PrintInputTray_Component.setScope(CIMName("UNIX_Printer"));
				part_UNIX_PrintInputTray_Component.initialize();
				endOf_UNIX_PrintOutputTray_Part = false;
				part_UNIX_PrintOutputTray_Component.setScope(CIMName("UNIX_Printer"));
				part_UNIX_PrintOutputTray_Component.initialize();
				endOf_UNIX_PrintInterpreter_Part = false;
				part_UNIX_PrintInterpreter_Component.setScope(CIMName("UNIX_Printer"));
				part_UNIX_PrintInterpreter_Component.initialize();
				endOf_UNIX_PrintMediaPath_Part = false;
				part_UNIX_PrintMediaPath_Component.setScope(CIMName("UNIX_Printer"));
				part_UNIX_PrintMediaPath_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_PrintFinisher_Index++;
	endOf_UNIX_PrintFinisher_Part = !part_UNIX_PrintFinisher_Component.load(part_UNIX_PrintFinisher_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_PrintMarker_Index++;
	endOf_UNIX_PrintMarker_Part = !part_UNIX_PrintMarker_Component.load(part_UNIX_PrintMarker_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_PrintSupply_Index++;
	endOf_UNIX_PrintSupply_Part = !part_UNIX_PrintSupply_Component.load(part_UNIX_PrintSupply_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_PrintInterlock_Index++;
	endOf_UNIX_PrintInterlock_Part = !part_UNIX_PrintInterlock_Component.load(part_UNIX_PrintInterlock_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_PrintChannel_Index++;
	endOf_UNIX_PrintChannel_Part = !part_UNIX_PrintChannel_Component.load(part_UNIX_PrintChannel_Index);
	}
	if (partIndex == 5)
	{
		part_UNIX_PrintInputTray_Index++;
	endOf_UNIX_PrintInputTray_Part = !part_UNIX_PrintInputTray_Component.load(part_UNIX_PrintInputTray_Index);
	}
	if (partIndex == 6)
	{
		part_UNIX_PrintOutputTray_Index++;
	endOf_UNIX_PrintOutputTray_Part = !part_UNIX_PrintOutputTray_Component.load(part_UNIX_PrintOutputTray_Index);
	}
	if (partIndex == 7)
	{
		part_UNIX_PrintInterpreter_Index++;
	endOf_UNIX_PrintInterpreter_Part = !part_UNIX_PrintInterpreter_Component.load(part_UNIX_PrintInterpreter_Index);
	}
	if (partIndex == 8)
	{
		part_UNIX_PrintMediaPath_Index++;
	endOf_UNIX_PrintMediaPath_Part = !part_UNIX_PrintMediaPath_Component.load(part_UNIX_PrintMediaPath_Index);
	}
	if (partIndex == 0 && endOf_UNIX_PrintFinisher_Part)
	{
		part_UNIX_PrintFinisher_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_PrintMarker_Part)
	{
		part_UNIX_PrintMarker_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_PrintSupply_Part)
	{
		part_UNIX_PrintSupply_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_PrintInterlock_Part)
	{
		part_UNIX_PrintInterlock_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_PrintChannel_Part)
	{
		part_UNIX_PrintChannel_Component.finalize();
		partIndex++;
	}
	if (partIndex == 5 && endOf_UNIX_PrintInputTray_Part)
	{
		part_UNIX_PrintInputTray_Component.finalize();
		partIndex++;
	}
	if (partIndex == 6 && endOf_UNIX_PrintOutputTray_Part)
	{
		part_UNIX_PrintOutputTray_Component.finalize();
		partIndex++;
	}
	if (partIndex == 7 && endOf_UNIX_PrintInterpreter_Part)
	{
		part_UNIX_PrintInterpreter_Component.finalize();
		partIndex++;
	}
	if (partIndex == 8 && endOf_UNIX_PrintMediaPath_Part)
	{
		part_UNIX_PrintMediaPath_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_Printer_Group &&
		endOf_UNIX_PrintFinisher_Part &&
		endOf_UNIX_PrintMarker_Part &&
		endOf_UNIX_PrintSupply_Part &&
		endOf_UNIX_PrintInterlock_Part &&
		endOf_UNIX_PrintChannel_Part &&
		endOf_UNIX_PrintInputTray_Part &&
		endOf_UNIX_PrintOutputTray_Part &&
		endOf_UNIX_PrintInterpreter_Part &&
		endOf_UNIX_PrintMediaPath_Part)		return false;
	return true;
}

Boolean UNIX_PrinterComponent::finalize()
{
	group_UNIX_Printer_Component.finalize();
	part_UNIX_PrintFinisher_Component.finalize();
	part_UNIX_PrintMarker_Component.finalize();
	part_UNIX_PrintSupply_Component.finalize();
	part_UNIX_PrintInterlock_Component.finalize();
	part_UNIX_PrintChannel_Component.finalize();
	part_UNIX_PrintInputTray_Component.finalize();
	part_UNIX_PrintOutputTray_Component.finalize();
	part_UNIX_PrintInterpreter_Component.finalize();
	part_UNIX_PrintMediaPath_Component.finalize();
	return true;
}


Boolean UNIX_PrinterComponent::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PrinterComponent::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrinterComponent::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrinterComponent::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PrinterComponent::validateInstance()
{
	return true;
}

