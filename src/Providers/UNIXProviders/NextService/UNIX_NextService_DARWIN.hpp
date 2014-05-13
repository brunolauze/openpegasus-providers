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


UNIX_NextService::UNIX_NextService(void)
{
}

UNIX_NextService::~UNIX_NextService(void)
{
}

Boolean UNIX_NextService::getPrecedingService(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRECEDING_SERVICE, getPrecedingService());
	return true;
}

CIMInstance UNIX_NextService::getPrecedingService() const
{
	return _precedingService;
}

void UNIX_NextService::setPrecedingService(CIMInstance &value)
{
	_precedingService = value;
}

Boolean UNIX_NextService::getFollowingService(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FOLLOWING_SERVICE, getFollowingService());
	return true;
}

CIMInstance UNIX_NextService::getFollowingService() const
{
	return _followingService;
}

void UNIX_NextService::setFollowingService(CIMInstance &value)
{
	_followingService = value;
}


void UNIX_NextService::clearInstance()
{

	_precedingService = CIMInstance(CIMName("CIM_TokenBucketMeterService"));
	_followingService = CIMInstance(CIMName("CIM_TokenBucketMeterService"));

}

Boolean UNIX_NextService::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "PrecedingService"))
			{
				CIMInstance precedingServiceValue;
				property.getValue().get(precedingServiceValue);
				setPrecedingService(precedingServiceValue);
			}
			else if (String::equal(property.getName().getString(), "FollowingService"))
			{
				CIMInstance followingServiceValue;
				property.getValue().get(followingServiceValue);
				setFollowingService(followingServiceValue);
			}
	}
	return true;
}


Boolean UNIX_NextService::initialize()
{
	return false;
}

Boolean UNIX_NextService::load(int &pIndex)
{
	
	_precedingService = CIMInstance(CIMName("CIM_TokenBucketMeterService"));
	_followingService = CIMInstance(CIMName("CIM_TokenBucketMeterService"));
	
	return false;
}

Boolean UNIX_NextService::finalize()
{
	return false;
}


Boolean UNIX_NextService::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String precedingServiceKey;
	String followingServiceKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_PRECEDING_SERVICE)) precedingServiceKey = kb.getValue();
		else if (keyName.equal(PROPERTY_FOLLOWING_SERVICE)) followingServiceKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getPrecedingService().getPath().toString(), precedingServiceKey)) && 
			(String::equalNoCase(getFollowingService().getPath().toString(), followingServiceKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_NextService::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NextService::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NextService::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_NextService::validateInstance()
{
	return true;
}

