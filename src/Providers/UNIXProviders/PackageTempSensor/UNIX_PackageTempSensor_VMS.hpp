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


UNIX_PackageTempSensor::UNIX_PackageTempSensor(void)
{
}

UNIX_PackageTempSensor::~UNIX_PackageTempSensor(void)
{
}

Boolean UNIX_PackageTempSensor::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_PackageTempSensor::getAntecedent() const
{
	return _antecedent;
}

void UNIX_PackageTempSensor::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_PackageTempSensor::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_PackageTempSensor::getDependent() const
{
	return _dependent;
}

void UNIX_PackageTempSensor::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_PackageTempSensor::clearInstance()
{

	_antecedent = _antecedentTemperatureSensorProvider.constructInstance(
		CIMName("UNIX_TemperatureSensor"),
		CIMNamespaceName("root/cimv2"),
		_antecedentTemperatureSensor);
	_dependent = _dependentCardProvider.constructInstance(
		CIMName("UNIX_Card"),
		CIMNamespaceName("root/cimv2"),
		_dependentCard);

}

Boolean UNIX_PackageTempSensor::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_PackageTempSensor::initialize()
{
	_antecedentTemperatureSensor.initialize();
	_dependentCard.initialize();
	_dependentSystemBusCard.initialize();
	_dependentChassis.initialize();
	_dependentRack.initialize();
	_dependentPackageLocation.initialize();
	_dependentStorageMediaLocation.initialize();
	_dependentMagazine.initialize();
	return true;
}
Boolean UNIX_PackageTempSensor::load(int &pIndex)
{

	_antecedent = _antecedentTemperatureSensorProvider.constructInstance(
		CIMName("UNIX_TemperatureSensor"),
		CIMNamespaceName("root/cimv2"),
		_antecedentTemperatureSensor);
	_dependent = _dependentCardProvider.constructInstance(
		CIMName("UNIX_Card"),
		CIMNamespaceName("root/cimv2"),
		_dependentCard);

	return false;
}

Boolean UNIX_PackageTempSensor::finalize()
{
	_antecedentTemperatureSensor.finalize();
	_dependentCard.finalize();
	_dependentSystemBusCard.finalize();
	_dependentChassis.finalize();
	_dependentRack.finalize();
	_dependentPackageLocation.finalize();
	_dependentStorageMediaLocation.finalize();
	_dependentMagazine.finalize();
	return true;
}


Boolean UNIX_PackageTempSensor::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PackageTempSensor::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PackageTempSensor::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PackageTempSensor::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PackageTempSensor::validateInstance()
{
	return true;
}

