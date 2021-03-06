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


UNIX_ProcessThread::UNIX_ProcessThread(void)
{
}

UNIX_ProcessThread::~UNIX_ProcessThread(void)
{
}

Boolean UNIX_ProcessThread::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_ProcessThread::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_ProcessThread::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_ProcessThread::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_ProcessThread::getPartComponent() const
{
	return _partComponent;
}

void UNIX_ProcessThread::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}


void UNIX_ProcessThread::clearInstance()
{

	_groupComponent = CIMInstance(CIMName("CIM_Process"));
	_partComponent = CIMInstance(CIMName("CIM_Thread"));

}

Boolean UNIX_ProcessThread::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_ProcessThread::initialize()
{
	groupIndex = 0;
	partIndex = 0;
	group_UNIX_Process_Index = -1;
	endOf_UNIX_Process_Group = !group_UNIX_Process_Component.initialize();
	part_UNIX_Thread_Index = -1;
	endOf_UNIX_Thread_Part = !part_UNIX_Thread_Component.initialize();
	return true;
}

Boolean UNIX_ProcessThread::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_Thread_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_Process_Index++;
			endOf_UNIX_Process_Group = !group_UNIX_Process_Component.load(group_UNIX_Process_Index);
			if (endOf_UNIX_Process_Group)
			{
				endOf_UNIX_Thread_Part = false;
				part_UNIX_Thread_Component.setScope(CIMName("UNIX_Process"));
				part_UNIX_Thread_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_Thread_Index++;
	endOf_UNIX_Thread_Part = !part_UNIX_Thread_Component.load(part_UNIX_Thread_Index);
	}
	if (partIndex == 0 && endOf_UNIX_Thread_Part)
	{
		part_UNIX_Thread_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_Process_Group &&
		endOf_UNIX_Thread_Part)		return false;
	return true;
}

Boolean UNIX_ProcessThread::finalize()
{
	group_UNIX_Process_Component.finalize();
	part_UNIX_Thread_Component.finalize();
	return true;
}


Boolean UNIX_ProcessThread::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ProcessThread::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProcessThread::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProcessThread::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProcessThread::validateInstance()
{
	return true;
}

