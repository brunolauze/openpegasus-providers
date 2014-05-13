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


/* **** Association *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
This association define StorageSettings that reflect the capabilities of the associated StorageCapabilities. The associated StorageSetting may not define the operational characteristics (through settings properties) of any storage element. StorageSettingsGeneratedFromCapabilities is the association between instances of StorageCapabilities and those instances of StorageSetting that have been created from the StorageCapabilities instance using the StorageCapabilities "CreateSetting" method. These settings have a StorageSetting.ChangeableType of "Changeable - Transient" or "Changeable - Persistent" The settings associated by this class reflect the capabilities from which they are generated. These setting SHALL be associated with one StorageCapabilities. 
A generated setting can be deleted by the implementation at any time if it is a a StorageSetting of "Changed - Transient" ChangeableType. 
A client should not use this association to find transient Settings to subsequently modify and/or use because that would increase the likelihood of setting contention across clients. Instead the implementation uses this association to define transient settings, which can be located through any means, that have special temporal based life cycle. 
DefaultSetting is meaningless in this class.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_SettingAssociatedToCapabilities:
				DefaultSetting Boolean

			UNIX_StorageSettingsGeneratedFromCapabilities:


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_SettingAssociatedToCapabilities:

			UNIX_StorageSettingsGeneratedFromCapabilities:


*/

#ifndef __UNIX_STORAGESETTINGSGENERATEDFROMCAPABILITIES_H
#define __UNIX_STORAGESETTINGSGENERATEDFROMCAPABILITIES_H


#include "CIM_SettingAssociatedToCapabilities.h"
#include <StorageCapabilities/UNIX_StorageCapabilitiesProvider.h>
#include <StorageSetting/UNIX_StorageSettingProvider.h>

#include "UNIX_StorageSettingsGeneratedFromCapabilitiesDeps.h"




class UNIX_StorageSettingsGeneratedFromCapabilities :
	public CIM_SettingAssociatedToCapabilities
{
public:

	UNIX_StorageSettingsGeneratedFromCapabilities();
	~UNIX_StorageSettingsGeneratedFromCapabilities();

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

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual void setAntecedent(CIMInstance&);
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual void setDependent(CIMInstance&);
	virtual Boolean getDefaultSetting(CIMProperty&) const;
	virtual Boolean getDefaultSetting() const;
	virtual void setDefaultSetting(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Boolean _defaultSetting;

UNIX_StorageCapabilities _antecedentStorageCapabilities;
UNIX_StorageCapabilitiesProvider _antecedentStorageCapabilitiesProvider;

UNIX_StorageSetting _dependentStorageSetting;
UNIX_StorageSettingProvider _dependentStorageSettingProvider;

#	include "UNIX_StorageSettingsGeneratedFromCapabilitiesPrivate.h"


};

#endif /* UNIX_STORAGESETTINGSGENERATEDFROMCAPABILITIES */
