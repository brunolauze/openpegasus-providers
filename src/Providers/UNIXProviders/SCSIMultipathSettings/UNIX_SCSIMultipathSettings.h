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
2.29.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::SCSI
*/


/* **** Description *** */
/*
A class derived from CIM_SettingData describing settings related to management of multiple paths to SCSI devices. It is associated to one of more instances of subclasses of LogicalDevice that represent SCSI logical units. If a LogicalDevice instance is associated to an instance of SCSIPathConfigurationService and is not associated to an instance of this class, the the default values for properties below and the polling values from the associated CIM_SCSIMultipathConfigurationCapabilities instance apply.
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

			UNIX_SCSIMultipathSettings:
				Asymmetric Boolean
				CurrentLoadBalanceType UInt16
				OtherCurrentLoadBalanceType String
				AutoFailbackEnabled UInt16
				PollingRateMax UInt32
				CurrentPollingRate UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_SCSIMultipathSettings:


*/

#ifndef __UNIX_SCSIMULTIPATHSETTINGS_H
#define __UNIX_SCSIMULTIPATHSETTINGS_H


#include "CIM_SettingData.h"

#include "UNIX_SCSIMultipathSettingsDeps.h"


#ifndef PROPERTY_ASYMMETRIC
#define PROPERTY_ASYMMETRIC \
					"Asymmetric"
#endif

#ifndef PROPERTY_CURRENT_LOAD_BALANCE_TYPE
#define PROPERTY_CURRENT_LOAD_BALANCE_TYPE \
					"CurrentLoadBalanceType"
#endif

#ifndef PROPERTY_OTHER_CURRENT_LOAD_BALANCE_TYPE
#define PROPERTY_OTHER_CURRENT_LOAD_BALANCE_TYPE \
					"OtherCurrentLoadBalanceType"
#endif

#ifndef PROPERTY_AUTO_FAILBACK_ENABLED
#define PROPERTY_AUTO_FAILBACK_ENABLED \
					"AutoFailbackEnabled"
#endif

#ifndef PROPERTY_POLLING_RATE_MAX
#define PROPERTY_POLLING_RATE_MAX \
					"PollingRateMax"
#endif

#ifndef PROPERTY_CURRENT_POLLING_RATE
#define PROPERTY_CURRENT_POLLING_RATE \
					"CurrentPollingRate"
#endif



class UNIX_SCSIMultipathSettings :
	public CIM_SettingData
{
public:

	UNIX_SCSIMultipathSettings();
	~UNIX_SCSIMultipathSettings();

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
	virtual Boolean getAsymmetric(CIMProperty&) const;
	virtual Boolean getAsymmetric() const;
	virtual void setAsymmetric(Boolean&);
	virtual Boolean getCurrentLoadBalanceType(CIMProperty&) const;
	virtual Uint16 getCurrentLoadBalanceType() const;
	virtual void setCurrentLoadBalanceType(Uint16&);
	virtual Boolean getOtherCurrentLoadBalanceType(CIMProperty&) const;
	virtual String getOtherCurrentLoadBalanceType() const;
	virtual void setOtherCurrentLoadBalanceType(String&);
	virtual Boolean getAutoFailbackEnabled(CIMProperty&) const;
	virtual Uint16 getAutoFailbackEnabled() const;
	virtual void setAutoFailbackEnabled(Uint16&);
	virtual Boolean getPollingRateMax(CIMProperty&) const;
	virtual Uint32 getPollingRateMax() const;
	virtual void setPollingRateMax(Uint32&);
	virtual Boolean getCurrentPollingRate(CIMProperty&) const;
	virtual Uint32 getCurrentPollingRate() const;
	virtual void setCurrentPollingRate(Uint32&);


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
	Boolean _asymmetric;
	Uint16 _currentLoadBalanceType;
	String _otherCurrentLoadBalanceType;
	Uint16 _autoFailbackEnabled;
	Uint32 _pollingRateMax;
	Uint32 _currentPollingRate;

#	include "UNIX_SCSIMultipathSettingsPrivate.h"


};

#endif /* UNIX_SCSIMULTIPATHSETTINGS */
