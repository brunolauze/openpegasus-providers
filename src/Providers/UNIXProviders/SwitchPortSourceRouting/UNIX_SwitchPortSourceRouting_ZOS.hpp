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


UNIX_SwitchPortSourceRouting::UNIX_SwitchPortSourceRouting(void)
{
}

UNIX_SwitchPortSourceRouting::~UNIX_SwitchPortSourceRouting(void)
{
}

Boolean UNIX_SwitchPortSourceRouting::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_SwitchPortSourceRouting::getAntecedent() const
{
	return _antecedent;
}

void UNIX_SwitchPortSourceRouting::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_SwitchPortSourceRouting::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_SwitchPortSourceRouting::getDependent() const
{
	return _dependent;
}

void UNIX_SwitchPortSourceRouting::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_SwitchPortSourceRouting::getHopCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOP_COUNT, getHopCount());
	return true;
}

Uint16 UNIX_SwitchPortSourceRouting::getHopCount() const
{
	return _hopCount;
}

void UNIX_SwitchPortSourceRouting::setHopCount(Uint16 &value)
{
	_hopCount = value;
}

Boolean UNIX_SwitchPortSourceRouting::getLocalSegment(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_SEGMENT, getLocalSegment());
	return true;
}

Uint16 UNIX_SwitchPortSourceRouting::getLocalSegment() const
{
	return _localSegment;
}

void UNIX_SwitchPortSourceRouting::setLocalSegment(Uint16 &value)
{
	_localSegment = value;
}

Boolean UNIX_SwitchPortSourceRouting::getBridgeNum(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_NUM, getBridgeNum());
	return true;
}

Uint16 UNIX_SwitchPortSourceRouting::getBridgeNum() const
{
	return _bridgeNum;
}

void UNIX_SwitchPortSourceRouting::setBridgeNum(Uint16 &value)
{
	_bridgeNum = value;
}

Boolean UNIX_SwitchPortSourceRouting::getTargetSegment(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_SEGMENT, getTargetSegment());
	return true;
}

Uint16 UNIX_SwitchPortSourceRouting::getTargetSegment() const
{
	return _targetSegment;
}

void UNIX_SwitchPortSourceRouting::setTargetSegment(Uint16 &value)
{
	_targetSegment = value;
}

Boolean UNIX_SwitchPortSourceRouting::getSTESpanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_T_E_SPAN_MODE, getSTESpanMode());
	return true;
}

Uint16 UNIX_SwitchPortSourceRouting::getSTESpanMode() const
{
	return _sTESpanMode;
}

void UNIX_SwitchPortSourceRouting::setSTESpanMode(Uint16 &value)
{
	_sTESpanMode = value;
}


void UNIX_SwitchPortSourceRouting::clearInstance()
{

	_antecedent = _antecedentSwitchPortProvider.constructInstance(
		CIMName("UNIX_SwitchPort"),
		CIMNamespaceName("root/cimv2"),
		_antecedentSwitchPort);
	_dependent = _dependentSourceRoutingServiceProvider.constructInstance(
		CIMName("UNIX_SourceRoutingService"),
		CIMNamespaceName("root/cimv2"),
		_dependentSourceRoutingService);
	_hopCount = Uint16(0);
	_localSegment = Uint16(0);
	_bridgeNum = Uint16(0);
	_targetSegment = Uint16(0);
	_sTESpanMode = Uint16(0);

}

Boolean UNIX_SwitchPortSourceRouting::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "HopCount"))
			{
				Uint16 hopCountValue;
				property.getValue().get(hopCountValue);
				setHopCount(hopCountValue);
			}
			else if (String::equal(property.getName().getString(), "LocalSegment"))
			{
				Uint16 localSegmentValue;
				property.getValue().get(localSegmentValue);
				setLocalSegment(localSegmentValue);
			}
			else if (String::equal(property.getName().getString(), "BridgeNum"))
			{
				Uint16 bridgeNumValue;
				property.getValue().get(bridgeNumValue);
				setBridgeNum(bridgeNumValue);
			}
			else if (String::equal(property.getName().getString(), "TargetSegment"))
			{
				Uint16 targetSegmentValue;
				property.getValue().get(targetSegmentValue);
				setTargetSegment(targetSegmentValue);
			}
			else if (String::equal(property.getName().getString(), "STESpanMode"))
			{
				Uint16 sTESpanModeValue;
				property.getValue().get(sTESpanModeValue);
				setSTESpanMode(sTESpanModeValue);
			}
	}
	return true;
}


Boolean UNIX_SwitchPortSourceRouting::initialize()
{
	_antecedentSwitchPort.initialize();
	_dependentSourceRoutingService.initialize();
	return true;
}
Boolean UNIX_SwitchPortSourceRouting::load(int &pIndex)
{

	_antecedent = _antecedentSwitchPortProvider.constructInstance(
		CIMName("UNIX_SwitchPort"),
		CIMNamespaceName("root/cimv2"),
		_antecedentSwitchPort);
	_dependent = _dependentSourceRoutingServiceProvider.constructInstance(
		CIMName("UNIX_SourceRoutingService"),
		CIMNamespaceName("root/cimv2"),
		_dependentSourceRoutingService);
	_hopCount = Uint16(0);
	_localSegment = Uint16(0);
	_bridgeNum = Uint16(0);
	_targetSegment = Uint16(0);
	_sTESpanMode = Uint16(0);

	return false;
}

Boolean UNIX_SwitchPortSourceRouting::finalize()
{
	_antecedentSwitchPort.finalize();
	_dependentSourceRoutingService.finalize();
	return true;
}


Boolean UNIX_SwitchPortSourceRouting::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SwitchPortSourceRouting::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortSourceRouting::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortSourceRouting::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortSourceRouting::validateInstance()
{
	return true;
}

