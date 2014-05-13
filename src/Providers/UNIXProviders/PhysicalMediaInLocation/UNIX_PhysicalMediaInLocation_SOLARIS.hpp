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


UNIX_PhysicalMediaInLocation::UNIX_PhysicalMediaInLocation(void)
{
}

UNIX_PhysicalMediaInLocation::~UNIX_PhysicalMediaInLocation(void)
{
}

Boolean UNIX_PhysicalMediaInLocation::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_PhysicalMediaInLocation::getAntecedent() const
{
	return _antecedent;
}

void UNIX_PhysicalMediaInLocation::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_PhysicalMediaInLocation::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_PhysicalMediaInLocation::getDependent() const
{
	return _dependent;
}

void UNIX_PhysicalMediaInLocation::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_PhysicalMediaInLocation::getOrientation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORIENTATION, getOrientation());
	return true;
}

Uint16 UNIX_PhysicalMediaInLocation::getOrientation() const
{
	return _orientation;
}

void UNIX_PhysicalMediaInLocation::setOrientation(Uint16 &value)
{
	_orientation = value;
}

Boolean UNIX_PhysicalMediaInLocation::getTimeOfLastPlacement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_PLACEMENT, getTimeOfLastPlacement());
	return true;
}

CIMDateTime UNIX_PhysicalMediaInLocation::getTimeOfLastPlacement() const
{
	return _timeOfLastPlacement;
}

void UNIX_PhysicalMediaInLocation::setTimeOfLastPlacement(CIMDateTime &value)
{
	_timeOfLastPlacement = value;
}


void UNIX_PhysicalMediaInLocation::clearInstance()
{

	_antecedent = _antecedentStorageMediaLocationProvider.constructInstance(
		CIMName("UNIX_StorageMediaLocation"),
		CIMNamespaceName("root/cimv2"),
		_antecedentStorageMediaLocation);
	_dependent = _dependentPhysicalMediaProvider.constructInstance(
		CIMName("UNIX_PhysicalMedia"),
		CIMNamespaceName("root/cimv2"),
		_dependentPhysicalMedia);
	_orientation = Uint16(0);
	_timeOfLastPlacement = CIMHelper::getCurrentTime();

}

Boolean UNIX_PhysicalMediaInLocation::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Orientation"))
			{
				Uint16 orientationValue;
				property.getValue().get(orientationValue);
				setOrientation(orientationValue);
			}
			else if (String::equal(property.getName().getString(), "TimeOfLastPlacement"))
			{
				CIMDateTime timeOfLastPlacementValue;
				property.getValue().get(timeOfLastPlacementValue);
				setTimeOfLastPlacement(timeOfLastPlacementValue);
			}
	}
	return true;
}


Boolean UNIX_PhysicalMediaInLocation::initialize()
{
	_antecedentStorageMediaLocation.initialize();
	_dependentPhysicalMedia.initialize();
	return true;
}
Boolean UNIX_PhysicalMediaInLocation::load(int &pIndex)
{

	_antecedent = _antecedentStorageMediaLocationProvider.constructInstance(
		CIMName("UNIX_StorageMediaLocation"),
		CIMNamespaceName("root/cimv2"),
		_antecedentStorageMediaLocation);
	_dependent = _dependentPhysicalMediaProvider.constructInstance(
		CIMName("UNIX_PhysicalMedia"),
		CIMNamespaceName("root/cimv2"),
		_dependentPhysicalMedia);
	_orientation = Uint16(0);
	_timeOfLastPlacement = CIMHelper::getCurrentTime();

	return false;
}

Boolean UNIX_PhysicalMediaInLocation::finalize()
{
	_antecedentStorageMediaLocation.finalize();
	_dependentPhysicalMedia.finalize();
	return true;
}


Boolean UNIX_PhysicalMediaInLocation::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_PhysicalMediaInLocation::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalMediaInLocation::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalMediaInLocation::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_PhysicalMediaInLocation::validateInstance()
{
	return true;
}

