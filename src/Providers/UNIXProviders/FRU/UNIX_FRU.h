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
CIM_PhysicalElement
CIM_ReplacementFRU
*/


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::ProductFRU
*/


/* **** Description *** */
/*
The CIM_FRU class is a vendor-defined collection of Products and/or PhysicalElements that is associated with a Product for the purpose of supporting, maintaining or upgrading that Product at the customer's location. FRU is an acronym for 'field replaceable unit'. 
The use of FRU has been deprecated in lieu of describing what is a valid replacement part for a piece of hardware (via the ElementFRU association from PhysicalElement to ReplacementFRU) and what has actually been replaced (the ElementHasBeenFRUed association between PhysicalElements).
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_FRU:
				FRUNumber String
				IdentifyingNumber String
				Vendor String
				Name String
				RevisionLevel String
				CustomerReplaceable Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_FRU:


*/

#ifndef __UNIX_FRU_H
#define __UNIX_FRU_H


#include "CIM_ManagedElement.h"

#include "UNIX_FRUDeps.h"


#ifndef PROPERTY_F_R_U_NUMBER
#define PROPERTY_F_R_U_NUMBER \
					"FRUNumber"
#endif

#ifndef PROPERTY_IDENTIFYING_NUMBER
#define PROPERTY_IDENTIFYING_NUMBER \
					"IdentifyingNumber"
#endif

#ifndef PROPERTY_VENDOR
#define PROPERTY_VENDOR \
					"Vendor"
#endif

#ifndef PROPERTY_NAME
#define PROPERTY_NAME \
					"Name"
#endif

#ifndef PROPERTY_REVISION_LEVEL
#define PROPERTY_REVISION_LEVEL \
					"RevisionLevel"
#endif

#ifndef PROPERTY_CUSTOMER_REPLACEABLE
#define PROPERTY_CUSTOMER_REPLACEABLE \
					"CustomerReplaceable"
#endif



class UNIX_FRU :
	public CIM_ManagedElement
{
public:

	UNIX_FRU();
	~UNIX_FRU();

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
	virtual Boolean getFRUNumber(CIMProperty&) const;
	virtual String getFRUNumber() const;
	virtual void setFRUNumber(String&);
	virtual Boolean getIdentifyingNumber(CIMProperty&) const;
	virtual String getIdentifyingNumber() const;
	virtual void setIdentifyingNumber(String&);
	virtual Boolean getVendor(CIMProperty&) const;
	virtual String getVendor() const;
	virtual void setVendor(String&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getRevisionLevel(CIMProperty&) const;
	virtual String getRevisionLevel() const;
	virtual void setRevisionLevel(String&);
	virtual Boolean getCustomerReplaceable(CIMProperty&) const;
	virtual Boolean getCustomerReplaceable() const;
	virtual void setCustomerReplaceable(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _fRUNumber;
	String _identifyingNumber;
	String _vendor;
	String _name;
	String _revisionLevel;
	Boolean _customerReplaceable;

#	include "UNIX_FRUPrivate.h"


};

#endif /* UNIX_FRU */
