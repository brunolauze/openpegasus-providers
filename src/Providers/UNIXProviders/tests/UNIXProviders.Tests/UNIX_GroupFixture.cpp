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

#include "UNIX_GroupFixture.h"
#include <Group/UNIX_GroupProvider.h>

UNIX_GroupFixture::UNIX_GroupFixture()
{
}

UNIX_GroupFixture::~UNIX_GroupFixture()
{
}
#if PEGASUS_OS_FREEBSD
	void UNIX_GroupFixture::Test_Group_DeleteInstance_001()
{

	CIMName className("UNIX_Group");
	CIMNamespaceName nameSpace("root/cimv2");
	UNIX_Group _p;
	OperationContext ctx;
	UNIX_GroupProvider _provider;
	CIMOMHandle omHandle;
	_provider.initialize(omHandle);
	_p.initialize();
	MockResponseHandler _resp(String("Test_Group_DeleteInstance_001"));
	String test01("test01");
	if (_p.loadByName(test01))
	{
		CIMInstance instance = _provider.constructInstance(className,
					nameSpace,
					_p);
		CIMObjectPath path = instance.getPath();
		cout << path.toString() << endl; 

		_provider.deleteInstance(ctx, path, _resp);
		if (!_resp.wasHandled())
		{
			throw new CIMOperationFailedException("Group Delete Operation Failed");
		}
	}
	else {
		cout << "Group test01 not found" << endl;
	} 	
 		
}
#endif

void UNIX_GroupFixture::Run()
{
	CIMName className("UNIX_Group");
	CIMNamespaceName nameSpace("root/cimv2");
	UNIX_Group _p;
	UNIX_GroupProvider _provider;
	Uint32 propertyCount;
	CIMOMHandle omHandle;
	_provider.initialize(omHandle);
	_p.initialize();

	for(int pIndex = 0; _p.load(pIndex); pIndex++)
	{
		CIMInstance instance = _provider.constructInstance(className,
					nameSpace,
					_p);
		CIMObjectPath path = instance.getPath();
		cout << path.toString() << endl;
		propertyCount = instance.getPropertyCount();
		for(Uint32 i = 0; i < propertyCount; i++)
		{

			CIMProperty propertyItem = instance.getProperty(i);
			if (propertyItem.getType() == CIMTYPE_REFERENCE) {
				CIMValue subValue = propertyItem.getValue();
				CIMInstance subInstance;
				subValue.get(subInstance);
				CIMObjectPath subPath = subInstance.getPath();
				cout << "	Name: " << propertyItem.getName().getString() << ": " << subPath.toString() << endl;
				Uint32 subPropertyCount = subInstance.getPropertyCount();
				for(Uint32 j = 0; j < subPropertyCount; j++)
				{
					CIMProperty subPropertyItem = subInstance.getProperty(j);
					cout << "		Name: " << subPropertyItem.getName().getString() << " - Value: " << subPropertyItem.getValue().toString() << endl;
				}
			}
			else {
				cout << "	Name: " << propertyItem.getName().getString() << " - Value: " << propertyItem.getValue().toString() << endl;
			}

		}
		cout << "------------------------------------" << endl;
		cout << endl;
	}

	_p.finalize();
	
#if PEGASUS_OS_FREEBSD
	Test_Group_DeleteInstance_001();
#endif
}

