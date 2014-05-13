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


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Collection
*/


/* **** Description *** */
/*
The CollectionOfMSEs object allows the grouping of Managed SystemElements for various identification purposes and to reduce the complexity of associating Settings and Configurations. It is abstract to require further definition and semantic refinement in subclasses. The CollectionOfMSEs object does not carry any state or status information, but represents only a grouping or 'bag' of Elements. For this reason, it is incorrect to subclass groups that have state or status from CollectionOfMSEs. An example is CIM_Redundancy Group (which is subclassed from LogicalElement). 
Collections typically aggregate similar ('like') objects,but they are not required to do so. Collections simply identify 'bags' and might represent an optimization. This purpose is especially true with respect to their association to Settings and Configurations. Without Collections, you would need to define individual ElementSetting and ElementConfiguration associations, to tie Settings and Configuration objects to individual ManagedSystemElements. There might be duplication when assigning the same Setting to multiple objects. In addition, using the Collection object allows the determination that the Setting and Configuration associations are indeed the same for the Collection's members. This information would otherwise be obtained by defining the Collection in a proprietary manner, and then querying the ElementSetting and ElementConfiguration associations to determine if the Collection set is completely covered.
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

			CIM_CollectionOfMSEs:
				CollectionID String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_CollectionOfMSEs:


*/

#ifndef __CIM_COLLECTIONOFMSES_H
#define __CIM_COLLECTIONOFMSES_H


#include "CIM_Collection.h"


#ifndef PROPERTY_COLLECTION_ID
#define PROPERTY_COLLECTION_ID \
					"CollectionID"
#endif



class CIM_CollectionOfMSEs :
	public CIM_Collection
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(const Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;
	virtual void setCIMOMHandle(CIMOMHandle&)=0;
	virtual void clearInstance()=0;
	virtual Boolean loadInstance(const CIMInstance&)=0;
	virtual Boolean createInstance(const OperationContext&)=0;
	virtual Boolean modifyInstance(const OperationContext&)=0;
	virtual Boolean deleteInstance(const OperationContext&)=0;
	virtual Boolean validateInstance()=0;

	virtual Boolean getCollectionID(CIMProperty&) const=0;
	virtual String getCollectionID() const=0;
	virtual void setCollectionID(String&)=0;


private:

};

#endif /* CIM_COLLECTIONOFMSES */
