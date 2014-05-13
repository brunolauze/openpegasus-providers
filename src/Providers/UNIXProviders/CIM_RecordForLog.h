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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.25.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Logs
*/


/* **** Description *** */
/*
The RecordForLog class is used to instantiate records to be aggregated to a Log.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_RecordForLog:
				RecordFormat String
				RecordData String
				Locale String
				PerceivedSeverity UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_RecordForLog:


*/

#ifndef __CIM_RECORDFORLOG_H
#define __CIM_RECORDFORLOG_H


#include "CIM_ManagedElement.h"


#ifndef PROPERTY_RECORD_FORMAT
#define PROPERTY_RECORD_FORMAT \
					"RecordFormat"
#endif

#ifndef PROPERTY_RECORD_DATA
#define PROPERTY_RECORD_DATA \
					"RecordData"
#endif

#ifndef PROPERTY_LOCALE
#define PROPERTY_LOCALE \
					"Locale"
#endif

#ifndef PROPERTY_PERCEIVED_SEVERITY
#define PROPERTY_PERCEIVED_SEVERITY \
					"PerceivedSeverity"
#endif



class CIM_RecordForLog :
	public CIM_ManagedElement
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

	virtual Boolean getRecordFormat(CIMProperty&) const=0;
	virtual String getRecordFormat() const=0;
	virtual void setRecordFormat(String&)=0;
	virtual Boolean getRecordData(CIMProperty&) const=0;
	virtual String getRecordData() const=0;
	virtual void setRecordData(String&)=0;
	virtual Boolean getLocale(CIMProperty&) const=0;
	virtual String getLocale() const=0;
	virtual void setLocale(String&)=0;
	virtual Boolean getPerceivedSeverity(CIMProperty&) const=0;
	virtual Uint16 getPerceivedSeverity() const=0;
	virtual void setPerceivedSeverity(Uint16&)=0;


private:

};

#endif /* CIM_RECORDFORLOG */
