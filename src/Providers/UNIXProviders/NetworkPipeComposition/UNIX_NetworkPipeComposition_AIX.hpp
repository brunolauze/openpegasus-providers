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


UNIX_NetworkPipeComposition::UNIX_NetworkPipeComposition(void)
{
}

UNIX_NetworkPipeComposition::~UNIX_NetworkPipeComposition(void)
{
}

Boolean UNIX_NetworkPipeComposition::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_NetworkPipeComposition::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_NetworkPipeComposition::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_NetworkPipeComposition::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_NetworkPipeComposition::getPartComponent() const
{
	return _partComponent;
}

void UNIX_NetworkPipeComposition::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}

Boolean UNIX_NetworkPipeComposition::getAggregationSequence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AGGREGATION_SEQUENCE, getAggregationSequence());
	return true;
}

Uint16 UNIX_NetworkPipeComposition::getAggregationSequence() const
{
	return _aggregationSequence;
}

void UNIX_NetworkPipeComposition::setAggregationSequence(Uint16 &value)
{
	_aggregationSequence = value;
}


void UNIX_NetworkPipeComposition::clearInstance()
{

	_groupComponent = CIMInstance(CIMName("CIM_iSCSISession"));
	_partComponent = CIMInstance(CIMName("CIM_iSCSISession"));
	_aggregationSequence = Uint16(0);

}

Boolean UNIX_NetworkPipeComposition::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AggregationSequence"))
			{
				Uint16 aggregationSequenceValue;
				property.getValue().get(aggregationSequenceValue);
				setAggregationSequence(aggregationSequenceValue);
			}
	}
	return true;
}


Boolean UNIX_NetworkPipeComposition::initialize()
{
	groupIndex = 0;
	partIndex = 0;
	group_UNIX_iSCSISession_Index = -1;
	endOf_UNIX_iSCSISession_Group = !group_UNIX_iSCSISession_Component.initialize();
	group_UNIX_iSCSIConnection_Index = -1;
	endOf_UNIX_iSCSIConnection_Group = !group_UNIX_iSCSIConnection_Component.initialize();
	part_UNIX_iSCSISession_Index = -1;
	endOf_UNIX_iSCSISession_Part = !part_UNIX_iSCSISession_Component.initialize();
	part_UNIX_iSCSIConnection_Index = -1;
	endOf_UNIX_iSCSIConnection_Part = !part_UNIX_iSCSIConnection_Component.initialize();
	return true;
}

Boolean UNIX_NetworkPipeComposition::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_iSCSISession_Part &&
			endOf_UNIX_iSCSIConnection_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_iSCSISession_Index++;
			endOf_UNIX_iSCSISession_Group = !group_UNIX_iSCSISession_Component.load(group_UNIX_iSCSISession_Index);
			if (endOf_UNIX_iSCSISession_Group)
			{
				endOf_UNIX_iSCSISession_Part = false;
				part_UNIX_iSCSISession_Component.setScope(CIMName("UNIX_iSCSISession"));
				part_UNIX_iSCSISession_Component.initialize();
				endOf_UNIX_iSCSIConnection_Part = false;
				part_UNIX_iSCSIConnection_Component.setScope(CIMName("UNIX_iSCSISession"));
				part_UNIX_iSCSIConnection_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_iSCSIConnection_Index++;
			endOf_UNIX_iSCSIConnection_Group = !group_UNIX_iSCSIConnection_Component.load(group_UNIX_iSCSIConnection_Index);
			if (endOf_UNIX_iSCSIConnection_Group)
			{
				endOf_UNIX_iSCSISession_Part = false;
				part_UNIX_iSCSISession_Component.setScope(CIMName("UNIX_iSCSIConnection"));
				part_UNIX_iSCSISession_Component.initialize();
				endOf_UNIX_iSCSIConnection_Part = false;
				part_UNIX_iSCSIConnection_Component.setScope(CIMName("UNIX_iSCSIConnection"));
				part_UNIX_iSCSIConnection_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_iSCSISession_Index++;
	endOf_UNIX_iSCSISession_Part = !part_UNIX_iSCSISession_Component.load(part_UNIX_iSCSISession_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_iSCSIConnection_Index++;
	endOf_UNIX_iSCSIConnection_Part = !part_UNIX_iSCSIConnection_Component.load(part_UNIX_iSCSIConnection_Index);
	}
	if (partIndex == 0 && endOf_UNIX_iSCSISession_Part)
	{
		part_UNIX_iSCSISession_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_iSCSIConnection_Part)
	{
		part_UNIX_iSCSIConnection_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_iSCSISession_Group &&
		endOf_UNIX_iSCSIConnection_Group &&
		endOf_UNIX_iSCSISession_Part &&
		endOf_UNIX_iSCSIConnection_Part)		return false;
	return true;
}

Boolean UNIX_NetworkPipeComposition::finalize()
{
	group_UNIX_iSCSISession_Component.finalize();
	group_UNIX_iSCSIConnection_Component.finalize();
	part_UNIX_iSCSISession_Component.finalize();
	part_UNIX_iSCSIConnection_Component.finalize();
	return true;
}


Boolean UNIX_NetworkPipeComposition::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_NetworkPipeComposition::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkPipeComposition::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkPipeComposition::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NetworkPipeComposition::validateInstance()
{
	return true;
}

