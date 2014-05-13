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


/* **** Deprecated *** */
/*
CIM_SchemaInformationStructure
*/


/* **** Version *** */
/*
2.39.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Interop
*/


/* **** Description *** */
/*
Namespace is deprecated. See CIM_WBEMServerNamespace as the replacement for this class.
Namespace provides a domain (in other words, a container), in which the instances [of a class] are guaranteed to be unique per the KEY qualifier definitions. It is named relative to the CIM_ObjectManager implementation that provides such a domain.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_Namespace:
				SystemCreationClassName String
				SystemName String
				ObjectManagerCreationClassName String
				ObjectManagerName String
				CreationClassName String
				Name String
				ClassInfo UInt16
				DescriptionOfClassInfo String
				ClassType UInt16
				ClassTypeVersion String
				DescriptionOfClassType String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_Namespace:


*/

#ifndef __UNIX_NAMESPACE_H
#define __UNIX_NAMESPACE_H


#include "CIM_ManagedElement.h"

#include "UNIX_NamespaceDeps.h"


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

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_CLASS_INFO
#define PROPERTY_CLASS_INFO \
					"ClassInfo"
#endif

#ifndef PROPERTY_DESCRIPTION_OF_CLASS_INFO
#define PROPERTY_DESCRIPTION_OF_CLASS_INFO \
					"DescriptionOfClassInfo"
#endif

#ifndef PROPERTY_CLASS_TYPE
#define PROPERTY_CLASS_TYPE \
					"ClassType"
#endif

#ifndef PROPERTY_CLASS_TYPE_VERSION
#define PROPERTY_CLASS_TYPE_VERSION \
					"ClassTypeVersion"
#endif

#ifndef PROPERTY_DESCRIPTION_OF_CLASS_TYPE
#define PROPERTY_DESCRIPTION_OF_CLASS_TYPE \
					"DescriptionOfClassType"
#endif



class UNIX_Namespace :
	public CIM_ManagedElement
{
public:

	UNIX_Namespace();
	~UNIX_Namespace();

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
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getClassInfo(CIMProperty&) const;
	virtual Uint16 getClassInfo() const;
	virtual void setClassInfo(Uint16&);
	virtual Boolean getDescriptionOfClassInfo(CIMProperty&) const;
	virtual String getDescriptionOfClassInfo() const;
	virtual void setDescriptionOfClassInfo(String&);
	virtual Boolean getClassType(CIMProperty&) const;
	virtual Uint16 getClassType() const;
	virtual void setClassType(Uint16&);
	virtual Boolean getClassTypeVersion(CIMProperty&) const;
	virtual String getClassTypeVersion() const;
	virtual void setClassTypeVersion(String&);
	virtual Boolean getDescriptionOfClassType(CIMProperty&) const;
	virtual String getDescriptionOfClassType() const;
	virtual void setDescriptionOfClassType(String&);


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
	String _creationClassName;
	String _name;
	Uint16 _classInfo;
	String _descriptionOfClassInfo;
	Uint16 _classType;
	String _classTypeVersion;
	String _descriptionOfClassType;

#	include "UNIX_NamespacePrivate.h"


};

#endif /* UNIX_NAMESPACE */
