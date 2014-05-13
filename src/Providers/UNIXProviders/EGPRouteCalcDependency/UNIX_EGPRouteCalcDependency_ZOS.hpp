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


UNIX_EGPRouteCalcDependency::UNIX_EGPRouteCalcDependency(void)
{
}

UNIX_EGPRouteCalcDependency::~UNIX_EGPRouteCalcDependency(void)
{
}

Boolean UNIX_EGPRouteCalcDependency::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_EGPRouteCalcDependency::getAntecedent() const
{
	return _antecedent;
}

void UNIX_EGPRouteCalcDependency::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_EGPRouteCalcDependency::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_EGPRouteCalcDependency::getDependent() const
{
	return _dependent;
}

void UNIX_EGPRouteCalcDependency::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_EGPRouteCalcDependency::getTypeOfDependency(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_DEPENDENCY, getTypeOfDependency());
	return true;
}

Uint16 UNIX_EGPRouteCalcDependency::getTypeOfDependency() const
{
	return _typeOfDependency;
}

void UNIX_EGPRouteCalcDependency::setTypeOfDependency(Uint16 &value)
{
	_typeOfDependency = value;
}

Boolean UNIX_EGPRouteCalcDependency::getRestartService(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESTART_SERVICE, getRestartService());
	return true;
}

Boolean UNIX_EGPRouteCalcDependency::getRestartService() const
{
	return _restartService;
}

void UNIX_EGPRouteCalcDependency::setRestartService(Boolean &value)
{
	_restartService = value;
}

Boolean UNIX_EGPRouteCalcDependency::getIGPInjection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_G_P_INJECTION, getIGPInjection());
	return true;
}

Uint16 UNIX_EGPRouteCalcDependency::getIGPInjection() const
{
	return _iGPInjection;
}

void UNIX_EGPRouteCalcDependency::setIGPInjection(Uint16 &value)
{
	_iGPInjection = value;
}


void UNIX_EGPRouteCalcDependency::clearInstance()
{

	_antecedent = _antecedentBGPServiceProvider.constructInstance(
		CIMName("UNIX_BGPService"),
		CIMNamespaceName("root/cimv2"),
		_antecedentBGPService);
	_dependent = _dependentBGPServiceProvider.constructInstance(
		CIMName("UNIX_BGPService"),
		CIMNamespaceName("root/cimv2"),
		_dependentBGPService);
	_typeOfDependency = Uint16(0);
	_restartService = Boolean(false);
	_iGPInjection = Uint16(0);

}

Boolean UNIX_EGPRouteCalcDependency::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "IGPInjection"))
			{
				Uint16 iGPInjectionValue;
				property.getValue().get(iGPInjectionValue);
				setIGPInjection(iGPInjectionValue);
			}
	}
	return true;
}


Boolean UNIX_EGPRouteCalcDependency::initialize()
{
	_antecedentBGPService.initialize();
	_antecedentOSPFService.initialize();
	_dependentBGPService.initialize();
	_dependentOSPFService.initialize();
	return true;
}
Boolean UNIX_EGPRouteCalcDependency::load(int &pIndex)
{

	_antecedent = _antecedentBGPServiceProvider.constructInstance(
		CIMName("UNIX_BGPService"),
		CIMNamespaceName("root/cimv2"),
		_antecedentBGPService);
	_dependent = _dependentBGPServiceProvider.constructInstance(
		CIMName("UNIX_BGPService"),
		CIMNamespaceName("root/cimv2"),
		_dependentBGPService);
	_typeOfDependency = Uint16(0);
	_restartService = Boolean(false);
	_iGPInjection = Uint16(0);

	return false;
}

Boolean UNIX_EGPRouteCalcDependency::finalize()
{
	_antecedentBGPService.finalize();
	_antecedentOSPFService.finalize();
	_dependentBGPService.finalize();
	_dependentOSPFService.finalize();
	return true;
}


Boolean UNIX_EGPRouteCalcDependency::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_EGPRouteCalcDependency::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EGPRouteCalcDependency::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EGPRouteCalcDependency::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_EGPRouteCalcDependency::validateInstance()
{
	return true;
}

