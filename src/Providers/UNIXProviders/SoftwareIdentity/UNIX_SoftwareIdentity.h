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
2.28.0
*/


/* **** ClassConstraint *** */
/*
inv:self.IsLargeBuildNumber=true implies self.BuildNumber = null and self.LargeBuildNumber <> null
inv:self.IsLargeBuildNumber=false implies self.LargeBuildNumber=null
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Software
*/


/* **** Description *** */
/*
SoftwareIdentity provides descriptive information about a software component for asset tracking and/or installation dependency management. When the IsEntity property has the value TRUE, the instance of SoftwareIdentity represents an individually identifiable entity similar to Physical Element. SoftwareIdentity does NOT indicate whether the software is installed, executing, etc. This extra information may be provided through specialized associations to Software Identity. For instance, both InstalledSoftwareIdentity and ElementSoftwareIdentity may be used to indicate that the software identified by this class is installed. SoftwareIdentity is used when managing the software components of a ManagedElement that is the management focus. Since software may be acquired, SoftwareIdentity can be associated with a Product using the ProductSoftwareComponent relationship. The Application Model manages the deployment and installation of software via the classes, SoftwareFeatures and SoftwareElements. SoftwareFeature and SoftwareElement are used when the software component is the management focus. The deployment/installation concepts are related to the asset/identity one. In fact, a SoftwareIdentity may correspond to a Product, or to one or more SoftwareFeatures or SoftwareElements - depending on the granularity of these classes and the deployment model. The correspondence of Software Identity to Product, SoftwareFeature or SoftwareElement is indicated using the ConcreteIdentity association. Note that there may not be sufficient detail or instrumentation to instantiate ConcreteIdentity. And, if the association is instantiated, some duplication of information may result. For example, the Vendor described in the instances of Product and SoftwareIdentity MAY be the same. However, this is not necessarily true, and it is why vendor and similar information are duplicated in this class. 
Note that ConcreteIdentity can also be used to describe the relationship of the software to any LogicalFiles that result from installing it. As above, there may not be sufficient detail or instrumentation to instantiate this association.
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

			UNIX_SoftwareIdentity:
				MajorVersion UInt16
				MinorVersion UInt16
				RevisionNumber UInt16
				BuildNumber UInt16
				LargeBuildNumber UInt64
				IsLargeBuildNumber Boolean
				VersionString String
				TargetOperatingSystems String
				Manufacturer String
				Languages String
				Classifications UInt16
				ClassificationDescriptions String
				SerialNumber String
				TargetTypes String
				IdentityInfoValue String
				IdentityInfoType String
				ReleaseDate DateTime
				IsEntity Boolean
				ExtendedResourceType UInt16
				OtherExtendedResourceTypeDescription String
				MinExtendedResourceTypeMajorVersion UInt16
				MinExtendedResourceTypeMinorVersion UInt16
				MinExtendedResourceTypeRevisionNumber UInt16
				MinExtendedResourceTypeBuildNumber UInt16
				TargetOSTypes UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			UNIX_SoftwareIdentity:


*/

#ifndef __UNIX_SOFTWAREIDENTITY_H
#define __UNIX_SOFTWAREIDENTITY_H


#include "CIM_LogicalElement.h"

#include "UNIX_SoftwareIdentityDeps.h"


#ifndef PROPERTY_MAJOR_VERSION
#define PROPERTY_MAJOR_VERSION \
					"MajorVersion"
#endif

#ifndef PROPERTY_MINOR_VERSION
#define PROPERTY_MINOR_VERSION \
					"MinorVersion"
#endif

#ifndef PROPERTY_REVISION_NUMBER
#define PROPERTY_REVISION_NUMBER \
					"RevisionNumber"
#endif

#ifndef PROPERTY_BUILD_NUMBER
#define PROPERTY_BUILD_NUMBER \
					"BuildNumber"
#endif

#ifndef PROPERTY_LARGE_BUILD_NUMBER
#define PROPERTY_LARGE_BUILD_NUMBER \
					"LargeBuildNumber"
#endif

#ifndef PROPERTY_IS_LARGE_BUILD_NUMBER
#define PROPERTY_IS_LARGE_BUILD_NUMBER \
					"IsLargeBuildNumber"
#endif

#ifndef PROPERTY_VERSION_STRING
#define PROPERTY_VERSION_STRING \
					"VersionString"
#endif

#ifndef PROPERTY_TARGET_OPERATING_SYSTEMS
#define PROPERTY_TARGET_OPERATING_SYSTEMS \
					"TargetOperatingSystems"
#endif

#ifndef PROPERTY_MANUFACTURER
#define PROPERTY_MANUFACTURER \
					"Manufacturer"
#endif

#ifndef PROPERTY_LANGUAGES
#define PROPERTY_LANGUAGES \
					"Languages"
#endif

#ifndef PROPERTY_CLASSIFICATIONS
#define PROPERTY_CLASSIFICATIONS \
					"Classifications"
#endif

#ifndef PROPERTY_CLASSIFICATION_DESCRIPTIONS
#define PROPERTY_CLASSIFICATION_DESCRIPTIONS \
					"ClassificationDescriptions"
#endif

#ifndef PROPERTY_SERIAL_NUMBER
#define PROPERTY_SERIAL_NUMBER \
					"SerialNumber"
#endif

#ifndef PROPERTY_TARGET_TYPES
#define PROPERTY_TARGET_TYPES \
					"TargetTypes"
#endif

#ifndef PROPERTY_IDENTITY_INFO_VALUE
#define PROPERTY_IDENTITY_INFO_VALUE \
					"IdentityInfoValue"
#endif

#ifndef PROPERTY_IDENTITY_INFO_TYPE
#define PROPERTY_IDENTITY_INFO_TYPE \
					"IdentityInfoType"
#endif

#ifndef PROPERTY_RELEASE_DATE
#define PROPERTY_RELEASE_DATE \
					"ReleaseDate"
#endif

#ifndef PROPERTY_IS_ENTITY
#define PROPERTY_IS_ENTITY \
					"IsEntity"
#endif

#ifndef PROPERTY_EXTENDED_RESOURCE_TYPE
#define PROPERTY_EXTENDED_RESOURCE_TYPE \
					"ExtendedResourceType"
#endif

#ifndef PROPERTY_OTHER_EXTENDED_RESOURCE_TYPE_DESCRIPTION
#define PROPERTY_OTHER_EXTENDED_RESOURCE_TYPE_DESCRIPTION \
					"OtherExtendedResourceTypeDescription"
#endif

#ifndef PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_MAJOR_VERSION
#define PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_MAJOR_VERSION \
					"MinExtendedResourceTypeMajorVersion"
#endif

#ifndef PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_MINOR_VERSION
#define PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_MINOR_VERSION \
					"MinExtendedResourceTypeMinorVersion"
#endif

#ifndef PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_REVISION_NUMBER
#define PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_REVISION_NUMBER \
					"MinExtendedResourceTypeRevisionNumber"
#endif

#ifndef PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_BUILD_NUMBER
#define PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_BUILD_NUMBER \
					"MinExtendedResourceTypeBuildNumber"
#endif

#ifndef PROPERTY_TARGET_OS_TYPES
#define PROPERTY_TARGET_OS_TYPES \
					"TargetOSTypes"
#endif



class UNIX_SoftwareIdentity :
	public CIM_LogicalElement
{
public:

	UNIX_SoftwareIdentity();
	~UNIX_SoftwareIdentity();

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
	virtual Boolean getMajorVersion(CIMProperty&) const;
	virtual Uint16 getMajorVersion() const;
	virtual void setMajorVersion(Uint16&);
	virtual Boolean getMinorVersion(CIMProperty&) const;
	virtual Uint16 getMinorVersion() const;
	virtual void setMinorVersion(Uint16&);
	virtual Boolean getRevisionNumber(CIMProperty&) const;
	virtual Uint16 getRevisionNumber() const;
	virtual void setRevisionNumber(Uint16&);
	virtual Boolean getBuildNumber(CIMProperty&) const;
	virtual Uint16 getBuildNumber() const;
	virtual void setBuildNumber(Uint16&);
	virtual Boolean getLargeBuildNumber(CIMProperty&) const;
	virtual Uint64 getLargeBuildNumber() const;
	virtual void setLargeBuildNumber(Uint64&);
	virtual Boolean getIsLargeBuildNumber(CIMProperty&) const;
	virtual Boolean getIsLargeBuildNumber() const;
	virtual void setIsLargeBuildNumber(Boolean&);
	virtual Boolean getVersionString(CIMProperty&) const;
	virtual String getVersionString() const;
	virtual void setVersionString(String&);
	virtual Boolean getTargetOperatingSystems(CIMProperty&) const;
	virtual Array<String> getTargetOperatingSystems() const;
	virtual void setTargetOperatingSystems(Array<String>&);
	virtual Boolean getManufacturer(CIMProperty&) const;
	virtual String getManufacturer() const;
	virtual void setManufacturer(String&);
	virtual Boolean getLanguages(CIMProperty&) const;
	virtual Array<String> getLanguages() const;
	virtual void setLanguages(Array<String>&);
	virtual Boolean getClassifications(CIMProperty&) const;
	virtual Array<Uint16> getClassifications() const;
	virtual void setClassifications(Array<Uint16>&);
	virtual Boolean getClassificationDescriptions(CIMProperty&) const;
	virtual Array<String> getClassificationDescriptions() const;
	virtual void setClassificationDescriptions(Array<String>&);
	virtual Boolean getSerialNumber(CIMProperty&) const;
	virtual String getSerialNumber() const;
	virtual void setSerialNumber(String&);
	virtual Boolean getTargetTypes(CIMProperty&) const;
	virtual Array<String> getTargetTypes() const;
	virtual void setTargetTypes(Array<String>&);
	virtual Boolean getIdentityInfoValue(CIMProperty&) const;
	virtual Array<String> getIdentityInfoValue() const;
	virtual void setIdentityInfoValue(Array<String>&);
	virtual Boolean getIdentityInfoType(CIMProperty&) const;
	virtual Array<String> getIdentityInfoType() const;
	virtual void setIdentityInfoType(Array<String>&);
	virtual Boolean getReleaseDate(CIMProperty&) const;
	virtual CIMDateTime getReleaseDate() const;
	virtual void setReleaseDate(CIMDateTime&);
	virtual Boolean getIsEntity(CIMProperty&) const;
	virtual Boolean getIsEntity() const;
	virtual void setIsEntity(Boolean&);
	virtual Boolean getExtendedResourceType(CIMProperty&) const;
	virtual Uint16 getExtendedResourceType() const;
	virtual void setExtendedResourceType(Uint16&);
	virtual Boolean getOtherExtendedResourceTypeDescription(CIMProperty&) const;
	virtual String getOtherExtendedResourceTypeDescription() const;
	virtual void setOtherExtendedResourceTypeDescription(String&);
	virtual Boolean getMinExtendedResourceTypeMajorVersion(CIMProperty&) const;
	virtual Uint16 getMinExtendedResourceTypeMajorVersion() const;
	virtual void setMinExtendedResourceTypeMajorVersion(Uint16&);
	virtual Boolean getMinExtendedResourceTypeMinorVersion(CIMProperty&) const;
	virtual Uint16 getMinExtendedResourceTypeMinorVersion() const;
	virtual void setMinExtendedResourceTypeMinorVersion(Uint16&);
	virtual Boolean getMinExtendedResourceTypeRevisionNumber(CIMProperty&) const;
	virtual Uint16 getMinExtendedResourceTypeRevisionNumber() const;
	virtual void setMinExtendedResourceTypeRevisionNumber(Uint16&);
	virtual Boolean getMinExtendedResourceTypeBuildNumber(CIMProperty&) const;
	virtual Uint16 getMinExtendedResourceTypeBuildNumber() const;
	virtual void setMinExtendedResourceTypeBuildNumber(Uint16&);
	virtual Boolean getTargetOSTypes(CIMProperty&) const;
	virtual Array<Uint16> getTargetOSTypes() const;
	virtual void setTargetOSTypes(Array<Uint16>&);


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
	Uint16 _majorVersion;
	Uint16 _minorVersion;
	Uint16 _revisionNumber;
	Uint16 _buildNumber;
	Uint64 _largeBuildNumber;
	Boolean _isLargeBuildNumber;
	String _versionString;
	Array<String> _targetOperatingSystems;
	String _manufacturer;
	Array<String> _languages;
	Array<Uint16> _classifications;
	Array<String> _classificationDescriptions;
	String _serialNumber;
	Array<String> _targetTypes;
	Array<String> _identityInfoValue;
	Array<String> _identityInfoType;
	CIMDateTime _releaseDate;
	Boolean _isEntity;
	Uint16 _extendedResourceType;
	String _otherExtendedResourceTypeDescription;
	Uint16 _minExtendedResourceTypeMajorVersion;
	Uint16 _minExtendedResourceTypeMinorVersion;
	Uint16 _minExtendedResourceTypeRevisionNumber;
	Uint16 _minExtendedResourceTypeBuildNumber;
	Array<Uint16> _targetOSTypes;

#	include "UNIX_SoftwareIdentityPrivate.h"


};

#endif /* UNIX_SOFTWAREIDENTITY */
