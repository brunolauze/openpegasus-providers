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


UNIX_ProductProductDependency::UNIX_ProductProductDependency(void)
{
}

UNIX_ProductProductDependency::~UNIX_ProductProductDependency(void)
{
}

Boolean UNIX_ProductProductDependency::getRequiredProduct(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUIRED_PRODUCT, getRequiredProduct());
	return true;
}

CIMInstance UNIX_ProductProductDependency::getRequiredProduct() const
{
	return _requiredProduct;
}

void UNIX_ProductProductDependency::setRequiredProduct(CIMInstance &value)
{
	_requiredProduct = value;
}

Boolean UNIX_ProductProductDependency::getDependentProduct(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT_PRODUCT, getDependentProduct());
	return true;
}

CIMInstance UNIX_ProductProductDependency::getDependentProduct() const
{
	return _dependentProduct;
}

void UNIX_ProductProductDependency::setDependentProduct(CIMInstance &value)
{
	_dependentProduct = value;
}

Boolean UNIX_ProductProductDependency::getTypeOfDependency(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_DEPENDENCY, getTypeOfDependency());
	return true;
}

Uint16 UNIX_ProductProductDependency::getTypeOfDependency() const
{
	return _typeOfDependency;
}

void UNIX_ProductProductDependency::setTypeOfDependency(Uint16 &value)
{
	_typeOfDependency = value;
}


void UNIX_ProductProductDependency::clearInstance()
{

	_requiredProduct = CIMInstance(CIMName("CIM_Product"));
	_dependentProduct = CIMInstance(CIMName("CIM_Product"));
	_typeOfDependency = Uint16(0);

}

Boolean UNIX_ProductProductDependency::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "RequiredProduct"))
			{
				CIMInstance requiredProductValue;
				property.getValue().get(requiredProductValue);
				setRequiredProduct(requiredProductValue);
			}
			else if (String::equal(property.getName().getString(), "DependentProduct"))
			{
				CIMInstance dependentProductValue;
				property.getValue().get(dependentProductValue);
				setDependentProduct(dependentProductValue);
			}
			else if (String::equal(property.getName().getString(), "TypeOfDependency"))
			{
				Uint16 typeOfDependencyValue;
				property.getValue().get(typeOfDependencyValue);
				setTypeOfDependency(typeOfDependencyValue);
			}
	}
	return true;
}


Boolean UNIX_ProductProductDependency::initialize()
{
	return false;
}

Boolean UNIX_ProductProductDependency::load(int &pIndex)
{
	
	_requiredProduct = CIMInstance(CIMName("CIM_Product"));
	_dependentProduct = CIMInstance(CIMName("CIM_Product"));
	_typeOfDependency = Uint16(0);
	
	return false;
}

Boolean UNIX_ProductProductDependency::finalize()
{
	return false;
}


Boolean UNIX_ProductProductDependency::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String requiredProductKey;
	String dependentProductKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_REQUIRED_PRODUCT)) requiredProductKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEPENDENT_PRODUCT)) dependentProductKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getRequiredProduct().getPath().toString(), requiredProductKey)) && 
			(String::equalNoCase(getDependentProduct().getPath().toString(), dependentProductKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ProductProductDependency::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductProductDependency::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductProductDependency::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ProductProductDependency::validateInstance()
{
	return true;
}

