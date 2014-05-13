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


UNIX_ElementStatisticalDataView::UNIX_ElementStatisticalDataView(void)
{
}

UNIX_ElementStatisticalDataView::~UNIX_ElementStatisticalDataView(void)
{
}

Boolean UNIX_ElementStatisticalDataView::getManagedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_ELEMENT, getManagedElement());
	return true;
}

CIMInstance UNIX_ElementStatisticalDataView::getManagedElement() const
{
	return _managedElement;
}

void UNIX_ElementStatisticalDataView::setManagedElement(CIMInstance &value)
{
	_managedElement = value;
}

Boolean UNIX_ElementStatisticalDataView::getStats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATS, getStats());
	return true;
}

CIMInstance UNIX_ElementStatisticalDataView::getStats() const
{
	return _stats;
}

void UNIX_ElementStatisticalDataView::setStats(CIMInstance &value)
{
	_stats = value;
}


void UNIX_ElementStatisticalDataView::clearInstance()
{

	_managedElement = CIMInstance(CIMName("CIM_PhysicalComputerSystemView"));
	_stats = CIMInstance(CIMName("CIM_VLANStatistics"));

}

Boolean UNIX_ElementStatisticalDataView::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "ManagedElement"))
			{
				CIMInstance managedElementValue;
				property.getValue().get(managedElementValue);
				setManagedElement(managedElementValue);
			}
			else if (String::equal(property.getName().getString(), "Stats"))
			{
				CIMInstance statsValue;
				property.getValue().get(statsValue);
				setStats(statsValue);
			}
	}
	return true;
}


Boolean UNIX_ElementStatisticalDataView::initialize()
{
	return false;
}

Boolean UNIX_ElementStatisticalDataView::load(int &pIndex)
{
	
	_managedElement = CIMInstance(CIMName("CIM_PhysicalComputerSystemView"));
	_stats = CIMInstance(CIMName("CIM_VLANStatistics"));
	
	return false;
}

Boolean UNIX_ElementStatisticalDataView::finalize()
{
	return false;
}


Boolean UNIX_ElementStatisticalDataView::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String managedElementKey;
	String statsKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_MANAGED_ELEMENT)) managedElementKey = kb.getValue();
		else if (keyName.equal(PROPERTY_STATS)) statsKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getManagedElement().getPath().toString(), managedElementKey)) && 
			(String::equalNoCase(getStats().getPath().toString(), statsKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ElementStatisticalDataView::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementStatisticalDataView::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementStatisticalDataView::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementStatisticalDataView::validateInstance()
{
	return true;
}

