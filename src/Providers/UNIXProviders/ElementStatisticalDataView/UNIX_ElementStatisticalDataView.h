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
2.28.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StatisticsElement
*/


/* **** Description *** */
/*
The CIM_ElementStatisticalDataView is an association between a View Class instance and the CIM_StatisticalData instance for the base class of the View (e.g., CIM_StorageVolume).
*/


/*
			 *** Properties ***

			CIM_AbstractElementStatisticalData:
				ManagedElement Reference
				Stats Reference

			UNIX_ElementStatisticalDataView:


*/


/*
			 *** Methods ***

			CIM_AbstractElementStatisticalData:

			UNIX_ElementStatisticalDataView:


*/

#ifndef __UNIX_ELEMENTSTATISTICALDATAVIEW_H
#define __UNIX_ELEMENTSTATISTICALDATAVIEW_H


#include "CIM_AbstractElementStatisticalData.h"

#include "UNIX_ElementStatisticalDataViewDeps.h"




class UNIX_ElementStatisticalDataView :
	public CIM_AbstractElementStatisticalData
{
public:

	UNIX_ElementStatisticalDataView();
	~UNIX_ElementStatisticalDataView();

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

	virtual Boolean getManagedElement(CIMProperty&) const;
	virtual CIMInstance getManagedElement() const;
	virtual void setManagedElement(CIMInstance&);
	virtual Boolean getStats(CIMProperty&) const;
	virtual CIMInstance getStats() const;
	virtual void setStats(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _managedElement;
	CIMInstance _stats;

#	include "UNIX_ElementStatisticalDataViewPrivate.h"


};

#endif /* UNIX_ELEMENTSTATISTICALDATAVIEW */
