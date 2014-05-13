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
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::IPsec
*/


/* **** Description *** */
/*
SATransform is the base class for the various types of transforms that are in effect for an existing IPsecSAEndpoint, or aggregated into phase 2 proposals used during the IPsec negotiation process. This class is defined as a kind of ScopedSettingData, since it describes the set of transform properties that MUST be applied together, if negotiated. This subclassing is different than that defined in IETF's IPSP Policy draft - where it is subclassed from Policy. The definition as SettingData is more consistent with the application of the properties as a set, to the negotiated Security Association. 

Note that an instance of this class is 'scoped' or contained by a System (either a ComputerSystem or AdminDomain), rather than by a SecurityAssociationEndpoint. This is indicated by instantiating the ScopedSetting association, and is necessary since the transform data is used in IPsec negotiation policies (also scoped by Systems) before ever being associated with a SecurityAssociationEndpoint. The latter semantics (i.e., that 'this' transform is negotiated for 'this' Security Association) is conveyed via a subclass of ElementSettingData, TransformOfSecurityAssociation.
*/


/* **** MappingStrings *** */
/*
IPSP Model.IETF|SATransform
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_SettingData:
				ConfigurationName String
				ChangeableType UInt16
				ComponentSetting String
				SoID String
				SoOrgID String

			CIM_ScopedSettingData:

			CIM_SATransform:
				MaxLifetimeSeconds UInt64
				MaxLifetimeKilobytes UInt64
				VendorID String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_ScopedSettingData:

			CIM_SATransform:


*/

#ifndef __CIM_SATRANSFORM_H
#define __CIM_SATRANSFORM_H


#include "CIM_ScopedSettingData.h"


#ifndef PROPERTY_MAX_LIFETIME_SECONDS
#define PROPERTY_MAX_LIFETIME_SECONDS \
					"MaxLifetimeSeconds"
#endif

#ifndef PROPERTY_MAX_LIFETIME_KILOBYTES
#define PROPERTY_MAX_LIFETIME_KILOBYTES \
					"MaxLifetimeKilobytes"
#endif

#ifndef PROPERTY_VENDOR_ID
#define PROPERTY_VENDOR_ID \
					"VendorID"
#endif



class CIM_SATransform :
	public CIM_ScopedSettingData
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

	virtual Boolean getElementName(CIMProperty&) const=0;
	virtual String getElementName() const=0;
	virtual void setElementName(String&)=0;
	virtual Boolean getMaxLifetimeSeconds(CIMProperty&) const=0;
	virtual Uint64 getMaxLifetimeSeconds() const=0;
	virtual void setMaxLifetimeSeconds(Uint64&)=0;
	virtual Boolean getMaxLifetimeKilobytes(CIMProperty&) const=0;
	virtual Uint64 getMaxLifetimeKilobytes() const=0;
	virtual void setMaxLifetimeKilobytes(Uint64&)=0;
	virtual Boolean getVendorID(CIMProperty&) const=0;
	virtual String getVendorID() const=0;
	virtual void setVendorID(String&)=0;


private:

};

#endif /* CIM_SATRANSFORM */
