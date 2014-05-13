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


UNIX_RelatedStatisticalData::UNIX_RelatedStatisticalData(void)
{
}

UNIX_RelatedStatisticalData::~UNIX_RelatedStatisticalData(void)
{
}

Boolean UNIX_RelatedStatisticalData::getStats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATS, getStats());
	return true;
}

CIMInstance UNIX_RelatedStatisticalData::getStats() const
{
	return _stats;
}

void UNIX_RelatedStatisticalData::setStats(CIMInstance &value)
{
	_stats = value;
}

Boolean UNIX_RelatedStatisticalData::getRelatedStats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELATED_STATS, getRelatedStats());
	return true;
}

CIMInstance UNIX_RelatedStatisticalData::getRelatedStats() const
{
	return _relatedStats;
}

void UNIX_RelatedStatisticalData::setRelatedStats(CIMInstance &value)
{
	_relatedStats = value;
}

Boolean UNIX_RelatedStatisticalData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RelatedStatisticalData::getDescription() const
{
	return _description;
}

void UNIX_RelatedStatisticalData::setDescription(String &value)
{
	_description = value;
}


void UNIX_RelatedStatisticalData::clearInstance()
{

	_stats = CIMInstance(CIMName("CIM_VLANStatistics"));
	_relatedStats = CIMInstance(CIMName("CIM_VLANStatistics"));
	_description = String ("");

}

Boolean UNIX_RelatedStatisticalData::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Stats"))
			{
				CIMInstance statsValue;
				property.getValue().get(statsValue);
				setStats(statsValue);
			}
			else if (String::equal(property.getName().getString(), "RelatedStats"))
			{
				CIMInstance relatedStatsValue;
				property.getValue().get(relatedStatsValue);
				setRelatedStats(relatedStatsValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
	}
	return true;
}


Boolean UNIX_RelatedStatisticalData::initialize()
{
	return false;
}

Boolean UNIX_RelatedStatisticalData::load(int &pIndex)
{
	
	_stats = CIMInstance(CIMName("CIM_VLANStatistics"));
	_relatedStats = CIMInstance(CIMName("CIM_VLANStatistics"));
	_description = String ("");
	
	return false;
}

Boolean UNIX_RelatedStatisticalData::finalize()
{
	return false;
}


Boolean UNIX_RelatedStatisticalData::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String statsKey;
	String relatedStatsKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_STATS)) statsKey = kb.getValue();
		else if (keyName.equal(PROPERTY_RELATED_STATS)) relatedStatsKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getStats().getPath().toString(), statsKey)) && 
			(String::equalNoCase(getRelatedStats().getPath().toString(), relatedStatsKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_RelatedStatisticalData::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RelatedStatisticalData::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RelatedStatisticalData::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RelatedStatisticalData::validateInstance()
{
	return true;
}

