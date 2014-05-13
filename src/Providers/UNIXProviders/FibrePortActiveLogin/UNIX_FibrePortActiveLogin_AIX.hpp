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


UNIX_FibrePortActiveLogin::UNIX_FibrePortActiveLogin(void)
{
}

UNIX_FibrePortActiveLogin::~UNIX_FibrePortActiveLogin(void)
{
}

Boolean UNIX_FibrePortActiveLogin::getLoginOriginator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGIN_ORIGINATOR, getLoginOriginator());
	return true;
}

CIMInstance UNIX_FibrePortActiveLogin::getLoginOriginator() const
{
	return _loginOriginator;
}

void UNIX_FibrePortActiveLogin::setLoginOriginator(CIMInstance &value)
{
	_loginOriginator = value;
}

Boolean UNIX_FibrePortActiveLogin::getLoginResponder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGIN_RESPONDER, getLoginResponder());
	return true;
}

CIMInstance UNIX_FibrePortActiveLogin::getLoginResponder() const
{
	return _loginResponder;
}

void UNIX_FibrePortActiveLogin::setLoginResponder(CIMInstance &value)
{
	_loginResponder = value;
}

Boolean UNIX_FibrePortActiveLogin::getNegotiatedCOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_C_OS, getNegotiatedCOS());
	return true;
}

Uint16 UNIX_FibrePortActiveLogin::getNegotiatedCOS() const
{
	return _negotiatedCOS;
}

void UNIX_FibrePortActiveLogin::setNegotiatedCOS(Uint16 &value)
{
	_negotiatedCOS = value;
}

Boolean UNIX_FibrePortActiveLogin::getNegotiatedFrameSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_FRAME_SIZE, getNegotiatedFrameSize());
	return true;
}

Uint64 UNIX_FibrePortActiveLogin::getNegotiatedFrameSize() const
{
	return _negotiatedFrameSize;
}

void UNIX_FibrePortActiveLogin::setNegotiatedFrameSize(Uint64 &value)
{
	_negotiatedFrameSize = value;
}

Boolean UNIX_FibrePortActiveLogin::getNegotiatedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_SPEED, getNegotiatedSpeed());
	return true;
}

Uint64 UNIX_FibrePortActiveLogin::getNegotiatedSpeed() const
{
	return _negotiatedSpeed;
}

void UNIX_FibrePortActiveLogin::setNegotiatedSpeed(Uint64 &value)
{
	_negotiatedSpeed = value;
}

Boolean UNIX_FibrePortActiveLogin::getACKModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_C_K_MODEL, getACKModel());
	return true;
}

Uint16 UNIX_FibrePortActiveLogin::getACKModel() const
{
	return _aCKModel;
}

void UNIX_FibrePortActiveLogin::setACKModel(Uint16 &value)
{
	_aCKModel = value;
}

Boolean UNIX_FibrePortActiveLogin::getBufferToBufferModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_TO_BUFFER_MODEL, getBufferToBufferModel());
	return true;
}

Uint16 UNIX_FibrePortActiveLogin::getBufferToBufferModel() const
{
	return _bufferToBufferModel;
}

void UNIX_FibrePortActiveLogin::setBufferToBufferModel(Uint16 &value)
{
	_bufferToBufferModel = value;
}

Boolean UNIX_FibrePortActiveLogin::getOriginatorBufferCredit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORIGINATOR_BUFFER_CREDIT, getOriginatorBufferCredit());
	return true;
}

Uint64 UNIX_FibrePortActiveLogin::getOriginatorBufferCredit() const
{
	return _originatorBufferCredit;
}

void UNIX_FibrePortActiveLogin::setOriginatorBufferCredit(Uint64 &value)
{
	_originatorBufferCredit = value;
}

Boolean UNIX_FibrePortActiveLogin::getResponderBufferCredit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESPONDER_BUFFER_CREDIT, getResponderBufferCredit());
	return true;
}

Uint64 UNIX_FibrePortActiveLogin::getResponderBufferCredit() const
{
	return _responderBufferCredit;
}

void UNIX_FibrePortActiveLogin::setResponderBufferCredit(Uint64 &value)
{
	_responderBufferCredit = value;
}

Boolean UNIX_FibrePortActiveLogin::getOriginatorEndCredit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORIGINATOR_END_CREDIT, getOriginatorEndCredit());
	return true;
}

Uint64 UNIX_FibrePortActiveLogin::getOriginatorEndCredit() const
{
	return _originatorEndCredit;
}

void UNIX_FibrePortActiveLogin::setOriginatorEndCredit(Uint64 &value)
{
	_originatorEndCredit = value;
}

Boolean UNIX_FibrePortActiveLogin::getResponderEndCredit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESPONDER_END_CREDIT, getResponderEndCredit());
	return true;
}

Uint64 UNIX_FibrePortActiveLogin::getResponderEndCredit() const
{
	return _responderEndCredit;
}

void UNIX_FibrePortActiveLogin::setResponderEndCredit(Uint64 &value)
{
	_responderEndCredit = value;
}


void UNIX_FibrePortActiveLogin::clearInstance()
{

	_loginOriginator = CIMInstance(CIMName("CIM_FibrePort"));
	_loginResponder = CIMInstance(CIMName("CIM_FibrePort"));
	_negotiatedCOS = Uint16(0);
	_negotiatedFrameSize = Uint64(0);
	_negotiatedSpeed = Uint64(0);
	_aCKModel = Uint16(0);
	_bufferToBufferModel = Uint16(0);
	_originatorBufferCredit = Uint64(0);
	_responderBufferCredit = Uint64(0);
	_originatorEndCredit = Uint64(0);
	_responderEndCredit = Uint64(0);

}

Boolean UNIX_FibrePortActiveLogin::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "LoginOriginator"))
			{
				CIMInstance loginOriginatorValue;
				property.getValue().get(loginOriginatorValue);
				setLoginOriginator(loginOriginatorValue);
			}
			else if (String::equal(property.getName().getString(), "LoginResponder"))
			{
				CIMInstance loginResponderValue;
				property.getValue().get(loginResponderValue);
				setLoginResponder(loginResponderValue);
			}
			else if (String::equal(property.getName().getString(), "NegotiatedCOS"))
			{
				Uint16 negotiatedCOSValue;
				property.getValue().get(negotiatedCOSValue);
				setNegotiatedCOS(negotiatedCOSValue);
			}
			else if (String::equal(property.getName().getString(), "NegotiatedFrameSize"))
			{
				Uint64 negotiatedFrameSizeValue;
				property.getValue().get(negotiatedFrameSizeValue);
				setNegotiatedFrameSize(negotiatedFrameSizeValue);
			}
			else if (String::equal(property.getName().getString(), "NegotiatedSpeed"))
			{
				Uint64 negotiatedSpeedValue;
				property.getValue().get(negotiatedSpeedValue);
				setNegotiatedSpeed(negotiatedSpeedValue);
			}
			else if (String::equal(property.getName().getString(), "ACKModel"))
			{
				Uint16 aCKModelValue;
				property.getValue().get(aCKModelValue);
				setACKModel(aCKModelValue);
			}
			else if (String::equal(property.getName().getString(), "BufferToBufferModel"))
			{
				Uint16 bufferToBufferModelValue;
				property.getValue().get(bufferToBufferModelValue);
				setBufferToBufferModel(bufferToBufferModelValue);
			}
			else if (String::equal(property.getName().getString(), "OriginatorBufferCredit"))
			{
				Uint64 originatorBufferCreditValue;
				property.getValue().get(originatorBufferCreditValue);
				setOriginatorBufferCredit(originatorBufferCreditValue);
			}
			else if (String::equal(property.getName().getString(), "ResponderBufferCredit"))
			{
				Uint64 responderBufferCreditValue;
				property.getValue().get(responderBufferCreditValue);
				setResponderBufferCredit(responderBufferCreditValue);
			}
			else if (String::equal(property.getName().getString(), "OriginatorEndCredit"))
			{
				Uint64 originatorEndCreditValue;
				property.getValue().get(originatorEndCreditValue);
				setOriginatorEndCredit(originatorEndCreditValue);
			}
			else if (String::equal(property.getName().getString(), "ResponderEndCredit"))
			{
				Uint64 responderEndCreditValue;
				property.getValue().get(responderEndCreditValue);
				setResponderEndCredit(responderEndCreditValue);
			}
	}
	return true;
}


Boolean UNIX_FibrePortActiveLogin::initialize()
{
	return false;
}

Boolean UNIX_FibrePortActiveLogin::load(int &pIndex)
{
	
	_loginOriginator = CIMInstance(CIMName("CIM_FibrePort"));
	_loginResponder = CIMInstance(CIMName("CIM_FibrePort"));
	_negotiatedCOS = Uint16(0);
	_negotiatedFrameSize = Uint64(0);
	_negotiatedSpeed = Uint64(0);
	_aCKModel = Uint16(0);
	_bufferToBufferModel = Uint16(0);
	_originatorBufferCredit = Uint64(0);
	_responderBufferCredit = Uint64(0);
	_originatorEndCredit = Uint64(0);
	_responderEndCredit = Uint64(0);
	
	return false;
}

Boolean UNIX_FibrePortActiveLogin::finalize()
{
	return false;
}


Boolean UNIX_FibrePortActiveLogin::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String loginOriginatorKey;
	String loginResponderKey;
	String negotiatedCOSKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_LOGIN_ORIGINATOR)) loginOriginatorKey = kb.getValue();
		else if (keyName.equal(PROPERTY_LOGIN_RESPONDER)) loginResponderKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NEGOTIATED_C_OS)) negotiatedCOSKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getLoginOriginator().getPath().toString(), loginOriginatorKey)) && 
			(String::equalNoCase(getLoginResponder().getPath().toString(), loginResponderKey)) && 
			(String::equalNoCase(String(std::to_string(getNegotiatedCOS()).c_str()), negotiatedCOSKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_FibrePortActiveLogin::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FibrePortActiveLogin::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FibrePortActiveLogin::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FibrePortActiveLogin::validateInstance()
{
	return true;
}

