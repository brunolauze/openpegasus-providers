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
CIM::Device::StorageLib
*/


/* **** Description *** */
/*
Within an automated StorageLibrary, Media should be accessible to the various robotics and MediaTransferDevices (Pickers, Changers, InterLibraryPorts, etc.). The Library may be serviced by different TransferDevices, each responsible for a subset of the Library's StorageMediaLocations. The Device ServicesLocation association indicates that the Transfer Device handles Media stored in the referenced Location. For example, LibraryPort 'A' may only service Media from Slots 1-10, while LibraryPort 'B' covers Slots 11-33. This detail is conveyed by this association.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_DeviceServicesLocation:
				Inaccessible Boolean


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_DeviceServicesLocation:


*/

#ifndef __UNIX_DEVICESERVICESLOCATION_H
#define __UNIX_DEVICESERVICESLOCATION_H


#include "CIM_Dependency.h"
#include <InterLibraryPort/UNIX_InterLibraryPortProvider.h>
#include <LimitedAccessPort/UNIX_LimitedAccessPortProvider.h>
#include <StorageMediaLocation/UNIX_StorageMediaLocationProvider.h>

#include "UNIX_DeviceServicesLocationDeps.h"


#ifndef PROPERTY_INACCESSIBLE
#define PROPERTY_INACCESSIBLE \
					"Inaccessible"
#endif



class UNIX_DeviceServicesLocation :
	public CIM_Dependency
{
public:

	UNIX_DeviceServicesLocation();
	~UNIX_DeviceServicesLocation();

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
	virtual Boolean getInaccessible(CIMProperty&) const;
	virtual Boolean getInaccessible() const;
	virtual void setInaccessible(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Boolean _inaccessible;

UNIX_InterLibraryPort _antecedentInterLibraryPort;
UNIX_InterLibraryPortProvider _antecedentInterLibraryPortProvider;
UNIX_LimitedAccessPort _antecedentLimitedAccessPort;
UNIX_LimitedAccessPortProvider _antecedentLimitedAccessPortProvider;

UNIX_StorageMediaLocation _dependentStorageMediaLocation;
UNIX_StorageMediaLocationProvider _dependentStorageMediaLocationProvider;

#	include "UNIX_DeviceServicesLocationPrivate.h"


};

#endif /* UNIX_DEVICESERVICESLOCATION */
