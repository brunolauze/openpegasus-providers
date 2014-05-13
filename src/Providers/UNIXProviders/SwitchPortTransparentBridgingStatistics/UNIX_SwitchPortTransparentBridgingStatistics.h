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
Statistical information regarding a SwitchPort, at which transparent bridging is performed.
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

			UNIX_SwitchPortTransparentBridgingStatistics:
				InFrames UInt32
				OutFrames UInt32
				InDiscards UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_StatisticalInformation:

			CIM_SAPStatisticalInformation:

			UNIX_SwitchPortTransparentBridgingStatistics:


*/

#ifndef __UNIX_SWITCHPORTTRANSPARENTBRIDGINGSTATISTICS_H
#define __UNIX_SWITCHPORTTRANSPARENTBRIDGINGSTATISTICS_H


#include "CIM_SAPStatisticalInformation.h"

#include "UNIX_SwitchPortTransparentBridgingStatisticsDeps.h"


#ifndef PROPERTY_IN_FRAMES
#define PROPERTY_IN_FRAMES \
					"InFrames"
#endif

#ifndef PROPERTY_OUT_FRAMES
#define PROPERTY_OUT_FRAMES \
					"OutFrames"
#endif

#ifndef PROPERTY_IN_DISCARDS
#define PROPERTY_IN_DISCARDS \
					"InDiscards"
#endif



class UNIX_SwitchPortTransparentBridgingStatistics :
	public CIM_SAPStatisticalInformation
{
public:

	UNIX_SwitchPortTransparentBridgingStatistics();
	~UNIX_SwitchPortTransparentBridgingStatistics();

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
	virtual Boolean getInFrames(CIMProperty&) const;
	virtual Uint32 getInFrames() const;
	virtual void setInFrames(Uint32&);
	virtual Boolean getOutFrames(CIMProperty&) const;
	virtual Uint32 getOutFrames() const;
	virtual void setOutFrames(Uint32&);
	virtual Boolean getInDiscards(CIMProperty&) const;
	virtual Uint32 getInDiscards() const;
	virtual void setInDiscards(Uint32&);


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
	Uint32 _inFrames;
	Uint32 _outFrames;
	Uint32 _inDiscards;

#	include "UNIX_SwitchPortTransparentBridgingStatisticsPrivate.h"


};

#endif /* UNIX_SWITCHPORTTRANSPARENTBRIDGINGSTATISTICS */
