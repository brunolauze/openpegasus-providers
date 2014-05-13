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
CIM_ClassifierElementUsesFilterList
CIM_ClassifierElementInClassifierService
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
In order for a ClassifierService to correctly identify and process network traffic, that traffic must be described by FilterEntries, which are aggregated into FilterLists. This association defines the Dependency of the ClassifierService on FilterLists (and therefore, their FilterEntries). The cardinality of the association requires that the Classifier Service operate against at least one FilterList. 

The association is deprecated in lieu of associating Filter Lists to ClassifierElements, and ClassifierElements into ClassifierServices. The latter approach is very flexible regarding the implementations that can be modeled, and removes the need to track individual traffic streams using an artificial model property, TrafficClass. Using ClassifierElements, each stream is processed beginning with a single FilterList and progressing through various ConditioningServices, associated via instances of NextService.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_ClassifierFilterSet:
				FilterListPosition UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_ClassifierFilterSet:


*/

#ifndef __UNIX_CLASSIFIERFILTERSET_H
#define __UNIX_CLASSIFIERFILTERSET_H


#include "CIM_Dependency.h"
#include <FilterList/UNIX_FilterListProvider.h>
#include <ClassifierService/UNIX_ClassifierServiceProvider.h>

#include "UNIX_ClassifierFilterSetDeps.h"


#ifndef PROPERTY_FILTER_LIST_POSITION
#define PROPERTY_FILTER_LIST_POSITION \
					"FilterListPosition"
#endif



class UNIX_ClassifierFilterSet :
	public CIM_Dependency
{
public:

	UNIX_ClassifierFilterSet();
	~UNIX_ClassifierFilterSet();

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
	virtual Boolean getFilterListPosition(CIMProperty&) const;
	virtual Uint16 getFilterListPosition() const;
	virtual void setFilterListPosition(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint16 _filterListPosition;

UNIX_FilterList _antecedentFilterList;
UNIX_FilterListProvider _antecedentFilterListProvider;

UNIX_ClassifierService _dependentClassifierService;
UNIX_ClassifierServiceProvider _dependentClassifierServiceProvider;

#	include "UNIX_ClassifierFilterSetPrivate.h"


};

#endif /* UNIX_CLASSIFIERFILTERSET */
