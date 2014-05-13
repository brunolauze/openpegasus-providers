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
CIM::Network::IPsec
*/


/* **** Description *** */
/*
ESPTransform defines the parameters used for a phase 2 ESP (Encapsulating Security Protocol) Security Association.
*/


/* **** MappingStrings *** */
/*
IPSP Model.IETF|ESPTransform
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

			CIM_SATransform:
				MaxLifetimeSeconds UInt64
				MaxLifetimeKilobytes UInt64
				VendorID String

			UNIX_ESPTransform:
				IntegrityTransformId UInt16
				OtherIntegrityTransformId String
				CipherTransformId UInt16
				OtherCipherTransformId String
				CipherKeyLength UInt16
				CipherKeyRounds UInt16
				UseReplayPrevention Boolean
				ReplayPreventionWindowSize UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_ScopedSettingData:

			CIM_SATransform:

			UNIX_ESPTransform:


*/

#ifndef __UNIX_ESPTRANSFORM_H
#define __UNIX_ESPTRANSFORM_H


#include "CIM_SATransform.h"

#include "UNIX_ESPTransformDeps.h"


#ifndef PROPERTY_INTEGRITY_TRANSFORM_ID
#define PROPERTY_INTEGRITY_TRANSFORM_ID \
					"IntegrityTransformId"
#endif

#ifndef PROPERTY_OTHER_INTEGRITY_TRANSFORM_ID
#define PROPERTY_OTHER_INTEGRITY_TRANSFORM_ID \
					"OtherIntegrityTransformId"
#endif

#ifndef PROPERTY_CIPHER_TRANSFORM_ID
#define PROPERTY_CIPHER_TRANSFORM_ID \
					"CipherTransformId"
#endif

#ifndef PROPERTY_OTHER_CIPHER_TRANSFORM_ID
#define PROPERTY_OTHER_CIPHER_TRANSFORM_ID \
					"OtherCipherTransformId"
#endif

#ifndef PROPERTY_CIPHER_KEY_LENGTH
#define PROPERTY_CIPHER_KEY_LENGTH \
					"CipherKeyLength"
#endif

#ifndef PROPERTY_CIPHER_KEY_ROUNDS
#define PROPERTY_CIPHER_KEY_ROUNDS \
					"CipherKeyRounds"
#endif

#ifndef PROPERTY_USE_REPLAY_PREVENTION
#define PROPERTY_USE_REPLAY_PREVENTION \
					"UseReplayPrevention"
#endif

#ifndef PROPERTY_REPLAY_PREVENTION_WINDOW_SIZE
#define PROPERTY_REPLAY_PREVENTION_WINDOW_SIZE \
					"ReplayPreventionWindowSize"
#endif



class UNIX_ESPTransform :
	public CIM_SATransform
{
public:

	UNIX_ESPTransform();
	~UNIX_ESPTransform();

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
	virtual Boolean getVendorID(CIMProperty&) const;
	virtual String getVendorID() const;
	virtual void setVendorID(String&);
	virtual Boolean getIntegrityTransformId(CIMProperty&) const;
	virtual Uint16 getIntegrityTransformId() const;
	virtual void setIntegrityTransformId(Uint16&);
	virtual Boolean getOtherIntegrityTransformId(CIMProperty&) const;
	virtual String getOtherIntegrityTransformId() const;
	virtual void setOtherIntegrityTransformId(String&);
	virtual Boolean getCipherTransformId(CIMProperty&) const;
	virtual Uint16 getCipherTransformId() const;
	virtual void setCipherTransformId(Uint16&);
	virtual Boolean getOtherCipherTransformId(CIMProperty&) const;
	virtual String getOtherCipherTransformId() const;
	virtual void setOtherCipherTransformId(String&);
	virtual Boolean getCipherKeyLength(CIMProperty&) const;
	virtual Uint16 getCipherKeyLength() const;
	virtual void setCipherKeyLength(Uint16&);
	virtual Boolean getCipherKeyRounds(CIMProperty&) const;
	virtual Uint16 getCipherKeyRounds() const;
	virtual void setCipherKeyRounds(Uint16&);
	virtual Boolean getUseReplayPrevention(CIMProperty&) const;
	virtual Boolean getUseReplayPrevention() const;
	virtual void setUseReplayPrevention(Boolean&);
	virtual Boolean getReplayPreventionWindowSize(CIMProperty&) const;
	virtual Uint32 getReplayPreventionWindowSize() const;
	virtual void setReplayPreventionWindowSize(Uint32&);


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
	String _vendorID;
	Uint16 _integrityTransformId;
	String _otherIntegrityTransformId;
	Uint16 _cipherTransformId;
	String _otherCipherTransformId;
	Uint16 _cipherKeyLength;
	Uint16 _cipherKeyRounds;
	Boolean _useReplayPrevention;
	Uint32 _replayPreventionWindowSize;

#	include "UNIX_ESPTransformPrivate.h"


};

#endif /* UNIX_ESPTRANSFORM */
