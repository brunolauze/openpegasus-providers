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


/* **** Association *** */
/*
TRUE
*/


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.38.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::FileStatistics
*/


/* **** Description *** */
/*
Instances of this class associate a CIM_FileSystemStatisticsManifestCollection to the StatisticsCollection to which it applies. The ManifestCollection contains the Manifests that are used to filter requests for the retrieval of statistics.
*/


/*
			 *** Properties ***

			UNIX_AssociatedFileSystemStatisticsManifestCollection:
				Statistics Reference
				ManifestCollection Reference


*/


/*
			 *** Methods ***

			UNIX_AssociatedFileSystemStatisticsManifestCollection:


*/

#ifndef __UNIX_ASSOCIATEDFILESYSTEMSTATISTICSMANIFESTCOLLECTION_H
#define __UNIX_ASSOCIATEDFILESYSTEMSTATISTICSMANIFESTCOLLECTION_H


#include "CIM_ClassBase.h"

#include "UNIX_AssociatedFileSystemStatisticsManifestCollectionDeps.h"


#ifndef PROPERTY_STATISTICS
#define PROPERTY_STATISTICS \
					"Statistics"
#endif

#ifndef PROPERTY_MANIFEST_COLLECTION
#define PROPERTY_MANIFEST_COLLECTION \
					"ManifestCollection"
#endif



class UNIX_AssociatedFileSystemStatisticsManifestCollection :
	public CIM_ClassBase
{
public:

	UNIX_AssociatedFileSystemStatisticsManifestCollection();
	~UNIX_AssociatedFileSystemStatisticsManifestCollection();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(const Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);
	virtual void setCIMOMHandle(CIMOMHandle&);
	virtual void clearInstance();
	virtual Boolean loadInstance(const CIMInstance&);
	virtual Boolean createInstance(const OperationContext&);
	virtual Boolean modifyInstance(const OperationContext&);
	virtual Boolean deleteInstance(const OperationContext&);
	virtual Boolean validateInstance();

	virtual Boolean getStatistics(CIMProperty&) const;
	virtual CIMInstance getStatistics() const;
	virtual void setStatistics(CIMInstance&);
	virtual Boolean getManifestCollection(CIMProperty&) const;
	virtual CIMInstance getManifestCollection() const;
	virtual void setManifestCollection(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _statistics;
	CIMInstance _manifestCollection;

#	include "UNIX_AssociatedFileSystemStatisticsManifestCollectionPrivate.h"


};

#endif /* UNIX_ASSOCIATEDFILESYSTEMSTATISTICSMANIFESTCOLLECTION */
