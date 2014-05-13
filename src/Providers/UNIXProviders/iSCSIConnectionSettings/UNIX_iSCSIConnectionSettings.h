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
2.11.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::iSCSI
*/


/* **** Description *** */
/*
The settings for the usage of an iSCSI NetworkPortal by an iSCSIProtcolEndpoint. These settings are the starting point for negotiation for connection establishment. If an implmentation supports different connections settings for a NetworkPortal for each iSCSIProtocolEndpoint that is bound to it, an instance of this class will be associated by ElementSettingData to an instance of iSCSIProtocolEndpoint. If an implementation supports the same connection settings for a NetworkPortal for all iSCSIProtocolEndpoints then an instance of this class will be associated by ElementSettingData to an instance of either TCPProtocolEndpoint (When the NetworkPortal is a target) or IPProtocolEndpoint (When the NetworkPortal is an initiator). The properties that reflect the actual outcome of the negotiation are found in the iSCSIConnection class.
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

			UNIX_iSCSIConnectionSettings:
				MaxReceiveDataSegmentLength UInt32
				PrimaryHeaderDigestMethod UInt16
				OtherPrimaryHeaderDigestMethod String
				PrimaryDataDigestMethod UInt16
				OtherPrimaryDataDigestMethod String
				SecondaryHeaderDigestMethod UInt16
				OtherSecondaryHeaderDigestMethod String
				SecondaryDataDigestMethod UInt16
				OtherSecondaryDataDigestMethod String
				RequestingMarkersOnReceive Boolean
				PrimaryAuthenticationMethod UInt16
				SecondaryAuthenticationMethod UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_iSCSIConnectionSettings:


*/

#ifndef __UNIX_ISCSICONNECTIONSETTINGS_H
#define __UNIX_ISCSICONNECTIONSETTINGS_H


#include "CIM_SettingData.h"

#include "UNIX_iSCSIConnectionSettingsDeps.h"


#ifndef PROPERTY_MAX_RECEIVE_DATA_SEGMENT_LENGTH
#define PROPERTY_MAX_RECEIVE_DATA_SEGMENT_LENGTH \
					"MaxReceiveDataSegmentLength"
#endif

#ifndef PROPERTY_PRIMARY_HEADER_DIGEST_METHOD
#define PROPERTY_PRIMARY_HEADER_DIGEST_METHOD \
					"PrimaryHeaderDigestMethod"
#endif

#ifndef PROPERTY_OTHER_PRIMARY_HEADER_DIGEST_METHOD
#define PROPERTY_OTHER_PRIMARY_HEADER_DIGEST_METHOD \
					"OtherPrimaryHeaderDigestMethod"
#endif

#ifndef PROPERTY_PRIMARY_DATA_DIGEST_METHOD
#define PROPERTY_PRIMARY_DATA_DIGEST_METHOD \
					"PrimaryDataDigestMethod"
#endif

#ifndef PROPERTY_OTHER_PRIMARY_DATA_DIGEST_METHOD
#define PROPERTY_OTHER_PRIMARY_DATA_DIGEST_METHOD \
					"OtherPrimaryDataDigestMethod"
#endif

#ifndef PROPERTY_SECONDARY_HEADER_DIGEST_METHOD
#define PROPERTY_SECONDARY_HEADER_DIGEST_METHOD \
					"SecondaryHeaderDigestMethod"
#endif

#ifndef PROPERTY_OTHER_SECONDARY_HEADER_DIGEST_METHOD
#define PROPERTY_OTHER_SECONDARY_HEADER_DIGEST_METHOD \
					"OtherSecondaryHeaderDigestMethod"
#endif

#ifndef PROPERTY_SECONDARY_DATA_DIGEST_METHOD
#define PROPERTY_SECONDARY_DATA_DIGEST_METHOD \
					"SecondaryDataDigestMethod"
#endif

#ifndef PROPERTY_OTHER_SECONDARY_DATA_DIGEST_METHOD
#define PROPERTY_OTHER_SECONDARY_DATA_DIGEST_METHOD \
					"OtherSecondaryDataDigestMethod"
#endif

#ifndef PROPERTY_REQUESTING_MARKERS_ON_RECEIVE
#define PROPERTY_REQUESTING_MARKERS_ON_RECEIVE \
					"RequestingMarkersOnReceive"
#endif

#ifndef PROPERTY_PRIMARY_AUTHENTICATION_METHOD
#define PROPERTY_PRIMARY_AUTHENTICATION_METHOD \
					"PrimaryAuthenticationMethod"
#endif

#ifndef PROPERTY_SECONDARY_AUTHENTICATION_METHOD
#define PROPERTY_SECONDARY_AUTHENTICATION_METHOD \
					"SecondaryAuthenticationMethod"
#endif



class UNIX_iSCSIConnectionSettings :
	public CIM_SettingData
{
public:

	UNIX_iSCSIConnectionSettings();
	~UNIX_iSCSIConnectionSettings();

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
	virtual Boolean getMaxReceiveDataSegmentLength(CIMProperty&) const;
	virtual Uint32 getMaxReceiveDataSegmentLength() const;
	virtual void setMaxReceiveDataSegmentLength(Uint32&);
	virtual Boolean getPrimaryHeaderDigestMethod(CIMProperty&) const;
	virtual Uint16 getPrimaryHeaderDigestMethod() const;
	virtual void setPrimaryHeaderDigestMethod(Uint16&);
	virtual Boolean getOtherPrimaryHeaderDigestMethod(CIMProperty&) const;
	virtual String getOtherPrimaryHeaderDigestMethod() const;
	virtual void setOtherPrimaryHeaderDigestMethod(String&);
	virtual Boolean getPrimaryDataDigestMethod(CIMProperty&) const;
	virtual Uint16 getPrimaryDataDigestMethod() const;
	virtual void setPrimaryDataDigestMethod(Uint16&);
	virtual Boolean getOtherPrimaryDataDigestMethod(CIMProperty&) const;
	virtual String getOtherPrimaryDataDigestMethod() const;
	virtual void setOtherPrimaryDataDigestMethod(String&);
	virtual Boolean getSecondaryHeaderDigestMethod(CIMProperty&) const;
	virtual Uint16 getSecondaryHeaderDigestMethod() const;
	virtual void setSecondaryHeaderDigestMethod(Uint16&);
	virtual Boolean getOtherSecondaryHeaderDigestMethod(CIMProperty&) const;
	virtual String getOtherSecondaryHeaderDigestMethod() const;
	virtual void setOtherSecondaryHeaderDigestMethod(String&);
	virtual Boolean getSecondaryDataDigestMethod(CIMProperty&) const;
	virtual Uint16 getSecondaryDataDigestMethod() const;
	virtual void setSecondaryDataDigestMethod(Uint16&);
	virtual Boolean getOtherSecondaryDataDigestMethod(CIMProperty&) const;
	virtual String getOtherSecondaryDataDigestMethod() const;
	virtual void setOtherSecondaryDataDigestMethod(String&);
	virtual Boolean getRequestingMarkersOnReceive(CIMProperty&) const;
	virtual Boolean getRequestingMarkersOnReceive() const;
	virtual void setRequestingMarkersOnReceive(Boolean&);
	virtual Boolean getPrimaryAuthenticationMethod(CIMProperty&) const;
	virtual Uint16 getPrimaryAuthenticationMethod() const;
	virtual void setPrimaryAuthenticationMethod(Uint16&);
	virtual Boolean getSecondaryAuthenticationMethod(CIMProperty&) const;
	virtual Uint16 getSecondaryAuthenticationMethod() const;
	virtual void setSecondaryAuthenticationMethod(Uint16&);


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
	Uint32 _maxReceiveDataSegmentLength;
	Uint16 _primaryHeaderDigestMethod;
	String _otherPrimaryHeaderDigestMethod;
	Uint16 _primaryDataDigestMethod;
	String _otherPrimaryDataDigestMethod;
	Uint16 _secondaryHeaderDigestMethod;
	String _otherSecondaryHeaderDigestMethod;
	Uint16 _secondaryDataDigestMethod;
	String _otherSecondaryDataDigestMethod;
	Boolean _requestingMarkersOnReceive;
	Uint16 _primaryAuthenticationMethod;
	Uint16 _secondaryAuthenticationMethod;

#	include "UNIX_iSCSIConnectionSettingsPrivate.h"


};

#endif /* UNIX_ISCSICONNECTIONSETTINGS */
