#!/bin/sh

#//%LICENSE////////////////////////////////////////////////////////////////
#//
#// Licensed to The Open Group (TOG) under one or more contributor license
#// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
#// this work for additional information regarding copyright ownership.
#// Each contributor licenses this file to you under the OpenPegasus Open
#// Source License; you may not use this file except in compliance with the
#// License.
#//
#// Permission is hereby granted, free of charge, to any person obtaining a
#// copy of this software and associated documentation files (the "Software"),
#// to deal in the Software without restriction, including without limitation
#// the rights to use, copy, modify, merge, publish, distribute, sublicense,
#// and/or sell copies of the Software, and to permit persons to whom the
#// Software is furnished to do so, subject to the following conditions:
#//
#// The above copyright notice and this permission notice shall be included
#// in all copies or substantial portions of the Software.
#//
#// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
#// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
#// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
#// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
#// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
#// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
#// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#//
#//////////////////////////////////////////////////////////////////////////
#//
#//%/////////////////////////////////////////////////////////////////////////

cd bin/Debug && LD_LIBRARY_PATH=../../../../../ReusablePolicy/bin/Debug:../../../../../ReusablePolicyContainer/bin/Debug:../../../../../NetworkPolicyAction/bin/Debug:../../../../../VendorPolicyAction/bin/Debug:../../../../../IKEAction/bin/Debug:../../../../../IPsecTransportAction/bin/Debug:../../../../../IPsecTunnelAction/bin/Debug:../../../../../PreconfiguredTransportAction/bin/Debug:../../../../../PreconfiguredTunnelAction/bin/Debug:../../../../../RejectConnectionAction/bin/Debug:../../../../../MethodAction/bin/Debug:../../../../../NetworkPacketAction/bin/Debug:../../../../../CompoundPolicyAction/bin/Debug:../../../../../PacketFilterCondition/bin/Debug:../../../../../CompoundPolicyCondition/bin/Debug:../../../../../QueryCondition/bin/Debug:../../../../../DocumentAuthentication/bin/Debug:../../../../../NetworkingIDAuthentication/bin/Debug:../../../../../KerberosAuthentication/bin/Debug:../../../../../BiometricAuthentication/bin/Debug:../../../../../PublicPrivateKeyAuthentication/bin/Debug:../../../../../PhysicalCredentialAuthentication/bin/Debug:../../../../../SharedSecretAuthentication/bin/Debug:../../../../../AccountAuthentication/bin/Debug:../../../../../PolicyTimePeriodCondition/bin/Debug:../../../../../VendorPolicyCondition/bin/Debug:../../../../../NetworkPolicyCondition/bin/Debug:../../../../../AccessControlPolicy/bin/Debug:../../../../../PolicyGroup/bin/Debug:../../../../../AccessControlPolicyGroup/bin/Debug:../../../../../AuthorizationRule/bin/Debug:../../../../../NetworkPolicyRule/bin/Debug:../../../../../IPsecRule/bin/Debug:../../../../../IKERule/bin/Debug:../../../../../AuthenticationRule/bin/Debug:../../../../../TierPolicyRule/bin/Debug:/usr/local/lib/pegasus/lib:/usr/local/lib:/usr/lib:/lib ./TestUNIX_ReusablePolicy
