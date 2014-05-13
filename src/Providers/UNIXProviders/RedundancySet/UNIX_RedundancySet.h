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
2.18.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Redundancy
*/


/* **** Description *** */
/*
A class derived from SystemSpecificCollection that is a special collection of ManagedElements. This collection indicates that the aggregated elements together provide redundancy, or that redundancy is provided via sparing. All elements collected in a RedundancySet SHOULD be instantiations of the same object class.
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


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Collection:

			CIM_SystemSpecificCollection:

			UNIX_RedundancySet:
				Failover UInt32


*/

#ifndef __UNIX_REDUNDANCYSET_H
#define __UNIX_REDUNDANCYSET_H


#include "CIM_SystemSpecificCollection.h"

#include "UNIX_RedundancySetDeps.h"


#ifndef PROPERTY_REDUNDANCY_STATUS
#define PROPERTY_REDUNDANCY_STATUS \
					"RedundancyStatus"
#endif

#ifndef PROPERTY_TYPE_OF_SET
#define PROPERTY_TYPE_OF_SET \
					"TypeOfSet"
#endif

#ifndef PROPERTY_MIN_NUMBER_NEEDED
#define PROPERTY_MIN_NUMBER_NEEDED \
					"MinNumberNeeded"
#endif

#ifndef PROPERTY_MAX_NUMBER_SUPPORTED
#define PROPERTY_MAX_NUMBER_SUPPORTED \
					"MaxNumberSupported"
#endif

#ifndef PROPERTY_VENDOR_IDENTIFYING_INFO
#define PROPERTY_VENDOR_IDENTIFYING_INFO \
					"VendorIdentifyingInfo"
#endif

#ifndef PROPERTY_OTHER_TYPE_OF_SET
#define PROPERTY_OTHER_TYPE_OF_SET \
					"OtherTypeOfSet"
#endif

#ifndef PROPERTY_LOAD_BALANCE_ALGORITHM
#define PROPERTY_LOAD_BALANCE_ALGORITHM \
					"LoadBalanceAlgorithm"
#endif

#ifndef PROPERTY_OTHER_LOAD_BALANCE_ALGORITHM
#define PROPERTY_OTHER_LOAD_BALANCE_ALGORITHM \
					"OtherLoadBalanceAlgorithm"
#endif



class UNIX_RedundancySet :
	public CIM_SystemSpecificCollection
{
public:

	UNIX_RedundancySet();
	~UNIX_RedundancySet();

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

#	include "UNIX_RedundancySetPrivate.h"


};

#endif /* UNIX_REDUNDANCYSET */
