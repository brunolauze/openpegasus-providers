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
2.40.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Application
*/


/* **** Description *** */
/*
Contains an XML string based on ISO 19770 standard that represents the Software ID Tag (SWID)
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_SoftwareIDTag19770:
				CreationClassName String
				SWIDTagID String
				SoftwareIDTag19770 String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_SoftwareIDTag19770:


*/

#ifndef __UNIX_SOFTWAREIDTAG19770_H
#define __UNIX_SOFTWAREIDTAG19770_H


#include "CIM_ManagedElement.h"

#include "UNIX_SoftwareIDTag19770Deps.h"


#ifndef PROPERTY_CREATION_CLASS_NAME
#define PROPERTY_CREATION_CLASS_NAME \
					"CreationClassName"
#endif

#ifndef PROPERTY_S_W_ID_TAG_ID
#define PROPERTY_S_W_ID_TAG_ID \
					"SWIDTagID"
#endif

#ifndef PROPERTY_SOFTWARE_ID_TAG_1_9_7_7_0
#define PROPERTY_SOFTWARE_ID_TAG_1_9_7_7_0 \
					"SoftwareIDTag19770"
#endif



class UNIX_SoftwareIDTag19770 :
	public CIM_ManagedElement
{
public:

	UNIX_SoftwareIDTag19770();
	~UNIX_SoftwareIDTag19770();

	virtual Boolean initialize();
	virtual Boolean load(int&);
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
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getSWIDTagID(CIMProperty&) const;
	virtual String getSWIDTagID() const;
	virtual void setSWIDTagID(String&);
	virtual Boolean getSoftwareIDTag19770(CIMProperty&) const;
	virtual String getSoftwareIDTag19770() const;
	virtual void setSoftwareIDTag19770(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _creationClassName;
	String _sWIDTagID;
	String _softwareIDTag19770;

#	include "UNIX_SoftwareIDTag19770Private.h"


};

#endif /* UNIX_SOFTWAREIDTAG19770 */
