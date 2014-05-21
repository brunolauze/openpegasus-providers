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


/* **** Deprecated *** */
/*
CIM_IsSpare
*/


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::Redundancy
*/


/* **** Description *** */
/*
The ActsAsSpare association indicates which elements can spare or replace the other aggregated elements. The fact that a spare can operate in "hot standby" mode is specified on an element by element basis. 
The use of this class is being deprecated in lieu of using the IsSpare relationship.
*/


/*
			 *** Properties ***

			UNIX_ActsAsSpare:
				Group Reference
				Spare Reference
				HotStandby Boolean


*/


/*
			 *** Methods ***

			UNIX_ActsAsSpare:


*/

#ifndef __UNIX_ACTSASSPARE_H
#define __UNIX_ACTSASSPARE_H


#include "CIM_ClassBase.h"

#include "UNIX_ActsAsSpareDeps.h"


#ifndef PROPERTY_GROUP
#define PROPERTY_GROUP \
					"Group"
#endif

#ifndef PROPERTY_SPARE
#define PROPERTY_SPARE \
					"Spare"
#endif

#ifndef PROPERTY_HOT_STANDBY
#define PROPERTY_HOT_STANDBY \
					"HotStandby"
#endif



class UNIX_ActsAsSpare :
	public CIM_ClassBase
{
public:

	UNIX_ActsAsSpare();
	~UNIX_ActsAsSpare();

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

	virtual Boolean getGroup(CIMProperty&) const;
	virtual CIMInstance getGroup() const;
	virtual void setGroup(CIMInstance&);
	virtual Boolean getSpare(CIMProperty&) const;
	virtual CIMInstance getSpare() const;
	virtual void setSpare(CIMInstance&);
	virtual Boolean getHotStandby(CIMProperty&) const;
	virtual Boolean getHotStandby() const;
	virtual void setHotStandby(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _group;
	CIMInstance _spare;
	Boolean _hotStandby;

#	include "UNIX_ActsAsSparePrivate.h"


};

#endif /* UNIX_ACTSASSPARE */
