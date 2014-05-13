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


UNIX_SwitchPortSourceRoutingStatistics::UNIX_SwitchPortSourceRoutingStatistics(void)
{
}

UNIX_SwitchPortSourceRoutingStatistics::~UNIX_SwitchPortSourceRoutingStatistics(void)
{
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SwitchPortSourceRoutingStatistics::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getCaption() const
{
	return _caption;
}

void UNIX_SwitchPortSourceRoutingStatistics::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getDescription() const
{
	return _description;
}

void UNIX_SwitchPortSourceRoutingStatistics::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getElementName() const
{
	return _elementName;
}

void UNIX_SwitchPortSourceRoutingStatistics::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SwitchPortSourceRoutingStatistics::getGeneration() const
{
	return _generation;
}

void UNIX_SwitchPortSourceRoutingStatistics::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getName() const
{
	return _name;
}

void UNIX_SwitchPortSourceRoutingStatistics::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getSystemCreationClassName() const
{
	return _systemCreationClassName;
}

void UNIX_SwitchPortSourceRoutingStatistics::setSystemCreationClassName(String &value)
{
	_systemCreationClassName = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getSystemName() const
{
	return _systemName;
}

void UNIX_SwitchPortSourceRoutingStatistics::setSystemName(String &value)
{
	_systemName = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSAPCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAP_CREATION_CLASS_NAME, getSAPCreationClassName());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getSAPCreationClassName() const
{
	return _sAPCreationClassName;
}

void UNIX_SwitchPortSourceRoutingStatistics::setSAPCreationClassName(String &value)
{
	_sAPCreationClassName = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSAPName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAP_NAME, getSAPName());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getSAPName() const
{
	return _sAPName;
}

void UNIX_SwitchPortSourceRoutingStatistics::setSAPName(String &value)
{
	_sAPName = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getCreationClassName() const
{
	return _creationClassName;
}

void UNIX_SwitchPortSourceRoutingStatistics::setCreationClassName(String &value)
{
	_creationClassName = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSpecInFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEC_IN_FRAMES, getSpecInFrames());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getSpecInFrames() const
{
	return _specInFrames;
}

void UNIX_SwitchPortSourceRoutingStatistics::setSpecInFrames(Uint32 &value)
{
	_specInFrames = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSpecOutFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEC_OUT_FRAMES, getSpecOutFrames());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getSpecOutFrames() const
{
	return _specOutFrames;
}

void UNIX_SwitchPortSourceRoutingStatistics::setSpecOutFrames(Uint32 &value)
{
	_specOutFrames = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getApeInFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APE_IN_FRAMES, getApeInFrames());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getApeInFrames() const
{
	return _apeInFrames;
}

void UNIX_SwitchPortSourceRoutingStatistics::setApeInFrames(Uint32 &value)
{
	_apeInFrames = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getApeOutFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APE_OUT_FRAMES, getApeOutFrames());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getApeOutFrames() const
{
	return _apeOutFrames;
}

void UNIX_SwitchPortSourceRoutingStatistics::setApeOutFrames(Uint32 &value)
{
	_apeOutFrames = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSteInFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STE_IN_FRAMES, getSteInFrames());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getSteInFrames() const
{
	return _steInFrames;
}

void UNIX_SwitchPortSourceRoutingStatistics::setSteInFrames(Uint32 &value)
{
	_steInFrames = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSteOutFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STE_OUT_FRAMES, getSteOutFrames());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getSteOutFrames() const
{
	return _steOutFrames;
}

void UNIX_SwitchPortSourceRoutingStatistics::setSteOutFrames(Uint32 &value)
{
	_steOutFrames = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSegmentMismatchDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEGMENT_MISMATCH_DISCARDS, getSegmentMismatchDiscards());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getSegmentMismatchDiscards() const
{
	return _segmentMismatchDiscards;
}

void UNIX_SwitchPortSourceRoutingStatistics::setSegmentMismatchDiscards(Uint32 &value)
{
	_segmentMismatchDiscards = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getDuplicateSegmentDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DUPLICATE_SEGMENT_DISCARDS, getDuplicateSegmentDiscards());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getDuplicateSegmentDiscards() const
{
	return _duplicateSegmentDiscards;
}

void UNIX_SwitchPortSourceRoutingStatistics::setDuplicateSegmentDiscards(Uint32 &value)
{
	_duplicateSegmentDiscards = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getHopCountExceedsDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOP_COUNT_EXCEEDS_DISCARDS, getHopCountExceedsDiscards());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getHopCountExceedsDiscards() const
{
	return _hopCountExceedsDiscards;
}

void UNIX_SwitchPortSourceRoutingStatistics::setHopCountExceedsDiscards(Uint32 &value)
{
	_hopCountExceedsDiscards = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getDupLanIdOrTreeErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DUP_LAN_ID_OR_TREE_ERRORS, getDupLanIdOrTreeErrors());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getDupLanIdOrTreeErrors() const
{
	return _dupLanIdOrTreeErrors;
}

void UNIX_SwitchPortSourceRoutingStatistics::setDupLanIdOrTreeErrors(Uint32 &value)
{
	_dupLanIdOrTreeErrors = value;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getLanIdMismatches(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAN_ID_MISMATCHES, getLanIdMismatches());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getLanIdMismatches() const
{
	return _lanIdMismatches;
}

void UNIX_SwitchPortSourceRoutingStatistics::setLanIdMismatches(Uint32 &value)
{
	_lanIdMismatches = value;
}


void UNIX_SwitchPortSourceRoutingStatistics::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SwitchPortSourceRoutingStatistics");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_sAPCreationClassName = String ("");
	_sAPName = String ("");
	_creationClassName = String("UNIX_SwitchPortSourceRoutingStatistics");
	_specInFrames = Uint32(0);
	_specOutFrames = Uint32(0);
	_apeInFrames = Uint32(0);
	_apeOutFrames = Uint32(0);
	_steInFrames = Uint32(0);
	_steOutFrames = Uint32(0);
	_segmentMismatchDiscards = Uint32(0);
	_duplicateSegmentDiscards = Uint32(0);
	_hopCountExceedsDiscards = Uint32(0);
	_dupLanIdOrTreeErrors = Uint32(0);
	_lanIdMismatches = Uint32(0);

}

Boolean UNIX_SwitchPortSourceRoutingStatistics::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemCreationClassName"))
			{
				String systemCreationClassNameValue;
				property.getValue().get(systemCreationClassNameValue);
				setSystemCreationClassName(systemCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SystemName"))
			{
				String systemNameValue;
				property.getValue().get(systemNameValue);
				setSystemName(systemNameValue);
			}
			else if (String::equal(property.getName().getString(), "SAPCreationClassName"))
			{
				String sAPCreationClassNameValue;
				property.getValue().get(sAPCreationClassNameValue);
				setSAPCreationClassName(sAPCreationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SAPName"))
			{
				String sAPNameValue;
				property.getValue().get(sAPNameValue);
				setSAPName(sAPNameValue);
			}
			else if (String::equal(property.getName().getString(), "CreationClassName"))
			{
				String creationClassNameValue;
				property.getValue().get(creationClassNameValue);
				setCreationClassName(creationClassNameValue);
			}
			else if (String::equal(property.getName().getString(), "SpecInFrames"))
			{
				Uint32 specInFramesValue;
				property.getValue().get(specInFramesValue);
				setSpecInFrames(specInFramesValue);
			}
			else if (String::equal(property.getName().getString(), "SpecOutFrames"))
			{
				Uint32 specOutFramesValue;
				property.getValue().get(specOutFramesValue);
				setSpecOutFrames(specOutFramesValue);
			}
			else if (String::equal(property.getName().getString(), "ApeInFrames"))
			{
				Uint32 apeInFramesValue;
				property.getValue().get(apeInFramesValue);
				setApeInFrames(apeInFramesValue);
			}
			else if (String::equal(property.getName().getString(), "ApeOutFrames"))
			{
				Uint32 apeOutFramesValue;
				property.getValue().get(apeOutFramesValue);
				setApeOutFrames(apeOutFramesValue);
			}
			else if (String::equal(property.getName().getString(), "SteInFrames"))
			{
				Uint32 steInFramesValue;
				property.getValue().get(steInFramesValue);
				setSteInFrames(steInFramesValue);
			}
			else if (String::equal(property.getName().getString(), "SteOutFrames"))
			{
				Uint32 steOutFramesValue;
				property.getValue().get(steOutFramesValue);
				setSteOutFrames(steOutFramesValue);
			}
			else if (String::equal(property.getName().getString(), "SegmentMismatchDiscards"))
			{
				Uint32 segmentMismatchDiscardsValue;
				property.getValue().get(segmentMismatchDiscardsValue);
				setSegmentMismatchDiscards(segmentMismatchDiscardsValue);
			}
			else if (String::equal(property.getName().getString(), "DuplicateSegmentDiscards"))
			{
				Uint32 duplicateSegmentDiscardsValue;
				property.getValue().get(duplicateSegmentDiscardsValue);
				setDuplicateSegmentDiscards(duplicateSegmentDiscardsValue);
			}
			else if (String::equal(property.getName().getString(), "HopCountExceedsDiscards"))
			{
				Uint32 hopCountExceedsDiscardsValue;
				property.getValue().get(hopCountExceedsDiscardsValue);
				setHopCountExceedsDiscards(hopCountExceedsDiscardsValue);
			}
			else if (String::equal(property.getName().getString(), "DupLanIdOrTreeErrors"))
			{
				Uint32 dupLanIdOrTreeErrorsValue;
				property.getValue().get(dupLanIdOrTreeErrorsValue);
				setDupLanIdOrTreeErrors(dupLanIdOrTreeErrorsValue);
			}
			else if (String::equal(property.getName().getString(), "LanIdMismatches"))
			{
				Uint32 lanIdMismatchesValue;
				property.getValue().get(lanIdMismatchesValue);
				setLanIdMismatches(lanIdMismatchesValue);
			}
	}
	return true;
}


Boolean UNIX_SwitchPortSourceRoutingStatistics::initialize()
{
	return false;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SwitchPortSourceRoutingStatistics");
	_generation = Uint64(0);
	_name = String ("");
	_systemCreationClassName = String("UNIX_ComputerSystem");
	_systemName = CIMHelper::HostName;
	_sAPCreationClassName = String ("");
	_sAPName = String ("");
	_creationClassName = String("UNIX_SwitchPortSourceRoutingStatistics");
	_specInFrames = Uint32(0);
	_specOutFrames = Uint32(0);
	_apeInFrames = Uint32(0);
	_apeOutFrames = Uint32(0);
	_steInFrames = Uint32(0);
	_steOutFrames = Uint32(0);
	_segmentMismatchDiscards = Uint32(0);
	_duplicateSegmentDiscards = Uint32(0);
	_hopCountExceedsDiscards = Uint32(0);
	_dupLanIdOrTreeErrors = Uint32(0);
	_lanIdMismatches = Uint32(0);
	
	return false;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::finalize()
{
	return false;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String sAPCreationClassNameKey;
	String sAPNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SAP_CREATION_CLASS_NAME)) sAPCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SAP_NAME)) sAPNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getSystemCreationClassName(), systemCreationClassNameKey)) && 
			(String::equalNoCase(getSystemName(), systemNameKey)) && 
			(String::equalNoCase(getSAPCreationClassName(), sAPCreationClassNameKey)) && 
			(String::equalNoCase(getSAPName(), sAPNameKey)) && 
			(String::equalNoCase(getCreationClassName(), creationClassNameKey)) && 
			(String::equalNoCase(getName(), nameKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::validateInstance()
{
	return true;
}

