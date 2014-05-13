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
Note: The use of the FCAdapterEventCounters class is deprecated because FibreChannelAdapter is deprecated. FCPortStatistics should be used instead, but it redefines the level at which data is collected. Therefore, there is no direct translation of the individual counters between the two classes. This object describes event counters that were specific to a FibreChannelAdapter.
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

			UNIX_FCAdapterEventCounters:
				ABTSFramesReceived UInt64
				ABTSFramesSent UInt64
				FBSYsReceived UInt64
				PBSYsReceived UInt64
				PBSYsSent UInt64
				FRJTsReceived UInt64
				PRJTsReceived UInt64
				PRJTsSent UInt64
				PRLIsRejected UInt64
				PRLOsRejected UInt64
				ABTSFramesRejected UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalInformation:

			CIM_DeviceStatisticalInformation:

			UNIX_FCAdapterEventCounters:
				ResetCounter UInt32


*/

#ifndef __UNIX_FCADAPTEREVENTCOUNTERS_H
#define __UNIX_FCADAPTEREVENTCOUNTERS_H


#include "CIM_DeviceStatisticalInformation.h"

#include "UNIX_FCAdapterEventCountersDeps.h"


#ifndef PROPERTY_A_B_T_S_FRAMES_RECEIVED
#define PROPERTY_A_B_T_S_FRAMES_RECEIVED \
					"ABTSFramesReceived"
#endif

#ifndef PROPERTY_A_B_T_S_FRAMES_SENT
#define PROPERTY_A_B_T_S_FRAMES_SENT \
					"ABTSFramesSent"
#endif

#ifndef PROPERTY_F_B_S_YS_RECEIVED
#define PROPERTY_F_B_S_YS_RECEIVED \
					"FBSYsReceived"
#endif

#ifndef PROPERTY_P_B_S_YS_RECEIVED
#define PROPERTY_P_B_S_YS_RECEIVED \
					"PBSYsReceived"
#endif

#ifndef PROPERTY_P_B_S_YS_SENT
#define PROPERTY_P_B_S_YS_SENT \
					"PBSYsSent"
#endif

#ifndef PROPERTY_F_R_J_TS_RECEIVED
#define PROPERTY_F_R_J_TS_RECEIVED \
					"FRJTsReceived"
#endif

#ifndef PROPERTY_P_R_J_TS_RECEIVED
#define PROPERTY_P_R_J_TS_RECEIVED \
					"PRJTsReceived"
#endif

#ifndef PROPERTY_P_R_J_TS_SENT
#define PROPERTY_P_R_J_TS_SENT \
					"PRJTsSent"
#endif

#ifndef PROPERTY_P_R_L_IS_REJECTED
#define PROPERTY_P_R_L_IS_REJECTED \
					"PRLIsRejected"
#endif

#ifndef PROPERTY_P_R_L_OS_REJECTED
#define PROPERTY_P_R_L_OS_REJECTED \
					"PRLOsRejected"
#endif

#ifndef PROPERTY_A_B_T_S_FRAMES_REJECTED
#define PROPERTY_A_B_T_S_FRAMES_REJECTED \
					"ABTSFramesRejected"
#endif



class UNIX_FCAdapterEventCounters :
	public CIM_DeviceStatisticalInformation
{
public:

	UNIX_FCAdapterEventCounters();
	~UNIX_FCAdapterEventCounters();

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
	virtual Boolean getABTSFramesReceived(CIMProperty&) const;
	virtual Uint64 getABTSFramesReceived() const;
	virtual void setABTSFramesReceived(Uint64&);
	virtual Boolean getABTSFramesSent(CIMProperty&) const;
	virtual Uint64 getABTSFramesSent() const;
	virtual void setABTSFramesSent(Uint64&);
	virtual Boolean getFBSYsReceived(CIMProperty&) const;
	virtual Uint64 getFBSYsReceived() const;
	virtual void setFBSYsReceived(Uint64&);
	virtual Boolean getPBSYsReceived(CIMProperty&) const;
	virtual Uint64 getPBSYsReceived() const;
	virtual void setPBSYsReceived(Uint64&);
	virtual Boolean getPBSYsSent(CIMProperty&) const;
	virtual Uint64 getPBSYsSent() const;
	virtual void setPBSYsSent(Uint64&);
	virtual Boolean getFRJTsReceived(CIMProperty&) const;
	virtual Uint64 getFRJTsReceived() const;
	virtual void setFRJTsReceived(Uint64&);
	virtual Boolean getPRJTsReceived(CIMProperty&) const;
	virtual Uint64 getPRJTsReceived() const;
	virtual void setPRJTsReceived(Uint64&);
	virtual Boolean getPRJTsSent(CIMProperty&) const;
	virtual Uint64 getPRJTsSent() const;
	virtual void setPRJTsSent(Uint64&);
	virtual Boolean getPRLIsRejected(CIMProperty&) const;
	virtual Uint64 getPRLIsRejected() const;
	virtual void setPRLIsRejected(Uint64&);
	virtual Boolean getPRLOsRejected(CIMProperty&) const;
	virtual Uint64 getPRLOsRejected() const;
	virtual void setPRLOsRejected(Uint64&);
	virtual Boolean getABTSFramesRejected(CIMProperty&) const;
	virtual Uint64 getABTSFramesRejected() const;
	virtual void setABTSFramesRejected(Uint64&);

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
	Uint64 _aBTSFramesReceived;
	Uint64 _aBTSFramesSent;
	Uint64 _fBSYsReceived;
	Uint64 _pBSYsReceived;
	Uint64 _pBSYsSent;
	Uint64 _fRJTsReceived;
	Uint64 _pRJTsReceived;
	Uint64 _pRJTsSent;
	Uint64 _pRLIsRejected;
	Uint64 _pRLOsRejected;
	Uint64 _aBTSFramesRejected;

#	include "UNIX_FCAdapterEventCountersPrivate.h"


};

#endif /* UNIX_FCADAPTEREVENTCOUNTERS */
