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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Ports
*/


/* **** Description *** */
/*
A collection of one or more ports that are logically grouped for administrative and discovery or topology purposes. LogicalPortGroups define port collections for access control, or for use in routing policy or other management tasks. For example, in Fibre Channel and Infiniband, a LogicalPortGroup represents the concept of a 'node'.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Collection:

			CIM_SystemSpecificCollection:

			UNIX_LogicalPortGroup:
				Name String
				NameFormat String
				OtherNameFormat String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_SystemSpecificCollection:

			UNIX_LogicalPortGroup:


*/

#ifndef __UNIX_LOGICALPORTGROUP_H
#define __UNIX_LOGICALPORTGROUP_H


#include "CIM_SystemSpecificCollection.h"

#include "UNIX_LogicalPortGroupDeps.h"


#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_NAME_FORMAT
#define PROPERTY_NAME_FORMAT \
					"NameFormat"
#endif

#ifndef PROPERTY_OTHER_NAME_FORMAT
#define PROPERTY_OTHER_NAME_FORMAT \
					"OtherNameFormat"
#endif



class UNIX_LogicalPortGroup :
	public CIM_SystemSpecificCollection
{
public:

	UNIX_LogicalPortGroup();
	~UNIX_LogicalPortGroup();

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
	virtual Boolean getNameFormat(CIMProperty&) const;
	virtual String getNameFormat() const;
	virtual void setNameFormat(String&);
	virtual Boolean getOtherNameFormat(CIMProperty&) const;
	virtual String getOtherNameFormat() const;
	virtual void setOtherNameFormat(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _name;
	String _nameFormat;
	String _otherNameFormat;

#	include "UNIX_LogicalPortGroupPrivate.h"


};

#endif /* UNIX_LOGICALPORTGROUP */
