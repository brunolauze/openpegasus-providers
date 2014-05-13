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
A table is a collection of rows having one or more columns. A row is a value of a row type. Every row of the same table has the same row type. The value of the i-th field of every row in a table is the value of the i-th column of that row in the table. The row is the smallest unit of data that can be inserted into a table and deleted from a table. 

The degree of a table, and the degree of each of its rows, is the number of columns of that table. The number of rows in a table is its cardinality. A table whose cardinality is 0 (zero) is said to be empty. 

A table is either a base table, a derived table, or a transient table. A base table is either a persistent base table, a global temporary table, a created local temporary table, or a declared local temporary table. 

A table is described by a table descriptor. A table descriptor is either a base table descriptor, a view descriptor, or a derived table descriptor (for a derived table that is not a view). 
Every table descriptor includes: 
- The column descriptor of each column in the table. 
- The name, if any, of the structured type, if any, associated with the table. 
- An indication of whether the table is insertable-into or not. 
- An indication of whether the table is a referenceable table or not, and an indication of whether the selfreferencing column is a system-generated, a user-generated, or a derived self -referencing column. 
- A list, possibly empty, of the names of its direct supertables. 
- A list, possibly empty, of the names of its direct subtables. 

A base table descriptor describes a base table. In addition to the components of every table descriptor, a base table descriptor includes: 
- The name of the base table. 
- An indication of whether the table is a persistent base table, a global temporary table, a created local temporary table, or a declared local temporary table. 
- If the base table is a global temporary table, a created local temporary table, or a declared local temporary table, then an indication of whether ON COMMIT PRESERVE ROWS was specified or ON COMMIT DELETE ROWS was specified or implied. 
- The descriptor of each table constraint specified for the table. 
- A non-empty set of functional dependencies. 
- A non-empty set of candidate keys. 
- A preferred candidate key, which may or may not be additionally designated the primary key. 

A table RT whose row type is derived from a structured type ST is called a typed table. Only a base table or a view can be a typed table. A typed table has columns corresponding, in name and declared type, to every attribute of ST and one other column REFC that is the self-referencing column of RT; let REFCN be the <column name> of REFC. The declared type of REFC is necessarily REF (ST) and the nullability characteristic of REFC is known not nullable. If RT is a base table, then the table constraint "UNIQUE (REFCN)" is implicit in the definition of RT. A typed table is called a referenceable table. A self -referencing column cannot be updated. 

Its value is determined during the insertion of a row into the referenceable table. The value of a system-generated self -referencing column and a derived self-referencing column is automatically generated when the row is inserted into the referenceable table. The value of a user-generated self -referencing column is supplied as part of the candidate row to be inserted into the referenceable table. 

A table Ta is a direct subtable of another table Tb if and only if the <table name> of Tb is contained in the <subtable clause> contained in the <table definition> or <view definition> of Ta. Both Ta and Tb shall be created on a structured type and the structured type of Ta shall be a direct subtype of the structured type of Tb. 

A table Ta is a subtable of a table Tb if and only if any of the following are true: 
1) Ta and Tb are the same named table. 
2) Ta is a direct subtable of Tb. 
3) There is a table Tc such that Ta is a direct subtable of Tc and Tc is a subtable of Tb. 
A table T is considered to be one of its own subtables. Subtables of T other than T itself are called its proper subtables. A table shall not have itself as a proper subtable. 

A table Tb is called a supertable of a table Ta if Ta is a subtable of Tb. If Ta is a direct subtable of Tb, then Tb is called a direct supertable of Ta. A table that is not a subtable of any other table is called a maximal supertable. Let Ta be a maximal supertable and T be a subtable of Ta. The set of all subtables of Ta (which includes Ta itself) is called the subtable family of T or (equivalently) of Ta. Every subtable family has exactly one maximal supertable. A leaf table is a table that does not have any proper subtables. 

Those columns of a subtable Ta of a structured type STa that correspond to the inherited attributes of STa are called inherited columns. Those columns of Ta that correspond to the originally-defined attributes of STa are called originally -defined columns. 

Let TB be a subtable of TA. Let SLA be the <value expression> sequence implied by the <select list> "*" in the <query specification> "SELECT * FROM TA". For every row RB in the value of TB there exists exactly one row RA in the value of TA such that RA is the result of the <row subquery> "SELECT SLA FROM VALUES RRB", where RRB is some <row value constructor> whose value is RB. RA is said to be the superrow in TA of RB and RB is said to be the subrow in TB of RA. If TA is a base table, then the one-to-one correspondence between superrows and subrows is guaranteed by the requirement for a unique constraint to be specified for some supertable of TA. If TA is a view, then such one-to-one correspondence is guaranteed by the requirement for a unique constraint to be specified on the leaf generally underlying table of TA. Users shall have the UNDER privilege on a table before they can use the table in a subtable definition. A table can have more than one proper subtable. Similarly, a table can have more than one proper supertable.
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

			UNIX_SqlTable:
				ReferenceType UInt16
				insertable Boolean
				updatable Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_SqlObject:

			UNIX_SqlTable:


*/

#ifndef __UNIX_SQLTABLE_H
#define __UNIX_SQLTABLE_H


#include "CIM_SqlObject.h"

#include "UNIX_SqlTableDeps.h"


#ifndef PROPERTY_REFERENCE_TYPE
#define PROPERTY_REFERENCE_TYPE \
					"ReferenceType"
#endif

#ifndef PROPERTY_INSERTABLE
#define PROPERTY_INSERTABLE \
					"insertable"
#endif

#ifndef PROPERTY_UPDATABLE
#define PROPERTY_UPDATABLE \
					"updatable"
#endif



class UNIX_SqlTable :
	public CIM_SqlObject
{
public:

	UNIX_SqlTable();
	~UNIX_SqlTable();

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
	virtual Boolean getReferenceType(CIMProperty&) const;
	virtual Uint16 getReferenceType() const;
	virtual void setReferenceType(Uint16&);
	virtual Boolean getinsertable(CIMProperty&) const;
	virtual Boolean getinsertable() const;
	virtual void setinsertable(Boolean&);
	virtual Boolean getupdatable(CIMProperty&) const;
	virtual Boolean getupdatable() const;
	virtual void setupdatable(Boolean&);


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
	Uint16 _referenceType;
	Boolean _insertable;
	Boolean _updatable;

#	include "UNIX_SqlTablePrivate.h"


};

#endif /* UNIX_SQLTABLE */
