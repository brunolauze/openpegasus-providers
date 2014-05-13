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
2.22.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::BIOS
*/


/* **** Description *** */
/*
The BIOSInteger object may be used to instantiate and provide detailed information describing BIOS attributeswith integer values.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_BIOSAttribute:
				AttributeName String
				CurrentValue String
				DefaultValue String
				PendingValue String
				IsOrderedList Boolean
				IsReadOnly Boolean

			UNIX_BIOSInteger:
				LowerBound UInt64
				UpperBound UInt64
				ProgrammaticUnit String
				ScalarIncrement UInt32


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_BIOSAttribute:

			UNIX_BIOSInteger:


*/

#ifndef __UNIX_BIOSINTEGER_H
#define __UNIX_BIOSINTEGER_H


#include "CIM_BIOSAttribute.h"

#include "UNIX_BIOSIntegerDeps.h"


#ifndef PROPERTY_LOWER_BOUND
#define PROPERTY_LOWER_BOUND \
					"LowerBound"
#endif

#ifndef PROPERTY_UPPER_BOUND
#define PROPERTY_UPPER_BOUND \
					"UpperBound"
#endif

#ifndef PROPERTY_PROGRAMMATIC_UNIT
#define PROPERTY_PROGRAMMATIC_UNIT \
					"ProgrammaticUnit"
#endif

#ifndef PROPERTY_SCALAR_INCREMENT
#define PROPERTY_SCALAR_INCREMENT \
					"ScalarIncrement"
#endif



class UNIX_BIOSInteger :
	public CIM_BIOSAttribute
{
public:

	UNIX_BIOSInteger();
	~UNIX_BIOSInteger();

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
	virtual Boolean getAttributeName(CIMProperty&) const;
	virtual String getAttributeName() const;
	virtual void setAttributeName(String&);
	virtual Boolean getCurrentValue(CIMProperty&) const;
	virtual Array<String> getCurrentValue() const;
	virtual void setCurrentValue(Array<String>&);
	virtual Boolean getDefaultValue(CIMProperty&) const;
	virtual Array<String> getDefaultValue() const;
	virtual void setDefaultValue(Array<String>&);
	virtual Boolean getPendingValue(CIMProperty&) const;
	virtual Array<String> getPendingValue() const;
	virtual void setPendingValue(Array<String>&);
	virtual Boolean getIsOrderedList(CIMProperty&) const;
	virtual Boolean getIsOrderedList() const;
	virtual void setIsOrderedList(Boolean&);
	virtual Boolean getIsReadOnly(CIMProperty&) const;
	virtual Boolean getIsReadOnly() const;
	virtual void setIsReadOnly(Boolean&);
	virtual Boolean getLowerBound(CIMProperty&) const;
	virtual Uint64 getLowerBound() const;
	virtual void setLowerBound(Uint64&);
	virtual Boolean getUpperBound(CIMProperty&) const;
	virtual Uint64 getUpperBound() const;
	virtual void setUpperBound(Uint64&);
	virtual Boolean getProgrammaticUnit(CIMProperty&) const;
	virtual String getProgrammaticUnit() const;
	virtual void setProgrammaticUnit(String&);
	virtual Boolean getScalarIncrement(CIMProperty&) const;
	virtual Uint32 getScalarIncrement() const;
	virtual void setScalarIncrement(Uint32&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	String _attributeName;
	Array<String> _currentValue;
	Array<String> _defaultValue;
	Array<String> _pendingValue;
	Boolean _isOrderedList;
	Boolean _isReadOnly;
	Uint64 _lowerBound;
	Uint64 _upperBound;
	String _programmaticUnit;
	Uint32 _scalarIncrement;

#	include "UNIX_BIOSIntegerPrivate.h"


};

#endif /* UNIX_BIOSINTEGER */
