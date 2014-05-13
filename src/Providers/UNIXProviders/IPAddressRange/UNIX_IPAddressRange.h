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
CIM_RangeOfIPAddresses
*/


/* **** Abstract *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::Collections
*/


/* **** Description *** */
/*
IPAddressRange represents a grouping of specific addresses, and provides additional semantics for this group if appropriate. The class is deprecated in lieu of the concrete class RangeOfIPAddresses since there is sufficient information for the class to be instantiated. In addition, an address range should be defined in the context of a System (for example, a network element or an admin domain). These semantics are incorporated in the RangeOfIPAddresses class.
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

			UNIX_IPAddressRange:
				StartAddress String
				EndAddress String
				TypeOfAddress UInt16
				AllocationRegion UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_CollectionOfMSEs:

			UNIX_IPAddressRange:


*/

#ifndef __UNIX_IPADDRESSRANGE_H
#define __UNIX_IPADDRESSRANGE_H


#include "CIM_CollectionOfMSEs.h"

#include "UNIX_IPAddressRangeDeps.h"


#ifndef PROPERTY_START_ADDRESS
#define PROPERTY_START_ADDRESS \
					"StartAddress"
#endif

#ifndef PROPERTY_END_ADDRESS
#define PROPERTY_END_ADDRESS \
					"EndAddress"
#endif

#ifndef PROPERTY_TYPE_OF_ADDRESS
#define PROPERTY_TYPE_OF_ADDRESS \
					"TypeOfAddress"
#endif

#ifndef PROPERTY_ALLOCATION_REGION
#define PROPERTY_ALLOCATION_REGION \
					"AllocationRegion"
#endif



class UNIX_IPAddressRange :
	public CIM_CollectionOfMSEs
{
public:

	UNIX_IPAddressRange();
	~UNIX_IPAddressRange();

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
	virtual Boolean getCollectionID(CIMProperty&) const;
	virtual String getCollectionID() const;
	virtual void setCollectionID(String&);
	virtual Boolean getStartAddress(CIMProperty&) const;
	virtual String getStartAddress() const;
	virtual void setStartAddress(String&);
	virtual Boolean getEndAddress(CIMProperty&) const;
	virtual String getEndAddress() const;
	virtual void setEndAddress(String&);
	virtual Boolean getTypeOfAddress(CIMProperty&) const;
	virtual Uint16 getTypeOfAddress() const;
	virtual void setTypeOfAddress(Uint16&);
	virtual Boolean getAllocationRegion(CIMProperty&) const;
	virtual Uint16 getAllocationRegion() const;
	virtual void setAllocationRegion(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _collectionID;
	String _startAddress;
	String _endAddress;
	Uint16 _typeOfAddress;
	Uint16 _allocationRegion;

#	include "UNIX_IPAddressRangePrivate.h"


};

#endif /* UNIX_IPADDRESSRANGE */
