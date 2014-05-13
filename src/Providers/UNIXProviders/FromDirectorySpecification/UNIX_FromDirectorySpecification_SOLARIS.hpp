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


UNIX_FromDirectorySpecification::UNIX_FromDirectorySpecification(void)
{
}

UNIX_FromDirectorySpecification::~UNIX_FromDirectorySpecification(void)
{
}

Boolean UNIX_FromDirectorySpecification::getSourceDirectory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOURCE_DIRECTORY, getSourceDirectory());
	return true;
}

CIMInstance UNIX_FromDirectorySpecification::getSourceDirectory() const
{
	return _sourceDirectory;
}

void UNIX_FromDirectorySpecification::setSourceDirectory(CIMInstance &value)
{
	_sourceDirectory = value;
}

Boolean UNIX_FromDirectorySpecification::getFileName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_NAME, getFileName());
	return true;
}

CIMInstance UNIX_FromDirectorySpecification::getFileName() const
{
	return _fileName;
}

void UNIX_FromDirectorySpecification::setFileName(CIMInstance &value)
{
	_fileName = value;
}


void UNIX_FromDirectorySpecification::clearInstance()
{

	_sourceDirectory = CIMInstance(CIMName("CIM_DirectorySpecification"));
	_fileName = CIMInstance(CIMName("CIM_CopyFileAction"));

}

Boolean UNIX_FromDirectorySpecification::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "SourceDirectory"))
			{
				CIMInstance sourceDirectoryValue;
				property.getValue().get(sourceDirectoryValue);
				setSourceDirectory(sourceDirectoryValue);
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


Boolean UNIX_FromDirectorySpecification::initialize()
{
	return false;
}

Boolean UNIX_FromDirectorySpecification::load(int &pIndex)
{
	
	_sourceDirectory = CIMInstance(CIMName("CIM_DirectorySpecification"));
	_fileName = CIMInstance(CIMName("CIM_CopyFileAction"));
	
	return false;
}

Boolean UNIX_FromDirectorySpecification::finalize()
{
	return false;
}


Boolean UNIX_FromDirectorySpecification::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String sourceDirectoryKey;
	String fileNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SOURCE_DIRECTORY)) sourceDirectoryKey = kb.getValue();
		else if (keyName.equal(PROPERTY_FILE_NAME)) fileNameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSourceDirectory().getPath().toString(), sourceDirectoryKey)) && 
			(String::equalNoCase(getFileName().getPath().toString(), fileNameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_FromDirectorySpecification::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FromDirectorySpecification::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FromDirectorySpecification::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FromDirectorySpecification::validateInstance()
{
	return true;
}

