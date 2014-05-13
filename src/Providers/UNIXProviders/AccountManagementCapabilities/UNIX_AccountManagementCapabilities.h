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
2.35.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Account
*/


/* **** Description *** */
/*
AccountManagementCapabilities describes the capabilities supported for managing Accounts associated with an instance of AccountManagementService. AccountManagementCapabilities is associated with an instance of AccountManagementService through the ElementCapabilities association.
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

			CIM_EnabledLogicalElementCapabilities:
				ElementNameEditSupported Boolean
				MaxElementNameLen UInt16
				RequestedStatesSupported UInt16
				ElementNameMask String
				StateAwareness UInt16

			UNIX_AccountManagementCapabilities:
				OperationsSupported UInt16
				OtherSupportedUserPasswordEncryptionAlgorithms String
				SupportedUserPasswordEncryptionAlgorithms UInt16
				UserPasswordEncryptionSalt String
				MaximumAccountsSupported UInt16
				SupportedUserPasswordEncodings UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			CIM_EnabledLogicalElementCapabilities:

			UNIX_AccountManagementCapabilities:


*/

#ifndef __UNIX_ACCOUNTMANAGEMENTCAPABILITIES_H
#define __UNIX_ACCOUNTMANAGEMENTCAPABILITIES_H


#include "CIM_EnabledLogicalElementCapabilities.h"

#include "UNIX_AccountManagementCapabilitiesDeps.h"


#ifndef PROPERTY_OPERATIONS_SUPPORTED
#define PROPERTY_OPERATIONS_SUPPORTED \
					"OperationsSupported"
#endif

#ifndef PROPERTY_OTHER_SUPPORTED_USER_PASSWORD_ENCRYPTION_ALGORITHMS
#define PROPERTY_OTHER_SUPPORTED_USER_PASSWORD_ENCRYPTION_ALGORITHMS \
					"OtherSupportedUserPasswordEncryptionAlgorithms"
#endif

#ifndef PROPERTY_SUPPORTED_USER_PASSWORD_ENCRYPTION_ALGORITHMS
#define PROPERTY_SUPPORTED_USER_PASSWORD_ENCRYPTION_ALGORITHMS \
					"SupportedUserPasswordEncryptionAlgorithms"
#endif

#ifndef PROPERTY_USER_PASSWORD_ENCRYPTION_SALT
#define PROPERTY_USER_PASSWORD_ENCRYPTION_SALT \
					"UserPasswordEncryptionSalt"
#endif

#ifndef PROPERTY_MAXIMUM_ACCOUNTS_SUPPORTED
#define PROPERTY_MAXIMUM_ACCOUNTS_SUPPORTED \
					"MaximumAccountsSupported"
#endif

#ifndef PROPERTY_SUPPORTED_USER_PASSWORD_ENCODINGS
#define PROPERTY_SUPPORTED_USER_PASSWORD_ENCODINGS \
					"SupportedUserPasswordEncodings"
#endif



class UNIX_AccountManagementCapabilities :
	public CIM_EnabledLogicalElementCapabilities
{
public:

	UNIX_AccountManagementCapabilities();
	~UNIX_AccountManagementCapabilities();

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
	virtual Boolean getElementNameEditSupported(CIMProperty&) const;
	virtual Boolean getElementNameEditSupported() const;
	virtual void setElementNameEditSupported(Boolean&);
	virtual Boolean getMaxElementNameLen(CIMProperty&) const;
	virtual Uint16 getMaxElementNameLen() const;
	virtual void setMaxElementNameLen(Uint16&);
	virtual Boolean getRequestedStatesSupported(CIMProperty&) const;
	virtual Array<Uint16> getRequestedStatesSupported() const;
	virtual void setRequestedStatesSupported(Array<Uint16>&);
	virtual Boolean getElementNameMask(CIMProperty&) const;
	virtual String getElementNameMask() const;
	virtual void setElementNameMask(String&);
	virtual Boolean getStateAwareness(CIMProperty&) const;
	virtual Array<Uint16> getStateAwareness() const;
	virtual void setStateAwareness(Array<Uint16>&);
	virtual Boolean getOperationsSupported(CIMProperty&) const;
	virtual Array<Uint16> getOperationsSupported() const;
	virtual void setOperationsSupported(Array<Uint16>&);
	virtual Boolean getOtherSupportedUserPasswordEncryptionAlgorithms(CIMProperty&) const;
	virtual Array<String> getOtherSupportedUserPasswordEncryptionAlgorithms() const;
	virtual void setOtherSupportedUserPasswordEncryptionAlgorithms(Array<String>&);
	virtual Boolean getSupportedUserPasswordEncryptionAlgorithms(CIMProperty&) const;
	virtual Array<Uint16> getSupportedUserPasswordEncryptionAlgorithms() const;
	virtual void setSupportedUserPasswordEncryptionAlgorithms(Array<Uint16>&);
	virtual Boolean getUserPasswordEncryptionSalt(CIMProperty&) const;
	virtual String getUserPasswordEncryptionSalt() const;
	virtual void setUserPasswordEncryptionSalt(String&);
	virtual Boolean getMaximumAccountsSupported(CIMProperty&) const;
	virtual Uint16 getMaximumAccountsSupported() const;
	virtual void setMaximumAccountsSupported(Uint16&);
	virtual Boolean getSupportedUserPasswordEncodings(CIMProperty&) const;
	virtual Array<Uint32> getSupportedUserPasswordEncodings() const;
	virtual void setSupportedUserPasswordEncodings(Array<Uint32>&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Boolean _elementNameEditSupported;
	Uint16 _maxElementNameLen;
	Array<Uint16> _requestedStatesSupported;
	String _elementNameMask;
	Array<Uint16> _stateAwareness;
	Array<Uint16> _operationsSupported;
	Array<String> _otherSupportedUserPasswordEncryptionAlgorithms;
	Array<Uint16> _supportedUserPasswordEncryptionAlgorithms;
	String _userPasswordEncryptionSalt;
	Uint16 _maximumAccountsSupported;
	Array<Uint32> _supportedUserPasswordEncodings;

#	include "UNIX_AccountManagementCapabilitiesPrivate.h"


};

#endif /* UNIX_ACCOUNTMANAGEMENTCAPABILITIES */
