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


#include "UNIX_RelatedStatisticsProvider.h"

using PROVIDER_LIB_NS::CIMHelper;

UNIX_RelatedStatisticsProvider::UNIX_RelatedStatisticsProvider()
{
}

UNIX_RelatedStatisticsProvider::~UNIX_RelatedStatisticsProvider()
{
}

CIMInstance UNIX_RelatedStatisticsProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_RelatedStatistics &instanceObject) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(instanceObject)));

	//CIM_RelatedStatistics Properties
	if (instanceObject.getStats(p)) inst.addProperty(p);
	if (instanceObject.getRelatedStats(p)) inst.addProperty(p);
	

	return inst;
}

Array<CIMKeyBinding> UNIX_RelatedStatisticsProvider::constructKeyBindings(const UNIX_RelatedStatistics& instanceObject) const
{

	Array<CIMKeyBinding> keys;

	CIMKeyBinding StatsKey(
		PROPERTY_STATS,
		CIMValue(instanceObject.getStats().getPath()));
	StatsKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(StatsKey);
	CIMKeyBinding RelatedStatsKey(
		PROPERTY_RELATED_STATS,
		CIMValue(instanceObject.getRelatedStats().getPath()));
	RelatedStatsKey.setType(CIMKeyBinding::REFERENCE);
	keys.append(RelatedStatsKey);


	return keys;
}



#define UNIX_PROVIDER UNIX_RelatedStatisticsProvider
#define UNIX_PROVIDER_NAME "UNIX_RelatedStatisticsProvider"
#define CLASS_IMPLEMENTATION UNIX_RelatedStatistics
#define CLASS_IMPLEMENTATION_NAME "UNIX_RelatedStatistics"
#define BASE_CLASS_NAME "CIM_RelatedStatistics"
#define NUMKEYS_CLASS_IMPLEMENTATION 2


#include "UNIXProviderBase.hpp"

