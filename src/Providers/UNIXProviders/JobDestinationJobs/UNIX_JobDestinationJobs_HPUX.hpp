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


UNIX_JobDestinationJobs::UNIX_JobDestinationJobs(void)
{
}

UNIX_JobDestinationJobs::~UNIX_JobDestinationJobs(void)
{
}

Boolean UNIX_JobDestinationJobs::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_JobDestinationJobs::getAntecedent() const
{
	return _antecedent;
}

void UNIX_JobDestinationJobs::setAntecedent(CIMInstance &value)
{
	_antecedent = value;
}

Boolean UNIX_JobDestinationJobs::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_JobDestinationJobs::getDependent() const
{
	return _dependent;
}

void UNIX_JobDestinationJobs::setDependent(CIMInstance &value)
{
	_dependent = value;
}


void UNIX_JobDestinationJobs::clearInstance()
{

	_antecedent = _antecedentPrintQueueProvider.constructInstance(
		CIMName("UNIX_PrintQueue"),
		CIMNamespaceName("root/cimv2"),
		_antecedentPrintQueue);
	_dependent = _dependentConcreteJobProvider.constructInstance(
		CIMName("UNIX_ConcreteJob"),
		CIMNamespaceName("root/cimv2"),
		_dependentConcreteJob);

}

Boolean UNIX_JobDestinationJobs::loadInstance(const CIMInstance &instance)
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
	}
	return true;
}


Boolean UNIX_JobDestinationJobs::initialize()
{
	_antecedentPrintQueue.initialize();
	_antecedentJobQueue.initialize();
	_dependentConcreteJob.initialize();
	_dependentBatchJob.initialize();
	_dependentPrintJob.initialize();
	return true;
}
Boolean UNIX_JobDestinationJobs::load(int &pIndex)
{

	_antecedent = _antecedentPrintQueueProvider.constructInstance(
		CIMName("UNIX_PrintQueue"),
		CIMNamespaceName("root/cimv2"),
		_antecedentPrintQueue);
	_dependent = _dependentConcreteJobProvider.constructInstance(
		CIMName("UNIX_ConcreteJob"),
		CIMNamespaceName("root/cimv2"),
		_dependentConcreteJob);

	return false;
}

Boolean UNIX_JobDestinationJobs::finalize()
{
	_antecedentPrintQueue.finalize();
	_antecedentJobQueue.finalize();
	_dependentConcreteJob.finalize();
	_dependentBatchJob.finalize();
	_dependentPrintJob.finalize();
	return true;
}


Boolean UNIX_JobDestinationJobs::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_JobDestinationJobs::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_JobDestinationJobs::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_JobDestinationJobs::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_JobDestinationJobs::validateInstance()
{
	return true;
}

