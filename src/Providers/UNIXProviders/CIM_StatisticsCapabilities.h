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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageStatistics
*/


/* **** Description *** */
/*
An instance of this class defines the specific support for the metered elements and methods for retrieving that statistical data from a StatisticsService.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Capabilities:

			CIM_StatisticsCapabilities:
				ElementTypesSupported UInt16
				SynchronousMethodsSupported UInt16
				AsynchronousMethodsSupported UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			CIM_StatisticsCapabilities:


*/

#ifndef __CIM_STATISTICSCAPABILITIES_H
#define __CIM_STATISTICSCAPABILITIES_H


#include "CIM_Capabilities.h"


#ifndef PROPERTY_ELEMENT_TYPES_SUPPORTED
#define PROPERTY_ELEMENT_TYPES_SUPPORTED \
					"ElementTypesSupported"
#endif

#ifndef PROPERTY_SYNCHRONOUS_METHODS_SUPPORTED
#define PROPERTY_SYNCHRONOUS_METHODS_SUPPORTED \
					"SynchronousMethodsSupported"
#endif

#ifndef PROPERTY_ASYNCHRONOUS_METHODS_SUPPORTED
#define PROPERTY_ASYNCHRONOUS_METHODS_SUPPORTED \
					"AsynchronousMethodsSupported"
#endif



class CIM_StatisticsCapabilities :
	public CIM_Capabilities
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

	virtual Boolean getElementTypesSupported(CIMProperty&) const=0;
	virtual Array<Uint16> getElementTypesSupported() const=0;
	virtual void setElementTypesSupported(Array<Uint16>&)=0;
	virtual Boolean getSynchronousMethodsSupported(CIMProperty&) const=0;
	virtual Array<Uint16> getSynchronousMethodsSupported() const=0;
	virtual void setSynchronousMethodsSupported(Array<Uint16>&)=0;
	virtual Boolean getAsynchronousMethodsSupported(CIMProperty&) const=0;
	virtual Array<Uint16> getAsynchronousMethodsSupported() const=0;
	virtual void setAsynchronousMethodsSupported(Array<Uint16>&)=0;

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)=0;



private:

};

#endif /* CIM_STATISTICSCAPABILITIES */
