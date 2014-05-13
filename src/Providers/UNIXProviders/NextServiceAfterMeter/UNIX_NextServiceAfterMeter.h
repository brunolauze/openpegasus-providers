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
CIM::Network::QoS
*/


/* **** Description *** */
/*
This association describes a predecessor-successor relationship between a MeterService and one or more ConditioningService objects that process traffic from the meter. For example, for devices that implement preamble marking, the FollowingService reference (after the meter) is a PreambleMarkerService - to record the results of the metering in the preamble. 

It might be expected that the NextServiceAfterMeter association would subclass from NextService. However, meters are 1:n fan-out elements, and require a mechanism to distinguish between the different results/outputs of the meter. Therefore, this association defines a new key property, MeterResult, which is used to record the result and identify the output through which this traffic left the meter.
*/


/*
			 *** Properties ***

			UNIX_NextServiceAfterMeter:
				PrecedingService Reference
				FollowingService Reference
				MeterResult UInt16


*/


/*
			 *** Methods ***

			UNIX_NextServiceAfterMeter:


*/

#ifndef __UNIX_NEXTSERVICEAFTERMETER_H
#define __UNIX_NEXTSERVICEAFTERMETER_H


#include "CIM_ClassBase.h"

#include "UNIX_NextServiceAfterMeterDeps.h"


#ifndef PROPERTY_PRECEDING_SERVICE
#define PROPERTY_PRECEDING_SERVICE \
					"PrecedingService"
#endif

#ifndef PROPERTY_FOLLOWING_SERVICE
#define PROPERTY_FOLLOWING_SERVICE \
					"FollowingService"
#endif

#ifndef PROPERTY_METER_RESULT
#define PROPERTY_METER_RESULT \
					"MeterResult"
#endif



class UNIX_NextServiceAfterMeter :
	public CIM_ClassBase
{
public:

	UNIX_NextServiceAfterMeter();
	~UNIX_NextServiceAfterMeter();

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

	virtual Boolean getPrecedingService(CIMProperty&) const;
	virtual CIMInstance getPrecedingService() const;
	virtual void setPrecedingService(CIMInstance&);
	virtual Boolean getFollowingService(CIMProperty&) const;
	virtual CIMInstance getFollowingService() const;
	virtual void setFollowingService(CIMInstance&);
	virtual Boolean getMeterResult(CIMProperty&) const;
	virtual Uint16 getMeterResult() const;
	virtual void setMeterResult(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _precedingService;
	CIMInstance _followingService;
	Uint16 _meterResult;

#	include "UNIX_NextServiceAfterMeterPrivate.h"


};

#endif /* UNIX_NEXTSERVICEAFTERMETER */
