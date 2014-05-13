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


UNIX_StorageRedundancySet::UNIX_StorageRedundancySet(void)
{
}

UNIX_StorageRedundancySet::~UNIX_StorageRedundancySet(void)
{
}

Boolean UNIX_StorageRedundancySet::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageRedundancySet::getInstanceID() const
{
	return _instanceID;
}

void UNIX_StorageRedundancySet::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_StorageRedundancySet::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageRedundancySet::getCaption() const
{
	return _caption;
}

void UNIX_StorageRedundancySet::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_StorageRedundancySet::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageRedundancySet::getDescription() const
{
	return _description;
}

void UNIX_StorageRedundancySet::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_StorageRedundancySet::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageRedundancySet::getElementName() const
{
	return _elementName;
}

void UNIX_StorageRedundancySet::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_StorageRedundancySet::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_StorageRedundancySet::getGeneration() const
{
	return _generation;
}

void UNIX_StorageRedundancySet::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_StorageRedundancySet::getRedundancyStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REDUNDANCY_STATUS, getRedundancyStatus());
	return true;
}

Uint16 UNIX_StorageRedundancySet::getRedundancyStatus() const
{
	return _redundancyStatus;
}

void UNIX_StorageRedundancySet::setRedundancyStatus(Uint16 &value)
{
	_redundancyStatus = value;
}

Boolean UNIX_StorageRedundancySet::getTypeOfSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_SET, getTypeOfSet());
	return true;
}

Array<Uint16> UNIX_StorageRedundancySet::getTypeOfSet() const
{
	return _typeOfSet;
}

void UNIX_StorageRedundancySet::setTypeOfSet(Array<Uint16> &value)
{
	_typeOfSet = value;
}

Boolean UNIX_StorageRedundancySet::getMinNumberNeeded(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_NUMBER_NEEDED, getMinNumberNeeded());
	return true;
}

Uint32 UNIX_StorageRedundancySet::getMinNumberNeeded() const
{
	return _minNumberNeeded;
}

void UNIX_StorageRedundancySet::setMinNumberNeeded(Uint32 &value)
{
	_minNumberNeeded = value;
}

Boolean UNIX_StorageRedundancySet::getMaxNumberSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_SUPPORTED, getMaxNumberSupported());
	return true;
}

Uint32 UNIX_StorageRedundancySet::getMaxNumberSupported() const
{
	return _maxNumberSupported;
}

void UNIX_StorageRedundancySet::setMaxNumberSupported(Uint32 &value)
{
	_maxNumberSupported = value;
}

Boolean UNIX_StorageRedundancySet::getVendorIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_IDENTIFYING_INFO, getVendorIdentifyingInfo());
	return true;
}

String UNIX_StorageRedundancySet::getVendorIdentifyingInfo() const
{
	return _vendorIdentifyingInfo;
}

void UNIX_StorageRedundancySet::setVendorIdentifyingInfo(String &value)
{
	_vendorIdentifyingInfo = value;
}

Boolean UNIX_StorageRedundancySet::getOtherTypeOfSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_OF_SET, getOtherTypeOfSet());
	return true;
}

Array<String> UNIX_StorageRedundancySet::getOtherTypeOfSet() const
{
	return _otherTypeOfSet;
}

void UNIX_StorageRedundancySet::setOtherTypeOfSet(Array<String> &value)
{
	_otherTypeOfSet = value;
}

Boolean UNIX_StorageRedundancySet::getLoadBalanceAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_BALANCE_ALGORITHM, getLoadBalanceAlgorithm());
	return true;
}

Uint16 UNIX_StorageRedundancySet::getLoadBalanceAlgorithm() const
{
	return _loadBalanceAlgorithm;
}

void UNIX_StorageRedundancySet::setLoadBalanceAlgorithm(Uint16 &value)
{
	_loadBalanceAlgorithm = value;
}

Boolean UNIX_StorageRedundancySet::getOtherLoadBalanceAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOAD_BALANCE_ALGORITHM, getOtherLoadBalanceAlgorithm());
	return true;
}

String UNIX_StorageRedundancySet::getOtherLoadBalanceAlgorithm() const
{
	return _otherLoadBalanceAlgorithm;
}

void UNIX_StorageRedundancySet::setOtherLoadBalanceAlgorithm(String &value)
{
	_otherLoadBalanceAlgorithm = value;
}

Boolean UNIX_StorageRedundancySet::getTypeOfAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_ALGORITHM, getTypeOfAlgorithm());
	return true;
}

Uint16 UNIX_StorageRedundancySet::getTypeOfAlgorithm() const
{
	return _typeOfAlgorithm;
}

void UNIX_StorageRedundancySet::setTypeOfAlgorithm(Uint16 &value)
{
	_typeOfAlgorithm = value;
}

Boolean UNIX_StorageRedundancySet::getOtherAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ALGORITHM, getOtherAlgorithm());
	return true;
}

String UNIX_StorageRedundancySet::getOtherAlgorithm() const
{
	return _otherAlgorithm;
}

void UNIX_StorageRedundancySet::setOtherAlgorithm(String &value)
{
	_otherAlgorithm = value;
}


void UNIX_StorageRedundancySet::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageRedundancySet");
	_generation = Uint64(0);
	_redundancyStatus = Uint16(0);
	_typeOfSet.clear();
	_minNumberNeeded = Uint32(0);
	_maxNumberSupported = Uint32(0);
	_vendorIdentifyingInfo = String ("");
	_otherTypeOfSet.clear();
	_loadBalanceAlgorithm = Uint16(0);
	_otherLoadBalanceAlgorithm = String ("");
	_typeOfAlgorithm = Uint16(0);
	_otherAlgorithm = String ("");

}

Boolean UNIX_StorageRedundancySet::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "TypeOfAlgorithm"))
			{
				Uint16 typeOfAlgorithmValue;
				property.getValue().get(typeOfAlgorithmValue);
				setTypeOfAlgorithm(typeOfAlgorithmValue);
			}
			else if (String::equal(property.getName().getString(), "OtherAlgorithm"))
			{
				String otherAlgorithmValue;
				property.getValue().get(otherAlgorithmValue);
				setOtherAlgorithm(otherAlgorithmValue);
			}
	}
	return true;
}

Uint32 UNIX_StorageRedundancySet::invokeFailover(
		CIMInstance &inFailoverFrom,
		CIMInstance &inFailoverTo
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method Failover */
	
	
	
	return returnValue;
}


Boolean UNIX_StorageRedundancySet::initialize()
{
	return false;
}

Boolean UNIX_StorageRedundancySet::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("StorageRedundancySet");
	_generation = Uint64(0);
	_redundancyStatus = Uint16(0);
	_typeOfSet.clear();
	_minNumberNeeded = Uint32(0);
	_maxNumberSupported = Uint32(0);
	_vendorIdentifyingInfo = String ("");
	_otherTypeOfSet.clear();
	_loadBalanceAlgorithm = Uint16(0);
	_otherLoadBalanceAlgorithm = String ("");
	_typeOfAlgorithm = Uint16(0);
	_otherAlgorithm = String ("");
	
	return false;
}

Boolean UNIX_StorageRedundancySet::finalize()
{
	return false;
}


Boolean UNIX_StorageRedundancySet::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_StorageRedundancySet::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageRedundancySet::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageRedundancySet::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_StorageRedundancySet::validateInstance()
{
	return true;
}

