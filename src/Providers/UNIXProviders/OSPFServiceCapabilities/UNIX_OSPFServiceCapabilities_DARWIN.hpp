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


UNIX_OSPFServiceCapabilities::UNIX_OSPFServiceCapabilities(void)
{
}

UNIX_OSPFServiceCapabilities::~UNIX_OSPFServiceCapabilities(void)
{
}

Boolean UNIX_OSPFServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OSPFServiceCapabilities::getInstanceID() const
{
	return _instanceID;
}

void UNIX_OSPFServiceCapabilities::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_OSPFServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OSPFServiceCapabilities::getCaption() const
{
	return _caption;
}

void UNIX_OSPFServiceCapabilities::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_OSPFServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OSPFServiceCapabilities::getDescription() const
{
	return _description;
}

void UNIX_OSPFServiceCapabilities::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_OSPFServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OSPFServiceCapabilities::getElementName() const
{
	return _elementName;
}

void UNIX_OSPFServiceCapabilities::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_OSPFServiceCapabilities::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_OSPFServiceCapabilities::getGeneration() const
{
	return _generation;
}

void UNIX_OSPFServiceCapabilities::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_OSPFServiceCapabilities::getSupportNSSA(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORT_N_SSA, getSupportNSSA());
	return true;
}

Boolean UNIX_OSPFServiceCapabilities::getSupportNSSA() const
{
	return _supportNSSA;
}

void UNIX_OSPFServiceCapabilities::setSupportNSSA(Boolean &value)
{
	_supportNSSA = value;
}

Boolean UNIX_OSPFServiceCapabilities::getSupportOnDemand(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORT_ON_DEMAND, getSupportOnDemand());
	return true;
}

Boolean UNIX_OSPFServiceCapabilities::getSupportOnDemand() const
{
	return _supportOnDemand;
}

void UNIX_OSPFServiceCapabilities::setSupportOnDemand(Boolean &value)
{
	_supportOnDemand = value;
}

Boolean UNIX_OSPFServiceCapabilities::getSupportMOSPF(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORT_M_OSPF, getSupportMOSPF());
	return true;
}

Boolean UNIX_OSPFServiceCapabilities::getSupportMOSPF() const
{
	return _supportMOSPF;
}

void UNIX_OSPFServiceCapabilities::setSupportMOSPF(Boolean &value)
{
	_supportMOSPF = value;
}


void UNIX_OSPFServiceCapabilities::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSPFServiceCapabilities");
	_generation = Uint64(0);
	_supportNSSA = Boolean(false);
	_supportOnDemand = Boolean(false);
	_supportMOSPF = Boolean(false);

}

Boolean UNIX_OSPFServiceCapabilities::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "SupportNSSA"))
			{
				Boolean supportNSSAValue;
				property.getValue().get(supportNSSAValue);
				setSupportNSSA(supportNSSAValue);
			}
			else if (String::equal(property.getName().getString(), "SupportOnDemand"))
			{
				Boolean supportOnDemandValue;
				property.getValue().get(supportOnDemandValue);
				setSupportOnDemand(supportOnDemandValue);
			}
			else if (String::equal(property.getName().getString(), "SupportMOSPF"))
			{
				Boolean supportMOSPFValue;
				property.getValue().get(supportMOSPFValue);
				setSupportMOSPF(supportMOSPFValue);
			}
	}
	return true;
}

Uint16 UNIX_OSPFServiceCapabilities::invokeCreateGoalSettings(
		Array<String> &inTemplateGoalSettings,
		Array<String> &inSupportedGoalSettings
	)
{
	Uint16 returnValue = Uint16(0);
	
	/* Execute method CreateGoalSettings */
	
	
	
	return returnValue;
}


Boolean UNIX_OSPFServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_OSPFServiceCapabilities::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("OSPFServiceCapabilities");
	_generation = Uint64(0);
	_supportNSSA = Boolean(false);
	_supportOnDemand = Boolean(false);
	_supportMOSPF = Boolean(false);
	
	return false;
}

Boolean UNIX_OSPFServiceCapabilities::finalize()
{
	return false;
}


Boolean UNIX_OSPFServiceCapabilities::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_OSPFServiceCapabilities::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFServiceCapabilities::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFServiceCapabilities::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_OSPFServiceCapabilities::validateInstance()
{
	return true;
}

