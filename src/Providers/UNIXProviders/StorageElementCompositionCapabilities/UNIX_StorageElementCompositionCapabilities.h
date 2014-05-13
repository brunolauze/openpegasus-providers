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
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::StorageServices
*/


/* **** Description *** */
/*
Configuration settings for Storage Element Composition service.
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

			UNIX_StorageElementCompositionCapabilities:
				SupportsComposites Boolean
				MaxCompositeSize UInt64
				MaxCompositeElements UInt64
				CompositionCharacteristics UInt16
				SupportedAsynchronousActions UInt16
				SupportedSynchronousActions UInt16
				SupportedStorageElements UInt16
				CompositionMethodsSupported UInt16
				CompositeSourcesSupported UInt16
				SupportsCompositeNaming Boolean
				SupportsRepresentativeElement Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_StorageElementCompositionCapabilities:


*/

#ifndef __UNIX_STORAGEELEMENTCOMPOSITIONCAPABILITIES_H
#define __UNIX_STORAGEELEMENTCOMPOSITIONCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_StorageElementCompositionCapabilitiesDeps.h"


#ifndef PROPERTY_SUPPORTS_COMPOSITES
#define PROPERTY_SUPPORTS_COMPOSITES \
					"SupportsComposites"
#endif

#ifndef PROPERTY_MAX_COMPOSITE_SIZE
#define PROPERTY_MAX_COMPOSITE_SIZE \
					"MaxCompositeSize"
#endif

#ifndef PROPERTY_MAX_COMPOSITE_ELEMENTS
#define PROPERTY_MAX_COMPOSITE_ELEMENTS \
					"MaxCompositeElements"
#endif

#ifndef PROPERTY_COMPOSITION_CHARACTERISTICS
#define PROPERTY_COMPOSITION_CHARACTERISTICS \
					"CompositionCharacteristics"
#endif

#ifndef PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS \
					"SupportedAsynchronousActions"
#endif

#ifndef PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS
#define PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS \
					"SupportedSynchronousActions"
#endif

#ifndef PROPERTY_SUPPORTED_STORAGE_ELEMENTS
#define PROPERTY_SUPPORTED_STORAGE_ELEMENTS \
					"SupportedStorageElements"
#endif

#ifndef PROPERTY_COMPOSITION_METHODS_SUPPORTED
#define PROPERTY_COMPOSITION_METHODS_SUPPORTED \
					"CompositionMethodsSupported"
#endif

#ifndef PROPERTY_COMPOSITE_SOURCES_SUPPORTED
#define PROPERTY_COMPOSITE_SOURCES_SUPPORTED \
					"CompositeSourcesSupported"
#endif

#ifndef PROPERTY_SUPPORTS_COMPOSITE_NAMING
#define PROPERTY_SUPPORTS_COMPOSITE_NAMING \
					"SupportsCompositeNaming"
#endif

#ifndef PROPERTY_SUPPORTS_REPRESENTATIVE_ELEMENT
#define PROPERTY_SUPPORTS_REPRESENTATIVE_ELEMENT \
					"SupportsRepresentativeElement"
#endif



class UNIX_StorageElementCompositionCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_StorageElementCompositionCapabilities();
	~UNIX_StorageElementCompositionCapabilities();

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
	virtual Boolean getSupportsComposites(CIMProperty&) const;
	virtual Boolean getSupportsComposites() const;
	virtual void setSupportsComposites(Boolean&);
	virtual Boolean getMaxCompositeSize(CIMProperty&) const;
	virtual Uint64 getMaxCompositeSize() const;
	virtual void setMaxCompositeSize(Uint64&);
	virtual Boolean getMaxCompositeElements(CIMProperty&) const;
	virtual Uint64 getMaxCompositeElements() const;
	virtual void setMaxCompositeElements(Uint64&);
	virtual Boolean getCompositionCharacteristics(CIMProperty&) const;
	virtual Array<Uint16> getCompositionCharacteristics() const;
	virtual void setCompositionCharacteristics(Array<Uint16>&);
	virtual Boolean getSupportedAsynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAsynchronousActions() const;
	virtual void setSupportedAsynchronousActions(Array<Uint16>&);
	virtual Boolean getSupportedSynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedSynchronousActions() const;
	virtual void setSupportedSynchronousActions(Array<Uint16>&);
	virtual Boolean getSupportedStorageElements(CIMProperty&) const;
	virtual Array<Uint16> getSupportedStorageElements() const;
	virtual void setSupportedStorageElements(Array<Uint16>&);
	virtual Boolean getCompositionMethodsSupported(CIMProperty&) const;
	virtual Array<Uint16> getCompositionMethodsSupported() const;
	virtual void setCompositionMethodsSupported(Array<Uint16>&);
	virtual Boolean getCompositeSourcesSupported(CIMProperty&) const;
	virtual Array<Uint16> getCompositeSourcesSupported() const;
	virtual void setCompositeSourcesSupported(Array<Uint16>&);
	virtual Boolean getSupportsCompositeNaming(CIMProperty&) const;
	virtual Boolean getSupportsCompositeNaming() const;
	virtual void setSupportsCompositeNaming(Boolean&);
	virtual Boolean getSupportsRepresentativeElement(CIMProperty&) const;
	virtual Boolean getSupportsRepresentativeElement() const;
	virtual void setSupportsRepresentativeElement(Boolean&);

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
	Boolean _supportsComposites;
	Uint64 _maxCompositeSize;
	Uint64 _maxCompositeElements;
	Array<Uint16> _compositionCharacteristics;
	Array<Uint16> _supportedAsynchronousActions;
	Array<Uint16> _supportedSynchronousActions;
	Array<Uint16> _supportedStorageElements;
	Array<Uint16> _compositionMethodsSupported;
	Array<Uint16> _compositeSourcesSupported;
	Boolean _supportsCompositeNaming;
	Boolean _supportsRepresentativeElement;

#	include "UNIX_StorageElementCompositionCapabilitiesPrivate.h"


};

#endif /* UNIX_STORAGEELEMENTCOMPOSITIONCAPABILITIES */
