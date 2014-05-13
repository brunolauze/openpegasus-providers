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


UNIX_DirectorySpecificationFile::UNIX_DirectorySpecificationFile(void)
{
}

UNIX_DirectorySpecificationFile::~UNIX_DirectorySpecificationFile(void)
{
}

Boolean UNIX_DirectorySpecificationFile::getDirectorySpecification(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECTORY_SPECIFICATION, getDirectorySpecification());
	return true;
}

CIMInstance UNIX_DirectorySpecificationFile::getDirectorySpecification() const
{
	return _directorySpecification;
}

void UNIX_DirectorySpecificationFile::setDirectorySpecification(CIMInstance &value)
{
	_directorySpecification = value;
}

Boolean UNIX_DirectorySpecificationFile::getFileSpecification(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SPECIFICATION, getFileSpecification());
	return true;
}

CIMInstance UNIX_DirectorySpecificationFile::getFileSpecification() const
{
	return _fileSpecification;
}

void UNIX_DirectorySpecificationFile::setFileSpecification(CIMInstance &value)
{
	_fileSpecification = value;
}


void UNIX_DirectorySpecificationFile::clearInstance()
{

	_directorySpecification = CIMInstance(CIMName("CIM_DirectorySpecification"));
	_fileSpecification = CIMInstance(CIMName("CIM_FileSpecification"));

}

Boolean UNIX_DirectorySpecificationFile::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "DirectorySpecification"))
			{
				CIMInstance directorySpecificationValue;
				property.getValue().get(directorySpecificationValue);
				setDirectorySpecification(directorySpecificationValue);
			}
			else if (String::equal(property.getName().getString(), "FileSpecification"))
			{
				CIMInstance fileSpecificationValue;
				property.getValue().get(fileSpecificationValue);
				setFileSpecification(fileSpecificationValue);
			}
	}
	return true;
}


Boolean UNIX_DirectorySpecificationFile::initialize()
{
	return false;
}

Boolean UNIX_DirectorySpecificationFile::load(int &pIndex)
{
	
	_directorySpecification = CIMInstance(CIMName("CIM_DirectorySpecification"));
	_fileSpecification = CIMInstance(CIMName("CIM_FileSpecification"));
	
	return false;
}

Boolean UNIX_DirectorySpecificationFile::finalize()
{
	return false;
}


Boolean UNIX_DirectorySpecificationFile::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String directorySpecificationKey;
	String fileSpecificationKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_DIRECTORY_SPECIFICATION)) directorySpecificationKey = kb.getValue();
		else if (keyName.equal(PROPERTY_FILE_SPECIFICATION)) fileSpecificationKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getDirectorySpecification().getPath().toString(), directorySpecificationKey)) && 
			(String::equalNoCase(getFileSpecification().getPath().toString(), fileSpecificationKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_DirectorySpecificationFile::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DirectorySpecificationFile::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DirectorySpecificationFile::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_DirectorySpecificationFile::validateInstance()
{
	return true;
}

