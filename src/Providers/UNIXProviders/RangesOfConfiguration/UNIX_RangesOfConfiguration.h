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


/* **** Association *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::OSPF
*/


/* **** Description *** */
/*
This association connects address ranges to the OSPF area configuration. When network administrators want to control the advertisements of OSPF routers by filters, they first define the relevant ranges. In order for a router to handle a range, an instance of RangeOfIPAddresses MUST be associated to the router's OSPFAreaConfiguration, using this relationship. The association between the range and area configuration contains a property (EnableAdvertise) defining the handling - to allow or disallow advertismenets in the range.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_RangesOfConfiguration:
				EnableAdvertise Boolean


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_RangesOfConfiguration:


*/

#ifndef __UNIX_RANGESOFCONFIGURATION_H
#define __UNIX_RANGESOFCONFIGURATION_H


#include "CIM_Dependency.h"
#include <RangeOfIPAddresses/UNIX_RangeOfIPAddressesProvider.h>
#include <OSPFAreaConfiguration/UNIX_OSPFAreaConfigurationProvider.h>

#include "UNIX_RangesOfConfigurationDeps.h"


#ifndef PROPERTY_ENABLE_ADVERTISE
#define PROPERTY_ENABLE_ADVERTISE \
					"EnableAdvertise"
#endif



class UNIX_RangesOfConfiguration :
	public CIM_Dependency
{
public:

	UNIX_RangesOfConfiguration();
	~UNIX_RangesOfConfiguration();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(const Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);
	virtual void setCIMOMHandle(CIMOMHandle&);
	virtual void clearInstance();
	virtual Boolean loadInstance(const CIMInstance&);
	virtual Boolean createInstance(const OperationContext&);
	virtual Boolean modifyInstance(const OperationContext&);
	virtual Boolean deleteInstance(const OperationContext&);
	virtual Boolean validateInstance();

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual void setAntecedent(CIMInstance&);
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual void setDependent(CIMInstance&);
	virtual Boolean getEnableAdvertise(CIMProperty&) const;
	virtual Boolean getEnableAdvertise() const;
	virtual void setEnableAdvertise(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Boolean _enableAdvertise;

UNIX_RangeOfIPAddresses _antecedentRangeOfIPAddresses;
UNIX_RangeOfIPAddressesProvider _antecedentRangeOfIPAddressesProvider;

UNIX_OSPFAreaConfiguration _dependentOSPFAreaConfiguration;
UNIX_OSPFAreaConfigurationProvider _dependentOSPFAreaConfigurationProvider;

#	include "UNIX_RangesOfConfigurationPrivate.h"


};

#endif /* UNIX_RANGESOFCONFIGURATION */
