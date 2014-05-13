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


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Statistics
*/


/* **** Description *** */
/*
A subclass of SystemSpecificCollection which collects together statistics for a system. This class forms an 'anchor point' from which all the statistics kept for the system can be found (via the MemberOfCollection associations).
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_SystemSpecificCollection:

			UNIX_StatisticsCollection:


*/

#ifndef __UNIX_STATISTICSCOLLECTION_H
#define __UNIX_STATISTICSCOLLECTION_H


#include "CIM_SystemSpecificCollection.h"

#include "UNIX_StatisticsCollectionDeps.h"


#ifndef PROPERTY_SAMPLE_INTERVAL
#define PROPERTY_SAMPLE_INTERVAL \
					"SampleInterval"
#endif

#ifndef PROPERTY_TIME_LAST_SAMPLED
#define PROPERTY_TIME_LAST_SAMPLED \
					"TimeLastSampled"
#endif



class UNIX_StatisticsCollection :
	public CIM_SystemSpecificCollection
{
public:

	UNIX_StatisticsCollection();
	~UNIX_StatisticsCollection();

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

#	include "UNIX_StatisticsCollectionPrivate.h"


};

#endif /* UNIX_STATISTICSCOLLECTION */
