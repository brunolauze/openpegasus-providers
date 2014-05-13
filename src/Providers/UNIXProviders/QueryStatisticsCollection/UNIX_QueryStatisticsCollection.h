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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.39.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageStatistics
*/


/* **** Description *** */
/*
A subclass of SystemSpecificCollection which collects together statistics and gathers them into an efficient representation. This enables very large numbers of statistics to be efficiently gathered via CIM Indications or Operations.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Collection:

			CIM_SystemSpecificCollection:

			UNIX_StatisticsCollection:
				SampleInterval DateTime
				TimeLastSampled DateTime

			UNIX_QueryStatisticsCollection:
				Query String
				QueryLanguage UInt16
				SelectedEncoding UInt16
				SelectedNames String
				SelectedTypes String
				SelectedValues String
				SelectedRateNames String
				SelectedRateTypes String
				SelectedRateValues String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_SystemSpecificCollection:

			UNIX_StatisticsCollection:

			UNIX_QueryStatisticsCollection:


*/

#ifndef __UNIX_QUERYSTATISTICSCOLLECTION_H
#define __UNIX_QUERYSTATISTICSCOLLECTION_H


#include <StatisticsCollection/UNIX_StatisticsCollection.h>

#include "UNIX_QueryStatisticsCollectionDeps.h"


#ifndef PROPERTY_QUERY
#define PROPERTY_QUERY \
					"Query"
#endif

#ifndef PROPERTY_QUERY_LANGUAGE
#define PROPERTY_QUERY_LANGUAGE \
					"QueryLanguage"
#endif

#ifndef PROPERTY_SELECTED_ENCODING
#define PROPERTY_SELECTED_ENCODING \
					"SelectedEncoding"
#endif

#ifndef PROPERTY_SELECTED_NAMES
#define PROPERTY_SELECTED_NAMES \
					"SelectedNames"
#endif

#ifndef PROPERTY_SELECTED_TYPES
#define PROPERTY_SELECTED_TYPES \
					"SelectedTypes"
#endif

#ifndef PROPERTY_SELECTED_VALUES
#define PROPERTY_SELECTED_VALUES \
					"SelectedValues"
#endif

#ifndef PROPERTY_SELECTED_RATE_NAMES
#define PROPERTY_SELECTED_RATE_NAMES \
					"SelectedRateNames"
#endif

#ifndef PROPERTY_SELECTED_RATE_TYPES
#define PROPERTY_SELECTED_RATE_TYPES \
					"SelectedRateTypes"
#endif

#ifndef PROPERTY_SELECTED_RATE_VALUES
#define PROPERTY_SELECTED_RATE_VALUES \
					"SelectedRateValues"
#endif



class UNIX_QueryStatisticsCollection :
	public UNIX_StatisticsCollection
{
public:

	UNIX_QueryStatisticsCollection();
	~UNIX_QueryStatisticsCollection();

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

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getSampleInterval(CIMProperty&) const;
	virtual CIMDateTime getSampleInterval() const;
	virtual void setSampleInterval(CIMDateTime&);
	virtual Boolean getTimeLastSampled(CIMProperty&) const;
	virtual CIMDateTime getTimeLastSampled() const;
	virtual void setTimeLastSampled(CIMDateTime&);
	virtual Boolean getQuery(CIMProperty&) const;
	virtual String getQuery() const;
	virtual void setQuery(String&);
	virtual Boolean getQueryLanguage(CIMProperty&) const;
	virtual Uint16 getQueryLanguage() const;
	virtual void setQueryLanguage(Uint16&);
	virtual Boolean getSelectedEncoding(CIMProperty&) const;
	virtual Uint16 getSelectedEncoding() const;
	virtual void setSelectedEncoding(Uint16&);
	virtual Boolean getSelectedNames(CIMProperty&) const;
	virtual String getSelectedNames() const;
	virtual void setSelectedNames(String&);
	virtual Boolean getSelectedTypes(CIMProperty&) const;
	virtual String getSelectedTypes() const;
	virtual void setSelectedTypes(String&);
	virtual Boolean getSelectedValues(CIMProperty&) const;
	virtual String getSelectedValues() const;
	virtual void setSelectedValues(String&);
	virtual Boolean getSelectedRateNames(CIMProperty&) const;
	virtual String getSelectedRateNames() const;
	virtual void setSelectedRateNames(String&);
	virtual Boolean getSelectedRateTypes(CIMProperty&) const;
	virtual String getSelectedRateTypes() const;
	virtual void setSelectedRateTypes(String&);
	virtual Boolean getSelectedRateValues(CIMProperty&) const;
	virtual String getSelectedRateValues() const;
	virtual void setSelectedRateValues(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _sampleInterval;
	CIMDateTime _timeLastSampled;
	String _query;
	Uint16 _queryLanguage;
	Uint16 _selectedEncoding;
	String _selectedNames;
	String _selectedTypes;
	String _selectedValues;
	String _selectedRateNames;
	String _selectedRateTypes;
	String _selectedRateValues;

#	include "UNIX_QueryStatisticsCollectionPrivate.h"


};

#endif /* UNIX_QUERYSTATISTICSCOLLECTION */
