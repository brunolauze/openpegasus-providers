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


UNIX_BGPClustersInAS::UNIX_BGPClustersInAS(void)
{
}

UNIX_BGPClustersInAS::~UNIX_BGPClustersInAS(void)
{
}

Boolean UNIX_BGPClustersInAS::getGroupAS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_A_S, getGroupAS());
	return true;
}

CIMInstance UNIX_BGPClustersInAS::getGroupAS() const
{
	return _groupAS;
}

void UNIX_BGPClustersInAS::setGroupAS(CIMInstance &value)
{
	_groupAS = value;
}

Boolean UNIX_BGPClustersInAS::getPartAS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_A_S, getPartAS());
	return true;
}

CIMInstance UNIX_BGPClustersInAS::getPartAS() const
{
	return _partAS;
}

void UNIX_BGPClustersInAS::setPartAS(CIMInstance &value)
{
	_partAS = value;
}


void UNIX_BGPClustersInAS::clearInstance()
{

	_groupAS = CIMInstance(CIMName("CIM_AutonomousSystem"));
	_partAS = CIMInstance(CIMName("CIM_BGPCluster"));

}

Boolean UNIX_BGPClustersInAS::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "GroupAS"))
			{
				CIMInstance groupASValue;
				property.getValue().get(groupASValue);
				setGroupAS(groupASValue);
			}
			else if (String::equal(property.getName().getString(), "PartAS"))
			{
				CIMInstance partASValue;
				property.getValue().get(partASValue);
				setPartAS(partASValue);
			}
	}
	return true;
}


Boolean UNIX_BGPClustersInAS::initialize()
{
	return false;
}

Boolean UNIX_BGPClustersInAS::load(int &pIndex)
{
	
	_groupAS = CIMInstance(CIMName("CIM_AutonomousSystem"));
	_partAS = CIMInstance(CIMName("CIM_BGPCluster"));
	
	return false;
}

Boolean UNIX_BGPClustersInAS::finalize()
{
	return false;
}


Boolean UNIX_BGPClustersInAS::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String groupASKey;
	String partASKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_GROUP_A_S)) groupASKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PART_A_S)) partASKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getGroupAS().getPath().toString(), groupASKey)) && 
			(String::equalNoCase(getPartAS().getPath().toString(), partASKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_BGPClustersInAS::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPClustersInAS::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPClustersInAS::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPClustersInAS::validateInstance()
{
	return true;
}

