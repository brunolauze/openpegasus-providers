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
2.31.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::Diagnostics
*/


/* **** Description *** */
/*
This class defines the permissible settings that can be used for EthenetNIC diagnostic tests.
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

			CIM_DiagnosticServiceCapabilities:
				SupportedServiceModes UInt16
				OtherSupportedServiceModesDescriptions String
				SupportedLoopControl UInt16
				OtherSupportedLoopControlDescriptions String
				SupportedLogOptions UInt16
				OtherSupportedLogOptionsDescriptions String
				SupportedLogStorage UInt16
				OtherSupportedLogStorageDescriptions String
				SupportedExecutionControls UInt16
				OtherSupportedExecutionControlsDescriptions String
				SupportedTestWarnings UInt16

			UNIX_EthernetNICDiagnosticServiceCapabilities:
				LinkSpeedsSupported UInt64
				LoopbackLayersSupported UInt16
				OtherLoopbackLayersSupported String
				PacketSizesSupported UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			CIM_DiagnosticServiceCapabilities:

			UNIX_EthernetNICDiagnosticServiceCapabilities:


*/

#ifndef __UNIX_ETHERNETNICDIAGNOSTICSERVICECAPABILITIES_H
#define __UNIX_ETHERNETNICDIAGNOSTICSERVICECAPABILITIES_H


#include "CIM_DiagnosticServiceCapabilities.h"

#include "UNIX_EthernetNICDiagnosticServiceCapabilitiesDeps.h"


#ifndef PROPERTY_LINK_SPEEDS_SUPPORTED
#define PROPERTY_LINK_SPEEDS_SUPPORTED \
					"LinkSpeedsSupported"
#endif

#ifndef PROPERTY_LOOPBACK_LAYERS_SUPPORTED
#define PROPERTY_LOOPBACK_LAYERS_SUPPORTED \
					"LoopbackLayersSupported"
#endif

#ifndef PROPERTY_OTHER_LOOPBACK_LAYERS_SUPPORTED
#define PROPERTY_OTHER_LOOPBACK_LAYERS_SUPPORTED \
					"OtherLoopbackLayersSupported"
#endif

#ifndef PROPERTY_PACKET_SIZES_SUPPORTED
#define PROPERTY_PACKET_SIZES_SUPPORTED \
					"PacketSizesSupported"
#endif



class UNIX_EthernetNICDiagnosticServiceCapabilities :
	public CIM_DiagnosticServiceCapabilities
{
public:

	UNIX_EthernetNICDiagnosticServiceCapabilities();
	~UNIX_EthernetNICDiagnosticServiceCapabilities();

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
	virtual Boolean getSupportedServiceModes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedServiceModes() const;
	virtual void setSupportedServiceModes(Array<Uint16>&);
	virtual Boolean getOtherSupportedServiceModesDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherSupportedServiceModesDescriptions() const;
	virtual void setOtherSupportedServiceModesDescriptions(Array<String>&);
	virtual Boolean getSupportedLoopControl(CIMProperty&) const;
	virtual Array<Uint16> getSupportedLoopControl() const;
	virtual void setSupportedLoopControl(Array<Uint16>&);
	virtual Boolean getOtherSupportedLoopControlDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherSupportedLoopControlDescriptions() const;
	virtual void setOtherSupportedLoopControlDescriptions(Array<String>&);
	virtual Boolean getSupportedLogOptions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedLogOptions() const;
	virtual void setSupportedLogOptions(Array<Uint16>&);
	virtual Boolean getOtherSupportedLogOptionsDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherSupportedLogOptionsDescriptions() const;
	virtual void setOtherSupportedLogOptionsDescriptions(Array<String>&);
	virtual Boolean getSupportedLogStorage(CIMProperty&) const;
	virtual Array<Uint16> getSupportedLogStorage() const;
	virtual void setSupportedLogStorage(Array<Uint16>&);
	virtual Boolean getOtherSupportedLogStorageDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherSupportedLogStorageDescriptions() const;
	virtual void setOtherSupportedLogStorageDescriptions(Array<String>&);
	virtual Boolean getSupportedExecutionControls(CIMProperty&) const;
	virtual Array<Uint16> getSupportedExecutionControls() const;
	virtual void setSupportedExecutionControls(Array<Uint16>&);
	virtual Boolean getOtherSupportedExecutionControlsDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherSupportedExecutionControlsDescriptions() const;
	virtual void setOtherSupportedExecutionControlsDescriptions(Array<String>&);
	virtual Boolean getSupportedTestWarnings(CIMProperty&) const;
	virtual Uint16 getSupportedTestWarnings() const;
	virtual void setSupportedTestWarnings(Uint16&);
	virtual Boolean getLinkSpeedsSupported(CIMProperty&) const;
	virtual Array<Uint64> getLinkSpeedsSupported() const;
	virtual void setLinkSpeedsSupported(Array<Uint64>&);
	virtual Boolean getLoopbackLayersSupported(CIMProperty&) const;
	virtual Array<Uint16> getLoopbackLayersSupported() const;
	virtual void setLoopbackLayersSupported(Array<Uint16>&);
	virtual Boolean getOtherLoopbackLayersSupported(CIMProperty&) const;
	virtual Array<String> getOtherLoopbackLayersSupported() const;
	virtual void setOtherLoopbackLayersSupported(Array<String>&);
	virtual Boolean getPacketSizesSupported(CIMProperty&) const;
	virtual Array<Uint16> getPacketSizesSupported() const;
	virtual void setPacketSizesSupported(Array<Uint16>&);

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
	Array<Uint16> _supportedServiceModes;
	Array<String> _otherSupportedServiceModesDescriptions;
	Array<Uint16> _supportedLoopControl;
	Array<String> _otherSupportedLoopControlDescriptions;
	Array<Uint16> _supportedLogOptions;
	Array<String> _otherSupportedLogOptionsDescriptions;
	Array<Uint16> _supportedLogStorage;
	Array<String> _otherSupportedLogStorageDescriptions;
	Array<Uint16> _supportedExecutionControls;
	Array<String> _otherSupportedExecutionControlsDescriptions;
	Uint16 _supportedTestWarnings;
	Array<Uint64> _linkSpeedsSupported;
	Array<Uint16> _loopbackLayersSupported;
	Array<String> _otherLoopbackLayersSupported;
	Array<Uint16> _packetSizesSupported;

#	include "UNIX_EthernetNICDiagnosticServiceCapabilitiesPrivate.h"


};

#endif /* UNIX_ETHERNETNICDIAGNOSTICSERVICECAPABILITIES */
