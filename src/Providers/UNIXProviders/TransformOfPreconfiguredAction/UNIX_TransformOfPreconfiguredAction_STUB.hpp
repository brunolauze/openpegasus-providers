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


UNIX_TransformOfPreconfiguredAction::UNIX_TransformOfPreconfiguredAction(void)
{
}

UNIX_TransformOfPreconfiguredAction::~UNIX_TransformOfPreconfiguredAction(void)
{
}

Boolean UNIX_TransformOfPreconfiguredAction::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_TransformOfPreconfiguredAction::getAntecedent() const
{
	return _antecedent;
}

void UNIX_TransformOfPreconfiguredAction::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_TransformOfPreconfiguredAction::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_TransformOfPreconfiguredAction::getDependent() const
{
	return _dependent;
}

void UNIX_TransformOfPreconfiguredAction::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_TransformOfPreconfiguredAction::getSPI(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPI, getSPI());
	return true;
}

Uint32 UNIX_TransformOfPreconfiguredAction::getSPI() const
{
	return _sPI;
}

void UNIX_TransformOfPreconfiguredAction::setSPI(Uint32 &value)
{
	_sPI = value;
}

Boolean UNIX_TransformOfPreconfiguredAction::getInboundDirection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INBOUND_DIRECTION, getInboundDirection());
	return true;
}

Boolean UNIX_TransformOfPreconfiguredAction::getInboundDirection() const
{
	return _inboundDirection;
}

void UNIX_TransformOfPreconfiguredAction::setInboundDirection(Boolean &value)
{
	_inboundDirection = value;
}


void UNIX_TransformOfPreconfiguredAction::clearInstance()
{

	_antecedent = _antecedentAHTransformProvider.constructInstance(
		CIMName("UNIX_AHTransform"),
		CIMNamespaceName("root/cimv2"),
		_antecedentAHTransform);
	_dependent = _dependentPreconfiguredTransportActionProvider.constructInstance(
		CIMName("UNIX_PreconfiguredTransportAction"),
		CIMNamespaceName("root/cimv2"),
		_dependentPreconfiguredTransportAction);
	_sPI = Uint32(0);
	_inboundDirection = Boolean(false);

}

Boolean UNIX_TransformOfPreconfiguredAction::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SPI"))
			{
				Uint32 sPIValue;
				property.getValue().get(sPIValue);
				setSPI(sPIValue);
			}
			else if (String::equal(property.getName().getString(), "InboundDirection"))
			{
				Boolean inboundDirectionValue;
				property.getValue().get(inboundDirectionValue);
				setInboundDirection(inboundDirectionValue);
			}
	}
	return true;
}


Boolean UNIX_TransformOfPreconfiguredAction::initialize()
{
	_antecedentAHTransform.initialize();
	_antecedentESPTransform.initialize();
	_antecedentIPCOMPTransform.initialize();
	_dependentPreconfiguredTransportAction.initialize();
	_dependentPreconfiguredTunnelAction.initialize();
	return true;
}
Boolean UNIX_TransformOfPreconfiguredAction::load(int &pIndex)
{

	_antecedent = _antecedentAHTransformProvider.constructInstance(
		CIMName("UNIX_AHTransform"),
		CIMNamespaceName("root/cimv2"),
		_antecedentAHTransform);
	_dependent = _dependentPreconfiguredTransportActionProvider.constructInstance(
		CIMName("UNIX_PreconfiguredTransportAction"),
		CIMNamespaceName("root/cimv2"),
		_dependentPreconfiguredTransportAction);
	_sPI = Uint32(0);
	_inboundDirection = Boolean(false);

	return false;
}

Boolean UNIX_TransformOfPreconfiguredAction::finalize()
{
	_antecedentAHTransform.finalize();
	_antecedentESPTransform.finalize();
	_antecedentIPCOMPTransform.finalize();
	_dependentPreconfiguredTransportAction.finalize();
	_dependentPreconfiguredTunnelAction.finalize();
	return true;
}


Boolean UNIX_TransformOfPreconfiguredAction::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_TransformOfPreconfiguredAction::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TransformOfPreconfiguredAction::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TransformOfPreconfiguredAction::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_TransformOfPreconfiguredAction::validateInstance()
{
	return true;
}

