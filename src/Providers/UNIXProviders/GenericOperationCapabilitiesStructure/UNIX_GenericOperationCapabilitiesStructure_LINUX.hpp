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


UNIX_GenericOperationCapabilitiesStructure::UNIX_GenericOperationCapabilitiesStructure(void)
{
}

UNIX_GenericOperationCapabilitiesStructure::~UNIX_GenericOperationCapabilitiesStructure(void)
{
}

Boolean UNIX_GenericOperationCapabilitiesStructure::getFQLSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_Q_L_SUPPORTED, getFQLSupported());
	return true;
}

Boolean UNIX_GenericOperationCapabilitiesStructure::getFQLSupported() const
{
	return _fQLSupported;
}

void UNIX_GenericOperationCapabilitiesStructure::setFQLSupported(Boolean &value)
{
	_fQLSupported = value;
}

Boolean UNIX_GenericOperationCapabilitiesStructure::getCQLSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_Q_L_SUPPORT, getCQLSupport());
	return true;
}

Array<Uint32> UNIX_GenericOperationCapabilitiesStructure::getCQLSupport() const
{
	return _cQLSupport;
}

void UNIX_GenericOperationCapabilitiesStructure::setCQLSupport(Array<Uint32> &value)
{
	_cQLSupport = value;
}

Boolean UNIX_GenericOperationCapabilitiesStructure::getOperationsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONS_SUPPORTED, getOperationsSupported());
	return true;
}

Array<Uint32> UNIX_GenericOperationCapabilitiesStructure::getOperationsSupported() const
{
	return _operationsSupported;
}

void UNIX_GenericOperationCapabilitiesStructure::setOperationsSupported(Array<Uint32> &value)
{
	_operationsSupported = value;
}

Boolean UNIX_GenericOperationCapabilitiesStructure::getOtherOperationsSupportedDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_OPERATIONS_SUPPORTED_DESCRIPTIONS, getOtherOperationsSupportedDescriptions());
	return true;
}

Array<String> UNIX_GenericOperationCapabilitiesStructure::getOtherOperationsSupportedDescriptions() const
{
	return _otherOperationsSupportedDescriptions;
}

void UNIX_GenericOperationCapabilitiesStructure::setOtherOperationsSupportedDescriptions(Array<String> &value)
{
	_otherOperationsSupportedDescriptions = value;
}

Boolean UNIX_GenericOperationCapabilitiesStructure::getContinueOnErrorSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTINUE_ON_ERROR_SUPPORTED, getContinueOnErrorSupported());
	return true;
}

Boolean UNIX_GenericOperationCapabilitiesStructure::getContinueOnErrorSupported() const
{
	return _continueOnErrorSupported;
}

void UNIX_GenericOperationCapabilitiesStructure::setContinueOnErrorSupported(Boolean &value)
{
	_continueOnErrorSupported = value;
}

Boolean UNIX_GenericOperationCapabilitiesStructure::getMinimumOperationTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINIMUM_OPERATION_TIMEOUT, getMinimumOperationTimeout());
	return true;
}

Uint32 UNIX_GenericOperationCapabilitiesStructure::getMinimumOperationTimeout() const
{
	return _minimumOperationTimeout;
}

void UNIX_GenericOperationCapabilitiesStructure::setMinimumOperationTimeout(Uint32 &value)
{
	_minimumOperationTimeout = value;
}

Boolean UNIX_GenericOperationCapabilitiesStructure::getMaximumOperationTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_OPERATION_TIMEOUT, getMaximumOperationTimeout());
	return true;
}

Uint32 UNIX_GenericOperationCapabilitiesStructure::getMaximumOperationTimeout() const
{
	return _maximumOperationTimeout;
}

void UNIX_GenericOperationCapabilitiesStructure::setMaximumOperationTimeout(Uint32 &value)
{
	_maximumOperationTimeout = value;
}


void UNIX_GenericOperationCapabilitiesStructure::clearInstance()
{

	_fQLSupported = Boolean(false);
	_cQLSupport.clear();
	_operationsSupported.clear();
	_otherOperationsSupportedDescriptions.clear();
	_continueOnErrorSupported = Boolean(false);
	_minimumOperationTimeout = Uint32(0);
	_maximumOperationTimeout = Uint32(0);

}

Boolean UNIX_GenericOperationCapabilitiesStructure::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "FQLSupported"))
			{
				Boolean fQLSupportedValue;
				property.getValue().get(fQLSupportedValue);
				setFQLSupported(fQLSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "CQLSupport"))
			{
				Array<Uint32> cQLSupportValue;
				property.getValue().get(cQLSupportValue);
				setCQLSupport(cQLSupportValue);
			}
			else if (String::equal(property.getName().getString(), "OperationsSupported"))
			{
				Array<Uint32> operationsSupportedValue;
				property.getValue().get(operationsSupportedValue);
				setOperationsSupported(operationsSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "OtherOperationsSupportedDescriptions"))
			{
				Array<String> otherOperationsSupportedDescriptionsValue;
				property.getValue().get(otherOperationsSupportedDescriptionsValue);
				setOtherOperationsSupportedDescriptions(otherOperationsSupportedDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "ContinueOnErrorSupported"))
			{
				Boolean continueOnErrorSupportedValue;
				property.getValue().get(continueOnErrorSupportedValue);
				setContinueOnErrorSupported(continueOnErrorSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "MinimumOperationTimeout"))
			{
				Uint32 minimumOperationTimeoutValue;
				property.getValue().get(minimumOperationTimeoutValue);
				setMinimumOperationTimeout(minimumOperationTimeoutValue);
			}
			else if (String::equal(property.getName().getString(), "MaximumOperationTimeout"))
			{
				Uint32 maximumOperationTimeoutValue;
				property.getValue().get(maximumOperationTimeoutValue);
				setMaximumOperationTimeout(maximumOperationTimeoutValue);
			}
	}
	return true;
}


Boolean UNIX_GenericOperationCapabilitiesStructure::initialize()
{
	return false;
}

Boolean UNIX_GenericOperationCapabilitiesStructure::load(int &pIndex)
{
	
	_fQLSupported = Boolean(false);
	_cQLSupport.clear();
	_operationsSupported.clear();
	_otherOperationsSupportedDescriptions.clear();
	_continueOnErrorSupported = Boolean(false);
	_minimumOperationTimeout = Uint32(0);
	_maximumOperationTimeout = Uint32(0);
	
	return false;
}

Boolean UNIX_GenericOperationCapabilitiesStructure::finalize()
{
	return false;
}


Boolean UNIX_GenericOperationCapabilitiesStructure::find(const Array<CIMKeyBinding> &kbArray)
{
	return true;
}

Boolean UNIX_GenericOperationCapabilitiesStructure::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GenericOperationCapabilitiesStructure::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GenericOperationCapabilitiesStructure::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_GenericOperationCapabilitiesStructure::validateInstance()
{
	return true;
}

