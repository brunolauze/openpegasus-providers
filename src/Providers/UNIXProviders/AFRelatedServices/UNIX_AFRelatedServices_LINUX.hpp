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


UNIX_AFRelatedServices::UNIX_AFRelatedServices(void)
{
}

UNIX_AFRelatedServices::~UNIX_AFRelatedServices(void)
{
}

Boolean UNIX_AFRelatedServices::getAFLowerDropPrecedence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AF_LOWER_DROP_PRECEDENCE, getAFLowerDropPrecedence());
	return true;
}

CIMInstance UNIX_AFRelatedServices::getAFLowerDropPrecedence() const
{
	return _aFLowerDropPrecedence;
}

void UNIX_AFRelatedServices::setAFLowerDropPrecedence(CIMInstance &value)
{
	_aFLowerDropPrecedence = value;
}

Boolean UNIX_AFRelatedServices::getAFHigherDropPrecedence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AF_HIGHER_DROP_PRECEDENCE, getAFHigherDropPrecedence());
	return true;
}

CIMInstance UNIX_AFRelatedServices::getAFHigherDropPrecedence() const
{
	return _aFHigherDropPrecedence;
}

void UNIX_AFRelatedServices::setAFHigherDropPrecedence(CIMInstance &value)
{
	_aFHigherDropPrecedence = value;
}


void UNIX_AFRelatedServices::clearInstance()
{

	_aFLowerDropPrecedence = CIMInstance(CIMName("CIM_AFService"));
	_aFHigherDropPrecedence = CIMInstance(CIMName("CIM_AFService"));

}

Boolean UNIX_AFRelatedServices::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "AFLowerDropPrecedence"))
			{
				CIMInstance aFLowerDropPrecedenceValue;
				property.getValue().get(aFLowerDropPrecedenceValue);
				setAFLowerDropPrecedence(aFLowerDropPrecedenceValue);
			}
			else if (String::equal(property.getName().getString(), "AFHigherDropPrecedence"))
			{
				CIMInstance aFHigherDropPrecedenceValue;
				property.getValue().get(aFHigherDropPrecedenceValue);
				setAFHigherDropPrecedence(aFHigherDropPrecedenceValue);
			}
	}
	return true;
}


Boolean UNIX_AFRelatedServices::initialize()
{
	return false;
}

Boolean UNIX_AFRelatedServices::load(int &pIndex)
{
	
	_aFLowerDropPrecedence = CIMInstance(CIMName("CIM_AFService"));
	_aFHigherDropPrecedence = CIMInstance(CIMName("CIM_AFService"));
	
	return false;
}

Boolean UNIX_AFRelatedServices::finalize()
{
	return false;
}


Boolean UNIX_AFRelatedServices::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String aFLowerDropPrecedenceKey;
	String aFHigherDropPrecedenceKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_AF_LOWER_DROP_PRECEDENCE)) aFLowerDropPrecedenceKey = kb.getValue();
		else if (keyName.equal(PROPERTY_AF_HIGHER_DROP_PRECEDENCE)) aFHigherDropPrecedenceKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getAFLowerDropPrecedence().getPath().toString(), aFLowerDropPrecedenceKey)) && 
			(String::equalNoCase(getAFHigherDropPrecedence().getPath().toString(), aFHigherDropPrecedenceKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_AFRelatedServices::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AFRelatedServices::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AFRelatedServices::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AFRelatedServices::validateInstance()
{
	return true;
}

