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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.8.1000
*/


/* **** UMLPackagePath *** */
/*
CIM::Network::MPLS
*/


/* **** Description *** */
/*
This class specifies the capabilities of an MPLSService or MPLSProtocolEndpoint (interface) on a Label Switched Router (LSR). The association CIM_ElementCapabilities relates the instance with its MPLS Service and/or Endpoint.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Capabilities:

			UNIX_MPLSCapabilities:
				LabelMinIn UInt32
				LabelMaxIn UInt32
				LabelMinOut UInt32
				LabelMaxOut UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_MPLSCapabilities:


*/

#ifndef __UNIX_MPLSCAPABILITIES_H
#define __UNIX_MPLSCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_MPLSCapabilitiesDeps.h"


#ifndef PROPERTY_LABEL_MIN_IN
#define PROPERTY_LABEL_MIN_IN \
					"LabelMinIn"
#endif

#ifndef PROPERTY_LABEL_MAX_IN
#define PROPERTY_LABEL_MAX_IN \
					"LabelMaxIn"
#endif

#ifndef PROPERTY_LABEL_MIN_OUT
#define PROPERTY_LABEL_MIN_OUT \
					"LabelMinOut"
#endif

#ifndef PROPERTY_LABEL_MAX_OUT
#define PROPERTY_LABEL_MAX_OUT \
					"LabelMaxOut"
#endif



class UNIX_MPLSCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_MPLSCapabilities();
	~UNIX_MPLSCapabilities();

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

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getLabelMinIn(CIMProperty&) const;
	virtual Uint32 getLabelMinIn() const;
	virtual void setLabelMinIn(Uint32&);
	virtual Boolean getLabelMaxIn(CIMProperty&) const;
	virtual Uint32 getLabelMaxIn() const;
	virtual void setLabelMaxIn(Uint32&);
	virtual Boolean getLabelMinOut(CIMProperty&) const;
	virtual Uint32 getLabelMinOut() const;
	virtual void setLabelMinOut(Uint32&);
	virtual Boolean getLabelMaxOut(CIMProperty&) const;
	virtual Uint32 getLabelMaxOut() const;
	virtual void setLabelMaxOut(Uint32&);

	virtual Uint16 invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	);



private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	Uint32 _labelMinIn;
	Uint32 _labelMaxIn;
	Uint32 _labelMinOut;
	Uint32 _labelMaxOut;

#	include "UNIX_MPLSCapabilitiesPrivate.h"


};

#endif /* UNIX_MPLSCAPABILITIES */
