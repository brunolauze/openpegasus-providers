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
2.28.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Database::Storage
*/


/* **** Description *** */
/*
RelationalDatabaseCapabilities extends CommonDatabaseCapabilities to specify the capabilities for relational database service. A relational database service process queries by SQL. Supported SQL operations depend on the target SQL objects (database, table or column) and the implementation of the relational data base service. The properties of the RelationalDatabaseCapabilities specifies the supported SQL operations.
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

			UNIX_CommonDatabaseCapabilities:
				RecoverabilityOptions UInt16
				OtherRecoverabilityOptions String

			UNIX_RelationalDatabaseCapabilities:
				SupportedDBOperations UInt16
				SupportedTableOperations UInt16
				SupportedColumnOperations UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_CommonDatabaseCapabilities:

			UNIX_RelationalDatabaseCapabilities:


*/

#ifndef __UNIX_RELATIONALDATABASECAPABILITIES_H
#define __UNIX_RELATIONALDATABASECAPABILITIES_H


#include <CommonDatabaseCapabilities/UNIX_CommonDatabaseCapabilities.h>

#include "UNIX_RelationalDatabaseCapabilitiesDeps.h"


#ifndef PROPERTY_SUPPORTED_D_B_OPERATIONS
#define PROPERTY_SUPPORTED_D_B_OPERATIONS \
					"SupportedDBOperations"
#endif

#ifndef PROPERTY_SUPPORTED_TABLE_OPERATIONS
#define PROPERTY_SUPPORTED_TABLE_OPERATIONS \
					"SupportedTableOperations"
#endif

#ifndef PROPERTY_SUPPORTED_COLUMN_OPERATIONS
#define PROPERTY_SUPPORTED_COLUMN_OPERATIONS \
					"SupportedColumnOperations"
#endif



class UNIX_RelationalDatabaseCapabilities :
	public UNIX_CommonDatabaseCapabilities
{
public:

	UNIX_RelationalDatabaseCapabilities();
	~UNIX_RelationalDatabaseCapabilities();

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
	virtual Boolean getRecoverabilityOptions(CIMProperty&) const;
	virtual Array<Uint16> getRecoverabilityOptions() const;
	virtual void setRecoverabilityOptions(Array<Uint16>&);
	virtual Boolean getOtherRecoverabilityOptions(CIMProperty&) const;
	virtual Array<String> getOtherRecoverabilityOptions() const;
	virtual void setOtherRecoverabilityOptions(Array<String>&);
	virtual Boolean getSupportedDBOperations(CIMProperty&) const;
	virtual Array<Uint16> getSupportedDBOperations() const;
	virtual void setSupportedDBOperations(Array<Uint16>&);
	virtual Boolean getSupportedTableOperations(CIMProperty&) const;
	virtual Array<Uint16> getSupportedTableOperations() const;
	virtual void setSupportedTableOperations(Array<Uint16>&);
	virtual Boolean getSupportedColumnOperations(CIMProperty&) const;
	virtual Array<Uint16> getSupportedColumnOperations() const;
	virtual void setSupportedColumnOperations(Array<Uint16>&);

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
	Array<Uint16> _recoverabilityOptions;
	Array<String> _otherRecoverabilityOptions;
	Array<Uint16> _supportedDBOperations;
	Array<Uint16> _supportedTableOperations;
	Array<Uint16> _supportedColumnOperations;

#	include "UNIX_RelationalDatabaseCapabilitiesPrivate.h"


};

#endif /* UNIX_RELATIONALDATABASECAPABILITIES */
