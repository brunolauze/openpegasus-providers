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


UNIX_ProductPhysicalElements::UNIX_ProductPhysicalElements(void)
{
}

UNIX_ProductPhysicalElements::~UNIX_ProductPhysicalElements(void)
{
}

Boolean UNIX_ProductPhysicalElements::getProduct(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT, getProduct());
	return true;
}

CIMInstance UNIX_ProductPhysicalElements::getProduct() const
{
	return _product;
}

void UNIX_ProductPhysicalElements::setProduct(CIMInstance &value)
{
	_product = value;
}

Boolean UNIX_ProductPhysicalElements::getComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT, getComponent());
	return true;
}

CIMInstance UNIX_ProductPhysicalElements::getComponent() const
{
	return _component;
}

void UNIX_ProductPhysicalElements::setComponent(CIMInstance &value)
{
	_component = value;
}


void UNIX_ProductPhysicalElements::clearInstance()
{

	_product = CIMInstance(CIMName("CIM_Product"));
	_component = CIMInstance(CIMName("CIM_PhysicalMedia"));

}

Boolean UNIX_ProductPhysicalElements::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Component"))
			{
				CIMInstance componentValue;
				property.getValue().get(componentValue);
				setComponent(componentValue);
			}
	}
	return true;
}


Boolean UNIX_ProductPhysicalElements::initialize()
{
	return false;
}

Boolean UNIX_ProductPhysicalElements::load(int &pIndex)
{
	
	_product = CIMInstance(CIMName("CIM_Product"));
	_component = CIMInstance(CIMName("CIM_PhysicalMedia"));
	
	return false;
}

Boolean UNIX_ProductPhysicalElements::finalize()
{
	return false;
}


Boolean UNIX_ProductPhysicalElements::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String productKey;
	String componentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_PRODUCT)) productKey = kb.getValue();
		else if (keyName.equal(PROPERTY_COMPONENT)) componentKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getProduct().getPath().toString(), productKey)) && 
			(String::equalNoCase(getComponent().getPath().toString(), componentKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ProductPhysicalElements::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductPhysicalElements::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductPhysicalElements::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductPhysicalElements::validateInstance()
{
	return true;
}

