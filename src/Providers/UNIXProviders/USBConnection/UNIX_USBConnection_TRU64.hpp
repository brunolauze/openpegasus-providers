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


UNIX_USBConnection::UNIX_USBConnection(void)
{
}

UNIX_USBConnection::~UNIX_USBConnection(void)
{
}

Boolean UNIX_USBConnection::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_USBConnection::getAntecedent() const
{
	return _antecedent;
}

void UNIX_USBConnection::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_USBConnection::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_USBConnection::getDependent() const
{
	return _dependent;
}

void UNIX_USBConnection::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_USBConnection::getNegotiatedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_SPEED, getNegotiatedSpeed());
	return true;
}

Uint64 UNIX_USBConnection::getNegotiatedSpeed() const
{
	return _negotiatedSpeed;
}

void UNIX_USBConnection::setNegotiatedSpeed(Uint64 &value)
{
	_negotiatedSpeed = value;
}

Boolean UNIX_USBConnection::getNegotiatedDataWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_DATA_WIDTH, getNegotiatedDataWidth());
	return true;
}

Uint32 UNIX_USBConnection::getNegotiatedDataWidth() const
{
	return _negotiatedDataWidth;
}

void UNIX_USBConnection::setNegotiatedDataWidth(Uint32 &value)
{
	_negotiatedDataWidth = value;
}


void UNIX_USBConnection::clearInstance()
{

	_antecedent = _antecedentUSBPortProvider.constructInstance(
		CIMName("UNIX_USBPort"),
		CIMNamespaceName("root/cimv2"),
		_antecedentUSBPort);
	// _dependent = CIMInstance(CIMName("CIM_USBDevice"));
	_negotiatedSpeed = Uint64(0);
	_negotiatedDataWidth = Uint32(0);

}

Boolean UNIX_USBConnection::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "NegotiatedSpeed"))
			{
				Uint64 negotiatedSpeedValue;
				property.getValue().get(negotiatedSpeedValue);
				setNegotiatedSpeed(negotiatedSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "NegotiatedDataWidth"))
			{
				Uint32 negotiatedDataWidthValue;
				property.getValue().get(negotiatedDataWidthValue);
				setNegotiatedDataWidth(negotiatedDataWidthValue);
			}
	}
	return true;
}


Boolean UNIX_USBConnection::initialize()
{
	/* Related Instances are Abstract */
	return false;
	return true;
}
Boolean UNIX_USBConnection::load(int &pIndex)
{

	_antecedent = _antecedentUSBPortProvider.constructInstance(
		CIMName("UNIX_USBPort"),
		CIMNamespaceName("root/cimv2"),
		_antecedentUSBPort);
	// _dependent = CIMInstance(CIMName("CIM_USBDevice"));
	_negotiatedSpeed = Uint64(0);
	_negotiatedDataWidth = Uint32(0);

	return false;
}

Boolean UNIX_USBConnection::finalize()
{
	_antecedentUSBPort.finalize();
	return true;
}


Boolean UNIX_USBConnection::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_USBConnection::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBConnection::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBConnection::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_USBConnection::validateInstance()
{
	return true;
}

