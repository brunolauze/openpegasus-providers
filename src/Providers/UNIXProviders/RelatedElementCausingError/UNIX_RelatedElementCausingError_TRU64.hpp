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


UNIX_RelatedElementCausingError::UNIX_RelatedElementCausingError(void)
{
}

UNIX_RelatedElementCausingError::~UNIX_RelatedElementCausingError(void)
{
}

Boolean UNIX_RelatedElementCausingError::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_RelatedElementCausingError::getAntecedent() const
{
	return _antecedent;
}

void UNIX_RelatedElementCausingError::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_RelatedElementCausingError::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_RelatedElementCausingError::getDependent() const
{
	return _dependent;
}

void UNIX_RelatedElementCausingError::setDependent(CIMInstance &value)
{
	_dependent = value;
}

Boolean UNIX_RelatedElementCausingError::getFailureRelationshipInitiated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAILURE_RELATIONSHIP_INITIATED, getFailureRelationshipInitiated());
	return true;
}

CIMDateTime UNIX_RelatedElementCausingError::getFailureRelationshipInitiated() const
{
	return _failureRelationshipInitiated;
}

void UNIX_RelatedElementCausingError::setFailureRelationshipInitiated(CIMDateTime &value)
{
	_failureRelationshipInitiated = value;
}

Boolean UNIX_RelatedElementCausingError::getEffectCorrelation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EFFECT_CORRELATION, getEffectCorrelation());
	return true;
}

Uint16 UNIX_RelatedElementCausingError::getEffectCorrelation() const
{
	return _effectCorrelation;
}

void UNIX_RelatedElementCausingError::setEffectCorrelation(Uint16 &value)
{
	_effectCorrelation = value;
}

Boolean UNIX_RelatedElementCausingError::getRanking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANKING, getRanking());
	return true;
}

Uint16 UNIX_RelatedElementCausingError::getRanking() const
{
	return _ranking;
}

void UNIX_RelatedElementCausingError::setRanking(Uint16 &value)
{
	_ranking = value;
}


void UNIX_RelatedElementCausingError::clearInstance()
{

	// _antecedent = CIMInstance(CIMName("CIM_ManagedElement"));
	// _dependent = CIMInstance(CIMName("CIM_ManagedElement"));
	_failureRelationshipInitiated = CIMHelper::getCurrentTime();
	_effectCorrelation = Uint16(0);
	_ranking = Uint16(0);

}

Boolean UNIX_RelatedElementCausingError::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Antecedent"))
			{
				CIMInstance antecedentValue;
				property.getValue().get(antecedentValue);
				setAntecedent(antecedentValue);
			}
			else if (String::equal(property.getName().getString(), "Dependent"))
			{
				CIMInstance dependentValue;
				property.getValue().get(dependentValue);
				setDependent(dependentValue);
			}
			else if (String::equal(property.getName().getString(), "FailureRelationshipInitiated"))
			{
				CIMDateTime failureRelationshipInitiatedValue;
				property.getValue().get(failureRelationshipInitiatedValue);
				setFailureRelationshipInitiated(failureRelationshipInitiatedValue);
			}
			else if (String::equal(property.getName().getString(), "EffectCorrelation"))
			{
				Uint16 effectCorrelationValue;
				property.getValue().get(effectCorrelationValue);
				setEffectCorrelation(effectCorrelationValue);
			}
			else if (String::equal(property.getName().getString(), "Ranking"))
			{
				Uint16 rankingValue;
				property.getValue().get(rankingValue);
				setRanking(rankingValue);
			}
	}
	return true;
}


Boolean UNIX_RelatedElementCausingError::initialize()
{
	/* Related Instances are Abstract */
	return false;
	return true;
}
Boolean UNIX_RelatedElementCausingError::load(int &pIndex)
{

	// _antecedent = CIMInstance(CIMName("CIM_ManagedElement"));
	// _dependent = CIMInstance(CIMName("CIM_ManagedElement"));
	_failureRelationshipInitiated = CIMHelper::getCurrentTime();
	_effectCorrelation = Uint16(0);
	_ranking = Uint16(0);

	return false;
}

Boolean UNIX_RelatedElementCausingError::finalize()
{
	return true;
}


Boolean UNIX_RelatedElementCausingError::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String antecedentKey;
	String dependentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ANTECEDENT)) antecedentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEPENDENT)) dependentKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getAntecedent().getPath().toString(), antecedentKey)) && 
			(String::equalNoCase(getDependent().getPath().toString(), dependentKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_RelatedElementCausingError::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RelatedElementCausingError::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RelatedElementCausingError::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RelatedElementCausingError::validateInstance()
{
	return true;
}

