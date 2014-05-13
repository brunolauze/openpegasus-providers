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


UNIX_SwitchPortSpanningTree::UNIX_SwitchPortSpanningTree(void)
{
}

UNIX_SwitchPortSpanningTree::~UNIX_SwitchPortSpanningTree(void)
{
}

Boolean UNIX_SwitchPortSpanningTree::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_SwitchPortSpanningTree::getAntecedent() const
{
	return _antecedent;
}

void UNIX_SwitchPortSpanningTree::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_SwitchPortSpanningTree::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_SwitchPortSpanningTree::getDependent() const
{
	return _dependent;
}

void UNIX_SwitchPortSpanningTree::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_SwitchPortSpanningTree::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint8 UNIX_SwitchPortSpanningTree::getPriority() const
{
	return _priority;
}

void UNIX_SwitchPortSpanningTree::setPriority(Uint8 &value)
{
	_priority = value;
}

Boolean UNIX_SwitchPortSpanningTree::getState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE, getState());
	return true;
}

Uint16 UNIX_SwitchPortSpanningTree::getState() const
{
	return _state;
}

void UNIX_SwitchPortSpanningTree::setState(Uint16 &value)
{
	_state = value;
}

Boolean UNIX_SwitchPortSpanningTree::getEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLE, getEnable());
	return true;
}

Uint16 UNIX_SwitchPortSpanningTree::getEnable() const
{
	return _enable;
}

void UNIX_SwitchPortSpanningTree::setEnable(Uint16 &value)
{
	_enable = value;
}

Boolean UNIX_SwitchPortSpanningTree::getPathCost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_COST, getPathCost());
	return true;
}

Uint16 UNIX_SwitchPortSpanningTree::getPathCost() const
{
	return _pathCost;
}

void UNIX_SwitchPortSpanningTree::setPathCost(Uint16 &value)
{
	_pathCost = value;
}

Boolean UNIX_SwitchPortSpanningTree::getDesignatedRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIGNATED_ROOT, getDesignatedRoot());
	return true;
}

String UNIX_SwitchPortSpanningTree::getDesignatedRoot() const
{
	return _designatedRoot;
}

void UNIX_SwitchPortSpanningTree::setDesignatedRoot(String &value)
{
	_designatedRoot = value;
}

Boolean UNIX_SwitchPortSpanningTree::getDesignatedCost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIGNATED_COST, getDesignatedCost());
	return true;
}

Uint16 UNIX_SwitchPortSpanningTree::getDesignatedCost() const
{
	return _designatedCost;
}

void UNIX_SwitchPortSpanningTree::setDesignatedCost(Uint16 &value)
{
	_designatedCost = value;
}

Boolean UNIX_SwitchPortSpanningTree::getDesignatedBridge(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIGNATED_BRIDGE, getDesignatedBridge());
	return true;
}

String UNIX_SwitchPortSpanningTree::getDesignatedBridge() const
{
	return _designatedBridge;
}

void UNIX_SwitchPortSpanningTree::setDesignatedBridge(String &value)
{
	_designatedBridge = value;
}

Boolean UNIX_SwitchPortSpanningTree::getDesignatedPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIGNATED_PORT, getDesignatedPort());
	return true;
}

Uint16 UNIX_SwitchPortSpanningTree::getDesignatedPort() const
{
	return _designatedPort;
}

void UNIX_SwitchPortSpanningTree::setDesignatedPort(Uint16 &value)
{
	_designatedPort = value;
}


void UNIX_SwitchPortSpanningTree::clearInstance()
{

	_antecedent = _antecedentSwitchPortProvider.constructInstance(
		CIMName("UNIX_SwitchPort"),
		CIMNamespaceName("root/cimv2"),
		_antecedentSwitchPort);
	_dependent = _dependentSpanningTreeServiceProvider.constructInstance(
		CIMName("UNIX_SpanningTreeService"),
		CIMNamespaceName("root/cimv2"),
		_dependentSpanningTreeService);
	_priority = Uint8(0);
	_state = Uint16(0);
	_enable = Uint16(0);
	_pathCost = Uint16(0);
	_designatedRoot = String ("");
	_designatedCost = Uint16(0);
	_designatedBridge = String ("");
	_designatedPort = Uint16(0);

}

Boolean UNIX_SwitchPortSpanningTree::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Priority"))
			{
				Uint8 priorityValue;
				property.getValue().get(priorityValue);
				setPriority(priorityValue);
			}
			else if (String::equal(property.getName().getString(), "State"))
			{
				Uint16 stateValue;
				property.getValue().get(stateValue);
				setState(stateValue);
			}
			else if (String::equal(property.getName().getString(), "Enable"))
			{
				Uint16 enableValue;
				property.getValue().get(enableValue);
				setEnable(enableValue);
			}
			else if (String::equal(property.getName().getString(), "PathCost"))
			{
				Uint16 pathCostValue;
				property.getValue().get(pathCostValue);
				setPathCost(pathCostValue);
			}
			else if (String::equal(property.getName().getString(), "DesignatedRoot"))
			{
				String designatedRootValue;
				property.getValue().get(designatedRootValue);
				setDesignatedRoot(designatedRootValue);
			}
			else if (String::equal(property.getName().getString(), "DesignatedCost"))
			{
				Uint16 designatedCostValue;
				property.getValue().get(designatedCostValue);
				setDesignatedCost(designatedCostValue);
			}
			else if (String::equal(property.getName().getString(), "DesignatedBridge"))
			{
				String designatedBridgeValue;
				property.getValue().get(designatedBridgeValue);
				setDesignatedBridge(designatedBridgeValue);
			}
			else if (String::equal(property.getName().getString(), "DesignatedPort"))
			{
				Uint16 designatedPortValue;
				property.getValue().get(designatedPortValue);
				setDesignatedPort(designatedPortValue);
			}
	}
	return true;
}


Boolean UNIX_SwitchPortSpanningTree::initialize()
{
	_antecedentSwitchPort.initialize();
	_dependentSpanningTreeService.initialize();
	return true;
}
Boolean UNIX_SwitchPortSpanningTree::load(int &pIndex)
{

	_antecedent = _antecedentSwitchPortProvider.constructInstance(
		CIMName("UNIX_SwitchPort"),
		CIMNamespaceName("root/cimv2"),
		_antecedentSwitchPort);
	_dependent = _dependentSpanningTreeServiceProvider.constructInstance(
		CIMName("UNIX_SpanningTreeService"),
		CIMNamespaceName("root/cimv2"),
		_dependentSpanningTreeService);
	_priority = Uint8(0);
	_state = Uint16(0);
	_enable = Uint16(0);
	_pathCost = Uint16(0);
	_designatedRoot = String ("");
	_designatedCost = Uint16(0);
	_designatedBridge = String ("");
	_designatedPort = Uint16(0);

	return false;
}

Boolean UNIX_SwitchPortSpanningTree::finalize()
{
	_antecedentSwitchPort.finalize();
	_dependentSpanningTreeService.finalize();
	return true;
}


Boolean UNIX_SwitchPortSpanningTree::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_SwitchPortSpanningTree::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortSpanningTree::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortSpanningTree::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortSpanningTree::validateInstance()
{
	return true;
}

