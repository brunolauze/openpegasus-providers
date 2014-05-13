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


UNIX_IsSpare::UNIX_IsSpare(void)
{
}

UNIX_IsSpare::~UNIX_IsSpare(void)
{
}

Boolean UNIX_IsSpare::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_IsSpare::getAntecedent() const
{
	return _antecedent;
}

void UNIX_IsSpare::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_IsSpare::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_IsSpare::getDependent() const
{
	return _dependent;
}

void UNIX_IsSpare::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_IsSpare::getSpareStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPARE_STATUS, getSpareStatus());
	return true;
}

Uint16 UNIX_IsSpare::getSpareStatus() const
{
	return _spareStatus;
}

void UNIX_IsSpare::setSpareStatus(Uint16 &value)
{
	_spareStatus = value;
}

Boolean UNIX_IsSpare::getFailoverSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAILOVER_SUPPORTED, getFailoverSupported());
	return true;
}

Uint16 UNIX_IsSpare::getFailoverSupported() const
{
	return _failoverSupported;
}

void UNIX_IsSpare::setFailoverSupported(Uint16 &value)
{
	_failoverSupported = value;
}


void UNIX_IsSpare::clearInstance()
{

	// _antecedent = CIMInstance(CIMName("CIM_ManagedElement"));
	_dependent = _dependentRedundancySetProvider.constructInstance(
		CIMName("UNIX_RedundancySet"),
		CIMNamespaceName("root/cimv2"),
		_dependentRedundancySet);
	_spareStatus = Uint16(0);
	_failoverSupported = Uint16(0);

}

Boolean UNIX_IsSpare::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Antecedent"))
			{
				CIMInstance antecedentValue;
				property.getValue().get(antecedentValue);
				setAntecedent(antecedentValue);
			}
			else if (String::equal(property.getName().getString(), "Dependent"))
			{
				CIMInstance dependentValue;
				property.getValue().get(dependentValue);
				setDependent(dependentValue);
			}
			else if (String::equal(property.getName().getString(), "SpareStatus"))
			{
				Uint16 spareStatusValue;
				property.getValue().get(spareStatusValue);
				setSpareStatus(spareStatusValue);
			}
			else if (String::equal(property.getName().getString(), "FailoverSupported"))
			{
				Uint16 failoverSupportedValue;
				property.getValue().get(failoverSupportedValue);
				setFailoverSupported(failoverSupportedValue);
			}
	}
	return true;
}


Boolean UNIX_IsSpare::initialize()
{
	/* Related Instances are Abstract */
	return false;
	return true;
}
Boolean UNIX_IsSpare::load(int &pIndex)
{

	// _antecedent = CIMInstance(CIMName("CIM_ManagedElement"));
	_dependent = _dependentRedundancySetProvider.constructInstance(
		CIMName("UNIX_RedundancySet"),
		CIMNamespaceName("root/cimv2"),
		_dependentRedundancySet);
	_spareStatus = Uint16(0);
	_failoverSupported = Uint16(0);

	return false;
}

Boolean UNIX_IsSpare::finalize()
{
	_dependentRedundancySet.finalize();
	return true;
}


Boolean UNIX_IsSpare::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String antecedentKey;
	String dependentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ANTECEDENT)) antecedentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEPENDENT)) dependentKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getAntecedent().getPath().toString(), antecedentKey)) && 
			(String::equalNoCase(getDependent().getPath().toString(), dependentKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_IsSpare::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IsSpare::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IsSpare::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IsSpare::validateInstance()
{
	return true;
}

