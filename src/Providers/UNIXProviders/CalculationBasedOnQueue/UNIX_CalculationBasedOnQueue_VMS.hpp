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


UNIX_CalculationBasedOnQueue::UNIX_CalculationBasedOnQueue(void)
{
}

UNIX_CalculationBasedOnQueue::~UNIX_CalculationBasedOnQueue(void)
{
}

Boolean UNIX_CalculationBasedOnQueue::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_CalculationBasedOnQueue::getAntecedent() const
{
	return _antecedent;
}

void UNIX_CalculationBasedOnQueue::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_CalculationBasedOnQueue::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_CalculationBasedOnQueue::getDependent() const
{
	return _dependent;
}

void UNIX_CalculationBasedOnQueue::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_CalculationBasedOnQueue::getTypeOfDependency(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_DEPENDENCY, getTypeOfDependency());
	return true;
}

Uint16 UNIX_CalculationBasedOnQueue::getTypeOfDependency() const
{
	return _typeOfDependency;
}

void UNIX_CalculationBasedOnQueue::setTypeOfDependency(Uint16 &value)
{
	_typeOfDependency = value;
}

Boolean UNIX_CalculationBasedOnQueue::getRestartService(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESTART_SERVICE, getRestartService());
	return true;
}

Boolean UNIX_CalculationBasedOnQueue::getRestartService() const
{
	return _restartService;
}

void UNIX_CalculationBasedOnQueue::setRestartService(Boolean &value)
{
	_restartService = value;
}


void UNIX_CalculationBasedOnQueue::clearInstance()
{

	_antecedent = _antecedentQueuingServiceProvider.constructInstance(
		CIMName("UNIX_QueuingService"),
		CIMNamespaceName("root/cimv2"),
		_antecedentQueuingService);
	_dependent = _dependentDropThresholdCalculationServiceProvider.constructInstance(
		CIMName("UNIX_DropThresholdCalculationService"),
		CIMNamespaceName("root/cimv2"),
		_dependentDropThresholdCalculationService);
	_typeOfDependency = Uint16(0);
	_restartService = Boolean(false);

}

Boolean UNIX_CalculationBasedOnQueue::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TypeOfDependency"))
			{
				Uint16 typeOfDependencyValue;
				property.getValue().get(typeOfDependencyValue);
				setTypeOfDependency(typeOfDependencyValue);
			}
			else if (String::equal(property.getName().getString(), "RestartService"))
			{
				Boolean restartServiceValue;
				property.getValue().get(restartServiceValue);
				setRestartService(restartServiceValue);
			}
	}
	return true;
}


Boolean UNIX_CalculationBasedOnQueue::initialize()
{
	_antecedentQueuingService.initialize();
	_dependentDropThresholdCalculationService.initialize();
	return true;
}
Boolean UNIX_CalculationBasedOnQueue::load(int &pIndex)
{

	_antecedent = _antecedentQueuingServiceProvider.constructInstance(
		CIMName("UNIX_QueuingService"),
		CIMNamespaceName("root/cimv2"),
		_antecedentQueuingService);
	_dependent = _dependentDropThresholdCalculationServiceProvider.constructInstance(
		CIMName("UNIX_DropThresholdCalculationService"),
		CIMNamespaceName("root/cimv2"),
		_dependentDropThresholdCalculationService);
	_typeOfDependency = Uint16(0);
	_restartService = Boolean(false);

	return false;
}

Boolean UNIX_CalculationBasedOnQueue::finalize()
{
	_antecedentQueuingService.finalize();
	_dependentDropThresholdCalculationService.finalize();
	return true;
}


Boolean UNIX_CalculationBasedOnQueue::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_CalculationBasedOnQueue::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CalculationBasedOnQueue::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CalculationBasedOnQueue::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_CalculationBasedOnQueue::validateInstance()
{
	return true;
}

