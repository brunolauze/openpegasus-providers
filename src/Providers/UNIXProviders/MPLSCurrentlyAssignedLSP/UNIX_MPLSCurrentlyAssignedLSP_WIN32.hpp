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


UNIX_MPLSCurrentlyAssignedLSP::UNIX_MPLSCurrentlyAssignedLSP(void)
{
}

UNIX_MPLSCurrentlyAssignedLSP::~UNIX_MPLSCurrentlyAssignedLSP(void)
{
}

Boolean UNIX_MPLSCurrentlyAssignedLSP::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_MPLSCurrentlyAssignedLSP::getAntecedent() const
{
	return _antecedent;
}

void UNIX_MPLSCurrentlyAssignedLSP::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_MPLSCurrentlyAssignedLSP::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_MPLSCurrentlyAssignedLSP::getDependent() const
{
	return _dependent;
}

void UNIX_MPLSCurrentlyAssignedLSP::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_MPLSCurrentlyAssignedLSP::getPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERENCE, getPreference());
	return true;
}

Uint16 UNIX_MPLSCurrentlyAssignedLSP::getPreference() const
{
	return _preference;
}

void UNIX_MPLSCurrentlyAssignedLSP::setPreference(Uint16 &value)
{
	_preference = value;
}

Boolean UNIX_MPLSCurrentlyAssignedLSP::getTrafficProportion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRAFFIC_PROPORTION, getTrafficProportion());
	return true;
}

Uint8 UNIX_MPLSCurrentlyAssignedLSP::getTrafficProportion() const
{
	return _trafficProportion;
}

void UNIX_MPLSCurrentlyAssignedLSP::setTrafficProportion(Uint8 &value)
{
	_trafficProportion = value;
}


void UNIX_MPLSCurrentlyAssignedLSP::clearInstance()
{

	_antecedent = _antecedentMPLSLSPProvider.constructInstance(
		CIMName("UNIX_MPLSLSP"),
		CIMNamespaceName("root/cimv2"),
		_antecedentMPLSLSP);
	_dependent = _dependentMPLSTunnelProvider.constructInstance(
		CIMName("UNIX_MPLSTunnel"),
		CIMNamespaceName("root/cimv2"),
		_dependentMPLSTunnel);
	_preference = Uint16(0);
	_trafficProportion = Uint8(0);

}

Boolean UNIX_MPLSCurrentlyAssignedLSP::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Preference"))
			{
				Uint16 preferenceValue;
				property.getValue().get(preferenceValue);
				setPreference(preferenceValue);
			}
			else if (String::equal(property.getName().getString(), "TrafficProportion"))
			{
				Uint8 trafficProportionValue;
				property.getValue().get(trafficProportionValue);
				setTrafficProportion(trafficProportionValue);
			}
	}
	return true;
}


Boolean UNIX_MPLSCurrentlyAssignedLSP::initialize()
{
	_antecedentMPLSLSP.initialize();
	_dependentMPLSTunnel.initialize();
	return true;
}
Boolean UNIX_MPLSCurrentlyAssignedLSP::load(int &pIndex)
{

	_antecedent = _antecedentMPLSLSPProvider.constructInstance(
		CIMName("UNIX_MPLSLSP"),
		CIMNamespaceName("root/cimv2"),
		_antecedentMPLSLSP);
	_dependent = _dependentMPLSTunnelProvider.constructInstance(
		CIMName("UNIX_MPLSTunnel"),
		CIMNamespaceName("root/cimv2"),
		_dependentMPLSTunnel);
	_preference = Uint16(0);
	_trafficProportion = Uint8(0);

	return false;
}

Boolean UNIX_MPLSCurrentlyAssignedLSP::finalize()
{
	_antecedentMPLSLSP.finalize();
	_dependentMPLSTunnel.finalize();
	return true;
}


Boolean UNIX_MPLSCurrentlyAssignedLSP::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_MPLSCurrentlyAssignedLSP::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSCurrentlyAssignedLSP::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSCurrentlyAssignedLSP::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_MPLSCurrentlyAssignedLSP::validateInstance()
{
	return true;
}
