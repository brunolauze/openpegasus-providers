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


UNIX_SchedulingServiceToSchedule::UNIX_SchedulingServiceToSchedule(void)
{
}

UNIX_SchedulingServiceToSchedule::~UNIX_SchedulingServiceToSchedule(void)
{
}

Boolean UNIX_SchedulingServiceToSchedule::getSchedService(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCHED_SERVICE, getSchedService());
	return true;
}

CIMInstance UNIX_SchedulingServiceToSchedule::getSchedService() const
{
	return _schedService;
}

void UNIX_SchedulingServiceToSchedule::setSchedService(CIMInstance &value)
{
	_schedService = value;
}

Boolean UNIX_SchedulingServiceToSchedule::getSchedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCHED_ELEMENT, getSchedElement());
	return true;
}

CIMInstance UNIX_SchedulingServiceToSchedule::getSchedElement() const
{
	return _schedElement;
}

void UNIX_SchedulingServiceToSchedule::setSchedElement(CIMInstance &value)
{
	_schedElement = value;
}


void UNIX_SchedulingServiceToSchedule::clearInstance()
{

	_schedService = CIMInstance(CIMName("CIM_PacketSchedulingService"));
	_schedElement = CIMInstance(CIMName("CIM_PrioritySchedulingElement"));

}

Boolean UNIX_SchedulingServiceToSchedule::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "SchedService"))
			{
				CIMInstance schedServiceValue;
				property.getValue().get(schedServiceValue);
				setSchedService(schedServiceValue);
			}
			else if (String::equal(property.getName().getString(), "SchedElement"))
			{
				CIMInstance schedElementValue;
				property.getValue().get(schedElementValue);
				setSchedElement(schedElementValue);
			}
	}
	return true;
}


Boolean UNIX_SchedulingServiceToSchedule::initialize()
{
	return false;
}

Boolean UNIX_SchedulingServiceToSchedule::load(int &pIndex)
{
	
	_schedService = CIMInstance(CIMName("CIM_PacketSchedulingService"));
	_schedElement = CIMInstance(CIMName("CIM_PrioritySchedulingElement"));
	
	return false;
}

Boolean UNIX_SchedulingServiceToSchedule::finalize()
{
	return false;
}


Boolean UNIX_SchedulingServiceToSchedule::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String schedServiceKey;
	String schedElementKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SCHED_SERVICE)) schedServiceKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SCHED_ELEMENT)) schedElementKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSchedService().getPath().toString(), schedServiceKey)) && 
			(String::equalNoCase(getSchedElement().getPath().toString(), schedElementKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SchedulingServiceToSchedule::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SchedulingServiceToSchedule::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SchedulingServiceToSchedule::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SchedulingServiceToSchedule::validateInstance()
{
	return true;
}

