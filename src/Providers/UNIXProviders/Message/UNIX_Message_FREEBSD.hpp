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


using PROVIDER_LIB_NS::CIMHelper;


UNIX_Message::UNIX_Message(void)
{
}

UNIX_Message::~UNIX_Message(void)
{
}

Boolean UNIX_Message::getOwningEntity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNING_ENTITY, getOwningEntity());
	return true;
}

String UNIX_Message::getOwningEntity() const
{
	return _owningEntity;
}

void UNIX_Message::setOwningEntity(String &value)
{
	_owningEntity = value;
}

Boolean UNIX_Message::getMessageID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_ID, getMessageID());
	return true;
}

String UNIX_Message::getMessageID() const
{
	return _messageID;
}

void UNIX_Message::setMessageID(String &value)
{
	_messageID = value;
}

Boolean UNIX_Message::getContinuedInNextMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTINUED_IN_NEXT_MESSAGE, getContinuedInNextMessage());
	return true;
}

Boolean UNIX_Message::getContinuedInNextMessage() const
{
	return _continuedInNextMessage;
}

void UNIX_Message::setContinuedInNextMessage(Boolean &value)
{
	_continuedInNextMessage = value;
}

Boolean UNIX_Message::getMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE, getMessage());
	return true;
}

String UNIX_Message::getMessage() const
{
	return _message;
}

void UNIX_Message::setMessage(String &value)
{
	_message = value;
}

Boolean UNIX_Message::getMessageArguments(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_ARGUMENTS, getMessageArguments());
	return true;
}

Array<String> UNIX_Message::getMessageArguments() const
{
	return _messageArguments;
}

void UNIX_Message::setMessageArguments(Array<String> &value)
{
	_messageArguments = value;
}


void UNIX_Message::clearInstance()
{

	_owningEntity = String ("");
	_messageID = String ("");
	_continuedInNextMessage = Boolean(false);
	_message = String ("");
	_messageArguments.clear();

}

Boolean UNIX_Message::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "OwningEntity"))
			{
				String owningEntityValue;
				property.getValue().get(owningEntityValue);
				setOwningEntity(owningEntityValue);
			}
			else if (String::equal(property.getName().getString(), "MessageID"))
			{
				String messageIDValue;
				property.getValue().get(messageIDValue);
				setMessageID(messageIDValue);
			}
			else if (String::equal(property.getName().getString(), "ContinuedInNextMessage"))
			{
				Boolean continuedInNextMessageValue;
				property.getValue().get(continuedInNextMessageValue);
				setContinuedInNextMessage(continuedInNextMessageValue);
			}
			else if (String::equal(property.getName().getString(), "Message"))
			{
				String messageValue;
				property.getValue().get(messageValue);
				setMessage(messageValue);
			}
			else if (String::equal(property.getName().getString(), "MessageArguments"))
			{
				Array<String> messageArgumentsValue;
				property.getValue().get(messageArgumentsValue);
				setMessageArguments(messageArgumentsValue);
			}
	}
	return true;
}


Boolean UNIX_Message::initialize()
{
	return false;
}

Boolean UNIX_Message::load(int &pIndex)
{
	
	_owningEntity = String ("");
	_messageID = String ("");
	_continuedInNextMessage = Boolean(false);
	_message = String ("");
	_messageArguments.clear();
	
	return false;
}

Boolean UNIX_Message::finalize()
{
	return false;
}


Boolean UNIX_Message::find(const Array<CIMKeyBinding> &kbArray)
{
	return true;
}

Boolean UNIX_Message::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Message::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Message::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Message::validateInstance()
{
	return true;
}

