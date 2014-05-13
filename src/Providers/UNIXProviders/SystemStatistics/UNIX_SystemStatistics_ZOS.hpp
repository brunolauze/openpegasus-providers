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


UNIX_SystemStatistics::UNIX_SystemStatistics(void)
{
}

UNIX_SystemStatistics::~UNIX_SystemStatistics(void)
{
}

Boolean UNIX_SystemStatistics::getStats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATS, getStats());
	return true;
}

CIMInstance UNIX_SystemStatistics::getStats() const
{
	return _stats;
}

void UNIX_SystemStatistics::setStats(CIMInstance &value)
{
	_stats = value;
}

Boolean UNIX_SystemStatistics::getElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT, getElement());
	return true;
}

CIMInstance UNIX_SystemStatistics::getElement() const
{
	return _element;
}

void UNIX_SystemStatistics::setElement(CIMInstance &value)
{
	_element = value;
}


void UNIX_SystemStatistics::clearInstance()
{

	_stats = CIMInstance(CIMName("CIM_SystemStatisticalInformation"));
	_element = CIMInstance(CIMName("UNIX_ComputerSystem"));

}

Boolean UNIX_SystemStatistics::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Stats"))
			{
				CIMInstance statsValue;
				property.getValue().get(statsValue);
				setStats(statsValue);
			}
			else if (String::equal(property.getName().getString(), "Element"))
			{
				CIMInstance elementValue;
				property.getValue().get(elementValue);
				setElement(elementValue);
			}
	}
	return true;
}


Boolean UNIX_SystemStatistics::initialize()
{
	return false;
}

Boolean UNIX_SystemStatistics::load(int &pIndex)
{
	
	_stats = CIMInstance(CIMName("CIM_SystemStatisticalInformation"));
	_element = CIMInstance(CIMName("UNIX_ComputerSystem"));
	
	return false;
}

Boolean UNIX_SystemStatistics::finalize()
{
	return false;
}


Boolean UNIX_SystemStatistics::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String statsKey;
	String elementKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_STATS)) statsKey = kb.getValue();
		else if (keyName.equal(PROPERTY_ELEMENT)) elementKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getStats().getPath().toString(), statsKey)) && 
			(String::equalNoCase(getElement().getPath().toString(), elementKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SystemStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SystemStatistics::validateInstance()
{
	return true;
}

