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


UNIX_IBPortStatistics::UNIX_IBPortStatistics(void)
{
}

UNIX_IBPortStatistics::~UNIX_IBPortStatistics(void)
{
}

Boolean UNIX_IBPortStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IBPortStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_IBPortStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_IBPortStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IBPortStatistics::getCaption() const
{
	return _caption;
}

void UNIX_IBPortStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_IBPortStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IBPortStatistics::getDescription() const
{
	return _description;
}

void UNIX_IBPortStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_IBPortStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IBPortStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_IBPortStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_IBPortStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_IBPortStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_IBPortStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_IBPortStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_IBPortStatistics::getStartStatisticTime() const
{
	return _startStatisticTime;
}

void UNIX_IBPortStatistics::setStartStatisticTime(CIMDateTime &value)
{
	_startStatisticTime = value;
}

Boolean UNIX_IBPortStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_IBPortStatistics::getStatisticTime() const
{
	return _statisticTime;
}

void UNIX_IBPortStatistics::setStatisticTime(CIMDateTime &value)
{
	_statisticTime = value;
}

Boolean UNIX_IBPortStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_IBPortStatistics::getSampleInterval() const
{
	return _sampleInterval;
}

void UNIX_IBPortStatistics::setSampleInterval(CIMDateTime &value)
{
	_sampleInterval = value;
}

Boolean UNIX_IBPortStatistics::getRateIntervalEndTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_END_TIME, getRateIntervalEndTime());
	return true;
}

CIMDateTime UNIX_IBPortStatistics::getRateIntervalEndTime() const
{
	return _rateIntervalEndTime;
}

void UNIX_IBPortStatistics::setRateIntervalEndTime(CIMDateTime &value)
{
	_rateIntervalEndTime = value;
}

Boolean UNIX_IBPortStatistics::getRateIntervalStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_INTERVAL_START_TIME, getRateIntervalStartTime());
	return true;
}

CIMDateTime UNIX_IBPortStatistics::getRateIntervalStartTime() const
{
	return _rateIntervalStartTime;
}

void UNIX_IBPortStatistics::setRateIntervalStartTime(CIMDateTime &value)
{
	_rateIntervalStartTime = value;
}

Boolean UNIX_IBPortStatistics::getBytesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_TRANSMITTED, getBytesTransmitted());
	return true;
}

Uint64 UNIX_IBPortStatistics::getBytesTransmitted() const
{
	return _bytesTransmitted;
}

void UNIX_IBPortStatistics::setBytesTransmitted(Uint64 &value)
{
	_bytesTransmitted = value;
}

Boolean UNIX_IBPortStatistics::getBytesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_RECEIVED, getBytesReceived());
	return true;
}

Uint64 UNIX_IBPortStatistics::getBytesReceived() const
{
	return _bytesReceived;
}

void UNIX_IBPortStatistics::setBytesReceived(Uint64 &value)
{
	_bytesReceived = value;
}

Boolean UNIX_IBPortStatistics::getPacketsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_TRANSMITTED, getPacketsTransmitted());
	return true;
}

Uint64 UNIX_IBPortStatistics::getPacketsTransmitted() const
{
	return _packetsTransmitted;
}

void UNIX_IBPortStatistics::setPacketsTransmitted(Uint64 &value)
{
	_packetsTransmitted = value;
}

Boolean UNIX_IBPortStatistics::getPacketsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_RECEIVED, getPacketsReceived());
	return true;
}

Uint64 UNIX_IBPortStatistics::getPacketsReceived() const
{
	return _packetsReceived;
}

void UNIX_IBPortStatistics::setPacketsReceived(Uint64 &value)
{
	_packetsReceived = value;
}

Boolean UNIX_IBPortStatistics::getSymbolErrorCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYMBOL_ERROR_COUNTER, getSymbolErrorCounter());
	return true;
}

Uint16 UNIX_IBPortStatistics::getSymbolErrorCounter() const
{
	return _symbolErrorCounter;
}

void UNIX_IBPortStatistics::setSymbolErrorCounter(Uint16 &value)
{
	_symbolErrorCounter = value;
}

Boolean UNIX_IBPortStatistics::getLinkErrorRecoveryCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_ERROR_RECOVERY_COUNTER, getLinkErrorRecoveryCounter());
	return true;
}

Uint16 UNIX_IBPortStatistics::getLinkErrorRecoveryCounter() const
{
	return _linkErrorRecoveryCounter;
}

void UNIX_IBPortStatistics::setLinkErrorRecoveryCounter(Uint16 &value)
{
	_linkErrorRecoveryCounter = value;
}

Boolean UNIX_IBPortStatistics::getLinkDownedCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_DOWNED_COUNTER, getLinkDownedCounter());
	return true;
}

Uint16 UNIX_IBPortStatistics::getLinkDownedCounter() const
{
	return _linkDownedCounter;
}

void UNIX_IBPortStatistics::setLinkDownedCounter(Uint16 &value)
{
	_linkDownedCounter = value;
}

Boolean UNIX_IBPortStatistics::getPortRcvErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_RCV_ERRORS, getPortRcvErrors());
	return true;
}

Uint16 UNIX_IBPortStatistics::getPortRcvErrors() const
{
	return _portRcvErrors;
}

void UNIX_IBPortStatistics::setPortRcvErrors(Uint16 &value)
{
	_portRcvErrors = value;
}

Boolean UNIX_IBPortStatistics::getPortRcvRemotePhysicalErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_RCV_REMOTE_PHYSICAL_ERRORS, getPortRcvRemotePhysicalErrors());
	return true;
}

Uint16 UNIX_IBPortStatistics::getPortRcvRemotePhysicalErrors() const
{
	return _portRcvRemotePhysicalErrors;
}

void UNIX_IBPortStatistics::setPortRcvRemotePhysicalErrors(Uint16 &value)
{
	_portRcvRemotePhysicalErrors = value;
}

Boolean UNIX_IBPortStatistics::getPortRcvSwitchRelayErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_RCV_SWITCH_RELAY_ERRORS, getPortRcvSwitchRelayErrors());
	return true;
}

Uint16 UNIX_IBPortStatistics::getPortRcvSwitchRelayErrors() const
{
	return _portRcvSwitchRelayErrors;
}

void UNIX_IBPortStatistics::setPortRcvSwitchRelayErrors(Uint16 &value)
{
	_portRcvSwitchRelayErrors = value;
}

Boolean UNIX_IBPortStatistics::getPortXmitDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_XMIT_DISCARDS, getPortXmitDiscards());
	return true;
}

Uint16 UNIX_IBPortStatistics::getPortXmitDiscards() const
{
	return _portXmitDiscards;
}

void UNIX_IBPortStatistics::setPortXmitDiscards(Uint16 &value)
{
	_portXmitDiscards = value;
}

Boolean UNIX_IBPortStatistics::getPortXmitConstraintErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_XMIT_CONSTRAINT_ERRORS, getPortXmitConstraintErrors());
	return true;
}

Uint16 UNIX_IBPortStatistics::getPortXmitConstraintErrors() const
{
	return _portXmitConstraintErrors;
}

void UNIX_IBPortStatistics::setPortXmitConstraintErrors(Uint16 &value)
{
	_portXmitConstraintErrors = value;
}

Boolean UNIX_IBPortStatistics::getPortRcvConstraintErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_RCV_CONSTRAINT_ERRORS, getPortRcvConstraintErrors());
	return true;
}

Uint16 UNIX_IBPortStatistics::getPortRcvConstraintErrors() const
{
	return _portRcvConstraintErrors;
}

void UNIX_IBPortStatistics::setPortRcvConstraintErrors(Uint16 &value)
{
	_portRcvConstraintErrors = value;
}

Boolean UNIX_IBPortStatistics::getLocalLinkIntegrityErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_LINK_INTEGRITY_ERRORS, getLocalLinkIntegrityErrors());
	return true;
}

Uint16 UNIX_IBPortStatistics::getLocalLinkIntegrityErrors() const
{
	return _localLinkIntegrityErrors;
}

void UNIX_IBPortStatistics::setLocalLinkIntegrityErrors(Uint16 &value)
{
	_localLinkIntegrityErrors = value;
}

Boolean UNIX_IBPortStatistics::getExcessiveBufferOverrunErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXCESSIVE_BUFFER_OVERRUN_ERRORS, getExcessiveBufferOverrunErrors());
	return true;
}

Uint16 UNIX_IBPortStatistics::getExcessiveBufferOverrunErrors() const
{
	return _excessiveBufferOverrunErrors;
}

void UNIX_IBPortStatistics::setExcessiveBufferOverrunErrors(Uint16 &value)
{
	_excessiveBufferOverrunErrors = value;
}

Boolean UNIX_IBPortStatistics::getVL15Dropped(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_V_L_1_5_DROPPED, getVL15Dropped());
	return true;
}

Uint16 UNIX_IBPortStatistics::getVL15Dropped() const
{
	return _vL15Dropped;
}

void UNIX_IBPortStatistics::setVL15Dropped(Uint16 &value)
{
	_vL15Dropped = value;
}


void UNIX_IBPortStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IBPortStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_bytesTransmitted = Uint64(0);
	_bytesReceived = Uint64(0);
	_packetsTransmitted = Uint64(0);
	_packetsReceived = Uint64(0);
	_symbolErrorCounter = Uint16(0);
	_linkErrorRecoveryCounter = Uint16(0);
	_linkDownedCounter = Uint16(0);
	_portRcvErrors = Uint16(0);
	_portRcvRemotePhysicalErrors = Uint16(0);
	_portRcvSwitchRelayErrors = Uint16(0);
	_portXmitDiscards = Uint16(0);
	_portXmitConstraintErrors = Uint16(0);
	_portRcvConstraintErrors = Uint16(0);
	_localLinkIntegrityErrors = Uint16(0);
	_excessiveBufferOverrunErrors = Uint16(0);
	_vL15Dropped = Uint16(0);

}

Boolean UNIX_IBPortStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "BytesTransmitted"))
			{
				Uint64 bytesTransmittedValue;
				property.getValue().get(bytesTransmittedValue);
				setBytesTransmitted(bytesTransmittedValue);
			}
			else if (String::equal(property.getName().getString(), "BytesReceived"))
			{
				Uint64 bytesReceivedValue;
				property.getValue().get(bytesReceivedValue);
				setBytesReceived(bytesReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "PacketsTransmitted"))
			{
				Uint64 packetsTransmittedValue;
				property.getValue().get(packetsTransmittedValue);
				setPacketsTransmitted(packetsTransmittedValue);
			}
			else if (String::equal(property.getName().getString(), "PacketsReceived"))
			{
				Uint64 packetsReceivedValue;
				property.getValue().get(packetsReceivedValue);
				setPacketsReceived(packetsReceivedValue);
			}
			else if (String::equal(property.getName().getString(), "SymbolErrorCounter"))
			{
				Uint16 symbolErrorCounterValue;
				property.getValue().get(symbolErrorCounterValue);
				setSymbolErrorCounter(symbolErrorCounterValue);
			}
			else if (String::equal(property.getName().getString(), "LinkErrorRecoveryCounter"))
			{
				Uint16 linkErrorRecoveryCounterValue;
				property.getValue().get(linkErrorRecoveryCounterValue);
				setLinkErrorRecoveryCounter(linkErrorRecoveryCounterValue);
			}
			else if (String::equal(property.getName().getString(), "LinkDownedCounter"))
			{
				Uint16 linkDownedCounterValue;
				property.getValue().get(linkDownedCounterValue);
				setLinkDownedCounter(linkDownedCounterValue);
			}
			else if (String::equal(property.getName().getString(), "PortRcvErrors"))
			{
				Uint16 portRcvErrorsValue;
				property.getValue().get(portRcvErrorsValue);
				setPortRcvErrors(portRcvErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "PortRcvRemotePhysicalErrors"))
			{
				Uint16 portRcvRemotePhysicalErrorsValue;
				property.getValue().get(portRcvRemotePhysicalErrorsValue);
				setPortRcvRemotePhysicalErrors(portRcvRemotePhysicalErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "PortRcvSwitchRelayErrors"))
			{
				Uint16 portRcvSwitchRelayErrorsValue;
				property.getValue().get(portRcvSwitchRelayErrorsValue);
				setPortRcvSwitchRelayErrors(portRcvSwitchRelayErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "PortXmitDiscards"))
			{
				Uint16 portXmitDiscardsValue;
				property.getValue().get(portXmitDiscardsValue);
				setPortXmitDiscards(portXmitDiscardsValue);
			}
			else if (String::equal(property.getName().getString(), "PortXmitConstraintErrors"))
			{
				Uint16 portXmitConstraintErrorsValue;
				property.getValue().get(portXmitConstraintErrorsValue);
				setPortXmitConstraintErrors(portXmitConstraintErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "PortRcvConstraintErrors"))
			{
				Uint16 portRcvConstraintErrorsValue;
				property.getValue().get(portRcvConstraintErrorsValue);
				setPortRcvConstraintErrors(portRcvConstraintErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "LocalLinkIntegrityErrors"))
			{
				Uint16 localLinkIntegrityErrorsValue;
				property.getValue().get(localLinkIntegrityErrorsValue);
				setLocalLinkIntegrityErrors(localLinkIntegrityErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "ExcessiveBufferOverrunErrors"))
			{
				Uint16 excessiveBufferOverrunErrorsValue;
				property.getValue().get(excessiveBufferOverrunErrorsValue);
				setExcessiveBufferOverrunErrors(excessiveBufferOverrunErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "VL15Dropped"))
			{
				Uint16 vL15DroppedValue;
				property.getValue().get(vL15DroppedValue);
				setVL15Dropped(vL15DroppedValue);
			}
	}
	return true;
}

Uint32 UNIX_IBPortStatistics::invokeResetSelectedStats(
		Array<String> &inSelectedStatistics
	)
{
	Uint32 returnValue = Uint32(0);
	
	/* Execute method ResetSelectedStats */
	
	
	
	return returnValue;
}


Boolean UNIX_IBPortStatistics::initialize()
{
	return false;
}

Boolean UNIX_IBPortStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("IBPortStatistics");
	_generation = Uint64(0);
	_startStatisticTime = CIMHelper::getCurrentTime();
	_statisticTime = CIMHelper::getCurrentTime();
	_sampleInterval = CIMHelper::getCurrentTime();
	_rateIntervalEndTime = CIMHelper::getCurrentTime();
	_rateIntervalStartTime = CIMHelper::getCurrentTime();
	_bytesTransmitted = Uint64(0);
	_bytesReceived = Uint64(0);
	_packetsTransmitted = Uint64(0);
	_packetsReceived = Uint64(0);
	_symbolErrorCounter = Uint16(0);
	_linkErrorRecoveryCounter = Uint16(0);
	_linkDownedCounter = Uint16(0);
	_portRcvErrors = Uint16(0);
	_portRcvRemotePhysicalErrors = Uint16(0);
	_portRcvSwitchRelayErrors = Uint16(0);
	_portXmitDiscards = Uint16(0);
	_portXmitConstraintErrors = Uint16(0);
	_portRcvConstraintErrors = Uint16(0);
	_localLinkIntegrityErrors = Uint16(0);
	_excessiveBufferOverrunErrors = Uint16(0);
	_vL15Dropped = Uint16(0);
	
	return false;
}

Boolean UNIX_IBPortStatistics::finalize()
{
	return false;
}


Boolean UNIX_IBPortStatistics::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_IBPortStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IBPortStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IBPortStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_IBPortStatistics::validateInstance()
{
	return true;
}

