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


UNIX_OrderedComponent::UNIX_OrderedComponent(void)
{
}

UNIX_OrderedComponent::~UNIX_OrderedComponent(void)
{
}

Boolean UNIX_OrderedComponent::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_OrderedComponent::getGroupComponent() const
{
	return _groupComponent;
}

void UNIX_OrderedComponent::setGroupComponent(CIMInstance &value)
{
	_groupComponent = value;
}

Boolean UNIX_OrderedComponent::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_OrderedComponent::getPartComponent() const
{
	return _partComponent;
}

void UNIX_OrderedComponent::setPartComponent(CIMInstance &value)
{
	_partComponent = value;
}

Boolean UNIX_OrderedComponent::getAssignedSequence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASSIGNED_SEQUENCE, getAssignedSequence());
	return true;
}

Uint64 UNIX_OrderedComponent::getAssignedSequence() const
{
	return _assignedSequence;
}

void UNIX_OrderedComponent::setAssignedSequence(Uint64 &value)
{
	_assignedSequence = value;
}


void UNIX_OrderedComponent::clearInstance()
{

	// _groupComponent = CIMInstance(CIMName("CIM_ManagedElement"));
	// _partComponent = CIMInstance(CIMName("CIM_ManagedElement"));
	_assignedSequence = Uint64(0);

}

Boolean UNIX_OrderedComponent::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AssignedSequence"))
			{
				Uint64 assignedSequenceValue;
				property.getValue().get(assignedSequenceValue);
				setAssignedSequence(assignedSequenceValue);
			}
	}
	return true;
}


Boolean UNIX_OrderedComponent::initialize()
{
	return false;
}

Boolean UNIX_OrderedComponent::load(int &pIndex)
{
	
	// _groupComponent = CIMInstance(CIMName("CIM_ManagedElement"));
	// _partComponent = CIMInstance(CIMName("CIM_ManagedElement"));
	_assignedSequence = Uint64(0);
	
	return false;
}

Boolean UNIX_OrderedComponent::finalize()
{
	return false;
}


Boolean UNIX_OrderedComponent::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OrderedComponent::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OrderedComponent::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OrderedComponent::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OrderedComponent::validateInstance()
{
	return true;
}

