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


/* **** Indication *** */
/*
TRUE
*/


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.30.0
*/


/* **** Exception *** */
/*
TRUE
*/


/* **** UMLPackagePath *** */
/*
CIM::Interop
*/


/* **** Description *** */
/*
CIM_Message instances represent DMTF standard messages that contain identification of the message, dynamic message arguments and the expanded message text. They can be used for returning detailed information from methods.
*/


/* **** ModelCorrespondence *** */
/*
CIM_Error
*/


/*
			 *** Properties ***

			UNIX_Message:
				OwningEntity String
				MessageID String
				ContinuedInNextMessage Boolean
				Message String
				MessageArguments String


*/


/*
			 *** Methods ***

			UNIX_Message:


*/

#ifndef __UNIX_MESSAGE_H
#define __UNIX_MESSAGE_H


#include "CIM_ClassBase.h"

#include "UNIX_MessageDeps.h"


#ifndef PROPERTY_OWNING_ENTITY
#define PROPERTY_OWNING_ENTITY \
					"OwningEntity"
#endif

#ifndef PROPERTY_MESSAGE_ID
#define PROPERTY_MESSAGE_ID \
					"MessageID"
#endif

#ifndef PROPERTY_CONTINUED_IN_NEXT_MESSAGE
#define PROPERTY_CONTINUED_IN_NEXT_MESSAGE \
					"ContinuedInNextMessage"
#endif

#ifndef PROPERTY_MESSAGE
#define PROPERTY_MESSAGE \
					"Message"
#endif

#ifndef PROPERTY_MESSAGE_ARGUMENTS
#define PROPERTY_MESSAGE_ARGUMENTS \
					"MessageArguments"
#endif



class UNIX_Message :
	public CIM_ClassBase
{
public:

	UNIX_Message();
	~UNIX_Message();

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

	virtual Boolean getOwningEntity(CIMProperty&) const;
	virtual String getOwningEntity() const;
	virtual void setOwningEntity(String&);
	virtual Boolean getMessageID(CIMProperty&) const;
	virtual String getMessageID() const;
	virtual void setMessageID(String&);
	virtual Boolean getContinuedInNextMessage(CIMProperty&) const;
	virtual Boolean getContinuedInNextMessage() const;
	virtual void setContinuedInNextMessage(Boolean&);
	virtual Boolean getMessage(CIMProperty&) const;
	virtual String getMessage() const;
	virtual void setMessage(String&);
	virtual Boolean getMessageArguments(CIMProperty&) const;
	virtual Array<String> getMessageArguments() const;
	virtual void setMessageArguments(Array<String>&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _owningEntity;
	String _messageID;
	Boolean _continuedInNextMessage;
	String _message;
	Array<String> _messageArguments;

#	include "UNIX_MessagePrivate.h"


};

#endif /* UNIX_MESSAGE */
