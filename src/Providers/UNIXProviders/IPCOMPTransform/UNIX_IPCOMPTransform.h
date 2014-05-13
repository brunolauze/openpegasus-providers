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
The IPCOMPTransform specifies the IP compression algorithm to use for payload of the Security Association.
*/


/* **** MappingStrings *** */
/*
IPSP Model.IETF|IPCOMPTransform
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

			UNIX_IPCOMPTransform:
				Algorithm UInt16
				OtherAlgorithm String
				PrivateAlgorithm UInt32
				DictionarySize UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_ScopedSettingData:

			CIM_SATransform:

			UNIX_IPCOMPTransform:


*/

#ifndef __UNIX_IPCOMPTRANSFORM_H
#define __UNIX_IPCOMPTRANSFORM_H


#include "CIM_SATransform.h"

#include "UNIX_IPCOMPTransformDeps.h"


#ifndef PROPERTY_ALGORITHM
#define PROPERTY_ALGORITHM \
					"Algorithm"
#endif

#ifndef PROPERTY_OTHER_ALGORITHM
#define PROPERTY_OTHER_ALGORITHM \
					"OtherAlgorithm"
#endif

#ifndef PROPERTY_PRIVATE_ALGORITHM
#define PROPERTY_PRIVATE_ALGORITHM \
					"PrivateAlgorithm"
#endif

#ifndef PROPERTY_DICTIONARY_SIZE
#define PROPERTY_DICTIONARY_SIZE \
					"DictionarySize"
#endif



class UNIX_IPCOMPTransform :
	public CIM_SATransform
{
public:

	UNIX_IPCOMPTransform();
	~UNIX_IPCOMPTransform();

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
	virtual Boolean getAlgorithm(CIMProperty&) const;
	virtual Uint16 getAlgorithm() const;
	virtual void setAlgorithm(Uint16&);
	virtual Boolean getOtherAlgorithm(CIMProperty&) const;
	virtual String getOtherAlgorithm() const;
	virtual void setOtherAlgorithm(String&);
	virtual Boolean getPrivateAlgorithm(CIMProperty&) const;
	virtual Uint32 getPrivateAlgorithm() const;
	virtual void setPrivateAlgorithm(Uint32&);
	virtual Boolean getDictionarySize(CIMProperty&) const;
	virtual Uint16 getDictionarySize() const;
	virtual void setDictionarySize(Uint16&);


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
	Uint16 _algorithm;
	String _otherAlgorithm;
	Uint32 _privateAlgorithm;
	Uint16 _dictionarySize;

#	include "UNIX_IPCOMPTransformPrivate.h"


};

#endif /* UNIX_IPCOMPTRANSFORM */
