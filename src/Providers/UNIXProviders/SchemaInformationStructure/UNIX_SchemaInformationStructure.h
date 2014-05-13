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


/* **** Indication *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.38.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Interop::Schema
*/


/* **** Description *** */
/*
The CIM_SchemaInformation structure describes information for a specific version of a schema.
*/


/* **** Structure *** */
/*
TRUE
*/


/*
			 *** Properties ***

			UNIX_SchemaInformationStructure:
				Name String
				Version String
				Description String
				URI String
				OwningOrganization String
				Status UInt32


*/


/*
			 *** Methods ***

			UNIX_SchemaInformationStructure:


*/

#ifndef __UNIX_SCHEMAINFORMATIONSTRUCTURE_H
#define __UNIX_SCHEMAINFORMATIONSTRUCTURE_H


#include "CIM_ClassBase.h"

#include "UNIX_SchemaInformationStructureDeps.h"


#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_VERSION
#define PROPERTY_VERSION \
					"Version"
#endif

#ifndef PROPERTY_DESCRIPTION
#define PROPERTY_DESCRIPTION \
					"Description"
#endif

#ifndef PROPERTY_U_R_I
#define PROPERTY_U_R_I \
					"URI"
#endif

#ifndef PROPERTY_OWNING_ORGANIZATION
#define PROPERTY_OWNING_ORGANIZATION \
					"OwningOrganization"
#endif

#ifndef PROPERTY_STATUS
#define PROPERTY_STATUS \
					"Status"
#endif



class UNIX_SchemaInformationStructure :
	public CIM_ClassBase
{
public:

	UNIX_SchemaInformationStructure();
	~UNIX_SchemaInformationStructure();

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

	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual void setVersion(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getURI(CIMProperty&) const;
	virtual String getURI() const;
	virtual void setURI(String&);
	virtual Boolean getOwningOrganization(CIMProperty&) const;
	virtual String getOwningOrganization() const;
	virtual void setOwningOrganization(String&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual Uint32 getStatus() const;
	virtual void setStatus(Uint32&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _name;
	String _version;
	String _description;
	String _uRI;
	String _owningOrganization;
	Uint32 _status;

#	include "UNIX_SchemaInformationStructurePrivate.h"


};

#endif /* UNIX_SCHEMAINFORMATIONSTRUCTURE */
