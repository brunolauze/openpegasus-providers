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


/* **** Experimental *** */
/*
TRUE
*/


/* **** Version *** */
/*
2.21.0
*/


/* **** UMLPackagePath *** */
/*
CIM::User::Credential
*/


/* **** Description *** */
/*
FingerprintImage is the Image captured through the fingerprint reader. By applying the CompressionAlgorithm on the image, the fingerprint template can be generated.
*/


/*
			 *** Properties ***

			CIM_ManagedElement:
				InstanceID String
				Caption String
				Description String
				ElementName String
				Generation UInt64

			CIM_Credential:
				Issued DateTime
				Expires DateTime
				ValidFrom DateTime

			UNIX_FingerprintImage:
				ImageFormat UInt16
				OtherImageFormat String
				Image UInt8
				DPI UInt32
				Grayscale UInt32
				CapturingType UInt16


*/


/*
			 *** Methods ***

			CIM_ManagedElement:

			CIM_Credential:

			UNIX_FingerprintImage:


*/

#ifndef __UNIX_FINGERPRINTIMAGE_H
#define __UNIX_FINGERPRINTIMAGE_H


#include "CIM_Credential.h"

#include "UNIX_FingerprintImageDeps.h"


#ifndef PROPERTY_IMAGE_FORMAT
#define PROPERTY_IMAGE_FORMAT \
					"ImageFormat"
#endif

#ifndef PROPERTY_OTHER_IMAGE_FORMAT
#define PROPERTY_OTHER_IMAGE_FORMAT \
					"OtherImageFormat"
#endif

#ifndef PROPERTY_IMAGE
#define PROPERTY_IMAGE \
					"Image"
#endif

#ifndef PROPERTY_D_P_I
#define PROPERTY_D_P_I \
					"DPI"
#endif

#ifndef PROPERTY_GRAYSCALE
#define PROPERTY_GRAYSCALE \
					"Grayscale"
#endif

#ifndef PROPERTY_CAPTURING_TYPE
#define PROPERTY_CAPTURING_TYPE \
					"CapturingType"
#endif



class UNIX_FingerprintImage :
	public CIM_Credential
{
public:

	UNIX_FingerprintImage();
	~UNIX_FingerprintImage();

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
	virtual Boolean getIssued(CIMProperty&) const;
	virtual CIMDateTime getIssued() const;
	virtual void setIssued(CIMDateTime&);
	virtual Boolean getExpires(CIMProperty&) const;
	virtual CIMDateTime getExpires() const;
	virtual void setExpires(CIMDateTime&);
	virtual Boolean getValidFrom(CIMProperty&) const;
	virtual CIMDateTime getValidFrom() const;
	virtual void setValidFrom(CIMDateTime&);
	virtual Boolean getImageFormat(CIMProperty&) const;
	virtual Uint16 getImageFormat() const;
	virtual void setImageFormat(Uint16&);
	virtual Boolean getOtherImageFormat(CIMProperty&) const;
	virtual String getOtherImageFormat() const;
	virtual void setOtherImageFormat(String&);
	virtual Boolean getImage(CIMProperty&) const;
	virtual Array<Uint8> getImage() const;
	virtual void setImage(Array<Uint8>&);
	virtual Boolean getDPI(CIMProperty&) const;
	virtual Uint32 getDPI() const;
	virtual void setDPI(Uint32&);
	virtual Boolean getGrayscale(CIMProperty&) const;
	virtual Uint32 getGrayscale() const;
	virtual void setGrayscale(Uint32&);
	virtual Boolean getCapturingType(CIMProperty&) const;
	virtual Uint16 getCapturingType() const;
	virtual void setCapturingType(Uint16&);


private:
	CIMName currentScope;
	CIMOMHandle _cimomHandle;
	String _instanceID;
	String _caption;
	String _description;
	String _elementName;
	Uint64 _generation;
	CIMDateTime _issued;
	CIMDateTime _expires;
	CIMDateTime _validFrom;
	Uint16 _imageFormat;
	String _otherImageFormat;
	Array<Uint8> _image;
	Uint32 _dPI;
	Uint32 _grayscale;
	Uint16 _capturingType;

#	include "UNIX_FingerprintImagePrivate.h"


};

#endif /* UNIX_FINGERPRINTIMAGE */
