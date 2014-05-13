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


/* **** Deprecated *** */
/*
CIM_FCPortStatistics
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::NetworkAdapter
*/


/* **** Description *** */
/*
Note: The use of the FibrePortEventCounters class is deprecated because FibrePort is deprecated. FCPortStatistics should be used instead, but it redefines the level at which data is collected. Therefore, there is no direct translation of the individual counters between the two classes. Deprecated description: This object defines error counters that are specific to a FibrePort.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_StatisticalInformation:
				Name String

			CIM_DeviceStatisticalInformation:
				SystemCreationClassName String
				SystemName String
				DeviceCreationClassName String
				DeviceID String
				CreationClassName String

			UNIX_FibrePortEventCounters:
				PLOGIsReceived UInt64
				PLOGIsSent UInt64
				EOFAbortsReceived UInt64
				EOFAbortsTransmitted UInt64
				PLOGOsReceived UInt64
				PLOGOsSent UInt64
				PLOGIsRejected UInt64
				PLOGOsRejected UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalInformation:

			CIM_DeviceStatisticalInformation:

			UNIX_FibrePortEventCounters:
				ResetCounter UInt32


*/

#ifndef __UNIX_FIBREPORTEVENTCOUNTERS_H
#define __UNIX_FIBREPORTEVENTCOUNTERS_H


#include "CIM_DeviceStatisticalInformation.h"

#include "UNIX_FibrePortEventCountersDeps.h"


#ifndef PROPERTY_P_L_O_G_IS_RECEIVED
#define PROPERTY_P_L_O_G_IS_RECEIVED \
					"PLOGIsReceived"
#endif

#ifndef PROPERTY_P_L_O_G_IS_SENT
#define PROPERTY_P_L_O_G_IS_SENT \
					"PLOGIsSent"
#endif

#ifndef PROPERTY_E_O_F_ABORTS_RECEIVED
#define PROPERTY_E_O_F_ABORTS_RECEIVED \
					"EOFAbortsReceived"
#endif

#ifndef PROPERTY_E_O_F_ABORTS_TRANSMITTED
#define PROPERTY_E_O_F_ABORTS_TRANSMITTED \
					"EOFAbortsTransmitted"
#endif

#ifndef PROPERTY_P_L_O_G_OS_RECEIVED
#define PROPERTY_P_L_O_G_OS_RECEIVED \
					"PLOGOsReceived"
#endif

#ifndef PROPERTY_P_L_O_G_OS_SENT
#define PROPERTY_P_L_O_G_OS_SENT \
					"PLOGOsSent"
#endif

#ifndef PROPERTY_P_L_O_G_IS_REJECTED
#define PROPERTY_P_L_O_G_IS_REJECTED \
					"PLOGIsRejected"
#endif

#ifndef PROPERTY_P_L_O_G_OS_REJECTED
#define PROPERTY_P_L_O_G_OS_REJECTED \
					"PLOGOsRejected"
#endif



class UNIX_FibrePortEventCounters :
	public CIM_DeviceStatisticalInformation
{
public:

	UNIX_FibrePortEventCounters();
	~UNIX_FibrePortEventCounters();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getDeviceCreationClassName(CIMProperty&) const;
	virtual String getDeviceCreationClassName() const;
	virtual void setDeviceCreationClassName(String&);
	virtual Boolean getDeviceID(CIMProperty&) const;
	virtual String getDeviceID() const;
	virtual void setDeviceID(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getPLOGIsReceived(CIMProperty&) const;
	virtual Uint64 getPLOGIsReceived() const;
	virtual void setPLOGIsReceived(Uint64&);
	virtual Boolean getPLOGIsSent(CIMProperty&) const;
	virtual Uint64 getPLOGIsSent() const;
	virtual void setPLOGIsSent(Uint64&);
	virtual Boolean getEOFAbortsReceived(CIMProperty&) const;
	virtual Uint64 getEOFAbortsReceived() const;
	virtual void setEOFAbortsReceived(Uint64&);
	virtual Boolean getEOFAbortsTransmitted(CIMProperty&) const;
	virtual Uint64 getEOFAbortsTransmitted() const;
	virtual void setEOFAbortsTransmitted(Uint64&);
	virtual Boolean getPLOGOsReceived(CIMProperty&) const;
	virtual Uint64 getPLOGOsReceived() const;
	virtual void setPLOGOsReceived(Uint64&);
	virtual Boolean getPLOGOsSent(CIMProperty&) const;
	virtual Uint64 getPLOGOsSent() const;
	virtual void setPLOGOsSent(Uint64&);
	virtual Boolean getPLOGIsRejected(CIMProperty&) const;
	virtual Uint64 getPLOGIsRejected() const;
	virtual void setPLOGIsRejected(Uint64&);
	virtual Boolean getPLOGOsRejected(CIMProperty&) const;
	virtual Uint64 getPLOGOsRejected() const;
	virtual void setPLOGOsRejected(Uint64&);

	virtual Uint32 invokeResetCounter(
		Uint16 &inSelectedCounter
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _name;
	String _systemCreationClassName;
	String _systemName;
	String _deviceCreationClassName;
	String _deviceID;
	String _creationClassName;
	Uint64 _pLOGIsReceived;
	Uint64 _pLOGIsSent;
	Uint64 _eOFAbortsReceived;
	Uint64 _eOFAbortsTransmitted;
	Uint64 _pLOGOsReceived;
	Uint64 _pLOGOsSent;
	Uint64 _pLOGIsRejected;
	Uint64 _pLOGOsRejected;

#	include "UNIX_FibrePortEventCountersPrivate.h"


};

#endif /* UNIX_FIBREPORTEVENTCOUNTERS */
