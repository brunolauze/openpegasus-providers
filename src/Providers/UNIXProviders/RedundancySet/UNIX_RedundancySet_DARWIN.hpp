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


UNIX_RedundancySet::UNIX_RedundancySet(void)
{
}

UNIX_RedundancySet::~UNIX_RedundancySet(void)
{
}

Boolean UNIX_RedundancySet::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RedundancySet::getInstanceID() const
{
	return _instanceID;
}

void UNIX_RedundancySet::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_RedundancySet::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RedundancySet::getCaption() const
{
	return _caption;
}

void UNIX_RedundancySet::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_RedundancySet::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RedundancySet::getDescription() const
{
	return _description;
}

void UNIX_RedundancySet::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_RedundancySet::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RedundancySet::getElementName() const
{
	return _elementName;
}

void UNIX_RedundancySet::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_RedundancySet::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_RedundancySet::getGeneration() const
{
	return _generation;
}

void UNIX_RedundancySet::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_RedundancySet::getRedundancyStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REDUNDANCY_STATUS, getRedundancyStatus());
	return true;
}

Uint16 UNIX_RedundancySet::getRedundancyStatus() const
{
	return _redundancyStatus;
}

void UNIX_RedundancySet::setRedundancyStatus(Uint16 &value)
{
	_redundancyStatus = value;
}

Boolean UNIX_RedundancySet::getTypeOfSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_SET, getTypeOfSet());
	return true;
}

Array<Uint16> UNIX_RedundancySet::getTypeOfSet() const
{
	return _typeOfSet;
}

void UNIX_RedundancySet::setTypeOfSet(Array<Uint16> &value)
{
	_typeOfSet = value;
}

Boolean UNIX_RedundancySet::getMinNumberNeeded(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_NUMBER_NEEDED, getMinNumberNeeded());
	return true;
}

Uint32 UNIX_RedundancySet::getMinNumberNeeded() const
{
	return _minNumberNeeded;
}

void UNIX_RedundancySet::setMinNumberNeeded(Uint32 &value)
{
	_minNumberNeeded = value;
}

Boolean UNIX_RedundancySet::getMaxNumberSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_SUPPORTED, getMaxNumberSupported());
	return true;
}

Uint32 UNIX_RedundancySet::getMaxNumberSupported() const
{
	return _maxNumberSupported;
}

void UNIX_RedundancySet::setMaxNumberSupported(Uint32 &value)
{
	_maxNumberSupported = value;
}

Boolean UNIX_RedundancySet::getVendorIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_IDENTIFYING_INFO, getVendorIdentifyingInfo());
	return true;
}

String UNIX_RedundancySet::getVendorIdentifyingInfo() const
{
	return _vendorIdentifyingInfo;
}

void UNIX_RedundancySet::setVendorIdentifyingInfo(String &value)
{
	_vendorIdentifyingInfo = value;
}

Boolean UNIX_RedundancySet::getOtherTypeOfSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_OF_SET, getOtherTypeOfSet());
	return true;
}

Array<String> UNIX_RedundancySet::getOtherTypeOfSet() const
{
	return _otherTypeOfSet;
}

void UNIX_RedundancySet::setOtherTypeOfSet(Array<String> &value)
{
	_otherTypeOfSet = value;
}

Boolean UNIX_RedundancySet::getLoadBalanceAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_BALANCE_ALGORITHM, getLoadBalanceAlgorithm());
	return true;
}

Uint16 UNIX_RedundancySet::getLoadBalanceAlgorithm() const
{
	return _loadBalanceAlgorithm;
}

void UNIX_RedundancySet::setLoadBalanceAlgorithm(Uint16 &value)
{
	_loadBalanceAlgorithm = value;
}

Boolean UNIX_RedundancySet::getOtherLoadBalanceAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOAD_BALANCE_ALGORITHM, getOtherLoadBalanceAlgorithm());
	return true;
}

String UNIX_RedundancySet::getOtherLoadBalanceAlgorithm() const
{
	return _otherLoadBalanceAlgorithm;
}

void UNIX_RedundancySet::setOtherLoadBalanceAlgorithm(String &value)
{
	_otherLoadBalanceAlgorithm = value;
}


void UNIX_RedundancySet::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RedundancySet");
	_generation = Uint64(0);
	_redundancyStatus = Uint16(0);
	_typeOfSet.clear();
	_minNumberNeeded = Uint32(0);
	_maxNumberSupported = Uint32(0);
	_vendorIdentifyingInfo = String ("");
	_otherTypeOfSet.clear();
	_loadBalanceAlgorithm = Uint16(0);
	_otherLoadBalanceAlgorithm = String ("");

}

Boolean UNIX_RedundancySet::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "InstanceID"))
			{
				String instanceIDValue;
				property.getValue().get(instanceIDValue);
				setInstanceID(instanceIDValue);
			}
			else if (String::equal(property.getName().getString(), "Caption"))
			{
				String captionValue;
				property.getValue().get(captionValue);
				setCaption(captionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "ElementName"))
			{
				String elementNameValue;
				property.getValue().get(elementNameValue);
				setElementName(elementNameValue);
			}
			else if (String::equal(property.getName().getString(), "Generation"))
			{
				Uint64 generationValue;
				property.getValue().get(generationValue);
				setGeneration(generationValue);
			}
			else if (String::equal(property.getName().getString(), "RedundancyStatus"))
			{
				Uint16 redundancyStatusValue;
				property.getValue().get(redundancyStatusValue);
				setRedundancyStatus(redundancyStatusValue);
			}
			else if (String::equal(property.getName().getString(), "TypeOfSet"))
			{
				Array<Uint16> typeOfSetValue;
				property.getValue().get(typeOfSetValue);
				setTypeOfSet(typeOfSetValue);
			}
			else if (String::equal(property.getName().getString(), "MinNumberNeeded"))
			{
				Uint32 minNumberNeededValue;
				property.getValue().get(minNumberNeededValue);
				setMinNumberNeeded(minNumberNeededValue);
			}
			else if (String::equal(property.getName().getString(), "MaxNumberSupported"))
			{
				Uint32 maxNumberSupportedValue;
				property.getValue().get(maxNumberSupportedValue);
				setMaxNumberSupported(maxNumberSupportedValue);
			}
			else if (String::equal(property.getName().getString(), "VendorIdentifyingInfo"))
			{
				String vendorIdentifyingInfoValue;
				property.getValue().get(vendorIdentifyingInfoValue);
				setVendorIdentifyingInfo(vendorIdentifyingInfoValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTypeOfSet"))
			{
				Array<String> otherTypeOfSetValue;
				property.getValue().get(otherTypeOfSetValue);
				setOtherTypeOfSet(otherTypeOfSetValue);
			}
			else if (String::equal(property.getName().getString(), "LoadBalanceAlgorithm"))
			{
				Uint16 loadBalanceAlgorithmValue;
				property.getValue().get(loadBalanceAlgorithmValue);
				setLoadBalanceAlgorithm(loadBalanceAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "OtherLoadBalanceAlgorithm"))
			{
				String otherLoadBalanceAlgorithmValue;
				property.getValue().get(otherLoadBalanceAlgorithmValue);
				setOtherLoadBalanceAlgorithm(otherLoadBalanceAlgorithmValue);
			}
	}
	return true;
}

Uint32 UNIX_RedundancySet::invokeFailover(
		CIMInstance &inFailoverFrom,
		CIMInstance &inFailoverTo
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Failover */
	
	
	
	return returnValue;
}


Boolean UNIX_RedundancySet::initialize()
{
	return false;
}

Boolean UNIX_RedundancySet::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("RedundancySet");
	_generation = Uint64(0);
	_redundancyStatus = Uint16(0);
	_typeOfSet.clear();
	_minNumberNeeded = Uint32(0);
	_maxNumberSupported = Uint32(0);
	_vendorIdentifyingInfo = String ("");
	_otherTypeOfSet.clear();
	_loadBalanceAlgorithm = Uint16(0);
	_otherLoadBalanceAlgorithm = String ("");
	
	return false;
}

Boolean UNIX_RedundancySet::finalize()
{
	return false;
}


Boolean UNIX_RedundancySet::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getInstanceID(), instanceIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_RedundancySet::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RedundancySet::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RedundancySet::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_RedundancySet::validateInstance()
{
	return true;
}

