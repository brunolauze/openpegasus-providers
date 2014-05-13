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
2.7.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::SwitchingBridging
*/


/* **** Description *** */
/*
Statistical information regarding a SwitchPort supporting source routing.
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

			CIM_SAPStatisticalInformation:
				SystemCreationClassName String
				SystemName String
				SAPCreationClassName String
				SAPName String
				CreationClassName String

			UNIX_SwitchPortSourceRoutingStatistics:
				SpecInFrames UInt32
				SpecOutFrames UInt32
				ApeInFrames UInt32
				ApeOutFrames UInt32
				SteInFrames UInt32
				SteOutFrames UInt32
				SegmentMismatchDiscards UInt32
				DuplicateSegmentDiscards UInt32
				HopCountExceedsDiscards UInt32
				DupLanIdOrTreeErrors UInt32
				LanIdMismatches UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalInformation:

			CIM_SAPStatisticalInformation:

			UNIX_SwitchPortSourceRoutingStatistics:


*/

#ifndef __UNIX_SWITCHPORTSOURCEROUTINGSTATISTICS_H
#define __UNIX_SWITCHPORTSOURCEROUTINGSTATISTICS_H


#include "CIM_SAPStatisticalInformation.h"

#include "UNIX_SwitchPortSourceRoutingStatisticsDeps.h"


#ifndef PROPERTY_SPEC_IN_FRAMES
#define PROPERTY_SPEC_IN_FRAMES \
					"SpecInFrames"
#endif

#ifndef PROPERTY_SPEC_OUT_FRAMES
#define PROPERTY_SPEC_OUT_FRAMES \
					"SpecOutFrames"
#endif

#ifndef PROPERTY_APE_IN_FRAMES
#define PROPERTY_APE_IN_FRAMES \
					"ApeInFrames"
#endif

#ifndef PROPERTY_APE_OUT_FRAMES
#define PROPERTY_APE_OUT_FRAMES \
					"ApeOutFrames"
#endif

#ifndef PROPERTY_STE_IN_FRAMES
#define PROPERTY_STE_IN_FRAMES \
					"SteInFrames"
#endif

#ifndef PROPERTY_STE_OUT_FRAMES
#define PROPERTY_STE_OUT_FRAMES \
					"SteOutFrames"
#endif

#ifndef PROPERTY_SEGMENT_MISMATCH_DISCARDS
#define PROPERTY_SEGMENT_MISMATCH_DISCARDS \
					"SegmentMismatchDiscards"
#endif

#ifndef PROPERTY_DUPLICATE_SEGMENT_DISCARDS
#define PROPERTY_DUPLICATE_SEGMENT_DISCARDS \
					"DuplicateSegmentDiscards"
#endif

#ifndef PROPERTY_HOP_COUNT_EXCEEDS_DISCARDS
#define PROPERTY_HOP_COUNT_EXCEEDS_DISCARDS \
					"HopCountExceedsDiscards"
#endif

#ifndef PROPERTY_DUP_LAN_ID_OR_TREE_ERRORS
#define PROPERTY_DUP_LAN_ID_OR_TREE_ERRORS \
					"DupLanIdOrTreeErrors"
#endif

#ifndef PROPERTY_LAN_ID_MISMATCHES
#define PROPERTY_LAN_ID_MISMATCHES \
					"LanIdMismatches"
#endif



class UNIX_SwitchPortSourceRoutingStatistics :
	public CIM_SAPStatisticalInformation
{
public:

	UNIX_SwitchPortSourceRoutingStatistics();
	~UNIX_SwitchPortSourceRoutingStatistics();

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
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual void setSystemCreationClassName(String&);
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual void setSystemName(String&);
	virtual Boolean getSAPCreationClassName(CIMProperty&) const;
	virtual String getSAPCreationClassName() const;
	virtual void setSAPCreationClassName(String&);
	virtual Boolean getSAPName(CIMProperty&) const;
	virtual String getSAPName() const;
	virtual void setSAPName(String&);
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual void setCreationClassName(String&);
	virtual Boolean getSpecInFrames(CIMProperty&) const;
	virtual Uint32 getSpecInFrames() const;
	virtual void setSpecInFrames(Uint32&);
	virtual Boolean getSpecOutFrames(CIMProperty&) const;
	virtual Uint32 getSpecOutFrames() const;
	virtual void setSpecOutFrames(Uint32&);
	virtual Boolean getApeInFrames(CIMProperty&) const;
	virtual Uint32 getApeInFrames() const;
	virtual void setApeInFrames(Uint32&);
	virtual Boolean getApeOutFrames(CIMProperty&) const;
	virtual Uint32 getApeOutFrames() const;
	virtual void setApeOutFrames(Uint32&);
	virtual Boolean getSteInFrames(CIMProperty&) const;
	virtual Uint32 getSteInFrames() const;
	virtual void setSteInFrames(Uint32&);
	virtual Boolean getSteOutFrames(CIMProperty&) const;
	virtual Uint32 getSteOutFrames() const;
	virtual void setSteOutFrames(Uint32&);
	virtual Boolean getSegmentMismatchDiscards(CIMProperty&) const;
	virtual Uint32 getSegmentMismatchDiscards() const;
	virtual void setSegmentMismatchDiscards(Uint32&);
	virtual Boolean getDuplicateSegmentDiscards(CIMProperty&) const;
	virtual Uint32 getDuplicateSegmentDiscards() const;
	virtual void setDuplicateSegmentDiscards(Uint32&);
	virtual Boolean getHopCountExceedsDiscards(CIMProperty&) const;
	virtual Uint32 getHopCountExceedsDiscards() const;
	virtual void setHopCountExceedsDiscards(Uint32&);
	virtual Boolean getDupLanIdOrTreeErrors(CIMProperty&) const;
	virtual Uint32 getDupLanIdOrTreeErrors() const;
	virtual void setDupLanIdOrTreeErrors(Uint32&);
	virtual Boolean getLanIdMismatches(CIMProperty&) const;
	virtual Uint32 getLanIdMismatches() const;
	virtual void setLanIdMismatches(Uint32&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _name;
	String _systemCreationClassName;
	String _systemName;
	String _sAPCreationClassName;
	String _sAPName;
	String _creationClassName;
	Uint32 _specInFrames;
	Uint32 _specOutFrames;
	Uint32 _apeInFrames;
	Uint32 _apeOutFrames;
	Uint32 _steInFrames;
	Uint32 _steOutFrames;
	Uint32 _segmentMismatchDiscards;
	Uint32 _duplicateSegmentDiscards;
	Uint32 _hopCountExceedsDiscards;
	Uint32 _dupLanIdOrTreeErrors;
	Uint32 _lanIdMismatches;

#	include "UNIX_SwitchPortSourceRoutingStatisticsPrivate.h"


};

#endif /* UNIX_SWITCHPORTSOURCEROUTINGSTATISTICS */
