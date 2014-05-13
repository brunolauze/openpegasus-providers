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


UNIX_AccessLabelReader::UNIX_AccessLabelReader(void)
{
}

UNIX_AccessLabelReader::~UNIX_AccessLabelReader(void)
{
}

Boolean UNIX_AccessLabelReader::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_AccessLabelReader::getAntecedent() const
{
	return _antecedent;
}

void UNIX_AccessLabelReader::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_AccessLabelReader::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_AccessLabelReader::getDependent() const
{
	return _dependent;
}

void UNIX_AccessLabelReader::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_AccessLabelReader::clearInstance()
{

	_antecedent = _antecedentLabelReaderProvider.constructInstance(
		CIMName("UNIX_LabelReader"),
		CIMNamespaceName("root/cimv2"),
		_antecedentLabelReader);
	_dependent = _dependentTapeDriveProvider.constructInstance(
		CIMName("UNIX_TapeDrive"),
		CIMNamespaceName("root/cimv2"),
		_dependentTapeDrive);

}

Boolean UNIX_AccessLabelReader::loadInstance(const CIMInstance &instance)
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


Boolean UNIX_AccessLabelReader::initialize()
{
	_antecedentLabelReader.initialize();
	_dependentTapeDrive.initialize();
	_dependentCDROMDrive.initialize();
	_dependentWORMDrive.initialize();
	_dependentDiskDrive.initialize();
	_dependentDVDDrive.initialize();
	_dependentDisketteDrive.initialize();
	_dependentMagnetoOpticalDrive.initialize();
	return true;
}
Boolean UNIX_AccessLabelReader::load(int &pIndex)
{

	_antecedent = _antecedentLabelReaderProvider.constructInstance(
		CIMName("UNIX_LabelReader"),
		CIMNamespaceName("root/cimv2"),
		_antecedentLabelReader);
	_dependent = _dependentTapeDriveProvider.constructInstance(
		CIMName("UNIX_TapeDrive"),
		CIMNamespaceName("root/cimv2"),
		_dependentTapeDrive);

	return false;
}

Boolean UNIX_AccessLabelReader::finalize()
{
	_antecedentLabelReader.finalize();
	_dependentTapeDrive.finalize();
	_dependentCDROMDrive.finalize();
	_dependentWORMDrive.finalize();
	_dependentDiskDrive.finalize();
	_dependentDVDDrive.finalize();
	_dependentDisketteDrive.finalize();
	_dependentMagnetoOpticalDrive.finalize();
	return true;
}


Boolean UNIX_AccessLabelReader::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_AccessLabelReader::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccessLabelReader::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccessLabelReader::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AccessLabelReader::validateInstance()
{
	return true;
}

