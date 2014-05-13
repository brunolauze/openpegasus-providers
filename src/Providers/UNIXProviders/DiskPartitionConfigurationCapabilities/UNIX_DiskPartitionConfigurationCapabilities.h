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
2.24.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageExtents
*/


/* **** Description *** */
/*
DiskPartitionConfigurationCapabilities instances describe a partition style supported by the platform. An instance of this class is associated with a volume (or partition) when a partition table is installed (see DiskPartitionConfigurationService.SetPartitionStyle.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Capabilities:

			UNIX_DiskPartitionConfigurationCapabilities:
				PartitionStyle UInt16
				ValidSubPartitionStyles UInt16
				OtherValidSubPartitionStyles String
				Version UInt16
				MaxNumberOfPartitions UInt16
				MaxCapacity UInt64
				OverlapAllowed Boolean
				PartitionTableSize UInt32
				SupportedSynchronousActions UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_DiskPartitionConfigurationCapabilities:


*/

#ifndef __UNIX_DISKPARTITIONCONFIGURATIONCAPABILITIES_H
#define __UNIX_DISKPARTITIONCONFIGURATIONCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_DiskPartitionConfigurationCapabilitiesDeps.h"


#ifndef PROPERTY_PARTITION_STYLE
#define PROPERTY_PARTITION_STYLE \
					"PartitionStyle"
#endif

#ifndef PROPERTY_VALID_SUB_PARTITION_STYLES
#define PROPERTY_VALID_SUB_PARTITION_STYLES \
					"ValidSubPartitionStyles"
#endif

#ifndef PROPERTY_OTHER_VALID_SUB_PARTITION_STYLES
#define PROPERTY_OTHER_VALID_SUB_PARTITION_STYLES \
					"OtherValidSubPartitionStyles"
#endif

#ifndef PROPERTY_VERSION
#define PROPERTY_VERSION \
					"Version"
#endif

#ifndef PROPERTY_MAX_NUMBER_OF_PARTITIONS
#define PROPERTY_MAX_NUMBER_OF_PARTITIONS \
					"MaxNumberOfPartitions"
#endif

#ifndef PROPERTY_MAX_CAPACITY
#define PROPERTY_MAX_CAPACITY \
					"MaxCapacity"
#endif

#ifndef PROPERTY_OVERLAP_ALLOWED
#define PROPERTY_OVERLAP_ALLOWED \
					"OverlapAllowed"
#endif

#ifndef PROPERTY_PARTITION_TABLE_SIZE
#define PROPERTY_PARTITION_TABLE_SIZE \
					"PartitionTableSize"
#endif

#ifndef PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS \
					"SupportedSynchronousActions"
#endif



class UNIX_DiskPartitionConfigurationCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_DiskPartitionConfigurationCapabilities();
	~UNIX_DiskPartitionConfigurationCapabilities();

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
	virtual Boolean getPartitionStyle(CIMProperty&) const;
	virtual Uint16 getPartitionStyle() const;
	virtual void setPartitionStyle(Uint16&);
	virtual Boolean getValidSubPartitionStyles(CIMProperty&) const;
	virtual Array<Uint16> getValidSubPartitionStyles() const;
	virtual void setValidSubPartitionStyles(Array<Uint16>&);
	virtual Boolean getOtherValidSubPartitionStyles(CIMProperty&) const;
	virtual Array<String> getOtherValidSubPartitionStyles() const;
	virtual void setOtherValidSubPartitionStyles(Array<String>&);
	virtual Boolean getVersion(CIMProperty&) const;
	virtual Uint16 getVersion() const;
	virtual void setVersion(Uint16&);
	virtual Boolean getMaxNumberOfPartitions(CIMProperty&) const;
	virtual Uint16 getMaxNumberOfPartitions() const;
	virtual void setMaxNumberOfPartitions(Uint16&);
	virtual Boolean getMaxCapacity(CIMProperty&) const;
	virtual Uint64 getMaxCapacity() const;
	virtual void setMaxCapacity(Uint64&);
	virtual Boolean getOverlapAllowed(CIMProperty&) const;
	virtual Boolean getOverlapAllowed() const;
	virtual void setOverlapAllowed(Boolean&);
	virtual Boolean getPartitionTableSize(CIMProperty&) const;
	virtual Uint32 getPartitionTableSize() const;
	virtual void setPartitionTableSize(Uint32&);
	virtual Boolean getSupportedSynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedSynchronousActions() const;
	virtual void setSupportedSynchronousActions(Array<Uint16>&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint16 _partitionStyle;
	Array<Uint16> _validSubPartitionStyles;
	Array<String> _otherValidSubPartitionStyles;
	Uint16 _version;
	Uint16 _maxNumberOfPartitions;
	Uint64 _maxCapacity;
	Boolean _overlapAllowed;
	Uint32 _partitionTableSize;
	Array<Uint16> _supportedSynchronousActions;

#	include "UNIX_DiskPartitionConfigurationCapabilitiesPrivate.h"


};

#endif /* UNIX_DISKPARTITIONCONFIGURATIONCAPABILITIES */
