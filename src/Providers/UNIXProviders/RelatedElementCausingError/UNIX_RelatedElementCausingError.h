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
2.10.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Core::CoreElements
*/


/* **** Description *** */
/*
This association defines the relationship between a failing managed element and the managed element that is causing the error. The cause and effect might be indirect. The cause might be simply that the lack of functionality of one component causes another component to be overworked. 
The association instance must exist as long as the cause-and- effect relationship exists.
*/


/*
			 *** Properties ***

			CIM_Dependency:
				Antecedent Reference
				Dependent Reference

			UNIX_RelatedElementCausingError:
				FailureRelationshipInitiated DateTime
				EffectCorrelation UInt16
				Ranking UInt16


*/


/*
			 *** Methods ***

			CIM_Dependency:

			UNIX_RelatedElementCausingError:


*/

#ifndef __UNIX_RELATEDELEMENTCAUSINGERROR_H
#define __UNIX_RELATEDELEMENTCAUSINGERROR_H


#include "CIM_Dependency.h"

#include "UNIX_RelatedElementCausingErrorDeps.h"


#ifndef PROPERTY_FAILURE_RELATIONSHIP_INITIATED
#define PROPERTY_FAILURE_RELATIONSHIP_INITIATED \
					"FailureRelationshipInitiated"
#endif

#ifndef PROPERTY_EFFECT_CORRELATION
#define PROPERTY_EFFECT_CORRELATION \
					"EffectCorrelation"
#endif

#ifndef PROPERTY_RANKING
#define PROPERTY_RANKING \
					"Ranking"
#endif



class UNIX_RelatedElementCausingError :
	public CIM_Dependency
{
public:

	UNIX_RelatedElementCausingError();
	~UNIX_RelatedElementCausingError();

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
	virtual Boolean getFailureRelationshipInitiated(CIMProperty&) const;
	virtual CIMDateTime getFailureRelationshipInitiated() const;
	virtual void setFailureRelationshipInitiated(CIMDateTime&);
	virtual Boolean getEffectCorrelation(CIMProperty&) const;
	virtual Uint16 getEffectCorrelation() const;
	virtual void setEffectCorrelation(Uint16&);
	virtual Boolean getRanking(CIMProperty&) const;
	virtual Uint16 getRanking() const;
	virtual void setRanking(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _antecedent;
	CIMInstance _dependent;
	CIMDateTime _failureRelationshipInitiated;
	Uint16 _effectCorrelation;
	Uint16 _ranking;



#	include "UNIX_RelatedElementCausingErrorPrivate.h"


};

#endif /* UNIX_RELATEDELEMENTCAUSINGERROR */
