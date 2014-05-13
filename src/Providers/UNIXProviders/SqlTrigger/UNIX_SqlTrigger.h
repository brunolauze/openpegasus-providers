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
2.12.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Database::Sql
*/


/* **** Description *** */
/*
A trigger is defined by a <trigger definition>. A <trigger definition> specifies a trigger that is described by a trigger descriptor. A trigger descriptor includes: 
- The name of the trigger. 
- The name of the base table that is the subject table. 
- The trigger action time (BEFORE or AFTER ). 
- The trigger event (INSERT, DELETE, or UPDATE). 
- Whether the trigger is a statement-level trigger or a row -level trigger. 
- Any old transition variable name, new transition variable name, old transition table name, new transition table name. 
- The triggered action. 
- The trigger column list (possibly empty) for the trigger event. 
- The triggered action column set of the triggered action. 
- The timestamp of creation of the trigger. 

The order of execution of a set of triggers is ascending by value of their timestamp of creation in their descriptors, such that the oldest trigger executes first. If one or more triggers have the same timestamp value, then their relative order of execution is implementation-defined. 

A schema might include one or more trigger descriptors, each of which includes the definition of a triggered action specifying a <triggered SQL statement> that is to be executed (either once for each affected row, in the case of a row-level trigger, or once for the whole triggering INSERT, DELETE, MERGE, or UPDATE statement, in the case of a statement-level trigger) before or after rows are inserted into a table, rows are deleted from a table, or one or more columns are updated in rows of a table. The execution of such a triggered action resulting from the insertion, deletion, or updating of a table may cause the triggering of further triggered actions. 

The <triggered SQL statement> of a triggered action is effectively executed either immediately before or immediately after the trigger event, as determined by the specified trigger action time. 

OCL rules are derived from these syntax rules: 
4) The schema identified by the explicit or implicit <schema name> of a <trigger name> TRN shall not include a trigger descriptor whose trigger name is TRN. 
5) T shall be a base table that is not a declared local temporary table. 
6) If a <trigger column list> is specified, then: 
a) No <column name> shall appear more than once in the <trigger column list>. 
b) The <column name> s of the <trigger column list> shall identify columns of T. 
9) If OR or NR is specified, then FOR EACH ROW shall be specified. 
12) If BEFORE is specified, then: 
b) Neither OLD TABLE nor NEW TABLE shall be specified.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_ManagedSystemElement:
				InstallDate DateTime
				Name String
				OperationalStatus UInt16
				StatusDescriptions String
				Status String
				HealthState UInt16
				CommunicationStatus UInt16
				DetailedStatus UInt16
				OperatingStatus UInt16
				PrimaryStatus UInt16

			CIM_LogicalElement:

			CIM_SqlObject:
				CreationTime DateTime

			UNIX_SqlTrigger:
				ActionGranularityType UInt16
				ActionStatement String
				ActionTime UInt16
				EventType UInt16
				NewRow String
				NewTable String
				OldRow String
				OldTable String
				WhenCondition String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_SqlObject:

			UNIX_SqlTrigger:


*/

#ifndef __UNIX_SQLTRIGGER_H
#define __UNIX_SQLTRIGGER_H


#include "CIM_SqlObject.h"

#include "UNIX_SqlTriggerDeps.h"


#ifndef PROPERTY_ACTION_GRANULARITY_TYPE
#define PROPERTY_ACTION_GRANULARITY_TYPE \
					"ActionGranularityType"
#endif

#ifndef PROPERTY_ACTION_STATEMENT
#define PROPERTY_ACTION_STATEMENT \
					"ActionStatement"
#endif

#ifndef PROPERTY_ACTION_TIME
#define PROPERTY_ACTION_TIME \
					"ActionTime"
#endif

#ifndef PROPERTY_EVENT_TYPE
#define PROPERTY_EVENT_TYPE \
					"EventType"
#endif

#ifndef PROPERTY_NEW_ROW
#define PROPERTY_NEW_ROW \
					"NewRow"
#endif

#ifndef PROPERTY_NEW_TABLE
#define PROPERTY_NEW_TABLE \
					"NewTable"
#endif

#ifndef PROPERTY_OLD_ROW
#define PROPERTY_OLD_ROW \
					"OldRow"
#endif

#ifndef PROPERTY_OLD_TABLE
#define PROPERTY_OLD_TABLE \
					"OldTable"
#endif

#ifndef PROPERTY_WHEN_CONDITION
#define PROPERTY_WHEN_CONDITION \
					"WhenCondition"
#endif



class UNIX_SqlTrigger :
	public CIM_SqlObject
{
public:

	UNIX_SqlTrigger();
	~UNIX_SqlTrigger();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean loadByName(const String);
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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual void setInstallDate(CIMDateTime&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual void setOperationalStatus(Array<Uint16>&);
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual void setStatusDescriptions(Array<String>&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual void setStatus(String&);
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual void setHealthState(Uint16&);
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual void setCommunicationStatus(Uint16&);
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual void setDetailedStatus(Uint16&);
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual void setOperatingStatus(Uint16&);
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual void setPrimaryStatus(Uint16&);
	virtual Boolean getCreationTime(CIMProperty&) const;
	virtual CIMDateTime getCreationTime() const;
	virtual void setCreationTime(CIMDateTime&);
	virtual Boolean getActionGranularityType(CIMProperty&) const;
	virtual Uint16 getActionGranularityType() const;
	virtual void setActionGranularityType(Uint16&);
	virtual Boolean getActionStatement(CIMProperty&) const;
	virtual String getActionStatement() const;
	virtual void setActionStatement(String&);
	virtual Boolean getActionTime(CIMProperty&) const;
	virtual Uint16 getActionTime() const;
	virtual void setActionTime(Uint16&);
	virtual Boolean getEventType(CIMProperty&) const;
	virtual Uint16 getEventType() const;
	virtual void setEventType(Uint16&);
	virtual Boolean getNewRow(CIMProperty&) const;
	virtual String getNewRow() const;
	virtual void setNewRow(String&);
	virtual Boolean getNewTable(CIMProperty&) const;
	virtual String getNewTable() const;
	virtual void setNewTable(String&);
	virtual Boolean getOldRow(CIMProperty&) const;
	virtual String getOldRow() const;
	virtual void setOldRow(String&);
	virtual Boolean getOldTable(CIMProperty&) const;
	virtual String getOldTable() const;
	virtual void setOldTable(String&);
	virtual Boolean getWhenCondition(CIMProperty&) const;
	virtual String getWhenCondition() const;
	virtual void setWhenCondition(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _installDate;
	String _name;
	Array<Uint16> _operationalStatus;
	Array<String> _statusDescriptions;
	String _status;
	Uint16 _healthState;
	Uint16 _communicationStatus;
	Uint16 _detailedStatus;
	Uint16 _operatingStatus;
	Uint16 _primaryStatus;
	CIMDateTime _creationTime;
	Uint16 _actionGranularityType;
	String _actionStatement;
	Uint16 _actionTime;
	Uint16 _eventType;
	String _newRow;
	String _newTable;
	String _oldRow;
	String _oldTable;
	String _whenCondition;

#	include "UNIX_SqlTriggerPrivate.h"


};

#endif /* UNIX_SQLTRIGGER */
