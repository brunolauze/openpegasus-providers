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
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::MPLS
*/


/* **** Description *** */
/*
Class to represent the Constraint-based Routed LSP (CR-LSP) traffic parameters as specified in [RFC3212].
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_SettingData:
				ConfigurationName String
				ChangeableType UInt16
				ComponentSetting String
				SoID String
				SoOrgID String

			UNIX_MPLSQosPRTrfcProf:
				PRRate UInt32
				PRNormalBurst UInt16
				PRExcessBurst UInt16

			UNIX_MPLSCRLSPTrfcProf:
				CRLSPFrequency UInt16
				CRLSPWeight UInt8
				CRLSPCommitedDataRate UInt16
				CRLSPCommitedBurstSize UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_MPLSQosPRTrfcProf:

			UNIX_MPLSCRLSPTrfcProf:


*/

#ifndef __UNIX_MPLSCRLSPTRFCPROF_H
#define __UNIX_MPLSCRLSPTRFCPROF_H


#include <MPLSQosPRTrfcProf/UNIX_MPLSQosPRTrfcProf.h>

#include "UNIX_MPLSCRLSPTrfcProfDeps.h"


#ifndef PROPERTY_CRL_S_P_FREQUENCY
#define PROPERTY_CRL_S_P_FREQUENCY \
					"CRLSPFrequency"
#endif

#ifndef PROPERTY_CRL_S_P_WEIGHT
#define PROPERTY_CRL_S_P_WEIGHT \
					"CRLSPWeight"
#endif

#ifndef PROPERTY_CRL_S_P_COMMITED_DATA_RATE
#define PROPERTY_CRL_S_P_COMMITED_DATA_RATE \
					"CRLSPCommitedDataRate"
#endif

#ifndef PROPERTY_CRL_S_P_COMMITED_BURST_SIZE
#define PROPERTY_CRL_S_P_COMMITED_BURST_SIZE \
					"CRLSPCommitedBurstSize"
#endif



class UNIX_MPLSCRLSPTrfcProf :
	public UNIX_MPLSQosPRTrfcProf
{
public:

	UNIX_MPLSCRLSPTrfcProf();
	~UNIX_MPLSCRLSPTrfcProf();

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
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual void setConfigurationName(String&);
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual void setChangeableType(Uint16&);
	virtual Boolean getComponentSetting(CIMProperty&) const;
	virtual Array<String> getComponentSetting() const;
	virtual void setComponentSetting(Array<String>&);
	virtual Boolean getSoID(CIMProperty&) const;
	virtual String getSoID() const;
	virtual void setSoID(String&);
	virtual Boolean getSoOrgID(CIMProperty&) const;
	virtual String getSoOrgID() const;
	virtual void setSoOrgID(String&);
	virtual Boolean getPRRate(CIMProperty&) const;
	virtual Uint32 getPRRate() const;
	virtual void setPRRate(Uint32&);
	virtual Boolean getPRNormalBurst(CIMProperty&) const;
	virtual Uint16 getPRNormalBurst() const;
	virtual void setPRNormalBurst(Uint16&);
	virtual Boolean getPRExcessBurst(CIMProperty&) const;
	virtual Uint16 getPRExcessBurst() const;
	virtual void setPRExcessBurst(Uint16&);
	virtual Boolean getCRLSPFrequency(CIMProperty&) const;
	virtual Uint16 getCRLSPFrequency() const;
	virtual void setCRLSPFrequency(Uint16&);
	virtual Boolean getCRLSPWeight(CIMProperty&) const;
	virtual Uint8 getCRLSPWeight() const;
	virtual void setCRLSPWeight(Uint8&);
	virtual Boolean getCRLSPCommitedDataRate(CIMProperty&) const;
	virtual Uint16 getCRLSPCommitedDataRate() const;
	virtual void setCRLSPCommitedDataRate(Uint16&);
	virtual Boolean getCRLSPCommitedBurstSize(CIMProperty&) const;
	virtual Uint16 getCRLSPCommitedBurstSize() const;
	virtual void setCRLSPCommitedBurstSize(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _configurationName;
	Uint16 _changeableType;
	Array<String> _componentSetting;
	String _soID;
	String _soOrgID;
	Uint32 _pRRate;
	Uint16 _pRNormalBurst;
	Uint16 _pRExcessBurst;
	Uint16 _cRLSPFrequency;
	Uint8 _cRLSPWeight;
	Uint16 _cRLSPCommitedDataRate;
	Uint16 _cRLSPCommitedBurstSize;

#	include "UNIX_MPLSCRLSPTrfcProfPrivate.h"


};

#endif /* UNIX_MPLSCRLSPTRFCPROF */
