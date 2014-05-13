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


UNIX_ProductSupport::UNIX_ProductSupport(void)
{
}

UNIX_ProductSupport::~UNIX_ProductSupport(void)
{
}

Boolean UNIX_ProductSupport::getProduct(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT, getProduct());
	return true;
}

CIMInstance UNIX_ProductSupport::getProduct() const
{
	return _product;
}

void UNIX_ProductSupport::setProduct(CIMInstance &value)
{
	_product = value;
}

Boolean UNIX_ProductSupport::getSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORT, getSupport());
	return true;
}

CIMInstance UNIX_ProductSupport::getSupport() const
{
	return _support;
}

void UNIX_ProductSupport::setSupport(CIMInstance &value)
{
	_support = value;
}


void UNIX_ProductSupport::clearInstance()
{

	_product = CIMInstance(CIMName("CIM_Product"));
	_support = CIMInstance(CIMName("CIM_SupportAccess"));

}

Boolean UNIX_ProductSupport::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Product"))
			{
				CIMInstance productValue;
				property.getValue().get(productValue);
				setProduct(productValue);
			}
			else if (String::equal(property.getName().getString(), "Support"))
			{
				CIMInstance supportValue;
				property.getValue().get(supportValue);
				setSupport(supportValue);
			}
	}
	return true;
}


Boolean UNIX_ProductSupport::initialize()
{
	return false;
}

Boolean UNIX_ProductSupport::load(int &pIndex)
{
	
	_product = CIMInstance(CIMName("CIM_Product"));
	_support = CIMInstance(CIMName("CIM_SupportAccess"));
	
	return false;
}

Boolean UNIX_ProductSupport::finalize()
{
	return false;
}


Boolean UNIX_ProductSupport::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String productKey;
	String supportKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_PRODUCT)) productKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SUPPORT)) supportKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getProduct().getPath().toString(), productKey)) && 
			(String::equalNoCase(getSupport().getPath().toString(), supportKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ProductSupport::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductSupport::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductSupport::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductSupport::validateInstance()
{
	return true;
}

