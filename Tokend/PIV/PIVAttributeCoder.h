/*
 *  Copyright (c) 2004-2007 Apple Inc. All Rights Reserved.
 * 
 *  @APPLE_LICENSE_HEADER_START@
 *  
 *  This file contains Original Code and/or Modifications of Original Code
 *  as defined in and that are subject to the Apple Public Source License
 *  Version 2.0 (the 'License'). You may not use this file except in
 *  compliance with the License. Please obtain a copy of the License at
 *  http://opensource.apple.com/apsl and read it before using this
 *  file.
 *  
 *  The Original Code and all software distributed under the License are
 *  distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 *  EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 *  INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 *  Please see the License for the specific language governing rights and
 *  limitations under the License.
 *  
 *  @APPLE_LICENSE_HEADER_END@
 */

/*
 *  PIVAttributeCoder.h
 *  TokendPIV
 */

/* ---------------------------------------------------------------------------
 *
 *		This file should not need to be modified except for replacing
 *		"piv" with the name of your token
 *
 * ---------------------------------------------------------------------------
*/

#ifndef _PIVATTRIBUTECODER_H_
#define _PIVATTRIBUTECODER_H_

#include "AttributeCoder.h"
#include <string>

//
// A coder that reads the data of an object
//
class PIVDataAttributeCoder : public Tokend::AttributeCoder
{
	NOCOPY(PIVDataAttributeCoder)
public:

	PIVDataAttributeCoder() {}
	virtual ~PIVDataAttributeCoder();

	virtual void decode(Tokend::TokenContext *tokenContext,
		const Tokend::MetaAttribute &metaAttribute, Tokend::Record &record);
};


//
// A coder that produces the LogicalKeySizeInBits of a key
//
class PIVKeySizeAttributeCoder : public Tokend::AttributeCoder
{
	NOCOPY(PIVKeySizeAttributeCoder)
public:
	PIVKeySizeAttributeCoder() {}
	virtual ~PIVKeySizeAttributeCoder();

	virtual void decode(Tokend::TokenContext *tokenContext, const Tokend::MetaAttribute &metaAttribute, Tokend::Record &record);
};


#endif /* !_PIVATTRIBUTECODER_H_ */

