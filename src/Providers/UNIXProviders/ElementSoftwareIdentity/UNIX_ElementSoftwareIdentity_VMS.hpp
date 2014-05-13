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


UNIX_ElementSoftwareIdentity::UNIX_ElementSoftwareIdentity(void)
{
}

UNIX_ElementSoftwareIdentity::~UNIX_ElementSoftwareIdentity(void)
{
}

Boolean UNIX_ElementSoftwareIdentity::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_ElementSoftwareIdentity::getAntecedent() const
{
	return _antecedent;
}

void UNIX_ElementSoftwareIdentity::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_ElementSoftwareIdentity::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_ElementSoftwareIdentity::getDependent() const
{
	return _dependent;
}

void UNIX_ElementSoftwareIdentity::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_ElementSoftwareIdentity::getUpgradeCondition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPGRADE_CONDITION, getUpgradeCondition());
	return true;
}

Uint16 UNIX_ElementSoftwareIdentity::getUpgradeCondition() const
{
	return _upgradeCondition;
}

void UNIX_ElementSoftwareIdentity::setUpgradeCondition(Uint16 &value)
{
	_upgradeCondition = value;
}

Boolean UNIX_ElementSoftwareIdentity::getOtherUpgradeCondition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_UPGRADE_CONDITION, getOtherUpgradeCondition());
	return true;
}

String UNIX_ElementSoftwareIdentity::getOtherUpgradeCondition() const
{
	return _otherUpgradeCondition;
}

void UNIX_ElementSoftwareIdentity::setOtherUpgradeCondition(String &value)
{
	_otherUpgradeCondition = value;
}

Boolean UNIX_ElementSoftwareIdentity::getElementSoftwareStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_SOFTWARE_STATUS, getElementSoftwareStatus());
	return true;
}

Array<Uint16> UNIX_ElementSoftwareIdentity::getElementSoftwareStatus() const
{
	return _elementSoftwareStatus;
}

void UNIX_ElementSoftwareIdentity::setElementSoftwareStatus(Array<Uint16> &value)
{
	_elementSoftwareStatus = value;
}


void UNIX_ElementSoftwareIdentity::clearInstance()
{

	_antecedent = _antecedentSoftwareIdentityProvider.constructInstance(
		CIMName("UNIX_SoftwareIdentity"),
		CIMNamespaceName("root/cimv2"),
		_antecedentSoftwareIdentity);
	// _dependent = CIMInstance(CIMName("CIM_ManagedElement"));
	_upgradeCondition = Uint16(0);
	_otherUpgradeCondition = String ("");
	_elementSoftwareStatus.clear();

}

Boolean UNIX_ElementSoftwareIdentity::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "UpgradeCondition"))
			{
				Uint16 upgradeConditionValue;
				property.getValue().get(upgradeConditionValue);
				setUpgradeCondition(upgradeConditionValue);
			}
			else if (String::equal(property.getName().getString(), "OtherUpgradeCondition"))
			{
				String otherUpgradeConditionValue;
				property.getValue().get(otherUpgradeConditionValue);
				setOtherUpgradeCondition(otherUpgradeConditionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementSoftwareStatus"))
			{
				Array<Uint16> elementSoftwareStatusValue;
				property.getValue().get(elementSoftwareStatusValue);
				setElementSoftwareStatus(elementSoftwareStatusValue);
			}
	}
	return true;
}


Boolean UNIX_ElementSoftwareIdentity::initialize()
{
	/* Related Instances are Abstract */
	return false;
	return true;
}
Boolean UNIX_ElementSoftwareIdentity::load(int &pIndex)
{

	_antecedent = _antecedentSoftwareIdentityProvider.constructInstance(
		CIMName("UNIX_SoftwareIdentity"),
		CIMNamespaceName("root/cimv2"),
		_antecedentSoftwareIdentity);
	// _dependent = CIMInstance(CIMName("CIM_ManagedElement"));
	_upgradeCondition = Uint16(0);
	_otherUpgradeCondition = String ("");
	_elementSoftwareStatus.clear();

	return false;
}

Boolean UNIX_ElementSoftwareIdentity::finalize()
{
	_antecedentSoftwareIdentity.finalize();
	return true;
}


Boolean UNIX_ElementSoftwareIdentity::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_ElementSoftwareIdentity::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementSoftwareIdentity::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementSoftwareIdentity::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ElementSoftwareIdentity::validateInstance()
{
	return true;
}

