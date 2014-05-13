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
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Application::DeploymentModel
*/


/* **** Description *** */
/*
The CIM_SoftwareFeature class defines a particular function or capability of a product or application system. This class captures a level of granularity describing a unit of installation, rather than the units that reflect how the product is built or packaged. The latter detail is captured using a CIM_SoftwareElement class. When a SoftwareFeature can exist on multiple platforms or operating systems (for example, a client component of a three tiered client/server application that runs on Solaris, Windows NT, and Windows 95), the Feature is a collection of all the SoftwareElements for these different platforms. In this case, the users of the model must be aware of this situation since typically they will be interested in a sub-collection of the SoftwareElements required for a particular platform. 
SoftwareFeatures are always defined in the context of a CIM_Product, using the CIM_ProductSoftwareFeature association. Features are delivered through Products. Optionally, SoftwareFeatures from one or more Products can be organized into ApplicationSystems using the CIM_ApplicationSystemSoftwareFeature association.
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

			UNIX_SoftwareFeature:
				IdentifyingNumber String
				ProductName String
				Vendor String
				Version String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_ManagedSystemElement:

			CIM_LogicalElement:

			UNIX_SoftwareFeature:


*/

#ifndef __UNIX_SOFTWAREFEATURE_H
#define __UNIX_SOFTWAREFEATURE_H


#include "CIM_LogicalElement.h"

#include "UNIX_SoftwareFeatureDeps.h"


#ifndef PROPERTY_IDENTIFYING_NUMBER
#define PROPERTY_IDENTIFYING_NUMBER \
					"IdentifyingNumber"
#endif

#ifndef PROPERTY_PRODUCT_NAME
#define PROPERTY_PRODUCT_NAME \
					"ProductName"
#endif

#ifndef PROPERTY_VENDOR
#define PROPERTY_VENDOR \
					"Vendor"
#endif

#ifndef PROPERTY_VERSION
#define PROPERTY_VERSION \
					"Version"
#endif



class UNIX_SoftwareFeature :
	public CIM_LogicalElement
{
public:

	UNIX_SoftwareFeature();
	~UNIX_SoftwareFeature();

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
	virtual Boolean getIdentifyingNumber(CIMProperty&) const;
	virtual String getIdentifyingNumber() const;
	virtual void setIdentifyingNumber(String&);
	virtual Boolean getProductName(CIMProperty&) const;
	virtual String getProductName() const;
	virtual void setProductName(String&);
	virtual Boolean getVendor(CIMProperty&) const;
	virtual String getVendor() const;
	virtual void setVendor(String&);
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual void setVersion(String&);


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
	String _identifyingNumber;
	String _productName;
	String _vendor;
	String _version;

#	include "UNIX_SoftwareFeaturePrivate.h"


};

#endif /* UNIX_SOFTWAREFEATURE */