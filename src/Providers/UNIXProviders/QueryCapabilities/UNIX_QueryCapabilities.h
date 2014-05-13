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


/* **** Version *** */
/*
2.39.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Interop
*/


/* **** Description *** */
/*
CIM_QueryCapabilities is deprecated. See CIM_GenericOperationCapabilitiesStructure.
This class defines the extent of the support of a query language. Query languages may be used in support of the query operation, as defined in the OpenQueryInstances CIM Operation from DSP0223, or in the filtering of indications. 
An instance of this class associated to the CIM_ObjectManager instance denotes that the WBEM Infrastructure itself supports the query operation. An instance of this class associated to a CIM_Provider instance denotes that the provider has less or more capabilities than the Object Manager for processing queries. If the provider has different support for query languages than the object manager then, instances of this class shall be associated to both the object manager and the provider.
An instance of this class associated to the CIM_IndicationService denotes what query languages can be used to formulate an indication filter. 
The possible query languages are CQL and XPath, as denoted by the CQLFeatures and XPathFeatures respectively. A value of null in one of these properties indicates that the related query language is not supported.
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

			UNIX_QueryCapabilities:
				CQLFeatures UInt16
				XPathFeatures UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Capabilities:
				CreateGoalSettings UInt16

			UNIX_QueryCapabilities:


*/

#ifndef __UNIX_QUERYCAPABILITIES_H
#define __UNIX_QUERYCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_QueryCapabilitiesDeps.h"


#ifndef PROPERTY_C_Q_L_FEATURES
#define PROPERTY_C_Q_L_FEATURES \
					"CQLFeatures"
#endif

#ifndef PROPERTY_X_PATH_FEATURES
#define PROPERTY_X_PATH_FEATURES \
					"XPathFeatures"
#endif



class UNIX_QueryCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_QueryCapabilities();
	~UNIX_QueryCapabilities();

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
	virtual Boolean getCQLFeatures(CIMProperty&) const;
	virtual Array<Uint16> getCQLFeatures() const;
	virtual void setCQLFeatures(Array<Uint16>&);
	virtual Boolean getXPathFeatures(CIMProperty&) const;
	virtual Uint16 getXPathFeatures() const;
	virtual void setXPathFeatures(Uint16&);

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
	Array<Uint16> _cQLFeatures;
	Uint16 _xPathFeatures;

#	include "UNIX_QueryCapabilitiesPrivate.h"


};

#endif /* UNIX_QUERYCAPABILITIES */
