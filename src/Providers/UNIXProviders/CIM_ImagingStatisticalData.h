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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.20.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Statistics
*/


/* **** Description *** */
/*
This class extends StatisticalData to abstract the concept of ImagingStatisticalData associated with an imaging system (e.g., ComputerSystem), imaging service (e.g., PrintService), imaging device (e.g., Printer), imaging job (e.g., PrintJob), or any other imaging element. 
This abstract class defines common properties for: 
(a) persistence (PersistenceType and OtherPersistenceType); 
(b) correlation of ImagingStatisticalData information between CIM and SNMP interfaces (SNMPKeyId). 
Note: An instance of any concrete class derived from this abstract class shall be associated with exactly one instance of a scoping imaging element (e.g., Printer) via an instance of the ElementStatisticalData association class. 
See: Model and diagram in section 4 of PWG Imaging System State and Counter MIB (PWG 5106.3-2008, or successor).
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_StatisticalData:
				StartStatisticTime DateTime
				StatisticTime DateTime
				SampleInterval DateTime
				RateIntervalEndTime DateTime
				RateIntervalStartTime DateTime

			CIM_ImagingStatisticalData:
				PersistenceType UInt16
				OtherPersistenceType String
				SNMPKeyId UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalData:
				ResetSelectedStats UInt32

			CIM_ImagingStatisticalData:


*/

#ifndef __CIM_IMAGINGSTATISTICALDATA_H
#define __CIM_IMAGINGSTATISTICALDATA_H


#include "CIM_StatisticalData.h"


#ifndef PROPERTY_PERSISTENCE_TYPE
#define PROPERTY_PERSISTENCE_TYPE \
					"PersistenceType"
#endif

#ifndef PROPERTY_OTHER_PERSISTENCE_TYPE
#define PROPERTY_OTHER_PERSISTENCE_TYPE \
					"OtherPersistenceType"
#endif

#ifndef PROPERTY_S_N_M_P_KEY_ID
#define PROPERTY_S_N_M_P_KEY_ID \
					"SNMPKeyId"
#endif



class CIM_ImagingStatisticalData :
	public CIM_StatisticalData
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

	virtual Boolean getPersistenceType(CIMProperty&) const=0;
	virtual Uint16 getPersistenceType() const=0;
	virtual void setPersistenceType(Uint16&)=0;
	virtual Boolean getOtherPersistenceType(CIMProperty&) const=0;
	virtual String getOtherPersistenceType() const=0;
	virtual void setOtherPersistenceType(String&)=0;
	virtual Boolean getSNMPKeyId(CIMProperty&) const=0;
	virtual Uint32 getSNMPKeyId() const=0;
	virtual void setSNMPKeyId(Uint32&)=0;

	virtual Uint32 invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)=0;



private:

};

#endif /* CIM_IMAGINGSTATISTICALDATA */
