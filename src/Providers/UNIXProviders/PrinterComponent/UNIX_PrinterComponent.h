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


/* **** Association *** */
/*
TRUE
*/


/* **** Experimental *** */
/*
TRUE
*/


/* **** Aggregation *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.19.0
*/


/* **** UMLPackagePath *** */
/*
CIM::Device::Printing
*/


/* **** Description *** */
/*
PrinterComponent is a specialization of the Component aggregation that establishes 'part of' relationships between a scoping Printer (print device) and each of the PrinterElements of which it is composed. 
Note: A Printer shall be associated with at least one of every required component (e.g., PrintMarker) via an instance of the PrinterComponent class. A Printer may be associated with zero or more optional components (e.g., PrintSupply) via an instance of the ConcreteComponent class. See: Model in section 2 of Printer MIB (RFC 3805) and section 3 of Finisher MIB (RFC 3806).
*/


/*
			 *** Properties ***

			CIM_AbstractComponent:
				GroupComponent Reference
				PartComponent Reference

			CIM_Component:

			UNIX_PrinterComponent:


*/


/*
			 *** Methods ***

			CIM_AbstractComponent:

			CIM_Component:

			UNIX_PrinterComponent:


*/

#ifndef __UNIX_PRINTERCOMPONENT_H
#define __UNIX_PRINTERCOMPONENT_H


#include "CIM_Component.h"
#include <Printer/UNIX_PrinterProvider.h>
#include <PrintFinisher/UNIX_PrintFinisherProvider.h>
#include <PrintMarker/UNIX_PrintMarkerProvider.h>
#include <PrintSupply/UNIX_PrintSupplyProvider.h>
#include <PrintInterlock/UNIX_PrintInterlockProvider.h>
#include <PrintChannel/UNIX_PrintChannelProvider.h>
#include <PrintInputTray/UNIX_PrintInputTrayProvider.h>
#include <PrintOutputTray/UNIX_PrintOutputTrayProvider.h>
#include <PrintInterpreter/UNIX_PrintInterpreterProvider.h>
#include <PrintMediaPath/UNIX_PrintMediaPathProvider.h>

#include "UNIX_PrinterComponentDeps.h"




class UNIX_PrinterComponent :
	public CIM_Component
{
public:

	UNIX_PrinterComponent();
	~UNIX_PrinterComponent();

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

	virtual Boolean getGroupComponent(CIMProperty&) const;
	virtual CIMInstance getGroupComponent() const;
	virtual void setGroupComponent(CIMInstance&);
	virtual Boolean getPartComponent(CIMProperty&) const;
	virtual CIMInstance getPartComponent() const;
	virtual void setPartComponent(CIMInstance&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	CIMInstance _groupComponent;
	CIMInstance _partComponent;

	int groupIndex;
	int partIndex;
	UNIX_Printer group_UNIX_Printer_Component;
	int group_UNIX_Printer_Index;
	bool endOf_UNIX_Printer_Group;

	UNIX_PrintFinisher part_UNIX_PrintFinisher_Component;
	int part_UNIX_PrintFinisher_Index;
	bool endOf_UNIX_PrintFinisher_Part;
	UNIX_PrintMarker part_UNIX_PrintMarker_Component;
	int part_UNIX_PrintMarker_Index;
	bool endOf_UNIX_PrintMarker_Part;
	UNIX_PrintSupply part_UNIX_PrintSupply_Component;
	int part_UNIX_PrintSupply_Index;
	bool endOf_UNIX_PrintSupply_Part;
	UNIX_PrintInterlock part_UNIX_PrintInterlock_Component;
	int part_UNIX_PrintInterlock_Index;
	bool endOf_UNIX_PrintInterlock_Part;
	UNIX_PrintChannel part_UNIX_PrintChannel_Component;
	int part_UNIX_PrintChannel_Index;
	bool endOf_UNIX_PrintChannel_Part;
	UNIX_PrintInputTray part_UNIX_PrintInputTray_Component;
	int part_UNIX_PrintInputTray_Index;
	bool endOf_UNIX_PrintInputTray_Part;
	UNIX_PrintOutputTray part_UNIX_PrintOutputTray_Component;
	int part_UNIX_PrintOutputTray_Index;
	bool endOf_UNIX_PrintOutputTray_Part;
	UNIX_PrintInterpreter part_UNIX_PrintInterpreter_Component;
	int part_UNIX_PrintInterpreter_Index;
	bool endOf_UNIX_PrintInterpreter_Part;
	UNIX_PrintMediaPath part_UNIX_PrintMediaPath_Component;
	int part_UNIX_PrintMediaPath_Index;
	bool endOf_UNIX_PrintMediaPath_Part;

#	include "UNIX_PrinterComponentPrivate.h"


};

#endif /* UNIX_PRINTERCOMPONENT */
