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


UNIX_RealizesProcessor::UNIX_RealizesProcessor(void)
{
}

UNIX_RealizesProcessor::~UNIX_RealizesProcessor(void)
{
}

Boolean UNIX_RealizesProcessor::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_RealizesProcessor::getAntecedent() const
{
	return _antecedent;
}

void UNIX_RealizesProcessor::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_RealizesProcessor::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_RealizesProcessor::getDependent() const
{
	return _dependent;
}

void UNIX_RealizesProcessor::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_RealizesProcessor::getRealizationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REALIZATION_TYPE, getRealizationType());
	return true;
}

Uint16 UNIX_RealizesProcessor::getRealizationType() const
{
	return _realizationType;
}

void UNIX_RealizesProcessor::setRealizationType(Uint16 &value)
{
	_realizationType = value;
}


void UNIX_RealizesProcessor::clearInstance()
{

	_antecedent = _antecedentCardProvider.constructInstance(
		CIMName("UNIX_Card"),
		CIMNamespaceName("root/cimv2"),
		_antecedentCard);
	_dependent = _dependentProcessorProvider.constructInstance(
		CIMName("UNIX_Processor"),
		CIMNamespaceName("root/cimv2"),
		_dependentProcessor);
	_realizationType = Uint16(0);

}

Boolean UNIX_RealizesProcessor::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "RealizationType"))
			{
				Uint16 realizationTypeValue;
				property.getValue().get(realizationTypeValue);
				setRealizationType(realizationTypeValue);
			}
	}
	return true;
}


Boolean UNIX_RealizesProcessor::initialize()
{
	_antecedentCard.initialize();
	_antecedentSystemBusCard.initialize();
	_antecedentChassis.initialize();
	_antecedentRack.initialize();
	_antecedentPackageLocation.initialize();
	_antecedentStorageMediaLocation.initialize();
	_antecedentMagazine.initialize();
	_dependentProcessor.initialize();
	return true;
}
Boolean UNIX_RealizesProcessor::load(int &pIndex)
{

	_antecedent = _antecedentCardProvider.constructInstance(
		CIMName("UNIX_Card"),
		CIMNamespaceName("root/cimv2"),
		_antecedentCard);
	_dependent = _dependentProcessorProvider.constructInstance(
		CIMName("UNIX_Processor"),
		CIMNamespaceName("root/cimv2"),
		_dependentProcessor);
	_realizationType = Uint16(0);

	return false;
}

Boolean UNIX_RealizesProcessor::finalize()
{
	_antecedentCard.finalize();
	_antecedentSystemBusCard.finalize();
	_antecedentChassis.finalize();
	_antecedentRack.finalize();
	_antecedentPackageLocation.finalize();
	_antecedentStorageMediaLocation.finalize();
	_antecedentMagazine.finalize();
	_dependentProcessor.finalize();
	return true;
}


Boolean UNIX_RealizesProcessor::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_RealizesProcessor::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RealizesProcessor::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RealizesProcessor::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RealizesProcessor::validateInstance()
{
	return true;
}

