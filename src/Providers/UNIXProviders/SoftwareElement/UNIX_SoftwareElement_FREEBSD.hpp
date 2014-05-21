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

#include <stdlib.h>

/* These are the fields of the Full output, in order */
#define INFO_NAME               (1LL<<0)
#define INFO_VERSION            (1LL<<1)
#define INFO_INSTALLED          (1LL<<2)
#define INFO_ORIGIN             (1LL<<3)
#define INFO_ARCH               (1LL<<4)
#define INFO_PREFIX             (1LL<<5)
#define INFO_REPOSITORY         (1LL<<6)
#define INFO_CATEGORIES         (1LL<<7)
#define INFO_LICENSES           (1LL<<8)
#define INFO_MAINTAINER         (1LL<<9)
#define INFO_WWW                (1LL<<10)
#define INFO_COMMENT            (1LL<<11)
#define INFO_OPTIONS            (1LL<<12)
#define INFO_SHLIBS_REQUIRED    (1LL<<13)
#define INFO_SHLIBS_PROVIDED    (1LL<<14)
#define INFO_ANNOTATIONS        (1LL<<15)
#define INFO_FLATSIZE           (1LL<<16)
#define INFO_PKGSIZE            (1LL<<17)
#define INFO_DESCR              (1LL<<18)

/* Other fields not part of the Full output */
#define INFO_MESSAGE            (1LL<<19)
#define INFO_DEPS               (1LL<<20)
#define INFO_RDEPS              (1LL<<21)
#define INFO_FILES              (1LL<<22)
#define INFO_DIRS               (1LL<<23)
#define INFO_USERS              (1LL<<24)
#define INFO_GROUPS             (1LL<<25)
#define INFO_REPOURL            (1LL<<26)
#define INFO_LOCKED             (1LL<<27)
#define INFO_OPTION_DEFAULTS    (1LL<<28)
#define INFO_OPTION_DESCRIPTIONS (1LL<<29)

#define INFO_LASTFIELD  INFO_LOCKED
#define INFO_ALL        (((INFO_LASTFIELD) << 1) - 1)

/* Identifying tags */
#define INFO_TAG_NAME           (1LL<<60)
#define INFO_TAG_ORIGIN         (1LL<<61)
#define INFO_TAG_NAMEVER        (1LL<<62)

/* Output YAML format */
#define INFO_RAW        (-1LL<<63)

/* Everything in the 'full' package output */
#define INFO_FULL       (INFO_NAME|INFO_VERSION|INFO_ORIGIN|INFO_ARCH|INFO_PREFIX| \
                         INFO_REPOSITORY|INFO_CATEGORIES|INFO_LICENSES|  \
                         INFO_MAINTAINER|INFO_WWW|INFO_COMMENT|          \
                         INFO_OPTIONS|INFO_SHLIBS_REQUIRED|              \
                         INFO_SHLIBS_PROVIDED|INFO_ANNOTATIONS|          \
                         INFO_FLATSIZE|INFO_PKGSIZE|INFO_DESCR)

/* Everything that can take more than one line to print */
#define INFO_MULTILINE  (INFO_OPTIONS|INFO_SHLIBS_REQUIRED|            \
                         INFO_SHLIBS_PROVIDED|INFO_ANNOTATIONS|        \
                         INFO_DESCR|INFO_MESSAGE|INFO_DEPS|INFO_RDEPS| \
                         INFO_FILES|INFO_DIRS)



/**
 * Fetch repository calalogues.
 */
static int
pkgcli_update(bool force) {
        int retcode = EPKG_FATAL;
        struct pkg_repo *r = NULL;

        /* Only auto update if the user has write access. */
        if (pkgdb_access(PKGDB_MODE_READ|PKGDB_MODE_WRITE|PKGDB_MODE_CREATE,
            PKGDB_DB_REPO) == EPKG_ENOACCESS)
                return (EPKG_OK);

        //if (!quiet)
                //printf("Updating repository catalogue\n");

        while (pkg_repos(&r) == EPKG_OK) {
                if (!pkg_repo_enabled(r))
                        continue;
                retcode = pkg_update(r, force);
                if (retcode == EPKG_UPTODATE) {
                        //if (!quiet)
                        //        printf("%s repository catalogue is "
                        //             "up-to-date, no need to fetch "
                        //             "fresh copy\n", pkg_repo_ident(r));
                                retcode = EPKG_OK;
                }
                if (retcode != EPKG_OK)
                        break;
        }

        return (retcode);
}


/* what the pkg needs to load in order to display the requested info */
int UNIX_SoftwareElement::getPkgFlag(uint64_t opt, bool remote)
{
        int flags = PKG_LOAD_BASIC;

        if (opt & INFO_CATEGORIES)
                flags |= PKG_LOAD_CATEGORIES;
        if (opt & INFO_LICENSES)
                flags |= PKG_LOAD_LICENSES;
        if (opt & (INFO_OPTIONS|INFO_OPTION_DEFAULTS|INFO_OPTION_DESCRIPTIONS))
                flags |= PKG_LOAD_OPTIONS;
        if (opt & INFO_SHLIBS_REQUIRED)
                flags |= PKG_LOAD_SHLIBS_REQUIRED;
        if (opt & INFO_SHLIBS_PROVIDED)
                flags |= PKG_LOAD_SHLIBS_PROVIDED;
        if (opt & INFO_ANNOTATIONS)
                flags |= PKG_LOAD_ANNOTATIONS;
        if (opt & INFO_DEPS)
                flags |= PKG_LOAD_DEPS;
        if (opt & INFO_RDEPS)
                flags |= PKG_LOAD_RDEPS;
        if (opt & INFO_FILES)
                flags |= PKG_LOAD_FILES;
        if (opt & INFO_DIRS)
                flags |= PKG_LOAD_DIRS;
        if (opt & INFO_USERS)
                flags |= PKG_LOAD_USERS;
        if (opt & INFO_GROUPS)
                flags |= PKG_LOAD_GROUPS;
        if (opt & INFO_RAW) {
                flags |= PKG_LOAD_CATEGORIES      |
                         PKG_LOAD_LICENSES        |
                         PKG_LOAD_OPTIONS         |
                         PKG_LOAD_SHLIBS_REQUIRED |
                         PKG_LOAD_SHLIBS_PROVIDED |
                         PKG_LOAD_ANNOTATIONS     |
                        PKG_LOAD_DEPS;
                if (!remote) {
                        flags |= PKG_LOAD_FILES  |
                                PKG_LOAD_DIRS    |
                                PKG_LOAD_USERS   |
                                PKG_LOAD_GROUPS  |
                                PKG_LOAD_SCRIPTS;
                }
        }

        return flags;
}

String UNIX_SoftwareElement::getPackageProperty(const char * name, ...) const
{
    int              count;
    struct sbuf     *sbuf;
    String val;
    sbuf  = sbuf_new_auto();
    if (sbuf)
            sbuf = pkg_sbuf_printf(sbuf, name, pkg);
    if (sbuf && sbuf_len(sbuf) >= 0) {
            sbuf_finish(sbuf);
            if (strcmp(name, "%e") == 0)
            {
            	std::string tmp = CIMHelper::encode(sbuf_data(sbuf));
            	val.assign(tmp.c_str());
        	}
            else 
            {
				val.assign(sbuf_data(sbuf));
			}
    } else {
            count = -1;
            val.assign("");
    }
	if (sbuf)
		sbuf_delete(sbuf);
	return val;
}


UNIX_SoftwareElement::UNIX_SoftwareElement(void)
{
}

UNIX_SoftwareElement::~UNIX_SoftwareElement(void)
{
}

Boolean UNIX_SoftwareElement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SoftwareElement::getInstanceID() const
{
	return _instanceID;
}

void UNIX_SoftwareElement::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_SoftwareElement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SoftwareElement::getCaption() const
{
	return _caption;
}

void UNIX_SoftwareElement::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_SoftwareElement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SoftwareElement::getDescription() const
{
	return _description;
}

void UNIX_SoftwareElement::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_SoftwareElement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SoftwareElement::getElementName() const
{
	return _elementName;
}

void UNIX_SoftwareElement::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_SoftwareElement::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_SoftwareElement::getGeneration() const
{
	return _generation;
}

void UNIX_SoftwareElement::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_SoftwareElement::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SoftwareElement::getInstallDate() const
{
	return _installDate;
}

void UNIX_SoftwareElement::setInstallDate(CIMDateTime &value)
{
	_installDate = value;
}

Boolean UNIX_SoftwareElement::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SoftwareElement::getName() const
{
	return _name;
}

void UNIX_SoftwareElement::setName(String &value)
{
	_name = value;
}

Boolean UNIX_SoftwareElement::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SoftwareElement::getOperationalStatus() const
{
	return _operationalStatus;
}

void UNIX_SoftwareElement::setOperationalStatus(Array<Uint16> &value)
{
	_operationalStatus = value;
}

Boolean UNIX_SoftwareElement::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SoftwareElement::getStatusDescriptions() const
{
	return _statusDescriptions;
}

void UNIX_SoftwareElement::setStatusDescriptions(Array<String> &value)
{
	_statusDescriptions = value;
}

Boolean UNIX_SoftwareElement::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SoftwareElement::getStatus() const
{
	return _status;
}

void UNIX_SoftwareElement::setStatus(String &value)
{
	_status = value;
}

Boolean UNIX_SoftwareElement::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SoftwareElement::getHealthState() const
{
	return _healthState;
}

void UNIX_SoftwareElement::setHealthState(Uint16 &value)
{
	_healthState = value;
}

Boolean UNIX_SoftwareElement::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SoftwareElement::getCommunicationStatus() const
{
	return _communicationStatus;
}

void UNIX_SoftwareElement::setCommunicationStatus(Uint16 &value)
{
	_communicationStatus = value;
}

Boolean UNIX_SoftwareElement::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SoftwareElement::getDetailedStatus() const
{
	return _detailedStatus;
}

void UNIX_SoftwareElement::setDetailedStatus(Uint16 &value)
{
	_detailedStatus = value;
}

Boolean UNIX_SoftwareElement::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SoftwareElement::getOperatingStatus() const
{
	return _operatingStatus;
}

void UNIX_SoftwareElement::setOperatingStatus(Uint16 &value)
{
	_operatingStatus = value;
}

Boolean UNIX_SoftwareElement::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SoftwareElement::getPrimaryStatus() const
{
	return _primaryStatus;
}

void UNIX_SoftwareElement::setPrimaryStatus(Uint16 &value)
{
	_primaryStatus = value;
}

Boolean UNIX_SoftwareElement::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_SoftwareElement::getVersion() const
{
	return _version;
}

void UNIX_SoftwareElement::setVersion(String &value)
{
	_version = value;
}

Boolean UNIX_SoftwareElement::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_SoftwareElement::getSoftwareElementState() const
{
	return _softwareElementState;
}

void UNIX_SoftwareElement::setSoftwareElementState(Uint16 &value)
{
	_softwareElementState = value;
}

Boolean UNIX_SoftwareElement::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_SoftwareElement::getSoftwareElementID() const
{
	return _softwareElementID;
}

void UNIX_SoftwareElement::setSoftwareElementID(String &value)
{
	_softwareElementID = value;
}

Boolean UNIX_SoftwareElement::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_SoftwareElement::getTargetOperatingSystem() const
{
	return _targetOperatingSystem;
}

void UNIX_SoftwareElement::setTargetOperatingSystem(Uint16 &value)
{
	_targetOperatingSystem = value;
}

Boolean UNIX_SoftwareElement::getOtherTargetOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TARGET_OS, getOtherTargetOS());
	return true;
}

String UNIX_SoftwareElement::getOtherTargetOS() const
{
	return _otherTargetOS;
}

void UNIX_SoftwareElement::setOtherTargetOS(String &value)
{
	_otherTargetOS = value;
}

Boolean UNIX_SoftwareElement::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_SoftwareElement::getManufacturer() const
{
	return _manufacturer;
}

void UNIX_SoftwareElement::setManufacturer(String &value)
{
	_manufacturer = value;
}

Boolean UNIX_SoftwareElement::getBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUILD_NUMBER, getBuildNumber());
	return true;
}

String UNIX_SoftwareElement::getBuildNumber() const
{
	return _buildNumber;
}

void UNIX_SoftwareElement::setBuildNumber(String &value)
{
	_buildNumber = value;
}

Boolean UNIX_SoftwareElement::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_SoftwareElement::getSerialNumber() const
{
	return _serialNumber;
}

void UNIX_SoftwareElement::setSerialNumber(String &value)
{
	_serialNumber = value;
}

Boolean UNIX_SoftwareElement::getCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_SET, getCodeSet());
	return true;
}

String UNIX_SoftwareElement::getCodeSet() const
{
	return _codeSet;
}

void UNIX_SoftwareElement::setCodeSet(String &value)
{
	_codeSet = value;
}

Boolean UNIX_SoftwareElement::getIdentificationCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFICATION_CODE, getIdentificationCode());
	return true;
}

String UNIX_SoftwareElement::getIdentificationCode() const
{
	return _identificationCode;
}

void UNIX_SoftwareElement::setIdentificationCode(String &value)
{
	_identificationCode = value;
}

Boolean UNIX_SoftwareElement::getLanguageEdition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANGUAGE_EDITION, getLanguageEdition());
	return true;
}

String UNIX_SoftwareElement::getLanguageEdition() const
{
	return _languageEdition;
}

void UNIX_SoftwareElement::setLanguageEdition(String &value)
{
	_languageEdition = value;
}


void UNIX_SoftwareElement::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("SoftwareElement");
	_generation = Uint64(0);
	_installDate = CIMHelper::getCurrentTime();
	_name = String ("");
	_operationalStatus.clear();
	_statusDescriptions.clear();
	_status = String(DEFAULT_STATUS);
	_healthState = Uint16(DEFAULT_HEALTH_STATE);
	_communicationStatus = Uint16(0);
	_detailedStatus = Uint16(0);
	_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
	_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
	_version = String ("");
	_softwareElementState = Uint16(0);
	_softwareElementID = String ("");
	_targetOperatingSystem = Uint16(0);
	_otherTargetOS = String ("");
	_manufacturer = String ("");
	_buildNumber = String ("");
	_serialNumber = String ("");
	_codeSet = String ("");
	_identificationCode = String ("");
	_languageEdition = String ("");

}

Boolean UNIX_SoftwareElement::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "InstallDate"))
			{
				CIMDateTime installDateValue;
				property.getValue().get(installDateValue);
				setInstallDate(installDateValue);
			}
			else if (String::equal(property.getName().getString(), "Name"))
			{
				String nameValue;
				property.getValue().get(nameValue);
				setName(nameValue);
			}
			else if (String::equal(property.getName().getString(), "OperationalStatus"))
			{
				Array<Uint16> operationalStatusValue;
				property.getValue().get(operationalStatusValue);
				setOperationalStatus(operationalStatusValue);
			}
			else if (String::equal(property.getName().getString(), "StatusDescriptions"))
			{
				Array<String> statusDescriptionsValue;
				property.getValue().get(statusDescriptionsValue);
				setStatusDescriptions(statusDescriptionsValue);
			}
			else if (String::equal(property.getName().getString(), "Status"))
			{
				String statusValue;
				property.getValue().get(statusValue);
				setStatus(statusValue);
			}
			else if (String::equal(property.getName().getString(), "HealthState"))
			{
				Uint16 healthStateValue;
				property.getValue().get(healthStateValue);
				setHealthState(healthStateValue);
			}
			else if (String::equal(property.getName().getString(), "CommunicationStatus"))
			{
				Uint16 communicationStatusValue;
				property.getValue().get(communicationStatusValue);
				setCommunicationStatus(communicationStatusValue);
			}
			else if (String::equal(property.getName().getString(), "DetailedStatus"))
			{
				Uint16 detailedStatusValue;
				property.getValue().get(detailedStatusValue);
				setDetailedStatus(detailedStatusValue);
			}
			else if (String::equal(property.getName().getString(), "OperatingStatus"))
			{
				Uint16 operatingStatusValue;
				property.getValue().get(operatingStatusValue);
				setOperatingStatus(operatingStatusValue);
			}
			else if (String::equal(property.getName().getString(), "PrimaryStatus"))
			{
				Uint16 primaryStatusValue;
				property.getValue().get(primaryStatusValue);
				setPrimaryStatus(primaryStatusValue);
			}
			else if (String::equal(property.getName().getString(), "Version"))
			{
				String versionValue;
				property.getValue().get(versionValue);
				setVersion(versionValue);
			}
			else if (String::equal(property.getName().getString(), "SoftwareElementState"))
			{
				Uint16 softwareElementStateValue;
				property.getValue().get(softwareElementStateValue);
				setSoftwareElementState(softwareElementStateValue);
			}
			else if (String::equal(property.getName().getString(), "SoftwareElementID"))
			{
				String softwareElementIDValue;
				property.getValue().get(softwareElementIDValue);
				setSoftwareElementID(softwareElementIDValue);
			}
			else if (String::equal(property.getName().getString(), "TargetOperatingSystem"))
			{
				Uint16 targetOperatingSystemValue;
				property.getValue().get(targetOperatingSystemValue);
				setTargetOperatingSystem(targetOperatingSystemValue);
			}
			else if (String::equal(property.getName().getString(), "OtherTargetOS"))
			{
				String otherTargetOSValue;
				property.getValue().get(otherTargetOSValue);
				setOtherTargetOS(otherTargetOSValue);
			}
			else if (String::equal(property.getName().getString(), "Manufacturer"))
			{
				String manufacturerValue;
				property.getValue().get(manufacturerValue);
				setManufacturer(manufacturerValue);
			}
			else if (String::equal(property.getName().getString(), "BuildNumber"))
			{
				String buildNumberValue;
				property.getValue().get(buildNumberValue);
				setBuildNumber(buildNumberValue);
			}
			else if (String::equal(property.getName().getString(), "SerialNumber"))
			{
				String serialNumberValue;
				property.getValue().get(serialNumberValue);
				setSerialNumber(serialNumberValue);
			}
			else if (String::equal(property.getName().getString(), "CodeSet"))
			{
				String codeSetValue;
				property.getValue().get(codeSetValue);
				setCodeSet(codeSetValue);
			}
			else if (String::equal(property.getName().getString(), "IdentificationCode"))
			{
				String identificationCodeValue;
				property.getValue().get(identificationCodeValue);
				setIdentificationCode(identificationCodeValue);
			}
			else if (String::equal(property.getName().getString(), "LanguageEdition"))
			{
				String languageEditionValue;
				property.getValue().get(languageEditionValue);
				setLanguageEdition(languageEditionValue);
			}
	}
	return true;
}


Boolean UNIX_SoftwareElement::initialize()
{
	db = NULL;
    it = NULL;
    pkg = NULL;
    int ret;
    if (!pkg_initialized())
		if (pkg_init(NULL, NULL) != EPKG_OK)
			throw new CIMException(CIM_ERR_FAILED, "Cannot init software manager");
		
	if (currentScope.equal(String("UNIX_ComputerSystem")))
	{
		remote = true;
		ret = pkgdb_access(PKGDB_MODE_READ, PKGDB_DB_LOCAL);
	}
	else {
		remote = true;
		ret = pkgdb_access(PKGDB_MODE_READ, PKGDB_DB_REPO);
	}
	if (ret == EPKG_ENOACCESS) {
	        //warnx("Insufficient privileges to query the package database");
	        throw new CIMException(CIM_ERR_FAILED, "Insufficient privileges to query the package database");
	        //return false; /* (EX_NOPERM); */
	} else if (ret == EPKG_ENODB) {
	        //if (match == MATCH_ALL)
	        //        return false; /* (EX_OK); */
	        //if (origin_search)
	        //        return false; /* (EX_OK); */
	        throw new CIMException(CIM_ERR_FAILED, "Sofware database not present");
	        //return false; /* (EX_UNAVAILABLE); */
	} else if (ret != EPKG_OK)
	        throw new CIMException(CIM_ERR_FAILED, "Sofware database is corrupted");
	        //return false; /* (EX_IOERR); */
	return true;
}

Boolean UNIX_SoftwareElement::load(int &pIndex)
{
	int ret;
	char *pkgname;
	const char *reponame = NULL;
	pkgname = NULL;
	if (db == NULL)
	{
		if (!remote)
		{
			ret = pkgdb_open(&db, PKGDB_DEFAULT);
			if (ret != EPKG_OK)
	    	return false;
			if ((it = pkgdb_query(db, pkgname, MATCH_ALL)) == NULL) {
			        throw new CIMException(CIM_ERR_FAILED, "Software Manager query failed");
			        //return false; //(EX_IOERR);
			}
			query_flags = PKG_LOAD_BASIC; //getPkgFlag(INFO_ALL, false);
		}
		else {
			bool auto_update = true; // TODO: Review
			if (auto_update && (ret = pkgcli_update(false)) != EPKG_OK)
                return false;
			ret = pkgdb_open(&db, PKGDB_REMOTE);	
			if (ret != EPKG_OK)
	    		throw new CIMException(CIM_ERR_FAILED, "Cannot open software database");
			if ((it = pkgdb_rquery(db, pkgname, MATCH_ALL, reponame)) == NULL) {
			    throw new CIMException(CIM_ERR_FAILED, "Software Manager remote query failed");
			    //return false; //(EX_IOERR);
			}
			query_flags = PKG_LOAD_BASIC; //getPkgFlag(INFO_ALL, true);
		}
	}
	if ((ret = pkgdb_it_next(it, &pkg, query_flags)) == EPKG_OK) {
		String s(getPackageProperty("%n"));
		s.append("-");
		s.append(getPackageProperty("%v"));
		_instanceID = s;
		_caption = s;
		_description = getPackageProperty ("%e");
		_elementName = String("SoftwareElement");
		_generation = Uint64(0);
		int64_t instDate;
		pkg_get(pkg, PKG_TIME, &instDate);
		time_t tt = (time_t)instDate;
		struct tm* clock;			// create a time structure
		clock = gmtime(&(tt));	// Get the last modified time and put it into the time structure
		_installDate = CIMDateTime(
		  	clock->tm_year + 1900, 
			clock->tm_mon + 1, 
			clock->tm_mday,
			clock->tm_hour,
			clock->tm_min,
			clock->tm_sec,
			0,0,
			clock->tm_gmtoff	
		);
		_name = getPackageProperty ("%n");
		_operationalStatus.clear();
		_statusDescriptions.clear();
		_status = String(DEFAULT_STATUS);
		_healthState = Uint16(DEFAULT_HEALTH_STATE);
		_communicationStatus = Uint16(0);
		_detailedStatus = Uint16(0);
		_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
		_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
		_version = getPackageProperty("%v");
		_softwareElementState = Uint16(0);
		_softwareElementID = String ("");
		_targetOperatingSystem = Uint16(42);
		_otherTargetOS = String ("");
		_manufacturer = getPackageProperty ("%m");
		_buildNumber = String ("");
		_serialNumber = String ("");
		_codeSet = String ("UTF-8");
		_identificationCode = s;
		_languageEdition = String ("Multilanguage");
		return true;
	}
	return false;
}

Boolean UNIX_SoftwareElement::finalize()
{
	pkgdb_it_free(it);
	pkg_free(pkg);
    pkgdb_close(db);
    pkg = NULL;
	db = NULL;
    it = NULL;
	return true;
}

Boolean UNIX_SoftwareElement::loadByName(const String name)
{
	String pkgName(name);
	pkgName.append("*");
	int ret;
	if (db != NULL)
	{
		pkg_free(pkg);
    	pkgdb_close(db);
	}

	ret = pkgdb_open(&db, PKGDB_DEFAULT);
    if (ret != EPKG_OK)
    	return false;
	if ((it = pkgdb_query(db, pkgName.getCString(), MATCH_GLOB)) == NULL) {
	        return false; //(EX_IOERR);
	}
	query_flags = getPkgFlag(INFO_ALL, false);
	if ((ret = pkgdb_it_next(it, &pkg, query_flags)) == EPKG_OK) {
		String s(getPackageProperty("%n"));
		s.append("-");
		s.append(getPackageProperty("%v"));
		_instanceID = s;
		_caption = s;
		_description = getPackageProperty ("%e");
		_elementName = String("SoftwareElement");
		_generation = Uint64(0);
		int64_t instDate;
		pkg_get(pkg, PKG_TIME, &instDate);
		time_t tt = (time_t)instDate;
		struct tm* clock;			// create a time structure
		clock = gmtime(&(tt));	// Get the last modified time and put it into the time structure
		_installDate = CIMDateTime(
		  	clock->tm_year + 1900, 
			clock->tm_mon + 1,
			clock->tm_mday,
			clock->tm_hour,
			clock->tm_min,
			clock->tm_sec,
			0,0,
			clock->tm_gmtoff	
		);
		_name = getPackageProperty ("%n");
		_operationalStatus.clear();
		_statusDescriptions.clear();
		_status = String(DEFAULT_STATUS);
		_healthState = Uint16(DEFAULT_HEALTH_STATE);
		_communicationStatus = Uint16(0);
		_detailedStatus = Uint16(0);
		_operatingStatus = Uint16(DEFAULT_OPERATING_STATUS);
		_primaryStatus = Uint16(DEFAULT_PRIMARY_STATUS);
		_version = getPackageProperty("%v");
		_softwareElementState = Uint16(0);
		_softwareElementID = String ("");
		_targetOperatingSystem = Uint16(42);
		_otherTargetOS = String ("");
		_manufacturer = getPackageProperty ("%m");
		_buildNumber = String ("");
		_serialNumber = String ("");
		_codeSet = String ("UTF-8");
		_identificationCode = s;
		_languageEdition = String ("Multilanguage");
		return true;
	}
	return false;
}

Boolean UNIX_SoftwareElement::find(const Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String versionKey;
	String softwareElementStateKey;
	String softwareElementIDKey;
	String targetOperatingSystemKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_STATE)) softwareElementStateKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_ID)) softwareElementIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TARGET_OPERATING_SYSTEM)) targetOperatingSystemKey = kb.getValue();
	}
	
	
	
	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++) {
		if ((String::equalNoCase(getName(), nameKey)) && 
			(String::equalNoCase(getVersion(), versionKey)) && 
			(String::equalNoCase(String(std::to_string(getSoftwareElementState()).c_str()), softwareElementStateKey)) && 
			(String::equalNoCase(getSoftwareElementID(), softwareElementIDKey)) && 
			(String::equalNoCase(String(std::to_string(getTargetOperatingSystem()).c_str()), targetOperatingSystemKey)))
		{
			return true;
		}
	}
	
	return false;
}

Boolean UNIX_SoftwareElement::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareElement::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareElement::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_SoftwareElement::validateInstance()
{
	return true;
}

