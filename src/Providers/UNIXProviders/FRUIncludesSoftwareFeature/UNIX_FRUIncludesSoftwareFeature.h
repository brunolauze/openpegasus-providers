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


/* **** Aggregation *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.6.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Application::DeploymentModel
*/


/* **** Description *** */
/*
The FRUIncludesSoftwareFeature association identifies the SoftwareFeature(s) packaged with a particular FRU. A common usage is to determine whether the FRU is compatible with a hardware/software platform. In order to determine this, the following conditions need to be verified: 
(1) Is the physical package of the FRU compatible with the slots or equivalent packaging of the hardware? 
(2) Are there any physical constraints (such as power consumption) that prevent the FRU from being installed? 
(3) Are the SoftwareFeatures packaged with the FRU compatiable with the underlying operating system and other software already installed/to be installed on the platform? 
This latter question can be answered by first checking if an instance of FRUIncludesSoftwareFeature exists. If it does, then the compatibility of each SoftwareFeature can be determined by evaluating the Check classes for the Software Elements that are part of the Feature (found by traversing the association, SoftwareFeatureSoftwareElements). For example, there might be a SoftwareElementVersionCheck that declares that a SoftwareElement (of the FRU's Software Feature) is not compatible with current software.
*/


/*
			 *** Properties ***

			UNIX_FRUIncludesSoftwareFeature:
				FRU Reference
				Component Reference


*/


/*
			 *** Methods ***

			UNIX_FRUIncludesSoftwareFeature:


*/

#ifndef __UNIX_FRUINCLUDESSOFTWAREFEATURE_H
#define __UNIX_FRUINCLUDESSOFTWAREFEATURE_H


#include "CIM_ClassBase.h"

#include "UNIX_FRUIncludesSoftwareFeatureDeps.h"


#ifndef PROPERTY_F_R_U
#define PROPERTY_F_R_U \
					"FRU"
#endif

#ifndef PROPERTY_COMPONENT
#define PROPERTY_COMPONENT \
					"Component"
#endif



class UNIX_FRUIncludesSoftwareFeature :
	public CIM_ClassBase
{
public:

	UNIX_FRUIncludesSoftwareFeature();
	~UNIX_FRUIncludesSoftwareFeature();

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

	virtual Boolean getFRU(CIMProperty&) const;
	virtual CIMInstance getFRU() const;
	virtual void setFRU(CIMInstance&);
	virtual Boolean getComponent(CIMProperty&) const;
	virtual CIMInstance getComponent() const;
	virtual void setComponent(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _fRU;
	CIMInstance _component;

#	include "UNIX_FRUIncludesSoftwareFeaturePrivate.h"


};

#endif /* UNIX_FRUINCLUDESSOFTWAREFEATURE */
