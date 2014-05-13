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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.37.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core
*/


/* **** Description *** */
/*
StorageHardwareID Setting Data.
*/


/*
			 *** Properties ***

			CIM_ElementSettingData:
				ManagedElement Reference
				SettingData Reference
				IsDefault UInt16
				IsCurrent UInt16
				IsNext UInt16
				IsMinimum UInt16
				IsMaximum UInt16
				IsPending UInt16

			UNIX_StorageHardwareIDElementSettingData:


*/


/*
			 *** Methods ***

			CIM_ElementSettingData:

			UNIX_StorageHardwareIDElementSettingData:


*/

#ifndef __UNIX_STORAGEHARDWAREIDELEMENTSETTINGDATA_H
#define __UNIX_STORAGEHARDWAREIDELEMENTSETTINGDATA_H


#include "CIM_ElementSettingData.h"

#include "UNIX_StorageHardwareIDElementSettingDataDeps.h"




class UNIX_StorageHardwareIDElementSettingData :
	public CIM_ElementSettingData
{
public:

	UNIX_StorageHardwareIDElementSettingData();
	~UNIX_StorageHardwareIDElementSettingData();

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

	virtual Boolean getManagedElement(CIMProperty&) const;
	virtual CIMInstance getManagedElement() const;
	virtual void setManagedElement(CIMInstance&);
	virtual Boolean getSettingData(CIMProperty&) const;
	virtual CIMInstance getSettingData() const;
	virtual void setSettingData(CIMInstance&);
	virtual Boolean getIsDefault(CIMProperty&) const;
	virtual Uint16 getIsDefault() const;
	virtual void setIsDefault(Uint16&);
	virtual Boolean getIsCurrent(CIMProperty&) const;
	virtual Uint16 getIsCurrent() const;
	virtual void setIsCurrent(Uint16&);
	virtual Boolean getIsNext(CIMProperty&) const;
	virtual Uint16 getIsNext() const;
	virtual void setIsNext(Uint16&);
	virtual Boolean getIsMinimum(CIMProperty&) const;
	virtual Uint16 getIsMinimum() const;
	virtual void setIsMinimum(Uint16&);
	virtual Boolean getIsMaximum(CIMProperty&) const;
	virtual Uint16 getIsMaximum() const;
	virtual void setIsMaximum(Uint16&);
	virtual Boolean getIsPending(CIMProperty&) const;
	virtual Uint16 getIsPending() const;
	virtual void setIsPending(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _managedElement;
	CIMInstance _settingData;
	Uint16 _isDefault;
	Uint16 _isCurrent;
	Uint16 _isNext;
	Uint16 _isMinimum;
	Uint16 _isMaximum;
	Uint16 _isPending;

#	include "UNIX_StorageHardwareIDElementSettingDataPrivate.h"


};

#endif /* UNIX_STORAGEHARDWAREIDELEMENTSETTINGDATA */
