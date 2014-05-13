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
2.27.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::iSCSI
*/


/* **** Description *** */
/*
The capabilites for an iSCSI Network Entity. An instance of this class will be associated by ElementCapabilities to a instance of ComputerSystem that represents the Network Entity. These capability properties are associated to a Network Entity/ComputerSystem since they affect all login negotiations on all iSCSI ProtocolEndpoints aggregated to the system.
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

			UNIX_iSCSICapabilities:
				MinimumSpecificationVersionSupported UInt8
				MaximumSpecificationVersionSupported UInt8
				AuthenticationMethodsSupported UInt16
				OtherSupportedFeatures String
				SupportedFeatures UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_iSCSICapabilities:


*/

#ifndef __UNIX_ISCSICAPABILITIES_H
#define __UNIX_ISCSICAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_iSCSICapabilitiesDeps.h"


#ifndef PROPERTY_MINIMUM_SPECIFICATION_VERSION_SUPPORTED
#define PROPERTY_MINIMUM_SPECIFICATION_VERSION_SUPPORTED \
					"MinimumSpecificationVersionSupported"
#endif

#ifndef PROPERTY_MAXIMUM_SPECIFICATION_VERSION_SUPPORTED
#define PROPERTY_MAXIMUM_SPECIFICATION_VERSION_SUPPORTED \
					"MaximumSpecificationVersionSupported"
#endif

#ifndef PROPERTY_AUTHENTICATION_METHODS_SUPPORTED
#define PROPERTY_AUTHENTICATION_METHODS_SUPPORTED \
					"AuthenticationMethodsSupported"
#endif

#ifndef PROPERTY_OTHER_SUPPORTED_FEATURES
#define PROPERTY_OTHER_SUPPORTED_FEATURES \
					"OtherSupportedFeatures"
#endif

#ifndef PROPERTY_SUPPORTED_FEATURES
#define PROPERTY_SUPPORTED_FEATURES \
					"SupportedFeatures"
#endif



class UNIX_iSCSICapabilities :
	public CIM_Capabilities
{
public:

	UNIX_iSCSICapabilities();
	~UNIX_iSCSICapabilities();

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
	virtual Boolean getMinimumSpecificationVersionSupported(CIMProperty&) const;
	virtual Uint8 getMinimumSpecificationVersionSupported() const;
	virtual void setMinimumSpecificationVersionSupported(Uint8&);
	virtual Boolean getMaximumSpecificationVersionSupported(CIMProperty&) const;
	virtual Uint8 getMaximumSpecificationVersionSupported() const;
	virtual void setMaximumSpecificationVersionSupported(Uint8&);
	virtual Boolean getAuthenticationMethodsSupported(CIMProperty&) const;
	virtual Array<Uint16> getAuthenticationMethodsSupported() const;
	virtual void setAuthenticationMethodsSupported(Array<Uint16>&);
	virtual Boolean getOtherSupportedFeatures(CIMProperty&) const;
	virtual Array<String> getOtherSupportedFeatures() const;
	virtual void setOtherSupportedFeatures(Array<String>&);
	virtual Boolean getSupportedFeatures(CIMProperty&) const;
	virtual Array<Uint16> getSupportedFeatures() const;
	virtual void setSupportedFeatures(Array<Uint16>&);

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
	Uint8 _minimumSpecificationVersionSupported;
	Uint8 _maximumSpecificationVersionSupported;
	Array<Uint16> _authenticationMethodsSupported;
	Array<String> _otherSupportedFeatures;
	Array<Uint16> _supportedFeatures;

#	include "UNIX_iSCSICapabilitiesPrivate.h"


};

#endif /* UNIX_ISCSICAPABILITIES */
