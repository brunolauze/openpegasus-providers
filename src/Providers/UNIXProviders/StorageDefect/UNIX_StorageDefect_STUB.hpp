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


UNIX_StorageDefect::UNIX_StorageDefect(void)
{
}

UNIX_StorageDefect::~UNIX_StorageDefect(void)
{
}

Boolean UNIX_StorageDefect::getExtent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT, getExtent());
	return true;
}

CIMInstance UNIX_StorageDefect::getExtent() const
{
	return _extent;
}

void UNIX_StorageDefect::setExtent(CIMInstance &value)
{
	_extent = value;
}

Boolean UNIX_StorageDefect::getError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR, getError());
	return true;
}

CIMInstance UNIX_StorageDefect::getError() const
{
	return _error;
}

void UNIX_StorageDefect::setError(CIMInstance &value)
{
	_error = value;
}


void UNIX_StorageDefect::clearInstance()
{

	_extent = CIMInstance(CIMName("CIM_LogicalDisk"));
	_error = CIMInstance(CIMName("CIM_StorageError"));

}

Boolean UNIX_StorageDefect::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Extent"))
			{
				CIMInstance extentValue;
				property.getValue().get(extentValue);
				setExtent(extentValue);
			}
			else if (String::equal(property.getName().getString(), "Error"))
			{
				CIMInstance errorValue;
				property.getValue().get(errorValue);
				setError(errorValue);
			}
	}
	return true;
}


Boolean UNIX_StorageDefect::initialize()
{
	return false;
}

Boolean UNIX_StorageDefect::load(int &pIndex)
{
	
	_extent = CIMInstance(CIMName("CIM_LogicalDisk"));
	_error = CIMInstance(CIMName("CIM_StorageError"));
	
	return false;
}

Boolean UNIX_StorageDefect::finalize()
{
	return false;
}


Boolean UNIX_StorageDefect::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String extentKey;
	String errorKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_EXTENT)) extentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_ERROR)) errorKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getExtent().getPath().toString(), extentKey)) && 
			(String::equalNoCase(getError().getPath().toString(), errorKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_StorageDefect::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageDefect::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageDefect::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageDefect::validateInstance()
{
	return true;
}

