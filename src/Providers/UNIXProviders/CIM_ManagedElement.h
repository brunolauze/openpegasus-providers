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
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::CoreElements
*/


/* **** Description *** */
/*
ManagedElement is an abstract class that provides a common superclass (or top of the inheritance tree) for the non-association classes in the CIM Schema.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:


*/

#ifndef __CIM_MANAGEDELEMENT_H
#define __CIM_MANAGEDELEMENT_H


#include "CIM_ClassBase.h"


#ifndef PROPERTY_INSTANCE_ID
#define PROPERTY_INSTANCE_ID \
					"InstanceID"
#endif

#ifndef PROPERTY_CAPTION
#define PROPERTY_CAPTION \
					"Caption"
#endif

#ifndef PROPERTY_DESCRIPTION
#define PROPERTY_DESCRIPTION \
					"Description"
#endif

#ifndef PROPERTY_ELEMENT_NAME
#define PROPERTY_ELEMENT_NAME \
					"ElementName"
#endif

#ifndef PROPERTY_GENERATION
#define PROPERTY_GENERATION \
					"Generation"
#endif



class CIM_ManagedElement :
	public CIM_ClassBase
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

	virtual Boolean getInstanceID(CIMProperty&) const=0;
	virtual String getInstanceID() const=0;
	virtual void setInstanceID(String&)=0;
	virtual Boolean getCaption(CIMProperty&) const=0;
	virtual String getCaption() const=0;
	virtual void setCaption(String&)=0;
	virtual Boolean getDescription(CIMProperty&) const=0;
	virtual String getDescription() const=0;
	virtual void setDescription(String&)=0;
	virtual Boolean getElementName(CIMProperty&) const=0;
	virtual String getElementName() const=0;
	virtual void setElementName(String&)=0;
	virtual Boolean getGeneration(CIMProperty&) const=0;
	virtual Uint64 getGeneration() const=0;
	virtual void setGeneration(Uint64&)=0;


private:

};

#endif /* CIM_MANAGEDELEMENT */
