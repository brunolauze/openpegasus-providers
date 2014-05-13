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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.28.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Statistics
*/


/* **** Description *** */
/*
CIM_AbstractElementStatisticalData is an association that relates a ManagedElement (or a view of a ManagedElement) to its StatisticalData.
*/


/*
			 *** Properties ***

			CIM_AbstractElementStatisticalData:
				ManagedElement Reference
				Stats Reference


*/


/*
			 *** Methods ***

			CIM_AbstractElementStatisticalData:


*/

#ifndef __CIM_ABSTRACTELEMENTSTATISTICALDATA_H
#define __CIM_ABSTRACTELEMENTSTATISTICALDATA_H


#include "CIM_ClassBase.h"


#ifndef PROPERTY_MANAGED_ELEMENT
#define PROPERTY_MANAGED_ELEMENT \
					"ManagedElement"
#endif

#ifndef PROPERTY_STATS
#define PROPERTY_STATS \
					"Stats"
#endif



class CIM_AbstractElementStatisticalData :
	public CIM_ClassBase
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getManagedElement(CIMProperty&) const=0;
	virtual CIMInstance getManagedElement() const=0;
	virtual void setManagedElement(CIMInstance&)=0;
	virtual Boolean getStats(CIMProperty&) const=0;
	virtual CIMInstance getStats() const=0;
	virtual void setStats(CIMInstance&)=0;


private:

};

#endif /* CIM_ABSTRACTELEMENTSTATISTICALDATA */
