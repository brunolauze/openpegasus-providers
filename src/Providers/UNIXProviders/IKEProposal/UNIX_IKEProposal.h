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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::IPsecPolicy
*/


/* **** Description *** */
/*
IKEProposal contains the parameters necessary to drive the phase 1 IKE negotiation.
*/


/* **** MappingStrings *** */
/*
IPSP Policy Model.IETF|IKEProposal
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

			CIM_ScopedSettingData:

			CIM_SAProposal:

			UNIX_IKEProposal:
				MaxLifetimeSeconds UInt64
				MaxLifetimeKilobytes UInt64
				CipherAlgorithm UInt16
				OtherCipherAlgorithm String
				HashAlgorithm UInt16
				OtherHashAlgorithm String
				AuthenticationMethod UInt16
				OtherAuthenticationMethod String
				GroupId UInt16
				VendorID String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_ScopedSettingData:

			CIM_SAProposal:

			UNIX_IKEProposal:


*/

#ifndef __UNIX_IKEPROPOSAL_H
#define __UNIX_IKEPROPOSAL_H


#include "CIM_SAProposal.h"

#include "UNIX_IKEProposalDeps.h"


#ifndef PROPERTY_MAX_LIFETIME_SECONDS
#define PROPERTY_MAX_LIFETIME_SECONDS \
					"MaxLifetimeSeconds"
#endif

#ifndef PROPERTY_MAX_LIFETIME_KILOBYTES
#define PROPERTY_MAX_LIFETIME_KILOBYTES \
					"MaxLifetimeKilobytes"
#endif

#ifndef PROPERTY_CIPHER_ALGORITHM
#define PROPERTY_CIPHER_ALGORITHM \
					"CipherAlgorithm"
#endif

#ifndef PROPERTY_OTHER_CIPHER_ALGORITHM
#define PROPERTY_OTHER_CIPHER_ALGORITHM \
					"OtherCipherAlgorithm"
#endif

#ifndef PROPERTY_HASH_ALGORITHM
#define PROPERTY_HASH_ALGORITHM \
					"HashAlgorithm"
#endif

#ifndef PROPERTY_OTHER_HASH_ALGORITHM
#define PROPERTY_OTHER_HASH_ALGORITHM \
					"OtherHashAlgorithm"
#endif

#ifndef PROPERTY_AUTHENTICATION_METHOD
#define PROPERTY_AUTHENTICATION_METHOD \
					"AuthenticationMethod"
#endif

#ifndef PROPERTY_OTHER_AUTHENTICATION_METHOD
#define PROPERTY_OTHER_AUTHENTICATION_METHOD \
					"OtherAuthenticationMethod"
#endif

#ifndef PROPERTY_GROUP_ID
#define PROPERTY_GROUP_ID \
					"GroupId"
#endif

#ifndef PROPERTY_VENDOR_ID
#define PROPERTY_VENDOR_ID \
					"VendorID"
#endif



class UNIX_IKEProposal :
	public CIM_SAProposal
{
public:

	UNIX_IKEProposal();
	~UNIX_IKEProposal();

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
	virtual Boolean getMaxLifetimeSeconds(CIMProperty&) const;
	virtual Uint64 getMaxLifetimeSeconds() const;
	virtual void setMaxLifetimeSeconds(Uint64&);
	virtual Boolean getMaxLifetimeKilobytes(CIMProperty&) const;
	virtual Uint64 getMaxLifetimeKilobytes() const;
	virtual void setMaxLifetimeKilobytes(Uint64&);
	virtual Boolean getCipherAlgorithm(CIMProperty&) const;
	virtual Uint16 getCipherAlgorithm() const;
	virtual void setCipherAlgorithm(Uint16&);
	virtual Boolean getOtherCipherAlgorithm(CIMProperty&) const;
	virtual String getOtherCipherAlgorithm() const;
	virtual void setOtherCipherAlgorithm(String&);
	virtual Boolean getHashAlgorithm(CIMProperty&) const;
	virtual Uint16 getHashAlgorithm() const;
	virtual void setHashAlgorithm(Uint16&);
	virtual Boolean getOtherHashAlgorithm(CIMProperty&) const;
	virtual String getOtherHashAlgorithm() const;
	virtual void setOtherHashAlgorithm(String&);
	virtual Boolean getAuthenticationMethod(CIMProperty&) const;
	virtual Uint16 getAuthenticationMethod() const;
	virtual void setAuthenticationMethod(Uint16&);
	virtual Boolean getOtherAuthenticationMethod(CIMProperty&) const;
	virtual String getOtherAuthenticationMethod() const;
	virtual void setOtherAuthenticationMethod(String&);
	virtual Boolean getGroupId(CIMProperty&) const;
	virtual Uint16 getGroupId() const;
	virtual void setGroupId(Uint16&);
	virtual Boolean getVendorID(CIMProperty&) const;
	virtual String getVendorID() const;
	virtual void setVendorID(String&);


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
	Uint64 _maxLifetimeSeconds;
	Uint64 _maxLifetimeKilobytes;
	Uint16 _cipherAlgorithm;
	String _otherCipherAlgorithm;
	Uint16 _hashAlgorithm;
	String _otherHashAlgorithm;
	Uint16 _authenticationMethod;
	String _otherAuthenticationMethod;
	Uint16 _groupId;
	String _vendorID;

#	include "UNIX_IKEProposalPrivate.h"


};

#endif /* UNIX_IKEPROPOSAL */
