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


UNIX_SchemaInformationStructure::UNIX_SchemaInformationStructure(void)
{
}

UNIX_SchemaInformationStructure::~UNIX_SchemaInformationStructure(void)
{
}

Boolean UNIX_SchemaInformationStructure::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SchemaInformationStructure::getName() const
{
	return _name;
}

void UNIX_SchemaInformationStructure::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SchemaInformationStructure::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_SchemaInformationStructure::getVersion() const
{
	return _version;
}

void UNIX_SchemaInformationStructure::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_SchemaInformationStructure::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SchemaInformationStructure::getDescription() const
{
	return _description;
}

void UNIX_SchemaInformationStructure::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SchemaInformationStructure::getURI(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_U_R_I, getURI());
	return true;
}

String UNIX_SchemaInformationStructure::getURI() const
{
	return _uRI;
}

void UNIX_SchemaInformationStructure::setURI(String &value)
{
	_uRI = value;
}

Boolean UNIX_SchemaInformationStructure::getOwningOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNING_ORGANIZATION, getOwningOrganization());
	return true;
}

String UNIX_SchemaInformationStructure::getOwningOrganization() const
{
	return _owningOrganization;
}

void UNIX_SchemaInformationStructure::setOwningOrganization(String &value)
{
	_owningOrganization = value;
}

Boolean UNIX_SchemaInformationStructure::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

Uint32 UNIX_SchemaInformationStructure::getStatus() const
{
	return _status;
}

void UNIX_SchemaInformationStructure::setStatus(Uint32 &value)
{
	_status = value;
}


void UNIX_SchemaInformationStructure::clearInstance()
{

	_name = String ("");
	_version = String ("");
	_description = String ("");
	_uRI = String ("");
	_owningOrganization = String ("");
	_status = Uint32(0);

}

Boolean UNIX_SchemaInformationStructure::loadInstance(const CIMInstance &instance)
{
	clearInstance();
	Uint32 propertyCount = instance.getPropertyCount();
	for(Uint32 i = 0; i < propertyCount; i++) {
		CIMConstProperty property = instance.getProperty(i);
			if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "Version"))
			{
				String versionValue;
				property.getValue().get(versionValue);
				setVersion(versionValue);
			}
			else if (String::equal(property.getName().getString(), "Description"))
			{
				String descriptionValue;
				property.getValue().get(descriptionValue);
				setDescription(descriptionValue);
			}
			else if (String::equal(property.getName().getString(), "URI"))
			{
				String uRIValue;
				property.getValue().get(uRIValue);
				setURI(uRIValue);
			}
			else if (String::equal(property.getName().getString(), "OwningOrganization"))
			{
				String owningOrganizationValue;
				property.getValue().get(owningOrganizationValue);
				setOwningOrganization(owningOrganizationValue);
			}
			else if (String::equal(property.getName().getString(), "Status"))
			{
				Uint32 statusValue;
				property.getValue().get(statusValue);
				setStatus(statusValue);
			}
	}
	return true;
}


Boolean UNIX_SchemaInformationStructure::initialize()
{
	return false;
}

Boolean UNIX_SchemaInformationStructure::load(int &pIndex)
{
	
	_name = String ("");
	_version = String ("");
	_description = String ("");
	_uRI = String ("");
	_owningOrganization = String ("");
	_status = Uint32(0);
	
	return false;
}

Boolean UNIX_SchemaInformationStructure::finalize()
{
	return false;
}

Boolean UNIX_SchemaInformationStructure::loadByName(const String name)
{
	return false;
}

Boolean UNIX_SchemaInformationStructure::find(const Array<CIMKeyBinding> &kbArray)
{
	return true;
}

Boolean UNIX_SchemaInformationStructure::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SchemaInformationStructure::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SchemaInformationStructure::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SchemaInformationStructure::validateInstance()
{
	return true;
}

