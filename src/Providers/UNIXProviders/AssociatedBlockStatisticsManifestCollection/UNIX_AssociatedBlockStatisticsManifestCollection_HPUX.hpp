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


UNIX_AssociatedBlockStatisticsManifestCollection::UNIX_AssociatedBlockStatisticsManifestCollection(void)
{
}

UNIX_AssociatedBlockStatisticsManifestCollection::~UNIX_AssociatedBlockStatisticsManifestCollection(void)
{
}

Boolean UNIX_AssociatedBlockStatisticsManifestCollection::getStatistics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTICS, getStatistics());
	return true;
}

CIMInstance UNIX_AssociatedBlockStatisticsManifestCollection::getStatistics() const
{
	return _statistics;
}

void UNIX_AssociatedBlockStatisticsManifestCollection::setStatistics(CIMInstance &value)
{
	_statistics = value;
}

Boolean UNIX_AssociatedBlockStatisticsManifestCollection::getManifestCollection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANIFEST_COLLECTION, getManifestCollection());
	return true;
}

CIMInstance UNIX_AssociatedBlockStatisticsManifestCollection::getManifestCollection() const
{
	return _manifestCollection;
}

void UNIX_AssociatedBlockStatisticsManifestCollection::setManifestCollection(CIMInstance &value)
{
	_manifestCollection = value;
}


void UNIX_AssociatedBlockStatisticsManifestCollection::clearInstance()
{

	_statistics = CIMInstance(CIMName("CIM_StatisticsCollection"));
	_manifestCollection = CIMInstance(CIMName("CIM_BlockStatisticsManifestCollection"));

}

Boolean UNIX_AssociatedBlockStatisticsManifestCollection::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Statistics"))
			{
				CIMInstance statisticsValue;
				property.getValue().get(statisticsValue);
				setStatistics(statisticsValue);
			}
			else if (String::equal(property.getName().getString(), "ManifestCollection"))
			{
				CIMInstance manifestCollectionValue;
				property.getValue().get(manifestCollectionValue);
				setManifestCollection(manifestCollectionValue);
			}
	}
	return true;
}


Boolean UNIX_AssociatedBlockStatisticsManifestCollection::initialize()
{
	return false;
}

Boolean UNIX_AssociatedBlockStatisticsManifestCollection::load(int &pIndex)
{
	
	_statistics = CIMInstance(CIMName("CIM_StatisticsCollection"));
	_manifestCollection = CIMInstance(CIMName("CIM_BlockStatisticsManifestCollection"));
	
	return false;
}

Boolean UNIX_AssociatedBlockStatisticsManifestCollection::finalize()
{
	return false;
}


Boolean UNIX_AssociatedBlockStatisticsManifestCollection::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String statisticsKey;
	String manifestCollectionKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_STATISTICS)) statisticsKey = kb.getValue();
		else if (keyName.equal(PROPERTY_MANIFEST_COLLECTION)) manifestCollectionKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getStatistics().getPath().toString(), statisticsKey)) && 
			(String::equalNoCase(getManifestCollection().getPath().toString(), manifestCollectionKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_AssociatedBlockStatisticsManifestCollection::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AssociatedBlockStatisticsManifestCollection::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AssociatedBlockStatisticsManifestCollection::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_AssociatedBlockStatisticsManifestCollection::validateInstance()
{
	return true;
}

