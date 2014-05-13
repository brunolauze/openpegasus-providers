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
No value
*/


/* **** Version *** */
/*
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::VLAN
*/


/* **** Description *** */
/*
This class is deprecated in lieu or not being necessary to indicate whether the VLAN is inbound/outbound This association makes explicit the operational dependencies of a SwitchPort when operating in a VLAN. If there is an association between a particular SwitchPort and a particular VLAN, then there is the possibility that a packet received by the port will be assigned to the VLAN (or if the packet already has a VLAN tag, that the packet will not be dropped). If there is no such association, then there is NO possibility that a packet received by the port will progress through the switch having been assigned to the referenced VLAN.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			CIM_SAPSAPDependency:

			UNIX_InboundVLAN:
				Tagged Boolean
				Default Boolean


*/


/*
			 *** Methods ***

			CIM_Dependency:

			CIM_SAPSAPDependency:

			UNIX_InboundVLAN:


*/

#ifndef __UNIX_INBOUNDVLAN_H
#define __UNIX_INBOUNDVLAN_H


#include "CIM_SAPSAPDependency.h"
#include <VLAN/UNIX_VLANProvider.h>
#include <SwitchPort/UNIX_SwitchPortProvider.h>

#include "UNIX_InboundVLANDeps.h"


#ifndef PROPERTY_TAGGED
#define PROPERTY_TAGGED \
					"Tagged"
#endif

#ifndef PROPERTY_DEFAULT
#define PROPERTY_DEFAULT \
					"Default"
#endif



class UNIX_InboundVLAN :
	public CIM_SAPSAPDependency
{
public:

	UNIX_InboundVLAN();
	~UNIX_InboundVLAN();

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

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual void setAntecedent(CIMInstance&);
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual void setDependent(CIMInstance&);
	virtual Boolean getTagged(CIMProperty&) const;
	virtual Boolean getTagged() const;
	virtual void setTagged(Boolean&);
	virtual Boolean getDefault(CIMProperty&) const;
	virtual Boolean getDefault() const;
	virtual void setDefault(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Boolean _tagged;
	Boolean _default;

UNIX_VLAN _antecedentVLAN;
UNIX_VLANProvider _antecedentVLANProvider;

UNIX_SwitchPort _dependentSwitchPort;
UNIX_SwitchPortProvider _dependentSwitchPortProvider;

#	include "UNIX_InboundVLANPrivate.h"


};

#endif /* UNIX_INBOUNDVLAN */
