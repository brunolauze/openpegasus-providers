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
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::System::FileServices
*/


/* **** Description *** */
/*
ImportedFileShareCapabilities specifies the combination of properties that a FileImportService can support when creating or maintaining FileShares. Each supported combination of properties is specified by an ImportedFileShareSetting that is associated with the ImportedFileShareCapabilities element via SettingAssociatedToCapabilities. 
A ImportedFileShareCapabilities element specifies the properties supported when using it. 
This class also provides a CreateGoal method that can be used to create a ImportedFileShareSetting element that can be used as a goal for creating or modifying a file share.
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

			UNIX_ImportedFileShareCapabilities:
				FileSharingProtocol UInt16
				ProtocolVersions String
				SupportedProperties UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_ImportedFileShareCapabilities:
				CreateGoal UInt16


*/

#ifndef __UNIX_IMPORTEDFILESHARECAPABILITIES_H
#define __UNIX_IMPORTEDFILESHARECAPABILITIES_H


#include "CIM_Capabilities.h"
#include <ConcreteJob/UNIX_ConcreteJob.h>

#include "UNIX_ImportedFileShareCapabilitiesDeps.h"


#ifndef PROPERTY_FILE_SHARING_PROTOCOL
#define PROPERTY_FILE_SHARING_PROTOCOL \
					"FileSharingProtocol"
#endif

#ifndef PROPERTY_PROTOCOL_VERSIONS
#define PROPERTY_PROTOCOL_VERSIONS \
					"ProtocolVersions"
#endif

#ifndef PROPERTY_SUPPORTED_PROPERTIES
#define PROPERTY_SUPPORTED_PROPERTIES \
					"SupportedProperties"
#endif



class UNIX_ImportedFileShareCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_ImportedFileShareCapabilities();
	~UNIX_ImportedFileShareCapabilities();

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
	virtual Boolean getFileSharingProtocol(CIMProperty&) const;
	virtual Uint16 getFileSharingProtocol() const;
	virtual void setFileSharingProtocol(Uint16&);
	virtual Boolean getProtocolVersions(CIMProperty&) const;
	virtual Array<String> getProtocolVersions() const;
	virtual void setProtocolVersions(Array<String>&);
	virtual Boolean getSupportedProperties(CIMProperty&) const;
	virtual Array<Uint16> getSupportedProperties() const;
	virtual void setSupportedProperties(Array<Uint16>&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);

	virtual Uint16 invokeCreateGoal(
		CIMInstance &inJob,
		String &inTemplateGoal,
		String &inSupportedGoal
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint16 _fileSharingProtocol;
	Array<String> _protocolVersions;
	Array<Uint16> _supportedProperties;

#	include "UNIX_ImportedFileShareCapabilitiesPrivate.h"


};

#endif /* UNIX_IMPORTEDFILESHARECAPABILITIES */
