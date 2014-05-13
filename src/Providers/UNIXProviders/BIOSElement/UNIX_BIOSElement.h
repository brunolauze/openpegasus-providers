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
2.17.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Application::BIOS
*/


/* **** Description *** */
/*
BIOSElement represents the low-level software that is loaded into non-volatile storage and used to bring up and configure a ComputerSystem.
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

			UNIX_BIOSElement:
				PrimaryBIOS Boolean
				ListOfLanguages String
				CurrentLanguage String
				LoadedStartingAddress UInt64
				LoadedEndingAddress UInt64
				LoadUtilityInformation String
				ReleaseDate DateTime
				SystemBIOSMajorRelease UInt8
				SystemBIOSMinorRelease UInt8
				EmbeddedControllerFirmwareMajorRelease UInt8
				EmbeddedControllerFirmwareMinorRelease UInt8
				RegistryURIs String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			UNIX_SoftwareElement:

			UNIX_BIOSElement:


*/

#ifndef __UNIX_BIOSELEMENT_H
#define __UNIX_BIOSELEMENT_H


#include <SoftwareElement/UNIX_SoftwareElement.h>

#include "UNIX_BIOSElementDeps.h"


#ifndef PROPERTY_PRIMARY_BIOS
#define PROPERTY_PRIMARY_BIOS \
					"PrimaryBIOS"
#endif

#ifndef PROPERTY_LIST_OF_LANGUAGES
#define PROPERTY_LIST_OF_LANGUAGES \
					"ListOfLanguages"
#endif

#ifndef PROPERTY_CURRENT_LANGUAGE
#define PROPERTY_CURRENT_LANGUAGE \
					"CurrentLanguage"
#endif

#ifndef PROPERTY_LOADED_STARTING_ADDRESS
#define PROPERTY_LOADED_STARTING_ADDRESS \
					"LoadedStartingAddress"
#endif

#ifndef PROPERTY_LOADED_ENDING_ADDRESS
#define PROPERTY_LOADED_ENDING_ADDRESS \
					"LoadedEndingAddress"
#endif

#ifndef PROPERTY_LOAD_UTILITY_INFORMATION
#define PROPERTY_LOAD_UTILITY_INFORMATION \
					"LoadUtilityInformation"
#endif

#ifndef PROPERTY_RELEASE_DATE
#define PROPERTY_RELEASE_DATE \
					"ReleaseDate"
#endif

#ifndef PROPERTY_SYSTEM_BIOS_MAJOR_RELEASE
#define PROPERTY_SYSTEM_BIOS_MAJOR_RELEASE \
					"SystemBIOSMajorRelease"
#endif

#ifndef PROPERTY_SYSTEM_BIOS_MINOR_RELEASE
#define PROPERTY_SYSTEM_BIOS_MINOR_RELEASE \
					"SystemBIOSMinorRelease"
#endif

#ifndef PROPERTY_EMBEDDED_CONTROLLER_FIRMWARE_MAJOR_RELEASE
#define PROPERTY_EMBEDDED_CONTROLLER_FIRMWARE_MAJOR_RELEASE \
					"EmbeddedControllerFirmwareMajorRelease"
#endif

#ifndef PROPERTY_EMBEDDED_CONTROLLER_FIRMWARE_MINOR_RELEASE
#define PROPERTY_EMBEDDED_CONTROLLER_FIRMWARE_MINOR_RELEASE \
					"EmbeddedControllerFirmwareMinorRelease"
#endif

#ifndef PROPERTY_REGISTRY_U_R_IS
#define PROPERTY_REGISTRY_U_R_IS \
					"RegistryURIs"
#endif



class UNIX_BIOSElement :
	public UNIX_SoftwareElement
{
public:

	UNIX_BIOSElement();
	~UNIX_BIOSElement();

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
	virtual Boolean getPrimaryBIOS(CIMProperty&) const;
	virtual Boolean getPrimaryBIOS() const;
	virtual void setPrimaryBIOS(Boolean&);
	virtual Boolean getListOfLanguages(CIMProperty&) const;
	virtual Array<String> getListOfLanguages() const;
	virtual void setListOfLanguages(Array<String>&);
	virtual Boolean getCurrentLanguage(CIMProperty&) const;
	virtual String getCurrentLanguage() const;
	virtual void setCurrentLanguage(String&);
	virtual Boolean getLoadedStartingAddress(CIMProperty&) const;
	virtual Uint64 getLoadedStartingAddress() const;
	virtual void setLoadedStartingAddress(Uint64&);
	virtual Boolean getLoadedEndingAddress(CIMProperty&) const;
	virtual Uint64 getLoadedEndingAddress() const;
	virtual void setLoadedEndingAddress(Uint64&);
	virtual Boolean getLoadUtilityInformation(CIMProperty&) const;
	virtual String getLoadUtilityInformation() const;
	virtual void setLoadUtilityInformation(String&);
	virtual Boolean getReleaseDate(CIMProperty&) const;
	virtual CIMDateTime getReleaseDate() const;
	virtual void setReleaseDate(CIMDateTime&);
	virtual Boolean getSystemBIOSMajorRelease(CIMProperty&) const;
	virtual Uint8 getSystemBIOSMajorRelease() const;
	virtual void setSystemBIOSMajorRelease(Uint8&);
	virtual Boolean getSystemBIOSMinorRelease(CIMProperty&) const;
	virtual Uint8 getSystemBIOSMinorRelease() const;
	virtual void setSystemBIOSMinorRelease(Uint8&);
	virtual Boolean getEmbeddedControllerFirmwareMajorRelease(CIMProperty&) const;
	virtual Uint8 getEmbeddedControllerFirmwareMajorRelease() const;
	virtual void setEmbeddedControllerFirmwareMajorRelease(Uint8&);
	virtual Boolean getEmbeddedControllerFirmwareMinorRelease(CIMProperty&) const;
	virtual Uint8 getEmbeddedControllerFirmwareMinorRelease() const;
	virtual void setEmbeddedControllerFirmwareMinorRelease(Uint8&);
	virtual Boolean getRegistryURIs(CIMProperty&) const;
	virtual Array<String> getRegistryURIs() const;
	virtual void setRegistryURIs(Array<String>&);


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
	Boolean _primaryBIOS;
	Array<String> _listOfLanguages;
	String _currentLanguage;
	Uint64 _loadedStartingAddress;
	Uint64 _loadedEndingAddress;
	String _loadUtilityInformation;
	CIMDateTime _releaseDate;
	Uint8 _systemBIOSMajorRelease;
	Uint8 _systemBIOSMinorRelease;
	Uint8 _embeddedControllerFirmwareMajorRelease;
	Uint8 _embeddedControllerFirmwareMinorRelease;
	Array<String> _registryURIs;

#	include "UNIX_BIOSElementPrivate.h"


};

#endif /* UNIX_BIOSELEMENT */
