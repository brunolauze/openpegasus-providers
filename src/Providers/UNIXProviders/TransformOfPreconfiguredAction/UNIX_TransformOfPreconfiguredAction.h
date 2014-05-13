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


/* **** Version *** */
/*
2.8.0
*/


/* **** UMLPackagePath *** */
/*
CIM::IPsecPolicy
*/


/* **** Description *** */
/*
TransformOfPreconfiguredAction defines the transforms used by a preconfigured IPsec action. Two, four or six SATransforms can be associated to a PreconfiguredSAAction (applied to the inbound and outbound traffic, as indicated by the Direction property of this association). The order of application of the SATransforms is implicitly defined in RFC2401.
*/


/* **** MappingStrings *** */
/*
IPSP Policy Model.IETF|TransformOfPreconfiguredAction
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_TransformOfPreconfiguredAction:
				SPI UInt32
				InboundDirection Boolean


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_TransformOfPreconfiguredAction:


*/

#ifndef __UNIX_TRANSFORMOFPRECONFIGUREDACTION_H
#define __UNIX_TRANSFORMOFPRECONFIGUREDACTION_H


#include "CIM_Dependency.h"
#include <AHTransform/UNIX_AHTransformProvider.h>
#include <ESPTransform/UNIX_ESPTransformProvider.h>
#include <IPCOMPTransform/UNIX_IPCOMPTransformProvider.h>
#include <PreconfiguredTransportAction/UNIX_PreconfiguredTransportActionProvider.h>
#include <PreconfiguredTunnelAction/UNIX_PreconfiguredTunnelActionProvider.h>

#include "UNIX_TransformOfPreconfiguredActionDeps.h"


#ifndef PROPERTY_SPI
#define PROPERTY_SPI \
					"SPI"
#endif

#ifndef PROPERTY_INBOUND_DIRECTION
#define PROPERTY_INBOUND_DIRECTION \
					"InboundDirection"
#endif



class UNIX_TransformOfPreconfiguredAction :
	public CIM_Dependency
{
public:

	UNIX_TransformOfPreconfiguredAction();
	~UNIX_TransformOfPreconfiguredAction();

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
	virtual Boolean getSPI(CIMProperty&) const;
	virtual Uint32 getSPI() const;
	virtual void setSPI(Uint32&);
	virtual Boolean getInboundDirection(CIMProperty&) const;
	virtual Boolean getInboundDirection() const;
	virtual void setInboundDirection(Boolean&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	Uint32 _sPI;
	Boolean _inboundDirection;

UNIX_AHTransform _antecedentAHTransform;
UNIX_AHTransformProvider _antecedentAHTransformProvider;
UNIX_ESPTransform _antecedentESPTransform;
UNIX_ESPTransformProvider _antecedentESPTransformProvider;
UNIX_IPCOMPTransform _antecedentIPCOMPTransform;
UNIX_IPCOMPTransformProvider _antecedentIPCOMPTransformProvider;

UNIX_PreconfiguredTransportAction _dependentPreconfiguredTransportAction;
UNIX_PreconfiguredTransportActionProvider _dependentPreconfiguredTransportActionProvider;
UNIX_PreconfiguredTunnelAction _dependentPreconfiguredTunnelAction;
UNIX_PreconfiguredTunnelActionProvider _dependentPreconfiguredTunnelActionProvider;

#	include "UNIX_TransformOfPreconfiguredActionPrivate.h"


};

#endif /* UNIX_TRANSFORMOFPRECONFIGUREDACTION */
