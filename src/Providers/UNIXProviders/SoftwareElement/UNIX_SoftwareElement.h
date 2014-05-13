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
2.23.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Application::DeploymentModel
*/


/* **** Description *** */
/*
The CIM_SoftwareElement class is used to decompose a CIM_SoftwareFeature object into a set of individually manageable or deployable parts, for a particular platform. A SoftwareElement's platform is uniquely identified by its underlying hardware architecture and operating system (for example Sun Solaris on Sun Sparc or Windows NT on Intel platforms). As such, to understand the details of how the functionality of a particular SoftwareFeature is provided on a particular platform, the CIM_SoftwareElement objects referenced by CIM_SoftwareFeatureSoftwareElements associations are organized in disjoint sets based on the TargetOperatingSystem property. A CIM_SoftwareElement object captures the management details of a part or component in one of four states characterized by the SoftwareElementState property.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_ManagedSystemElement:
				InstallDate DateTime
				Name String
				OperationalStatus UInt16
				StatusDescriptions String
				Status String
				HealthState UInt16
				CommunicationStatus UInt16
				DetailedStatus UInt16
				OperatingStatus UInt16
				PrimaryStatus UInt16

			CIM_LogicalElement:

			UNIX_SoftwareElement:
				Version String
				SoftwareElementState UInt16
				SoftwareElementID String
				TargetOperatingSystem UInt16
				OtherTargetOS String
				Manufacturer String
				BuildNumber String
				SerialNumber String
				CodeSet String
				IdentificationCode String
				LanguageEdition String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			UNIX_SoftwareElement:


*/

#ifndef __UNIX_SOFTWAREELEMENT_H
#define __UNIX_SOFTWAREELEMENT_H


#include "CIM_LogicalElement.h"

#include "UNIX_SoftwareElementDeps.h"


#ifndef PROPERTY_VERSION
#define PROPERTY_VERSION \
					"Version"
#endif

#ifndef PROPERTY_SOFTWARE_ELEMENT_STATE
#define PROPERTY_SOFTWARE_ELEMENT_STATE \
					"SoftwareElementState"
#endif

#ifndef PROPERTY_SOFTWARE_ELEMENT_ID
#define PROPERTY_SOFTWARE_ELEMENT_ID \
					"SoftwareElementID"
#endif

#ifndef PROPERTY_TARGET_OPERATING_SYSTEM
#define PROPERTY_TARGET_OPERATING_SYSTEM \
					"TargetOperatingSystem"
#endif

#ifndef PROPERTY_OTHER_TARGET_OS
#define PROPERTY_OTHER_TARGET_OS \
					"OtherTargetOS"
#endif

#ifndef PROPERTY_MANUFACTURER
#define PROPERTY_MANUFACTURER \
					"Manufacturer"
#endif

#ifndef PROPERTY_BUILD_NUMBER
#define PROPERTY_BUILD_NUMBER \
					"BuildNumber"
#endif

#ifndef PROPERTY_SERIAL_NUMBER
#define PROPERTY_SERIAL_NUMBER \
					"SerialNumber"
#endif

#ifndef PROPERTY_CODE_SET
#define PROPERTY_CODE_SET \
					"CodeSet"
#endif

#ifndef PROPERTY_IDENTIFICATION_CODE
#define PROPERTY_IDENTIFICATION_CODE \
					"IdentificationCode"
#endif

#ifndef PROPERTY_LANGUAGE_EDITION
#define PROPERTY_LANGUAGE_EDITION \
					"LanguageEdition"
#endif



class UNIX_SoftwareElement :
	public CIM_LogicalElement
{
public:

	UNIX_SoftwareElement();
	~UNIX_SoftwareElement();

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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual void setInstallDate(CIMDateTime&);
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual void setName(String&);
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual void setOperationalStatus(Array<Uint16>&);
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual void setStatusDescriptions(Array<String>&);
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual void setStatus(String&);
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual void setHealthState(Uint16&);
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual void setCommunicationStatus(Uint16&);
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual void setDetailedStatus(Uint16&);
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual void setOperatingStatus(Uint16&);
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual void setPrimaryStatus(Uint16&);
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual void setVersion(String&);
	virtual Boolean getSoftwareElementState(CIMProperty&) const;
	virtual Uint16 getSoftwareElementState() const;
	virtual void setSoftwareElementState(Uint16&);
	virtual Boolean getSoftwareElementID(CIMProperty&) const;
	virtual String getSoftwareElementID() const;
	virtual void setSoftwareElementID(String&);
	virtual Boolean getTargetOperatingSystem(CIMProperty&) const;
	virtual Uint16 getTargetOperatingSystem() const;
	virtual void setTargetOperatingSystem(Uint16&);
	virtual Boolean getOtherTargetOS(CIMProperty&) const;
	virtual String getOtherTargetOS() const;
	virtual void setOtherTargetOS(String&);
	virtual Boolean getManufacturer(CIMProperty&) const;
	virtual String getManufacturer() const;
	virtual void setManufacturer(String&);
	virtual Boolean getBuildNumber(CIMProperty&) const;
	virtual String getBuildNumber() const;
	virtual void setBuildNumber(String&);
	virtual Boolean getSerialNumber(CIMProperty&) const;
	virtual String getSerialNumber() const;
	virtual void setSerialNumber(String&);
	virtual Boolean getCodeSet(CIMProperty&) const;
	virtual String getCodeSet() const;
	virtual void setCodeSet(String&);
	virtual Boolean getIdentificationCode(CIMProperty&) const;
	virtual String getIdentificationCode() const;
	virtual void setIdentificationCode(String&);
	virtual Boolean getLanguageEdition(CIMProperty&) const;
	virtual String getLanguageEdition() const;
	virtual void setLanguageEdition(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _installDate;
	String _name;
	Array<Uint16> _operationalStatus;
	Array<String> _statusDescriptions;
	String _status;
	Uint16 _healthState;
	Uint16 _communicationStatus;
	Uint16 _detailedStatus;
	Uint16 _operatingStatus;
	Uint16 _primaryStatus;
	String _version;
	Uint16 _softwareElementState;
	String _softwareElementID;
	Uint16 _targetOperatingSystem;
	String _otherTargetOS;
	String _manufacturer;
	String _buildNumber;
	String _serialNumber;
	String _codeSet;
	String _identificationCode;
	String _languageEdition;

#	include "UNIX_SoftwareElementPrivate.h"


};

#endif /* UNIX_SOFTWAREELEMENT */
