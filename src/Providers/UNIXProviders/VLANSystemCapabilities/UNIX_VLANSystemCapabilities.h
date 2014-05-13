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
2.11.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::VLAN
*/


/* **** Description *** */
/*
Properties in VLANSystemCapabilities represent the ComputerSystem's constraints and capabilities for VLANs. The information included in this class addresses the resource limits for the ComputerSystem.
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

			UNIX_VLANSystemCapabilities:
				MaxMTUsize UInt16
				MinMTUsize UInt16
				MaxSupportedVLANs UInt16
				MaxVLANId UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_VLANSystemCapabilities:


*/

#ifndef __UNIX_VLANSYSTEMCAPABILITIES_H
#define __UNIX_VLANSYSTEMCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_VLANSystemCapabilitiesDeps.h"


#ifndef PROPERTY_MAX_M_T_USIZE
#define PROPERTY_MAX_M_T_USIZE \
					"MaxMTUsize"
#endif

#ifndef PROPERTY_MIN_M_T_USIZE
#define PROPERTY_MIN_M_T_USIZE \
					"MinMTUsize"
#endif

#ifndef PROPERTY_MAX_SUPPORTED_VLANS
#define PROPERTY_MAX_SUPPORTED_VLANS \
					"MaxSupportedVLANs"
#endif

#ifndef PROPERTY_MAX_VLAN_ID
#define PROPERTY_MAX_VLAN_ID \
					"MaxVLANId"
#endif



class UNIX_VLANSystemCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_VLANSystemCapabilities();
	~UNIX_VLANSystemCapabilities();

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
	virtual Boolean getMaxMTUsize(CIMProperty&) const;
	virtual Uint16 getMaxMTUsize() const;
	virtual void setMaxMTUsize(Uint16&);
	virtual Boolean getMinMTUsize(CIMProperty&) const;
	virtual Uint16 getMinMTUsize() const;
	virtual void setMinMTUsize(Uint16&);
	virtual Boolean getMaxSupportedVLANs(CIMProperty&) const;
	virtual Uint16 getMaxSupportedVLANs() const;
	virtual void setMaxSupportedVLANs(Uint16&);
	virtual Boolean getMaxVLANId(CIMProperty&) const;
	virtual Uint16 getMaxVLANId() const;
	virtual void setMaxVLANId(Uint16&);

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
	Uint16 _maxMTUsize;
	Uint16 _minMTUsize;
	Uint16 _maxSupportedVLANs;
	Uint16 _maxVLANId;

#	include "UNIX_VLANSystemCapabilitiesPrivate.h"


};

#endif /* UNIX_VLANSYSTEMCAPABILITIES */
