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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Interop
*/


/* **** Description *** */
/*
A Namespace may represent data for one or many systems, that are local, remote (different than the system on which the ObjectManager is running) or aggregated. The System Identification class provides enough data to identify the system(s) represented in the Namespace. It is weak to the Namespace.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_SystemIdentification:
				SystemCreationClassName String
				SystemName String
				ObjectManagerCreationClassName String
				ObjectManagerName String
				NamespaceCreationClassName String
				NamespaceName String
				CreationClassName String
				Name String
				IdentificationFormats UInt16
				FormatDescriptions String
				IdentificationData String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_SystemIdentification:


*/

#ifndef __UNIX_SYSTEMIDENTIFICATION_H
#define __UNIX_SYSTEMIDENTIFICATION_H


#include "CIM_ManagedElement.h"

#include "UNIX_SystemIdentificationDeps.h"


#ifndef PROPERTY_SYSTEM_CREATION_CLASS_NAME
#define PROPERTY_SYSTEM_CREATION_CLASS_NAME \
					"SystemCreationClassName"
#endif

#ifndef PROPERTY_SYSTEM_NAME
#define PROPERTY_SYSTEM_NAME \
					"SystemName"
#endif

#ifndef PROPERTY_OBJECT_MANAGER_CREATION_CLASS_NAME
#define PROPERTY_OBJECT_MANAGER_CREATION_CLASS_NAME \
					"ObjectManagerCreationClassName"
#endif

#ifndef PROPERTY_OBJECT_MANAGER_NAME
#define PROPERTY_OBJECT_MANAGER_NAME \
					"ObjectManagerName"
#endif

#ifndef PROPERTY_NAMESPACE_CREATION_CLASS_NAME
#define PROPERTY_NAMESPACE_CREATION_CLASS_NAME \
					"NamespaceCreationClassName"
#endif

#ifndef PROPERTY_NAMESPACE_NAME
#define PROPERTY_NAMESPACE_NAME \
					"NamespaceName"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_IDENTIFICATION_FORMATS
#define PROPERTY_IDENTIFICATION_FORMATS \
					"IdentificationFormats"
#endif

#ifndef PROPERTY_FORMAT_DESCRIPTIONS
#define PROPERTY_FORMAT_DESCRIPTIONS \
					"FormatDescriptions"
#endif

#ifndef PROPERTY_IDENTIFICATION_DATA
#define PROPERTY_IDENTIFICATION_DATA \
					"IdentificationData"
#endif



class UNIX_SystemIdentification :
	public CIM_ManagedElement
{
public:

	UNIX_SystemIdentification();
	~UNIX_SystemIdentification();

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
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getObjectManagerCreationClassName(CIMProperty&) const;
	virtual String getObjectManagerCreationClassName() const;
	virtual void setObjectManagerCreationClassName(String&);
	virtual Boolean getObjectManagerName(CIMProperty&) const;
	virtual String getObjectManagerName() const;
	virtual void setObjectManagerName(String&);
	virtual Boolean getNamespaceCreationClassName(CIMProperty&) const;
	virtual String getNamespaceCreationClassName() const;
	virtual void setNamespaceCreationClassName(String&);
	virtual Boolean getNamespaceName(CIMProperty&) const;
	virtual String getNamespaceName() const;
	virtual void setNamespaceName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getIdentificationFormats(CIMProperty&) const;
	virtual Array<Uint16> getIdentificationFormats() const;
	virtual void setIdentificationFormats(Array<Uint16>&);
	virtual Boolean getFormatDescriptions(CIMProperty&) const;
	virtual Array<String> getFormatDescriptions() const;
	virtual void setFormatDescriptions(Array<String>&);
	virtual Boolean getIdentificationData(CIMProperty&) const;
	virtual Array<String> getIdentificationData() const;
	virtual void setIdentificationData(Array<String>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _systemCreationClassName;
	String _systemName;
	String _objectManagerCreationClassName;
	String _objectManagerName;
	String _namespaceCreationClassName;
	String _namespaceName;
	String _creationClassName;
	String _name;
	Array<Uint16> _identificationFormats;
	Array<String> _formatDescriptions;
	Array<String> _identificationData;

#	include "UNIX_SystemIdentificationPrivate.h"


};

#endif /* UNIX_SYSTEMIDENTIFICATION */
