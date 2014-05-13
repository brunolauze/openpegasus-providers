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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Statistics
*/


/* **** Description *** */
/*
Statistical information associated with a PhysicalElement or one of its subclasses.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_StatisticalInformation:
				Name String

			UNIX_PhysicalStatisticalInformation:
				PhysicalCreationClassName String
				Tag String
				CreationClassName String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalInformation:

			UNIX_PhysicalStatisticalInformation:


*/

#ifndef __UNIX_PHYSICALSTATISTICALINFORMATION_H
#define __UNIX_PHYSICALSTATISTICALINFORMATION_H


#include "CIM_StatisticalInformation.h"

#include "UNIX_PhysicalStatisticalInformationDeps.h"


#ifndef PROPERTY_PHYSICAL_CREATION_CLASS_NAME
#define PROPERTY_PHYSICAL_CREATION_CLASS_NAME \
					"PhysicalCreationClassName"
#endif

#ifndef PROPERTY_TAG
#define PROPERTY_TAG \
					"Tag"
#endif

#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif



class UNIX_PhysicalStatisticalInformation :
	public CIM_StatisticalInformation
{
public:

	UNIX_PhysicalStatisticalInformation();
	~UNIX_PhysicalStatisticalInformation();

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
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getPhysicalCreationClassName(CIMProperty&) const;
	virtual String getPhysicalCreationClassName() const;
	virtual void setPhysicalCreationClassName(String&);
	virtual Boolean getTag(CIMProperty&) const;
	virtual String getTag() const;
	virtual void setTag(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _name;
	String _physicalCreationClassName;
	String _tag;
	String _creationClassName;

#	include "UNIX_PhysicalStatisticalInformationPrivate.h"


};

#endif /* UNIX_PHYSICALSTATISTICALINFORMATION */
