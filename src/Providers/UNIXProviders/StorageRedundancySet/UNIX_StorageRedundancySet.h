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
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Redundancy
*/


/* **** Description *** */
/*
A class derived from RedundancySet describing storage-related redundancy information. StorageRedundancySets are used to protect user data. They aggregate one or more underlying StorageExtents, associated via MemberOfCollection, and produce one or more higher-level Extents. The Extents are related to each other via a BasedOn association. And, the higher level Extent is related to the StorageRedundancy Set via the LogicalIdentity association. 
Note that StorageRedundancySets may overlap in their aggregation of members. If this occurs, the overlapping Extents SHOULD NOT contain any check data.
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

			UNIX_RedundancySet:
				RedundancyStatus UInt16
				TypeOfSet UInt16
				MinNumberNeeded UInt32
				MaxNumberSupported UInt32
				VendorIdentifyingInfo String
				OtherTypeOfSet String
				LoadBalanceAlgorithm UInt16
				OtherLoadBalanceAlgorithm String

			UNIX_StorageRedundancySet:
				TypeOfAlgorithm UInt16
				OtherAlgorithm String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_SystemSpecificCollection:

			UNIX_RedundancySet:
				Failover UInt32

			UNIX_StorageRedundancySet:


*/

#ifndef __UNIX_STORAGEREDUNDANCYSET_H
#define __UNIX_STORAGEREDUNDANCYSET_H


#include <RedundancySet/UNIX_RedundancySet.h>

#include "UNIX_StorageRedundancySetDeps.h"


#ifndef PROPERTY_TYPE_OF_ALGORITHM
#define PROPERTY_TYPE_OF_ALGORITHM \
					"TypeOfAlgorithm"
#endif

#ifndef PROPERTY_OTHER_ALGORITHM
#define PROPERTY_OTHER_ALGORITHM \
					"OtherAlgorithm"
#endif



class UNIX_StorageRedundancySet :
	public UNIX_RedundancySet
{
public:

	UNIX_StorageRedundancySet();
	~UNIX_StorageRedundancySet();

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
	virtual Boolean getRedundancyStatus(CIMProperty&) const;
	virtual Uint16 getRedundancyStatus() const;
	virtual void setRedundancyStatus(Uint16&);
	virtual Boolean getTypeOfSet(CIMProperty&) const;
	virtual Array<Uint16> getTypeOfSet() const;
	virtual void setTypeOfSet(Array<Uint16>&);
	virtual Boolean getMinNumberNeeded(CIMProperty&) const;
	virtual Uint32 getMinNumberNeeded() const;
	virtual void setMinNumberNeeded(Uint32&);
	virtual Boolean getMaxNumberSupported(CIMProperty&) const;
	virtual Uint32 getMaxNumberSupported() const;
	virtual void setMaxNumberSupported(Uint32&);
	virtual Boolean getVendorIdentifyingInfo(CIMProperty&) const;
	virtual String getVendorIdentifyingInfo() const;
	virtual void setVendorIdentifyingInfo(String&);
	virtual Boolean getOtherTypeOfSet(CIMProperty&) const;
	virtual Array<String> getOtherTypeOfSet() const;
	virtual void setOtherTypeOfSet(Array<String>&);
	virtual Boolean getLoadBalanceAlgorithm(CIMProperty&) const;
	virtual Uint16 getLoadBalanceAlgorithm() const;
	virtual void setLoadBalanceAlgorithm(Uint16&);
	virtual Boolean getOtherLoadBalanceAlgorithm(CIMProperty&) const;
	virtual String getOtherLoadBalanceAlgorithm() const;
	virtual void setOtherLoadBalanceAlgorithm(String&);
	virtual Boolean getTypeOfAlgorithm(CIMProperty&) const;
	virtual Uint16 getTypeOfAlgorithm() const;
	virtual void setTypeOfAlgorithm(Uint16&);
	virtual Boolean getOtherAlgorithm(CIMProperty&) const;
	virtual String getOtherAlgorithm() const;
	virtual void setOtherAlgorithm(String&);

	virtual Uint32 invokeFailover(
		CIMInstance &inFailoverFrom,
		CIMInstance &inFailoverTo
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint16 _redundancyStatus;
	Array<Uint16> _typeOfSet;
	Uint32 _minNumberNeeded;
	Uint32 _maxNumberSupported;
	String _vendorIdentifyingInfo;
	Array<String> _otherTypeOfSet;
	Uint16 _loadBalanceAlgorithm;
	String _otherLoadBalanceAlgorithm;
	Uint16 _typeOfAlgorithm;
	String _otherAlgorithm;

#	include "UNIX_StorageRedundancySetPrivate.h"


};

#endif /* UNIX_STORAGEREDUNDANCYSET */
