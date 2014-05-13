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
This class represents the association between a PrintChannel component of a Printer (print device) and a default Job Control Language (JCL) or Page Description Language (PDL) PrintInterpreter component of the same Printer. See: Model in section 2 of Printer MIB (RFC 3805) and section 3 of Finisher MIB (RFC 3806).
*/


/* **** MappingStrings *** */
/*
MIB.IETF|Printer-MIB.prtChannelCurrentJobCntlLangIndex
MIB.IETF|Printer-MIB.prtChannelDefaultPageDescLangIndex
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_AssociatedPrintInterpreter:
				DefaultType UInt16
				OtherDefaultTypeDescription String


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_AssociatedPrintInterpreter:


*/

#ifndef __UNIX_ASSOCIATEDPRINTINTERPRETER_H
#define __UNIX_ASSOCIATEDPRINTINTERPRETER_H


#include "CIM_Dependency.h"
#include <PrintInterpreter/UNIX_PrintInterpreterProvider.h>
#include <PrintChannel/UNIX_PrintChannelProvider.h>

#include "UNIX_AssociatedPrintInterpreterDeps.h"


#ifndef PROPERTY_DEFAULT_TYPE
#define PROPERTY_DEFAULT_TYPE \
					"DefaultType"
#endif

#ifndef PROPERTY_OTHER_DEFAULT_TYPE_DESCRIPTION
#define PROPERTY_OTHER_DEFAULT_TYPE_DESCRIPTION \
					"OtherDefaultTypeDescription"
#endif



class UNIX_AssociatedPrintInterpreter :
	public CIM_Dependency
{
public:

	UNIX_AssociatedPrintInterpreter();
	~UNIX_AssociatedPrintInterpreter();

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
	virtual Boolean getDefaultType(CIMProperty&) const;
	virtual Uint16 getDefaultType() const;
	virtual void setDefaultType(Uint16&);
	virtual Boolean getOtherDefaultTypeDescription(CIMProperty&) const;
	virtual String getOtherDefaultTypeDescription() const;
	virtual void setOtherDefaultTypeDescription(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _defaultType;
	String _otherDefaultTypeDescription;

UNIX_PrintInterpreter _antecedentPrintInterpreter;
UNIX_PrintInterpreterProvider _antecedentPrintInterpreterProvider;

UNIX_PrintChannel _dependentPrintChannel;
UNIX_PrintChannelProvider _dependentPrintChannelProvider;

#	include "UNIX_AssociatedPrintInterpreterPrivate.h"


};

#endif /* UNIX_ASSOCIATEDPRINTINTERPRETER */
