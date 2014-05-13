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


UNIX_ToDirectorySpecification::UNIX_ToDirectorySpecification(void)
{
}

UNIX_ToDirectorySpecification::~UNIX_ToDirectorySpecification(void)
{
}

Boolean UNIX_ToDirectorySpecification::getDestinationDirectory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_DIRECTORY, getDestinationDirectory());
	return true;
}

CIMInstance UNIX_ToDirectorySpecification::getDestinationDirectory() const
{
	return _destinationDirectory;
}

void UNIX_ToDirectorySpecification::setDestinationDirectory(CIMInstance &value)
{
	_destinationDirectory = value;
}

Boolean UNIX_ToDirectorySpecification::getFileName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_NAME, getFileName());
	return true;
}

CIMInstance UNIX_ToDirectorySpecification::getFileName() const
{
	return _fileName;
}

void UNIX_ToDirectorySpecification::setFileName(CIMInstance &value)
{
	_fileName = value;
}


void UNIX_ToDirectorySpecification::clearInstance()
{

	_destinationDirectory = CIMInstance(CIMName("CIM_DirectorySpecification"));
	_fileName = CIMInstance(CIMName("CIM_CopyFileAction"));

}

Boolean UNIX_ToDirectorySpecification::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "DestinationDirectory"))
			{
				CIMInstance destinationDirectoryValue;
				property.getValue().get(destinationDirectoryValue);
				setDestinationDirectory(destinationDirectoryValue);
			}
			else if (String::equal(property.getName().getString(), "FileName"))
			{
				CIMInstance fileNameValue;
				property.getValue().get(fileNameValue);
				setFileName(fileNameValue);
			}
	}
	return true;
}


Boolean UNIX_ToDirectorySpecification::initialize()
{
	return false;
}

Boolean UNIX_ToDirectorySpecification::load(int &pIndex)
{
	
	_destinationDirectory = CIMInstance(CIMName("CIM_DirectorySpecification"));
	_fileName = CIMInstance(CIMName("CIM_CopyFileAction"));
	
	return false;
}

Boolean UNIX_ToDirectorySpecification::finalize()
{
	return false;
}


Boolean UNIX_ToDirectorySpecification::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String destinationDirectoryKey;
	String fileNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_DESTINATION_DIRECTORY)) destinationDirectoryKey = kb.getValue();
		else if (keyName.equal(PROPERTY_FILE_NAME)) fileNameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getDestinationDirectory().getPath().toString(), destinationDirectoryKey)) && 
			(String::equalNoCase(getFileName().getPath().toString(), fileNameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_ToDirectorySpecification::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ToDirectorySpecification::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ToDirectorySpecification::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_ToDirectorySpecification::validateInstance()
{
	return true;
}

