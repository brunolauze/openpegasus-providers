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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::USB
*/


/* **** Description *** */
/*
USBControllerHasHub defines the Hub(s) that are downstream of the USBController.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_DeviceConnection:
				NegotiatedSpeed UInt64
				NegotiatedDataWidth UInt32

			CIM_ControlledBy:
				AccessState UInt16
				TimeOfDeviceReset DateTime
				NumberOfHardResets UInt32
				NumberOfSoftResets UInt32
				DeviceNumber String
				AccessMode UInt16
				AccessPriority UInt16

			UNIX_USBControllerHasHub:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_DeviceConnection:

			CIM_ControlledBy:

			UNIX_USBControllerHasHub:


*/

#ifndef __UNIX_USBCONTROLLERHASHUB_H
#define __UNIX_USBCONTROLLERHASHUB_H


#include "CIM_ControlledBy.h"
#include <USBController/UNIX_USBControllerProvider.h>
#include <USBHub/UNIX_USBHubProvider.h>

#include "UNIX_USBControllerHasHubDeps.h"




class UNIX_USBControllerHasHub :
	public CIM_ControlledBy
{
public:

	UNIX_USBControllerHasHub();
	~UNIX_USBControllerHasHub();

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
	virtual Boolean getNegotiatedSpeed(CIMProperty&) const;
	virtual Uint64 getNegotiatedSpeed() const;
	virtual void setNegotiatedSpeed(Uint64&);
	virtual Boolean getNegotiatedDataWidth(CIMProperty&) const;
	virtual Uint32 getNegotiatedDataWidth() const;
	virtual void setNegotiatedDataWidth(Uint32&);
	virtual Boolean getAccessState(CIMProperty&) const;
	virtual Uint16 getAccessState() const;
	virtual void setAccessState(Uint16&);
	virtual Boolean getTimeOfDeviceReset(CIMProperty&) const;
	virtual CIMDateTime getTimeOfDeviceReset() const;
	virtual void setTimeOfDeviceReset(CIMDateTime&);
	virtual Boolean getNumberOfHardResets(CIMProperty&) const;
	virtual Uint32 getNumberOfHardResets() const;
	virtual void setNumberOfHardResets(Uint32&);
	virtual Boolean getNumberOfSoftResets(CIMProperty&) const;
	virtual Uint32 getNumberOfSoftResets() const;
	virtual void setNumberOfSoftResets(Uint32&);
	virtual Boolean getDeviceNumber(CIMProperty&) const;
	virtual String getDeviceNumber() const;
	virtual void setDeviceNumber(String&);
	virtual Boolean getAccessMode(CIMProperty&) const;
	virtual Uint16 getAccessMode() const;
	virtual void setAccessMode(Uint16&);
	virtual Boolean getAccessPriority(CIMProperty&) const;
	virtual Uint16 getAccessPriority() const;
	virtual void setAccessPriority(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint64 _negotiatedSpeed;
	Uint32 _negotiatedDataWidth;
	Uint16 _accessState;
	CIMDateTime _timeOfDeviceReset;
	Uint32 _numberOfHardResets;
	Uint32 _numberOfSoftResets;
	String _deviceNumber;
	Uint16 _accessMode;
	Uint16 _accessPriority;

UNIX_USBController _antecedentUSBController;
UNIX_USBControllerProvider _antecedentUSBControllerProvider;

UNIX_USBHub _dependentUSBHub;
UNIX_USBHubProvider _dependentUSBHubProvider;

#	include "UNIX_USBControllerHasHubPrivate.h"


};

#endif /* UNIX_USBCONTROLLERHASHUB */
