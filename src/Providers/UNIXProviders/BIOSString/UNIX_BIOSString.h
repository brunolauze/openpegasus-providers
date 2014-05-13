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
The CIM_BIOSString object may be used to instantiate string-based BIOS attributes.
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

			UNIX_BIOSString:
				StringType UInt32
				MinLength UInt64
				MaxLength UInt64
				ValueExpression String


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_BIOSAttribute:

			UNIX_BIOSString:


*/

#ifndef __UNIX_BIOSSTRING_H
#define __UNIX_BIOSSTRING_H


#include "CIM_BIOSAttribute.h"

#include "UNIX_BIOSStringDeps.h"


#ifndef PROPERTY_STRING_TYPE
#define PROPERTY_STRING_TYPE \
					"StringType"
#endif

#ifndef PROPERTY_MIN_LENGTH
#define PROPERTY_MIN_LENGTH \
					"MinLength"
#endif

#ifndef PROPERTY_MAX_LENGTH
#define PROPERTY_MAX_LENGTH \
					"MaxLength"
#endif

#ifndef PROPERTY_VALUE_EXPRESSION
#define PROPERTY_VALUE_EXPRESSION \
					"ValueExpression"
#endif



class UNIX_BIOSString :
	public CIM_BIOSAttribute
{
public:

	UNIX_BIOSString();
	~UNIX_BIOSString();

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
	virtual Boolean getStringType(CIMProperty&) const;
	virtual Uint32 getStringType() const;
	virtual void setStringType(Uint32&);
	virtual Boolean getMinLength(CIMProperty&) const;
	virtual Uint64 getMinLength() const;
	virtual void setMinLength(Uint64&);
	virtual Boolean getMaxLength(CIMProperty&) const;
	virtual Uint64 getMaxLength() const;
	virtual void setMaxLength(Uint64&);
	virtual Boolean getValueExpression(CIMProperty&) const;
	virtual String getValueExpression() const;
	virtual void setValueExpression(String&);


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
	Uint32 _stringType;
	Uint64 _minLength;
	Uint64 _maxLength;
	String _valueExpression;

#	include "UNIX_BIOSStringPrivate.h"


};

#endif /* UNIX_BIOSSTRING */
