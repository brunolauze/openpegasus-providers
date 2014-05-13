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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.17.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Printing
*/


/* **** Description *** */
/*
This class represents the association between a PrintSupply component of a Printer (print device) and a PrintMarker or PrintFinisher component of the same Printer. Note: A PrintSupply shall be associated with exactly one PrintMarker or PrintFinisher. See: Model in section 2 of Printer MIB (RFC 3805) and section 3 of Finisher MIB (RFC 3806).
*/


/* **** MappingStrings *** */
/*
MIB.IETF|Printer-MIB.prtMarkerSuppliesMarkerIndex
MIB.IETF|Finisher-MIB.finSupplyDeviceIndex
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_AssociatedPrintSupply:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_AssociatedPrintSupply:


*/

#ifndef __UNIX_ASSOCIATEDPRINTSUPPLY_H
#define __UNIX_ASSOCIATEDPRINTSUPPLY_H


#include "CIM_Dependency.h"
#include <PrintSupply/UNIX_PrintSupplyProvider.h>
#include <PrintFinisher/UNIX_PrintFinisherProvider.h>
#include <PrintMarker/UNIX_PrintMarkerProvider.h>
#include <PrintInterlock/UNIX_PrintInterlockProvider.h>
#include <PrintChannel/UNIX_PrintChannelProvider.h>
#include <PrintInputTray/UNIX_PrintInputTrayProvider.h>
#include <PrintOutputTray/UNIX_PrintOutputTrayProvider.h>
#include <PrintInterpreter/UNIX_PrintInterpreterProvider.h>
#include <PrintMediaPath/UNIX_PrintMediaPathProvider.h>

#include "UNIX_AssociatedPrintSupplyDeps.h"




class UNIX_AssociatedPrintSupply :
	public CIM_Dependency
{
public:

	UNIX_AssociatedPrintSupply();
	~UNIX_AssociatedPrintSupply();

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


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;

UNIX_PrintSupply _antecedentPrintSupply;
UNIX_PrintSupplyProvider _antecedentPrintSupplyProvider;

UNIX_PrintFinisher _dependentPrintFinisher;
UNIX_PrintFinisherProvider _dependentPrintFinisherProvider;
UNIX_PrintMarker _dependentPrintMarker;
UNIX_PrintMarkerProvider _dependentPrintMarkerProvider;
UNIX_PrintSupply _dependentPrintSupply;
UNIX_PrintSupplyProvider _dependentPrintSupplyProvider;
UNIX_PrintInterlock _dependentPrintInterlock;
UNIX_PrintInterlockProvider _dependentPrintInterlockProvider;
UNIX_PrintChannel _dependentPrintChannel;
UNIX_PrintChannelProvider _dependentPrintChannelProvider;
UNIX_PrintInputTray _dependentPrintInputTray;
UNIX_PrintInputTrayProvider _dependentPrintInputTrayProvider;
UNIX_PrintOutputTray _dependentPrintOutputTray;
UNIX_PrintOutputTrayProvider _dependentPrintOutputTrayProvider;
UNIX_PrintInterpreter _dependentPrintInterpreter;
UNIX_PrintInterpreterProvider _dependentPrintInterpreterProvider;
UNIX_PrintMediaPath _dependentPrintMediaPath;
UNIX_PrintMediaPathProvider _dependentPrintMediaPathProvider;

#	include "UNIX_AssociatedPrintSupplyPrivate.h"


};

#endif /* UNIX_ASSOCIATEDPRINTSUPPLY */
