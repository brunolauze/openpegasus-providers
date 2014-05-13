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
FileImportCapabilities specifies the capability of a FileImportService to support the specified methods.
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

			UNIX_FileImportCapabilities:
				FileSharingProtocol UInt16
				ProtocolVersions String
				SupportedSynchronousMethods UInt16
				SupportedAsynchronousMethods UInt16
				InitialEnabledState UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_FileImportCapabilities:


*/

#ifndef __UNIX_FILEIMPORTCAPABILITIES_H
#define __UNIX_FILEIMPORTCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_FileImportCapabilitiesDeps.h"


#ifndef PROPERTY_FILE_SHARING_PROTOCOL
#define PROPERTY_FILE_SHARING_PROTOCOL \
					"FileSharingProtocol"
#endif

#ifndef PROPERTY_PROTOCOL_VERSIONS
#define PROPERTY_PROTOCOL_VERSIONS \
					"ProtocolVersions"
#endif

#ifndef PROPERTY_SUPPORTED_SYNCHRONOUS_METHODS
#define PROPERTY_SUPPORTED_SYNCHRONOUS_METHODS \
					"SupportedSynchronousMethods"
#endif

#ifndef PROPERTY_SUPPORTED_ASYNCHRONOUS_METHODS
#define PROPERTY_SUPPORTED_ASYNCHRONOUS_METHODS \
					"SupportedAsynchronousMethods"
#endif

#ifndef PROPERTY_INITIAL_ENABLED_STATE
#define PROPERTY_INITIAL_ENABLED_STATE \
					"InitialEnabledState"
#endif



class UNIX_FileImportCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_FileImportCapabilities();
	~UNIX_FileImportCapabilities();

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
	virtual Array<Uint16> getFileSharingProtocol() const;
	virtual void setFileSharingProtocol(Array<Uint16>&);
	virtual Boolean getProtocolVersions(CIMProperty&) const;
	virtual Array<String> getProtocolVersions() const;
	virtual void setProtocolVersions(Array<String>&);
	virtual Boolean getSupportedSynchronousMethods(CIMProperty&) const;
	virtual Array<Uint16> getSupportedSynchronousMethods() const;
	virtual void setSupportedSynchronousMethods(Array<Uint16>&);
	virtual Boolean getSupportedAsynchronousMethods(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAsynchronousMethods() const;
	virtual void setSupportedAsynchronousMethods(Array<Uint16>&);
	virtual Boolean getInitialEnabledState(CIMProperty&) const;
	virtual Uint16 getInitialEnabledState() const;
	virtual void setInitialEnabledState(Uint16&);

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
	Array<Uint16> _fileSharingProtocol;
	Array<String> _protocolVersions;
	Array<Uint16> _supportedSynchronousMethods;
	Array<Uint16> _supportedAsynchronousMethods;
	Uint16 _initialEnabledState;

#	include "UNIX_FileImportCapabilitiesPrivate.h"


};

#endif /* UNIX_FILEIMPORTCAPABILITIES */
