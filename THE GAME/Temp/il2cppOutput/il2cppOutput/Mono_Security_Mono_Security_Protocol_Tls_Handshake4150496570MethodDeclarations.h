#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t4150496570;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;
// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"
#include "mscorlib_System_Security_Cryptography_RSA3719518354.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsClientCertificateVerify__ctor_m110646389 (TlsClientCertificateVerify_t4150496570 * __this, Context_t4285182719 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C"  void TlsClientCertificateVerify_Update_m1622071203 (TlsClientCertificateVerify_t4150496570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C"  void TlsClientCertificateVerify_ProcessAsSsl3_m3377063356 (TlsClientCertificateVerify_t4150496570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern "C"  void TlsClientCertificateVerify_ProcessAsTls1_m1960818833 (TlsClientCertificateVerify_t4150496570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern "C"  RSA_t3719518354 * TlsClientCertificateVerify_getClientCertRSA_m3799135236 (TlsClientCertificateVerify_t4150496570 * __this, RSA_t3719518354 * ___privKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t3397334013* TlsClientCertificateVerify_getUnsignedBigInteger_m3357519896 (TlsClientCertificateVerify_t4150496570 * __this, ByteU5BU5D_t3397334013* ___integer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
