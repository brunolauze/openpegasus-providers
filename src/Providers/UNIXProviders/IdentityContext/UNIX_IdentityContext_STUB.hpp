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


UNIX_IdentityContext::UNIX_IdentityContext(void)
{
}

UNIX_IdentityContext::~UNIX_IdentityContext(void)
{
}

Boolean UNIX_IdentityContext::getElementInContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_IN_CONTEXT, getElementInContext());
	return true;
}

CIMInstance UNIX_IdentityContext::getElementInContext() const
{
	return _elementInContext;
}

void UNIX_IdentityContext::setElementInContext(CIMInstance &value)
{
	_elementInContext = value;
}

Boolean UNIX_IdentityContext::getElementProvidingContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_PROVIDING_CONTEXT, getElementProvidingContext());
	return true;
}

CIMInstance UNIX_IdentityContext::getElementProvidingContext() const
{
	return _elementProvidingContext;
}

void UNIX_IdentityContext::setElementProvidingContext(CIMInstance &value)
{
	_elementProvidingContext = value;
}


void UNIX_IdentityContext::clearInstance()
{

	_elementInContext = CIMInstance(CIMName("CIM_IPNetworkIdentity"));
	// _elementProvidingContext = CIMInstance(CIMName("CIM_ManagedElement"));

}

Boolean UNIX_IdentityContext::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "ElementInContext"))
			{
				CIMInstance elementInContextValue;
				property.getValue().get(elementInContextValue);
				setElementInContext(elementInContextValue);
			}
			else if (String::equal(property.getName().getString(), "ElementProvidingContext"))
			{
				CIMInstance elementProvidingContextValue;
				property.getValue().get(elementProvidingContextValue);
				setElementProvidingContext(elementProvidingContextValue);
			}
	}
	return true;
}


Boolean UNIX_IdentityContext::initialize()
{
	return false;
}

Boolean UNIX_IdentityContext::load(int &pIndex)
{
	
	_elementInContext = CIMInstance(CIMName("CIM_IPNetworkIdentity"));
	// _elementProvidingContext = CIMInstance(CIMName("CIM_ManagedElement"));
	
	return false;
}

Boolean UNIX_IdentityContext::finalize()
{
	return false;
}


Boolean UNIX_IdentityContext::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String elementInContextKey;
	String elementProvidingContextKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ELEMENT_IN_CONTEXT)) elementInContextKey = kb.getValue();
		else if (keyName.equal(PROPERTY_ELEMENT_PROVIDING_CONTEXT)) elementProvidingContextKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getElementInContext().getPath().toString(), elementInContextKey)) && 
			(String::equalNoCase(getElementProvidingContext().getPath().toString(), elementProvidingContextKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_IdentityContext::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IdentityContext::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IdentityContext::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IdentityContext::validateInstance()
{
	return true;
}

