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


UNIX_RouteForwardedByService::UNIX_RouteForwardedByService(void)
{
}

UNIX_RouteForwardedByService::~UNIX_RouteForwardedByService(void)
{
}

Boolean UNIX_RouteForwardedByService::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_RouteForwardedByService::getAntecedent() const
{
	return _antecedent;
}

void UNIX_RouteForwardedByService::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_RouteForwardedByService::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_RouteForwardedByService::getDependent() const
{
	return _dependent;
}

void UNIX_RouteForwardedByService::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_RouteForwardedByService::getAdminDistance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_DISTANCE, getAdminDistance());
	return true;
}

Uint16 UNIX_RouteForwardedByService::getAdminDistance() const
{
	return _adminDistance;
}

void UNIX_RouteForwardedByService::setAdminDistance(Uint16 &value)
{
	_adminDistance = value;
}

Boolean UNIX_RouteForwardedByService::getPathMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_METRIC, getPathMetric());
	return true;
}

Uint16 UNIX_RouteForwardedByService::getPathMetric() const
{
	return _pathMetric;
}

void UNIX_RouteForwardedByService::setPathMetric(Uint16 &value)
{
	_pathMetric = value;
}


void UNIX_RouteForwardedByService::clearInstance()
{

	_antecedent = _antecedentNATServiceProvider.constructInstance(
		CIMName("UNIX_NATService"),
		CIMNamespaceName("root/cimv2"),
		_antecedentNATService);
	_dependent = _dependentNextHopRoutingProvider.constructInstance(
		CIMName("UNIX_NextHopRouting"),
		CIMNamespaceName("root/cimv2"),
		_dependentNextHopRouting);
	_adminDistance = Uint16(0);
	_pathMetric = Uint16(0);

}

Boolean UNIX_RouteForwardedByService::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "AdminDistance"))
			{
				Uint16 adminDistanceValue;
				property.getValue().get(adminDistanceValue);
				setAdminDistance(adminDistanceValue);
			}
			else if (String::equal(property.getName().getString(), "PathMetric"))
			{
				Uint16 pathMetricValue;
				property.getValue().get(pathMetricValue);
				setPathMetric(pathMetricValue);
			}
	}
	return true;
}


Boolean UNIX_RouteForwardedByService::initialize()
{
	_antecedentNATService.initialize();
	_antecedentTransparentBridgingService.initialize();
	_antecedentSourceRoutingService.initialize();
	_antecedentSpanningTreeService.initialize();
	_antecedentSwitchService.initialize();
	_dependentNextHopRouting.initialize();
	return true;
}
Boolean UNIX_RouteForwardedByService::load(int &pIndex)
{

	_antecedent = _antecedentNATServiceProvider.constructInstance(
		CIMName("UNIX_NATService"),
		CIMNamespaceName("root/cimv2"),
		_antecedentNATService);
	_dependent = _dependentNextHopRoutingProvider.constructInstance(
		CIMName("UNIX_NextHopRouting"),
		CIMNamespaceName("root/cimv2"),
		_dependentNextHopRouting);
	_adminDistance = Uint16(0);
	_pathMetric = Uint16(0);

	return false;
}

Boolean UNIX_RouteForwardedByService::finalize()
{
	_antecedentNATService.finalize();
	_antecedentTransparentBridgingService.finalize();
	_antecedentSourceRoutingService.finalize();
	_antecedentSpanningTreeService.finalize();
	_antecedentSwitchService.finalize();
	_dependentNextHopRouting.finalize();
	return true;
}


Boolean UNIX_RouteForwardedByService::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_RouteForwardedByService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RouteForwardedByService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RouteForwardedByService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RouteForwardedByService::validateInstance()
{
	return true;
}

