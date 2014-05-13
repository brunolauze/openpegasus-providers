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


UNIX_Export::UNIX_Export(void)
{
}

UNIX_Export::~UNIX_Export(void)
{
}

Boolean UNIX_Export::getLocalFS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_FS, getLocalFS());
	return true;
}

CIMInstance UNIX_Export::getLocalFS() const
{
	return _localFS;
}

void UNIX_Export::setLocalFS(CIMInstance &value)
{
	_localFS = value;
}

Boolean UNIX_Export::getDirectory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECTORY, getDirectory());
	return true;
}

CIMInstance UNIX_Export::getDirectory() const
{
	return _directory;
}

void UNIX_Export::setDirectory(CIMInstance &value)
{
	_directory = value;
}

Boolean UNIX_Export::getExportedDirectoryName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPORTED_DIRECTORY_NAME, getExportedDirectoryName());
	return true;
}

String UNIX_Export::getExportedDirectoryName() const
{
	return _exportedDirectoryName;
}

void UNIX_Export::setExportedDirectoryName(String &value)
{
	_exportedDirectoryName = value;
}


void UNIX_Export::clearInstance()
{

	_localFS = CIMInstance(CIMName("CIM_LocalFileSystem"));
	_directory = CIMInstance(CIMName("CIM_Directory"));
	_exportedDirectoryName = String ("");

}

Boolean UNIX_Export::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "LocalFS"))
			{
				CIMInstance localFSValue;
				property.getValue().get(localFSValue);
				setLocalFS(localFSValue);
			}
			else if (String::equal(property.getName().getString(), "Directory"))
			{
				CIMInstance directoryValue;
				property.getValue().get(directoryValue);
				setDirectory(directoryValue);
			}
			else if (String::equal(property.getName().getString(), "ExportedDirectoryName"))
			{
				String exportedDirectoryNameValue;
				property.getValue().get(exportedDirectoryNameValue);
				setExportedDirectoryName(exportedDirectoryNameValue);
			}
	}
	return true;
}


Boolean UNIX_Export::initialize()
{
	return false;
}

Boolean UNIX_Export::load(int &pIndex)
{
	
	_localFS = CIMInstance(CIMName("CIM_LocalFileSystem"));
	_directory = CIMInstance(CIMName("CIM_Directory"));
	_exportedDirectoryName = String ("");
	
	return false;
}

Boolean UNIX_Export::finalize()
{
	return false;
}


Boolean UNIX_Export::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String localFSKey;
	String directoryKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_LOCAL_FS)) localFSKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DIRECTORY)) directoryKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getLocalFS().getPath().toString(), localFSKey)) && 
			(String::equalNoCase(getDirectory().getPath().toString(), directoryKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_Export::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Export::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Export::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_Export::validateInstance()
{
	return true;
}

