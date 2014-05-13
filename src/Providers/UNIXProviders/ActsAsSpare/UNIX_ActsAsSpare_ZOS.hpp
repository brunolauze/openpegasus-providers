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


UNIX_ActsAsSpare::UNIX_ActsAsSpare(void)
{
}

UNIX_ActsAsSpare::~UNIX_ActsAsSpare(void)
{
}

Boolean UNIX_ActsAsSpare::getGroup(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP, getGroup());
	return true;
}

CIMInstance UNIX_ActsAsSpare::getGroup() const
{
	return _group;
}

void UNIX_ActsAsSpare::setGroup(CIMInstance &value)
{
	_group = value;
}

Boolean UNIX_ActsAsSpare::getSpare(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPARE, getSpare());
	return true;
}

CIMInstance UNIX_ActsAsSpare::getSpare() const
{
	return _spare;
}

void UNIX_ActsAsSpare::setSpare(CIMInstance &value)
{
	_spare = value;
}

Boolean UNIX_ActsAsSpare::getHotStandby(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_STANDBY, getHotStandby());
	return true;
}

Boolean UNIX_ActsAsSpare::getHotStandby() const
{
	return _hotStandby;
}

void UNIX_ActsAsSpare::setHotStandby(Boolean &value)
{
	_hotStandby = value;
}


void UNIX_ActsAsSpare::clearInstance()
{

	_group = CIMInstance(CIMName("CIM_SpareGroup"));
	// _spare = CIMInstance(CIMName("CIM_ManagedSystemElement"));
	_hotStandby = Boolean(false);

}

Boolean UNIX_ActsAsSpare::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Group"))
			{
				CIMInstance groupValue;
				property.getValue().get(groupValue);
				setGroup(groupValue);
			}
			else if (String::equal(property.getName().getString(), "Spare"))
			{
				CIMInstance spareValue;
				property.getValue().get(spareValue);
				setSpare(spareValue);
			}
			else if (String::equal(property.getName().getString(), "HotStandby"))
			{
				Boolean hotStandbyValue;
				property.getValue().get(hotStandbyValue);
				setHotStandby(hotStandbyValue);
			}
	}
	return true;
}


Boolean UNIX_ActsAsSpare::initialize()
{
	return false;
}

Boolean UNIX_ActsAsSpare::load(int &pIndex)
{
	
	_group = CIMInstance(CIMName("CIM_SpareGroup"));
	// _spare = CIMInstance(CIMName("CIM_ManagedSystemElement"));
	_hotStandby = Boolean(false);
	
	return false;
}

Boolean UNIX_ActsAsSpare::finalize()
{
	return false;
}


Boolean UNIX_ActsAsSpare::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String groupKey;
	String spareKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_GROUP)) groupKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SPARE)) spareKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getGroup().getPath().toString(), groupKey)) && 
			(String::equalNoCase(getSpare().getPath().toString(), spareKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ActsAsSpare::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ActsAsSpare::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ActsAsSpare::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ActsAsSpare::validateInstance()
{
	return true;
}

