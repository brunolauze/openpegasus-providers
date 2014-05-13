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
A user-defined type is a schema object, identified by a <user -defined type name>. The definition of a userdefined type specifies a number of components, including in particular a list of attribute definitions. Although the attribute definitions are said to define the representation of the user-defined type, in fact they implicitly define certain functions (observers and mutators) that are part of the interface of the user-defined type; physical representations of user-defined type values are implementation-dependent. 

The representation of a user-defined type is expressed either as a single data type (some predefined data type, called the source type), in which case the user-defined type is said to be a distinct type, or as a list of attribute definitions, in which case it is said to be a structured type. 

A user-defined type is described by a user-defined type descriptor. A user-defined type descriptor contains: 
- The name of the user-defined type (<user-defined type name>). This is the type designator of that type, used in type precedence lists. 
- An indication of whether the user-defined type is a structured type or a distinct type. 
- The ordering form for the user-defined type (EQUALS, FULL, or NONE). 
- The ordering category for the user-defined type (RELATIVE, MAP, or STATE). 
- A <specific routine designator> identifying the ordering function, depending on the ordering category. 
- If the user-defined type is a direct subtype of another user -defined type, then the name of that user-defined type. 
- If the representation is a predefined data type, then the descriptor of that type; otherwise the attribute descriptor of every originally-defined attribute and every inherited attribute of the user-defined type. 
- An indication of whether the user-defined type is instantiable or not instantiable. 
- An indication of whether the user-defined type is final or not final. 
- The transform descriptor of the user-defined type. 
- If the user-defined type is a structured type, then: 
- Whether the referencing type of the structured type has a user -defined representation, a derived representation, or a system -defined representation. 
- If user-defined representation is specified, then the type descriptor of the representation type of the referencing type of the structured type; otherwise, if derived representation is specified, then the list of attributes. 
- If the <method specification list> is specified, then for each <method specification> contained in <method specification list>, a method specification descriptor that includes: 
- The <method name>. 
- The <specific method name>. 
- The <SQL parameter declaration list> augmented to include the implicit first parameter with parameter name SELF. 
- The <language name>. 
- If the <language name> is not SQL, then the <parameter style>. 
- The <returns data type>. 
- The <result cast from type>, if any. 
- An indication as to whether the <method specification> is an <original method specification> or an <overriding method specification>. 
- If the <method specification> is an <original method specification>, then an indication of whether STATIC or CONSTRUCTOR is specified. 
- An indication whether the method is deterministic. 
- An indication whether the method possibly writes SQL data, possibly reads SQL data, possibly contains SQL, or does not possibly contain SQL. 
- An indication whether the method should not be invoked if any argument is the null value, in which case the value of the method is the null value.
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

			UNIX_SqlUserDefinedType:


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			CIM_SqlObject:

			UNIX_SqlUserDefinedType:


*/

#ifndef __UNIX_SQLUSERDEFINEDTYPE_H
#define __UNIX_SQLUSERDEFINEDTYPE_H


#include "CIM_SqlObject.h"

#include "UNIX_SqlUserDefinedTypeDeps.h"




class UNIX_SqlUserDefinedType :
	public CIM_SqlObject
{
public:

	UNIX_SqlUserDefinedType();
	~UNIX_SqlUserDefinedType();

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

#	include "UNIX_SqlUserDefinedTypePrivate.h"


};

#endif /* UNIX_SQLUSERDEFINEDTYPE */
