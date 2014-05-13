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
CIM::Network::NAT
*/


/* **** Description *** */
/*
TimeoutsForNATTranslation describes general setting and configuration data for the NAT translation service running on a system. The scoping system is described using the inherited ScopedSetting association.
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

			UNIX_TimeoutsForNATTranslation:
				TranslationTimeout DateTime
				UDPTimeout DateTime
				TCPTimeout DateTime


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			CIM_ScopedSettingData:

			UNIX_TimeoutsForNATTranslation:


*/

#ifndef __UNIX_TIMEOUTSFORNATTRANSLATION_H
#define __UNIX_TIMEOUTSFORNATTRANSLATION_H


#include "CIM_ScopedSettingData.h"

#include "UNIX_TimeoutsForNATTranslationDeps.h"


#ifndef PROPERTY_TRANSLATION_TIMEOUT
#define PROPERTY_TRANSLATION_TIMEOUT \
					"TranslationTimeout"
#endif

#ifndef PROPERTY_UDP_TIMEOUT
#define PROPERTY_UDP_TIMEOUT \
					"UDPTimeout"
#endif

#ifndef PROPERTY_TCP_TIMEOUT
#define PROPERTY_TCP_TIMEOUT \
					"TCPTimeout"
#endif



class UNIX_TimeoutsForNATTranslation :
	public CIM_ScopedSettingData
{
public:

	UNIX_TimeoutsForNATTranslation();
	~UNIX_TimeoutsForNATTranslation();

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
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual void setConfigurationName(String&);
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual void setChangeableType(Uint16&);
	virtual Boolean getComponentSetting(CIMProperty&) const;
	virtual Array<String> getComponentSetting() const;
	virtual void setComponentSetting(Array<String>&);
	virtual Boolean getSoID(CIMProperty&) const;
	virtual String getSoID() const;
	virtual void setSoID(String&);
	virtual Boolean getSoOrgID(CIMProperty&) const;
	virtual String getSoOrgID() const;
	virtual void setSoOrgID(String&);
	virtual Boolean getTranslationTimeout(CIMProperty&) const;
	virtual CIMDateTime getTranslationTimeout() const;
	virtual void setTranslationTimeout(CIMDateTime&);
	virtual Boolean getUDPTimeout(CIMProperty&) const;
	virtual CIMDateTime getUDPTimeout() const;
	virtual void setUDPTimeout(CIMDateTime&);
	virtual Boolean getTCPTimeout(CIMProperty&) const;
	virtual CIMDateTime getTCPTimeout() const;
	virtual void setTCPTimeout(CIMDateTime&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _configurationName;
	Uint16 _changeableType;
	Array<String> _componentSetting;
	String _soID;
	String _soOrgID;
	CIMDateTime _translationTimeout;
	CIMDateTime _uDPTimeout;
	CIMDateTime _tCPTimeout;

#	include "UNIX_TimeoutsForNATTranslationPrivate.h"


};

#endif /* UNIX_TIMEOUTSFORNATTRANSLATION */
