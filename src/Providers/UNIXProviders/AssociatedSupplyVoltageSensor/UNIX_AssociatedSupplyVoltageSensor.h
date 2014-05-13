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


/* **** Deprecated *** */
/*
CIM_AssociatedSensor
*/


/* **** Version *** */
/*
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Sensors
*/


/* **** Description *** */
/*
The use of this association is being deprecated in lieu of using AssociatedSensor, since the use of the referenced class VoltageSensor is deprecated. 
A PowerSupply may have an associated VoltageSensor, monitoring its input voltage. This is described by this association.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_AssociatedSensor:

			UNIX_AssociatedSupplyVoltageSensor:
				MonitoringRange UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_AssociatedSensor:

			UNIX_AssociatedSupplyVoltageSensor:


*/

#ifndef __UNIX_ASSOCIATEDSUPPLYVOLTAGESENSOR_H
#define __UNIX_ASSOCIATEDSUPPLYVOLTAGESENSOR_H


#include "CIM_AssociatedSensor.h"
#include <VoltageSensor/UNIX_VoltageSensorProvider.h>

#include "UNIX_AssociatedSupplyVoltageSensorDeps.h"


#ifndef PROPERTY_MONITORING_RANGE
#define PROPERTY_MONITORING_RANGE \
					"MonitoringRange"
#endif



class UNIX_AssociatedSupplyVoltageSensor :
	public CIM_AssociatedSensor
{
public:

	UNIX_AssociatedSupplyVoltageSensor();
	~UNIX_AssociatedSupplyVoltageSensor();

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
	virtual Boolean getMonitoringRange(CIMProperty&) const;
	virtual Uint16 getMonitoringRange() const;
	virtual void setMonitoringRange(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _monitoringRange;

UNIX_VoltageSensor _antecedentVoltageSensor;
UNIX_VoltageSensorProvider _antecedentVoltageSensorProvider;


#	include "UNIX_AssociatedSupplyVoltageSensorPrivate.h"


};

#endif /* UNIX_ASSOCIATEDSUPPLYVOLTAGESENSOR */
