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


/* **** Version *** */
/*
2.31.1
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Controller
*/


/* **** Description *** */
/*
VideoHeadResolution describes the various video modes that a VideoHead can support. Video modes are defined by the possible horizontal and vertical resolutions, refresh rate, scan mode and number of colors settings supported by a Controller. The actual resolutions, etc. that are in use, are the values specified in the VideoHead object.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_SettingData:
				ConfigurationName String
				ChangeableType UInt16
				ComponentSetting String
				SoID String
				SoOrgID String

			UNIX_VideoHeadResolution:
				HorizontalResolution UInt32
				VerticalResolution UInt32
				RefreshRate UInt32
				MinRefreshRate UInt32
				MaxRefreshRate UInt32
				ScanMode UInt16
				OtherScanMode String
				NumberOfColors UInt64


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_SettingData:

			UNIX_VideoHeadResolution:


*/

#ifndef __UNIX_VIDEOHEADRESOLUTION_H
#define __UNIX_VIDEOHEADRESOLUTION_H


#include "CIM_SettingData.h"

#include "UNIX_VideoHeadResolutionDeps.h"


#ifndef PROPERTY_HORIZONTAL_RESOLUTION
#define PROPERTY_HORIZONTAL_RESOLUTION \
					"HorizontalResolution"
#endif

#ifndef PROPERTY_VERTICAL_RESOLUTION
#define PROPERTY_VERTICAL_RESOLUTION \
					"VerticalResolution"
#endif

#ifndef PROPERTY_REFRESH_RATE
#define PROPERTY_REFRESH_RATE \
					"RefreshRate"
#endif

#ifndef PROPERTY_MIN_REFRESH_RATE
#define PROPERTY_MIN_REFRESH_RATE \
					"MinRefreshRate"
#endif

#ifndef PROPERTY_MAX_REFRESH_RATE
#define PROPERTY_MAX_REFRESH_RATE \
					"MaxRefreshRate"
#endif

#ifndef PROPERTY_SCAN_MODE
#define PROPERTY_SCAN_MODE \
					"ScanMode"
#endif

#ifndef PROPERTY_OTHER_SCAN_MODE
#define PROPERTY_OTHER_SCAN_MODE \
					"OtherScanMode"
#endif

#ifndef PROPERTY_NUMBER_OF_COLORS
#define PROPERTY_NUMBER_OF_COLORS \
					"NumberOfColors"
#endif



class UNIX_VideoHeadResolution :
	public CIM_SettingData
{
public:

	UNIX_VideoHeadResolution();
	~UNIX_VideoHeadResolution();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(const Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);
	virtual void setCIMOMHandle(CIMOMHandle&);
	virtual void clearInstance();
	virtual Boolean loadInstance(const CIMInstance&);
	virtual Boolean createInstance(const OperationContext&);
	virtual Boolean modifyInstance(const OperationContext&);
	virtual Boolean deleteInstance(const OperationContext&);
	virtual Boolean validateInstance();

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual void setInstanceID(String&);
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual void setCaption(String&);
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual void setDescription(String&);
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual void setElementName(String&);
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
	virtual void setGeneration(Uint64&);
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual void setConfigurationName(String&);
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual void setChangeableType(Uint16&);
	virtual Boolean getComponentSetting(CIMProperty&) const;
	virtual Array<String> getComponentSetting() const;
	virtual void setComponentSetting(Array<String>&);
	virtual Boolean getSoID(CIMProperty&) const;
	virtual String getSoID() const;
	virtual void setSoID(String&);
	virtual Boolean getSoOrgID(CIMProperty&) const;
	virtual String getSoOrgID() const;
	virtual void setSoOrgID(String&);
	virtual Boolean getHorizontalResolution(CIMProperty&) const;
	virtual Uint32 getHorizontalResolution() const;
	virtual void setHorizontalResolution(Uint32&);
	virtual Boolean getVerticalResolution(CIMProperty&) const;
	virtual Uint32 getVerticalResolution() const;
	virtual void setVerticalResolution(Uint32&);
	virtual Boolean getRefreshRate(CIMProperty&) const;
	virtual Uint32 getRefreshRate() const;
	virtual void setRefreshRate(Uint32&);
	virtual Boolean getMinRefreshRate(CIMProperty&) const;
	virtual Uint32 getMinRefreshRate() const;
	virtual void setMinRefreshRate(Uint32&);
	virtual Boolean getMaxRefreshRate(CIMProperty&) const;
	virtual Uint32 getMaxRefreshRate() const;
	virtual void setMaxRefreshRate(Uint32&);
	virtual Boolean getScanMode(CIMProperty&) const;
	virtual Uint16 getScanMode() const;
	virtual void setScanMode(Uint16&);
	virtual Boolean getOtherScanMode(CIMProperty&) const;
	virtual String getOtherScanMode() const;
	virtual void setOtherScanMode(String&);
	virtual Boolean getNumberOfColors(CIMProperty&) const;
	virtual Uint64 getNumberOfColors() const;
	virtual void setNumberOfColors(Uint64&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _configurationName;
	Uint16 _changeableType;
	Array<String> _componentSetting;
	String _soID;
	String _soOrgID;
	Uint32 _horizontalResolution;
	Uint32 _verticalResolution;
	Uint32 _refreshRate;
	Uint32 _minRefreshRate;
	Uint32 _maxRefreshRate;
	Uint16 _scanMode;
	String _otherScanMode;
	Uint64 _numberOfColors;

#	include "UNIX_VideoHeadResolutionPrivate.h"


};

#endif /* UNIX_VIDEOHEADRESOLUTION */
