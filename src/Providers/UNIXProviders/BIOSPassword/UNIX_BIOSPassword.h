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
2.27.0
*/


/* **** UMLPackagePath *** */
/*
CIM::System::BIOS
*/


/* **** Description *** */
/*
The CIM_BIOSPassword object may be used to instantiate detail information about manageable BIOS-based passwords.
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

			UNIX_BIOSPassword:
				MinLength UInt64
				MaxLength UInt64
				PasswordEncoding UInt32
				IsSet Boolean


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_BIOSAttribute:

			UNIX_BIOSPassword:


*/

#ifndef __UNIX_BIOSPASSWORD_H
#define __UNIX_BIOSPASSWORD_H


#include "CIM_BIOSAttribute.h"

#include "UNIX_BIOSPasswordDeps.h"


#ifndef PROPERTY_MIN_LENGTH
#define PROPERTY_MIN_LENGTH \
					"MinLength"
#endif

#ifndef PROPERTY_MAX_LENGTH
#define PROPERTY_MAX_LENGTH \
					"MaxLength"
#endif

#ifndef PROPERTY_PASSWORD_ENCODING
#define PROPERTY_PASSWORD_ENCODING \
					"PasswordEncoding"
#endif

#ifndef PROPERTY_IS_SET
#define PROPERTY_IS_SET \
					"IsSet"
#endif



class UNIX_BIOSPassword :
	public CIM_BIOSAttribute
{
public:

	UNIX_BIOSPassword();
	~UNIX_BIOSPassword();

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
	virtual Boolean getMinLength(CIMProperty&) const;
	virtual Uint64 getMinLength() const;
	virtual void setMinLength(Uint64&);
	virtual Boolean getMaxLength(CIMProperty&) const;
	virtual Uint64 getMaxLength() const;
	virtual void setMaxLength(Uint64&);
	virtual Boolean getPasswordEncoding(CIMProperty&) const;
	virtual Uint32 getPasswordEncoding() const;
	virtual void setPasswordEncoding(Uint32&);
	virtual Boolean getIsSet(CIMProperty&) const;
	virtual Boolean getIsSet() const;
	virtual void setIsSet(Boolean&);


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
	Uint64 _minLength;
	Uint64 _maxLength;
	Uint32 _passwordEncoding;
	Boolean _isSet;

#	include "UNIX_BIOSPasswordPrivate.h"


};

#endif /* UNIX_BIOSPASSWORD */
