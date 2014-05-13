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


UNIX_IPEndpointStatistics::UNIX_IPEndpointStatistics(void)
{
}

UNIX_IPEndpointStatistics::~UNIX_IPEndpointStatistics(void)
{
}

Boolean UNIX_IPEndpointStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPEndpointStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IPEndpointStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IPEndpointStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPEndpointStatistics::getCaption() const
{
	return _caption;
}

void UNIX_IPEndpointStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IPEndpointStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPEndpointStatistics::getDescription() const
{
	return _description;
}

void UNIX_IPEndpointStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IPEndpointStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPEndpointStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_IPEndpointStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IPEndpointStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IPEndpointStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_IPEndpointStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IPEndpointStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_IPEndpointStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_IPEndpointStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_IPEndpointStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_IPEndpointStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_IPEndpointStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_IPEndpointStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_IPEndpointStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_IPEndpointStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_IPEndpointStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_IPEndpointStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_IPEndpointStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_IPEndpointStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_IPEndpointStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_IPEndpointStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_IPEndpointStatistics::getReceivedPDUs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVED_P_D_US, getReceivedPDUs());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getReceivedPDUs() const
{
	return _receivedPDUs;
}

void UNIX_IPEndpointStatistics::setReceivedPDUs(Uint32 &value)
{
	_receivedPDUs = value;
}

Boolean UNIX_IPEndpointStatistics::getReceivedPDUHeaderErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVED_P_D_U_HEADER_ERRORS, getReceivedPDUHeaderErrors());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getReceivedPDUHeaderErrors() const
{
	return _receivedPDUHeaderErrors;
}

void UNIX_IPEndpointStatistics::setReceivedPDUHeaderErrors(Uint32 &value)
{
	_receivedPDUHeaderErrors = value;
}

Boolean UNIX_IPEndpointStatistics::getReceivedPDUAddressErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVED_P_D_U_ADDRESS_ERRORS, getReceivedPDUAddressErrors());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getReceivedPDUAddressErrors() const
{
	return _receivedPDUAddressErrors;
}

void UNIX_IPEndpointStatistics::setReceivedPDUAddressErrors(Uint32 &value)
{
	_receivedPDUAddressErrors = value;
}

Boolean UNIX_IPEndpointStatistics::getSentPDUs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENT_P_D_US, getSentPDUs());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getSentPDUs() const
{
	return _sentPDUs;
}

void UNIX_IPEndpointStatistics::setSentPDUs(Uint32 &value)
{
	_sentPDUs = value;
}

Boolean UNIX_IPEndpointStatistics::getReceivedPDUForwards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVED_P_D_U_FORWARDS, getReceivedPDUForwards());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getReceivedPDUForwards() const
{
	return _receivedPDUForwards;
}

void UNIX_IPEndpointStatistics::setReceivedPDUForwards(Uint32 &value)
{
	_receivedPDUForwards = value;
}

Boolean UNIX_IPEndpointStatistics::getReceivedPDUUnknownProtocolErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVED_P_D_U_UNKNOWN_PROTOCOL_ERRORS, getReceivedPDUUnknownProtocolErrors());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getReceivedPDUUnknownProtocolErrors() const
{
	return _receivedPDUUnknownProtocolErrors;
}

void UNIX_IPEndpointStatistics::setReceivedPDUUnknownProtocolErrors(Uint32 &value)
{
	_receivedPDUUnknownProtocolErrors = value;
}

Boolean UNIX_IPEndpointStatistics::getReceivedPDUDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVED_P_D_U_DISCARDS, getReceivedPDUDiscards());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getReceivedPDUDiscards() const
{
	return _receivedPDUDiscards;
}

void UNIX_IPEndpointStatistics::setReceivedPDUDiscards(Uint32 &value)
{
	_receivedPDUDiscards = value;
}

Boolean UNIX_IPEndpointStatistics::getPDUDelivers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_D_U_DELIVERS, getPDUDelivers());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getPDUDelivers() const
{
	return _pDUDelivers;
}

void UNIX_IPEndpointStatistics::setPDUDelivers(Uint32 &value)
{
	_pDUDelivers = value;
}

Boolean UNIX_IPEndpointStatistics::getSentPDUDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENT_P_D_U_DISCARDS, getSentPDUDiscards());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getSentPDUDiscards() const
{
	return _sentPDUDiscards;
}

void UNIX_IPEndpointStatistics::setSentPDUDiscards(Uint32 &value)
{
	_sentPDUDiscards = value;
}

Boolean UNIX_IPEndpointStatistics::getSentPDUNoRouteErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENT_P_D_U_NO_ROUTE_ERRORS, getSentPDUNoRouteErrors());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getSentPDUNoRouteErrors() const
{
	return _sentPDUNoRouteErrors;
}

void UNIX_IPEndpointStatistics::setSentPDUNoRouteErrors(Uint32 &value)
{
	_sentPDUNoRouteErrors = value;
}

Boolean UNIX_IPEndpointStatistics::getReassemblyRequired(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REASSEMBLY_REQUIRED, getReassemblyRequired());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getReassemblyRequired() const
{
	return _reassemblyRequired;
}

void UNIX_IPEndpointStatistics::setReassemblyRequired(Uint32 &value)
{
	_reassemblyRequired = value;
}

Boolean UNIX_IPEndpointStatistics::getReassembledPackets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REASSEMBLED_PACKETS, getReassembledPackets());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getReassembledPackets() const
{
	return _reassembledPackets;
}

void UNIX_IPEndpointStatistics::setReassembledPackets(Uint32 &value)
{
	_reassembledPackets = value;
}

Boolean UNIX_IPEndpointStatistics::getReassemblyFailed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REASSEMBLY_FAILED, getReassemblyFailed());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getReassemblyFailed() const
{
	return _reassemblyFailed;
}

void UNIX_IPEndpointStatistics::setReassemblyFailed(Uint32 &value)
{
	_reassemblyFailed = value;
}

Boolean UNIX_IPEndpointStatistics::getFragmentation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAGMENTATION, getFragmentation());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getFragmentation() const
{
	return _fragmentation;
}

void UNIX_IPEndpointStatistics::setFragmentation(Uint32 &value)
{
	_fragmentation = value;
}

Boolean UNIX_IPEndpointStatistics::getFragmentationFails(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAGMENTATION_FAILS, getFragmentationFails());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getFragmentationFails() const
{
	return _fragmentationFails;
}

void UNIX_IPEndpointStatistics::setFragmentationFails(Uint32 &value)
{
	_fragmentationFails = value;
}

Boolean UNIX_IPEndpointStatistics::getFragmentedPDUsCreates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAGMENTED_P_D_US_CREATES, getFragmentedPDUsCreates());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getFragmentedPDUsCreates() const
{
	return _fragmentedPDUsCreates;
}

void UNIX_IPEndpointStatistics::setFragmentedPDUsCreates(Uint32 &value)
{
	_fragmentedPDUsCreates = value;
}

Boolean UNIX_IPEndpointStatistics::getRouteEntriesDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROUTE_ENTRIES_DISCARDS, getRouteEntriesDiscards());
	return true;
}

Uint32 UNIX_IPEndpointStatistics::getRouteEntriesDiscards() const
{
	return _routeEntriesDiscards;
}

void UNIX_IPEndpointStatistics::setRouteEntriesDiscards(Uint32 &value)
{
	_routeEntriesDiscards = value;
}


void UNIX_IPEndpointStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPEndpointStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_receivedPDUs = Uint32(0);
	_receivedPDUHeaderErrors = Uint32(0);
	_receivedPDUAddressErrors = Uint32(0);
	_sentPDUs = Uint32(0);
	_receivedPDUForwards = Uint32(0);
	_receivedPDUUnknownProtocolErrors = Uint32(0);
	_receivedPDUDiscards = Uint32(0);
	_pDUDelivers = Uint32(0);
	_sentPDUDiscards = Uint32(0);
	_sentPDUNoRouteErrors = Uint32(0);
	_reassemblyRequired = Uint32(0);
	_reassembledPackets = Uint32(0);
	_reassemblyFailed = Uint32(0);
	_fragmentation = Uint32(0);
	_fragmentationFails = Uint32(0);
	_fragmentedPDUsCreates = Uint32(0);
	_routeEntriesDiscards = Uint32(0);

}

Boolean UNIX_IPEndpointStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "StartStatisticTime"))
			{
				CIMDateTime startStatisticTimeValue;
				property.getValue().get(startStatisticTimeValue);
				setStartStatisticTime(startStatisticTimeValue);
			}
			else if (String::equal(property.getName().getString(), "StatisticTime"))
			{
				CIMDateTime statisticTimeValue;
				property.getValue().get(statisticTimeValue);
				setStatisticTime(statisticTimeValue);
			}
			else if (String::equal(property.getName().getString(), "SampleInterval"))
			{
				CIMDateTime sampleIntervalValue;
				property.getValue().get(sampleIntervalValue);
				setSampleInterval(sampleIntervalValue);
			}
			else if (String::equal(property.getName().getString(), "RateIntervalEndTime"))
			{
				CIMDateTime rateIntervalEndTimeValue;
				property.getValue().get(rateIntervalEndTimeValue);
				setRateIntervalEndTime(rateIntervalEndTimeValue);
			}
			else if (String::equal(property.getName().getString(), "RateIntervalStartTime"))
			{
				CIMDateTime rateIntervalStartTimeValue;
				property.getValue().get(rateIntervalStartTimeValue);
				setRateIntervalStartTime(rateIntervalStartTimeValue);
			}
			else if (String::equal(property.getName().getString(), "ReceivedPDUs"))
			{
				Uint32 receivedPDUsValue;
				property.getValue().get(receivedPDUsValue);
				setReceivedPDUs(receivedPDUsValue);
			}
			else if (String::equal(property.getName().getString(), "ReceivedPDUHeaderErrors"))
			{
				Uint32 receivedPDUHeaderErrorsValue;
				property.getValue().get(receivedPDUHeaderErrorsValue);
				setReceivedPDUHeaderErrors(receivedPDUHeaderErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "ReceivedPDUAddressErrors"))
			{
				Uint32 receivedPDUAddressErrorsValue;
				property.getValue().get(receivedPDUAddressErrorsValue);
				setReceivedPDUAddressErrors(receivedPDUAddressErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "SentPDUs"))
			{
				Uint32 sentPDUsValue;
				property.getValue().get(sentPDUsValue);
				setSentPDUs(sentPDUsValue);
			}
			else if (String::equal(property.getName().getString(), "ReceivedPDUForwards"))
			{
				Uint32 receivedPDUForwardsValue;
				property.getValue().get(receivedPDUForwardsValue);
				setReceivedPDUForwards(receivedPDUForwardsValue);
			}
			else if (String::equal(property.getName().getString(), "ReceivedPDUUnknownProtocolErrors"))
			{
				Uint32 receivedPDUUnknownProtocolErrorsValue;
				property.getValue().get(receivedPDUUnknownProtocolErrorsValue);
				setReceivedPDUUnknownProtocolErrors(receivedPDUUnknownProtocolErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "ReceivedPDUDiscards"))
			{
				Uint32 receivedPDUDiscardsValue;
				property.getValue().get(receivedPDUDiscardsValue);
				setReceivedPDUDiscards(receivedPDUDiscardsValue);
			}
			else if (String::equal(property.getName().getString(), "PDUDelivers"))
			{
				Uint32 pDUDeliversValue;
				property.getValue().get(pDUDeliversValue);
				setPDUDelivers(pDUDeliversValue);
			}
			else if (String::equal(property.getName().getString(), "SentPDUDiscards"))
			{
				Uint32 sentPDUDiscardsValue;
				property.getValue().get(sentPDUDiscardsValue);
				setSentPDUDiscards(sentPDUDiscardsValue);
			}
			else if (String::equal(property.getName().getString(), "SentPDUNoRouteErrors"))
			{
				Uint32 sentPDUNoRouteErrorsValue;
				property.getValue().get(sentPDUNoRouteErrorsValue);
				setSentPDUNoRouteErrors(sentPDUNoRouteErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "ReassemblyRequired"))
			{
				Uint32 reassemblyRequiredValue;
				property.getValue().get(reassemblyRequiredValue);
				setReassemblyRequired(reassemblyRequiredValue);
			}
			else if (String::equal(property.getName().getString(), "ReassembledPackets"))
			{
				Uint32 reassembledPacketsValue;
				property.getValue().get(reassembledPacketsValue);
				setReassembledPackets(reassembledPacketsValue);
			}
			else if (String::equal(property.getName().getString(), "ReassemblyFailed"))
			{
				Uint32 reassemblyFailedValue;
				property.getValue().get(reassemblyFailedValue);
				setReassemblyFailed(reassemblyFailedValue);
			}
			else if (String::equal(property.getName().getString(), "Fragmentation"))
			{
				Uint32 fragmentationValue;
				property.getValue().get(fragmentationValue);
				setFragmentation(fragmentationValue);
			}
			else if (String::equal(property.getName().getString(), "FragmentationFails"))
			{
				Uint32 fragmentationFailsValue;
				property.getValue().get(fragmentationFailsValue);
				setFragmentationFails(fragmentationFailsValue);
			}
			else if (String::equal(property.getName().getString(), "FragmentedPDUsCreates"))
			{
				Uint32 fragmentedPDUsCreatesValue;
				property.getValue().get(fragmentedPDUsCreatesValue);
				setFragmentedPDUsCreates(fragmentedPDUsCreatesValue);
			}
			else if (String::equal(property.getName().getString(), "RouteEntriesDiscards"))
			{
				Uint32 routeEntriesDiscardsValue;
				property.getValue().get(routeEntriesDiscardsValue);
				setRouteEntriesDiscards(routeEntriesDiscardsValue);
			}
	}
	return true;
}

Uint32 UNIX_IPEndpointStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_IPEndpointStatistics::initialize()
{
	return false;
}

Boolean UNIX_IPEndpointStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IPEndpointStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_receivedPDUs = Uint32(0);
	_receivedPDUHeaderErrors = Uint32(0);
	_receivedPDUAddressErrors = Uint32(0);
	_sentPDUs = Uint32(0);
	_receivedPDUForwards = Uint32(0);
	_receivedPDUUnknownProtocolErrors = Uint32(0);
	_receivedPDUDiscards = Uint32(0);
	_pDUDelivers = Uint32(0);
	_sentPDUDiscards = Uint32(0);
	_sentPDUNoRouteErrors = Uint32(0);
	_reassemblyRequired = Uint32(0);
	_reassembledPackets = Uint32(0);
	_reassemblyFailed = Uint32(0);
	_fragmentation = Uint32(0);
	_fragmentationFails = Uint32(0);
	_fragmentedPDUsCreates = Uint32(0);
	_routeEntriesDiscards = Uint32(0);
	
	return false;
}

Boolean UNIX_IPEndpointStatistics::finalize()
{
	return false;
}


Boolean UNIX_IPEndpointStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IPEndpointStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPEndpointStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPEndpointStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IPEndpointStatistics::validateInstance()
{
	return true;
}

