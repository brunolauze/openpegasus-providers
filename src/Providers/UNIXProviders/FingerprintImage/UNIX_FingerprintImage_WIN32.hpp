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


UNIX_FingerprintImage::UNIX_FingerprintImage(void)
{
}

UNIX_FingerprintImage::~UNIX_FingerprintImage(void)
{
}

Boolean UNIX_FingerprintImage::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FingerprintImage::getInstanceID() const
{
	return _instanceID;
}

void UNIX_FingerprintImage::setInstanceID(String &value)
{
	_instanceID = value;
}

Boolean UNIX_FingerprintImage::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FingerprintImage::getCaption() const
{
	return _caption;
}

void UNIX_FingerprintImage::setCaption(String &value)
{
	_caption = value;
}

Boolean UNIX_FingerprintImage::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FingerprintImage::getDescription() const
{
	return _description;
}

void UNIX_FingerprintImage::setDescription(String &value)
{
	_description = value;
}

Boolean UNIX_FingerprintImage::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FingerprintImage::getElementName() const
{
	return _elementName;
}

void UNIX_FingerprintImage::setElementName(String &value)
{
	_elementName = value;
}

Boolean UNIX_FingerprintImage::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_FingerprintImage::getGeneration() const
{
	return _generation;
}

void UNIX_FingerprintImage::setGeneration(Uint64 &value)
{
	_generation = value;
}

Boolean UNIX_FingerprintImage::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_FingerprintImage::getIssued() const
{
	return _issued;
}

void UNIX_FingerprintImage::setIssued(CIMDateTime &value)
{
	_issued = value;
}

Boolean UNIX_FingerprintImage::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_FingerprintImage::getExpires() const
{
	return _expires;
}

void UNIX_FingerprintImage::setExpires(CIMDateTime &value)
{
	_expires = value;
}

Boolean UNIX_FingerprintImage::getValidFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_FROM, getValidFrom());
	return true;
}

CIMDateTime UNIX_FingerprintImage::getValidFrom() const
{
	return _validFrom;
}

void UNIX_FingerprintImage::setValidFrom(CIMDateTime &value)
{
	_validFrom = value;
}

Boolean UNIX_FingerprintImage::getImageFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMAGE_FORMAT, getImageFormat());
	return true;
}

Uint16 UNIX_FingerprintImage::getImageFormat() const
{
	return _imageFormat;
}

void UNIX_FingerprintImage::setImageFormat(Uint16 &value)
{
	_imageFormat = value;
}

Boolean UNIX_FingerprintImage::getOtherImageFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IMAGE_FORMAT, getOtherImageFormat());
	return true;
}

String UNIX_FingerprintImage::getOtherImageFormat() const
{
	return _otherImageFormat;
}

void UNIX_FingerprintImage::setOtherImageFormat(String &value)
{
	_otherImageFormat = value;
}

Boolean UNIX_FingerprintImage::getImage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMAGE, getImage());
	return true;
}

Array<Uint8> UNIX_FingerprintImage::getImage() const
{
	return _image;
}

void UNIX_FingerprintImage::setImage(Array<Uint8> &value)
{
	_image = value;
}

Boolean UNIX_FingerprintImage::getDPI(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_P_I, getDPI());
	return true;
}

Uint32 UNIX_FingerprintImage::getDPI() const
{
	return _dPI;
}

void UNIX_FingerprintImage::setDPI(Uint32 &value)
{
	_dPI = value;
}

Boolean UNIX_FingerprintImage::getGrayscale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GRAYSCALE, getGrayscale());
	return true;
}

Uint32 UNIX_FingerprintImage::getGrayscale() const
{
	return _grayscale;
}

void UNIX_FingerprintImage::setGrayscale(Uint32 &value)
{
	_grayscale = value;
}

Boolean UNIX_FingerprintImage::getCapturingType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTURING_TYPE, getCapturingType());
	return true;
}

Uint16 UNIX_FingerprintImage::getCapturingType() const
{
	return _capturingType;
}

void UNIX_FingerprintImage::setCapturingType(Uint16 &value)
{
	_capturingType = value;
}


void UNIX_FingerprintImage::clearInstance()
{

	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FingerprintImage");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_imageFormat = Uint16(0);
	_otherImageFormat = String ("");
	_image.clear();
	_dPI = Uint32(0);
	_grayscale = Uint32(0);
	_capturingType = Uint16(0);

}

Boolean UNIX_FingerprintImage::loadInstance(const CIMInstance &instance)
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
			else if (String::equal(property.getName().getString(), "Issued"))
			{
				CIMDateTime issuedValue;
				property.getValue().get(issuedValue);
				setIssued(issuedValue);
			}
			else if (String::equal(property.getName().getString(), "Expires"))
			{
				CIMDateTime expiresValue;
				property.getValue().get(expiresValue);
				setExpires(expiresValue);
			}
			else if (String::equal(property.getName().getString(), "ValidFrom"))
			{
				CIMDateTime validFromValue;
				property.getValue().get(validFromValue);
				setValidFrom(validFromValue);
			}
			else if (String::equal(property.getName().getString(), "ImageFormat"))
			{
				Uint16 imageFormatValue;
				property.getValue().get(imageFormatValue);
				setImageFormat(imageFormatValue);
			}
			else if (String::equal(property.getName().getString(), "OtherImageFormat"))
			{
				String otherImageFormatValue;
				property.getValue().get(otherImageFormatValue);
				setOtherImageFormat(otherImageFormatValue);
			}
			else if (String::equal(property.getName().getString(), "Image"))
			{
				Array<Uint8> imageValue;
				property.getValue().get(imageValue);
				setImage(imageValue);
			}
			else if (String::equal(property.getName().getString(), "DPI"))
			{
				Uint32 dPIValue;
				property.getValue().get(dPIValue);
				setDPI(dPIValue);
			}
			else if (String::equal(property.getName().getString(), "Grayscale"))
			{
				Uint32 grayscaleValue;
				property.getValue().get(grayscaleValue);
				setGrayscale(grayscaleValue);
			}
			else if (String::equal(property.getName().getString(), "CapturingType"))
			{
				Uint16 capturingTypeValue;
				property.getValue().get(capturingTypeValue);
				setCapturingType(capturingTypeValue);
			}
	}
	return true;
}


Boolean UNIX_FingerprintImage::initialize()
{
	return false;
}

Boolean UNIX_FingerprintImage::load(int &pIndex)
{
	
	_instanceID = String ("");
	_caption = String ("");
	_description = String ("");
	_elementName = String("FingerprintImage");
	_generation = Uint64(0);
	_issued = CIMHelper::getCurrentTime();
	_expires = CIMHelper::getCurrentTime();
	_validFrom = CIMHelper::getCurrentTime();
	_imageFormat = Uint16(0);
	_otherImageFormat = String ("");
	_image.clear();
	_dPI = Uint32(0);
	_grayscale = Uint32(0);
	_capturingType = Uint16(0);
	
	return false;
}

Boolean UNIX_FingerprintImage::finalize()
{
	return false;
}


Boolean UNIX_FingerprintImage::find(const Array<CIMKeyBinding> &kbArray)
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

Boolean UNIX_FingerprintImage::createInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintImage::modifyInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintImage::deleteInstance(const OperationContext &ctx)
{
	return false;
}

Boolean UNIX_FingerprintImage::validateInstance()
{
	return true;
}

