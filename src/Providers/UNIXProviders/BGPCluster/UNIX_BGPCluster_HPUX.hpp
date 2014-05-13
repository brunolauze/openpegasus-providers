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


UNIX_BGPCluster::UNIX_BGPCluster(void)
{
}

UNIX_BGPCluster::~UNIX_BGPCluster(void)
{
}

Boolean UNIX_BGPCluster::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPCluster::getInstanceID() const
{
	return _instanceID;
}

void UNIX_BGPCluster::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_BGPCluster::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPCluster::getCaption() const
{
	return _caption;
}

void UNIX_BGPCluster::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_BGPCluster::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPCluster::getDescription() const
{
	return _description;
}

void UNIX_BGPCluster::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_BGPCluster::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPCluster::getElementName() const
{
	return _elementName;
}

void UNIX_BGPCluster::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_BGPCluster::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_BGPCluster::getGeneration() const
{
	return _generation;
}

void UNIX_BGPCluster::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_BGPCluster::getCollectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_ID, getCollectionID());
	return true;
}

String UNIX_BGPCluster::getCollectionID() const
{
	return _collectionID;
}

void UNIX_BGPCluster::setCollectionID(String &value)
{
	_collectionID = value;
}

Boolean UNIX_BGPCluster::getClusterID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLUSTER_ID, getClusterID());
	return true;
}

Uint32 UNIX_BGPCluster::getClusterID() const
{
	return _clusterID;
}

void UNIX_BGPCluster::setClusterID(Uint32 &value)
{
	_clusterID = value;
}


void UNIX_BGPCluster::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPCluster");
	_generation = Uint64(0);
	_collectionID = String ("");
	_clusterID = Uint32(0);

}

Boolean UNIX_BGPCluster::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "CollectionID"))
			{
				String collectionIDValue;
				property.getValue().get(collectionIDValue);
				setCollectionID(collectionIDValue);
			}
			else if (String::equal(property.getName().getString(), "ClusterID"))
			{
				Uint32 clusterIDValue;
				property.getValue().get(clusterIDValue);
				setClusterID(clusterIDValue);
			}
	}
	return true;
}


Boolean UNIX_BGPCluster::initialize()
{
	return false;
}

Boolean UNIX_BGPCluster::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("BGPCluster");
	_generation = Uint64(0);
	_collectionID = String ("");
	_clusterID = Uint32(0);
	
	return false;
}

Boolean UNIX_BGPCluster::finalize()
{
	return false;
}


Boolean UNIX_BGPCluster::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String clusterIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CLUSTER_ID)) clusterIDKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(String(std::to_string(getClusterID()).c_str()), clusterIDKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_BGPCluster::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPCluster::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPCluster::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_BGPCluster::validateInstance()
{
	return true;
}

