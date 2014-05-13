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
CIM::Core::ProductFRU
*/


/* **** Description *** */
/*
The CIM_SupportAccess association defines how to obtain assistance for a Product.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			UNIX_SupportAccess:
				SupportAccessId String
				CommunicationInfo String
				CommunicationMode UInt16
				Locale String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			UNIX_SupportAccess:


*/

#ifndef __UNIX_SUPPORTACCESS_H
#define __UNIX_SUPPORTACCESS_H


#include "CIM_ManagedElement.h"

#include "UNIX_SupportAccessDeps.h"


#ifndef PROPERTY_SUPPORT_ACCESS_ID
#define PROPERTY_SUPPORT_ACCESS_ID \
					"SupportAccessId"
#endif

#ifndef PROPERTY_COMMUNICATION_INFO
#define PROPERTY_COMMUNICATION_INFO \
					"CommunicationInfo"
#endif

#ifndef PROPERTY_COMMUNICATION_MODE
#define PROPERTY_COMMUNICATION_MODE \
					"CommunicationMode"
#endif

#ifndef PROPERTY_LOCALE
#define PROPERTY_LOCALE \
					"Locale"
#endif



class UNIX_SupportAccess :
	public CIM_ManagedElement
{
public:

	UNIX_SupportAccess();
	~UNIX_SupportAccess();

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
	virtual Boolean getSupportAccessId(CIMProperty&) const;
	virtual String getSupportAccessId() const;
	virtual void setSupportAccessId(String&);
	virtual Boolean getCommunicationInfo(CIMProperty&) const;
	virtual String getCommunicationInfo() const;
	virtual void setCommunicationInfo(String&);
	virtual Boolean getCommunicationMode(CIMProperty&) const;
	virtual Uint16 getCommunicationMode() const;
	virtual void setCommunicationMode(Uint16&);
	virtual Boolean getLocale(CIMProperty&) const;
	virtual String getLocale() const;
	virtual void setLocale(String&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _supportAccessId;
	String _communicationInfo;
	Uint16 _communicationMode;
	String _locale;

#	include "UNIX_SupportAccessPrivate.h"


};

#endif /* UNIX_SUPPORTACCESS */
