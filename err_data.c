/* Copyright (c) 2015, Google Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. */

 /* This file was generated by err_data_generate.go. */

#include <openssl/base.h>
#include <openssl/err.h>
#include <openssl/type_check.h>


OPENSSL_COMPILE_ASSERT(ERR_LIB_NONE == 1, library_values_changed_1);
OPENSSL_COMPILE_ASSERT(ERR_LIB_SYS == 2, library_values_changed_2);
OPENSSL_COMPILE_ASSERT(ERR_LIB_BN == 3, library_values_changed_3);
OPENSSL_COMPILE_ASSERT(ERR_LIB_RSA == 4, library_values_changed_4);
OPENSSL_COMPILE_ASSERT(ERR_LIB_DH == 5, library_values_changed_5);
OPENSSL_COMPILE_ASSERT(ERR_LIB_EVP == 6, library_values_changed_6);
OPENSSL_COMPILE_ASSERT(ERR_LIB_BUF == 7, library_values_changed_7);
OPENSSL_COMPILE_ASSERT(ERR_LIB_OBJ == 8, library_values_changed_8);
OPENSSL_COMPILE_ASSERT(ERR_LIB_PEM == 9, library_values_changed_9);
OPENSSL_COMPILE_ASSERT(ERR_LIB_DSA == 10, library_values_changed_10);
OPENSSL_COMPILE_ASSERT(ERR_LIB_X509 == 11, library_values_changed_11);
OPENSSL_COMPILE_ASSERT(ERR_LIB_ASN1 == 12, library_values_changed_12);
OPENSSL_COMPILE_ASSERT(ERR_LIB_CONF == 13, library_values_changed_13);
OPENSSL_COMPILE_ASSERT(ERR_LIB_CRYPTO == 14, library_values_changed_14);
OPENSSL_COMPILE_ASSERT(ERR_LIB_EC == 15, library_values_changed_15);
OPENSSL_COMPILE_ASSERT(ERR_LIB_SSL == 16, library_values_changed_16);
OPENSSL_COMPILE_ASSERT(ERR_LIB_BIO == 17, library_values_changed_17);
OPENSSL_COMPILE_ASSERT(ERR_LIB_PKCS7 == 18, library_values_changed_18);
OPENSSL_COMPILE_ASSERT(ERR_LIB_PKCS8 == 19, library_values_changed_19);
OPENSSL_COMPILE_ASSERT(ERR_LIB_X509V3 == 20, library_values_changed_20);
OPENSSL_COMPILE_ASSERT(ERR_LIB_RAND == 21, library_values_changed_21);
OPENSSL_COMPILE_ASSERT(ERR_LIB_ENGINE == 22, library_values_changed_22);
OPENSSL_COMPILE_ASSERT(ERR_LIB_OCSP == 23, library_values_changed_23);
OPENSSL_COMPILE_ASSERT(ERR_LIB_UI == 24, library_values_changed_24);
OPENSSL_COMPILE_ASSERT(ERR_LIB_COMP == 25, library_values_changed_25);
OPENSSL_COMPILE_ASSERT(ERR_LIB_ECDSA == 26, library_values_changed_26);
OPENSSL_COMPILE_ASSERT(ERR_LIB_ECDH == 27, library_values_changed_27);
OPENSSL_COMPILE_ASSERT(ERR_LIB_HMAC == 28, library_values_changed_28);
OPENSSL_COMPILE_ASSERT(ERR_LIB_DIGEST == 29, library_values_changed_29);
OPENSSL_COMPILE_ASSERT(ERR_LIB_CIPHER == 30, library_values_changed_30);
OPENSSL_COMPILE_ASSERT(ERR_LIB_HKDF == 31, library_values_changed_31);
OPENSSL_COMPILE_ASSERT(ERR_LIB_USER == 32, library_values_changed_32);
OPENSSL_COMPILE_ASSERT(ERR_NUM_LIBS == 33, library_values_changed_num);

const uint32_t kOpenSSLReasonValues[] = {
    0xc320838,
    0xc328852,
    0xc330861,
    0xc338871,
    0xc340880,
    0xc348899,
    0xc3508a5,
    0xc3588c2,
    0xc3608d4,
    0xc3688e2,
    0xc3708f2,
    0xc3788ff,
    0xc38090f,
    0xc38891a,
    0xc390930,
    0xc39893f,
    0xc3a0953,
    0xc3a8845,
    0xc3b00ea,
    0x10320845,
    0x1032945f,
    0x1033146b,
    0x10339484,
    0x10341497,
    0x10348eb4,
    0x10350c42,
    0x103594aa,
    0x103614bf,
    0x103694d2,
    0x103714f1,
    0x1037950a,
    0x1038151f,
    0x1038953d,
    0x1039154c,
    0x10399568,
    0x103a1583,
    0x103a9592,
    0x103b15ae,
    0x103b95c9,
    0x103c15e0,
    0x103c80ea,
    0x103d15f1,
    0x103d9605,
    0x103e1624,
    0x103e9633,
    0x103f164a,
    0x103f965d,
    0x10400c06,
    0x10409670,
    0x1041168e,
    0x104196a1,
    0x104216bb,
    0x104296cb,
    0x104316df,
    0x104396f5,
    0x1044170d,
    0x10449722,
    0x10451736,
    0x10459748,
    0x104605fb,
    0x1046893f,
    0x1047175d,
    0x10479774,
    0x10481789,
    0x10489797,
    0x14320be9,
    0x14328bf7,
    0x14330c06,
    0x14338c18,
    0x143400ac,
    0x143480ea,
    0x18320083,
    0x18328f0a,
    0x183300ac,
    0x18338f20,
    0x18340f34,
    0x183480ea,
    0x18350f49,
    0x18358f61,
    0x18360f76,
    0x18368f8a,
    0x18370fae,
    0x18378fc4,
    0x18380fd8,
    0x18388fe8,
    0x18390a57,
    0x18398ff8,
    0x183a100d,
    0x183a9033,
    0x183b0c4e,
    0x183b9052,
    0x183c1064,
    0x183c906f,
    0x183d107f,
    0x183d9090,
    0x183e10a1,
    0x183e90b3,
    0x183f10dc,
    0x183f90f5,
    0x1840110d,
    0x184086d3,
    0x18411040,
    0x18419021,
    0x20321134,
    0x24321140,
    0x24328985,
    0x24331152,
    0x2433915f,
    0x2434116c,
    0x2434917e,
    0x2435118d,
    0x243591aa,
    0x243611b7,
    0x243691c5,
    0x243711d3,
    0x243791e1,
    0x243811ea,
    0x243891f7,
    0x2439120a,
    0x28320c36,
    0x28328c4e,
    0x28330c06,
    0x28338c61,
    0x28340c42,
    0x283480ac,
    0x283500ea,
    0x2c322b15,
    0x2c32ab23,
    0x2c332b35,
    0x2c33ab47,
    0x2c342b5b,
    0x2c34ab6d,
    0x2c352b88,
    0x2c35ab9a,
    0x2c362bad,
    0x2c36832d,
    0x2c372bba,
    0x2c37abcc,
    0x2c382bf1,
    0x2c38ac08,
    0x2c392c16,
    0x2c39ac26,
    0x2c3a2c38,
    0x2c3aac4c,
    0x2c3b2c5d,
    0x2c3bac7c,
    0x2c3c2c90,
    0x2c3caca6,
    0x2c3d2cbf,
    0x2c3dacdc,
    0x2c3e2ced,
    0x2c3eacfb,
    0x2c3f2d13,
    0x2c3fad2b,
    0x2c402d38,
    0x2c409134,
    0x2c412d49,
    0x2c41ad5c,
    0x2c42110d,
    0x2c42ad6d,
    0x2c430720,
    0x2c43ac6e,
    0x2c442bdf,
    0x30320000,
    0x30328015,
    0x3033001f,
    0x30338038,
    0x3034004a,
    0x30348064,
    0x3035006b,
    0x30358083,
    0x30360094,
    0x303680ac,
    0x303700b9,
    0x303780c8,
    0x303800ea,
    0x303880f7,
    0x3039010a,
    0x30398125,
    0x303a013a,
    0x303a814e,
    0x303b0162,
    0x303b8173,
    0x303c018c,
    0x303c81a9,
    0x303d01b7,
    0x303d81cb,
    0x303e01db,
    0x303e81f4,
    0x303f0204,
    0x303f8217,
    0x30400226,
    0x30408232,
    0x30410247,
    0x30418257,
    0x3042026e,
    0x3042827b,
    0x3043028e,
    0x3043829d,
    0x304402b2,
    0x304482d3,
    0x304502e6,
    0x304582f9,
    0x30460312,
    0x3046832d,
    0x3047034a,
    0x30478363,
    0x30480371,
    0x30488382,
    0x30490391,
    0x304983a9,
    0x304a03bb,
    0x304a83cf,
    0x304b03ee,
    0x304b8401,
    0x304c040c,
    0x304c841d,
    0x304d0429,
    0x304d843f,
    0x304e044d,
    0x304e8463,
    0x304f0475,
    0x304f8487,
    0x3050049a,
    0x305084ad,
    0x305104be,
    0x305184ce,
    0x305204e6,
    0x305284fb,
    0x30530513,
    0x30538527,
    0x3054053f,
    0x30548558,
    0x30550571,
    0x3055858e,
    0x30560599,
    0x305685b1,
    0x305705c1,
    0x305785d2,
    0x305805e5,
    0x305885fb,
    0x30590604,
    0x30598619,
    0x305a062c,
    0x305a863b,
    0x305b065b,
    0x305b866a,
    0x305c068b,
    0x305c86a7,
    0x305d06b3,
    0x305d86d3,
    0x305e06ef,
    0x305e8700,
    0x305f0716,
    0x305f8720,
    0x34320b47,
    0x34328b5b,
    0x34330b78,
    0x34338b8b,
    0x34340b9a,
    0x34348bd3,
    0x34350bb7,
    0x3c320083,
    0x3c328c8b,
    0x3c330ca4,
    0x3c338cbf,
    0x3c340cdc,
    0x3c348d06,
    0x3c350d21,
    0x3c358d47,
    0x3c360d60,
    0x3c368d78,
    0x3c370d89,
    0x3c378d97,
    0x3c380da4,
    0x3c388db8,
    0x3c390c4e,
    0x3c398dcc,
    0x3c3a0de0,
    0x3c3a88ff,
    0x3c3b0df0,
    0x3c3b8e0b,
    0x3c3c0e1d,
    0x3c3c8e33,
    0x3c3d0e3d,
    0x3c3d8e51,
    0x3c3e0e5f,
    0x3c3e8e84,
    0x3c3f0c77,
    0x3c3f8e6d,
    0x3c4000ac,
    0x3c4080ea,
    0x3c410cf7,
    0x3c418d36,
    0x403217ca,
    0x403297e0,
    0x4033180e,
    0x40339818,
    0x4034182f,
    0x4034984d,
    0x4035185d,
    0x4035986f,
    0x4036187c,
    0x40369888,
    0x4037189d,
    0x403798af,
    0x403818ba,
    0x403898cc,
    0x40390eb4,
    0x403998dc,
    0x403a18ef,
    0x403a9910,
    0x403b1921,
    0x403b9931,
    0x403c0064,
    0x403c8083,
    0x403d19b5,
    0x403d99cb,
    0x403e19da,
    0x403e9a12,
    0x403f1a2c,
    0x403f9a3a,
    0x40401a4f,
    0x40409a7c,
    0x40411a99,
    0x40419ab4,
    0x40421acd,
    0x40429ae0,
    0x40431af4,
    0x40439b0c,
    0x40441b23,
    0x404480ac,
    0x40451b38,
    0x40459b4a,
    0x40461b6e,
    0x40469b8e,
    0x40471b9c,
    0x40479bc3,
    0x40481c00,
    0x40489c19,
    0x40491c30,
    0x40499c4a,
    0x404a1c61,
    0x404a9c7f,
    0x404b1c97,
    0x404b9cae,
    0x404c1cc4,
    0x404c9cd6,
    0x404d1cf7,
    0x404d9d19,
    0x404e1d2d,
    0x404e9d3a,
    0x404f1d67,
    0x404f9d90,
    0x40501dcb,
    0x40509ddf,
    0x40511dfa,
    0x40521e0a,
    0x40529e2e,
    0x40531e46,
    0x40539e59,
    0x40541e6e,
    0x40549e91,
    0x40551e9f,
    0x40559ebc,
    0x40561ec9,
    0x40569ee2,
    0x40571efa,
    0x40579f0d,
    0x40581f22,
    0x40589f49,
    0x40591f78,
    0x40599fa5,
    0x405a1fb9,
    0x405a9fc9,
    0x405b1fe1,
    0x405b9ff2,
    0x405c2005,
    0x405ca026,
    0x405d2033,
    0x405da04a,
    0x405e2088,
    0x405e8a95,
    0x405f20a9,
    0x405fa0b6,
    0x406020c4,
    0x4060a0e6,
    0x4061212a,
    0x4061a162,
    0x40622179,
    0x4062a18a,
    0x4063219b,
    0x4063a1b0,
    0x406421c7,
    0x4064a1f3,
    0x4065220e,
    0x4065a225,
    0x4066223d,
    0x4066a267,
    0x40672292,
    0x4067a2b3,
    0x406822da,
    0x4068a2fb,
    0x4069232d,
    0x4069a35b,
    0x406a237c,
    0x406aa39c,
    0x406b2524,
    0x406ba547,
    0x406c255d,
    0x406ca7d8,
    0x406d2807,
    0x406da82f,
    0x406e285d,
    0x406ea891,
    0x406f28b0,
    0x406fa8c5,
    0x407028d8,
    0x4070a8f5,
    0x40710800,
    0x4071a907,
    0x4072291a,
    0x4072a933,
    0x4073294b,
    0x407393ce,
    0x4074295f,
    0x4074a979,
    0x4075298a,
    0x4075a99e,
    0x407629ac,
    0x407691f7,
    0x407729d1,
    0x4077a9f3,
    0x40782a0e,
    0x4078aa47,
    0x40792a5e,
    0x4079aa74,
    0x407a2a80,
    0x407aaa93,
    0x407b2aa8,
    0x407baaba,
    0x407c2aeb,
    0x407caaf4,
    0x407d2316,
    0x407d9da0,
    0x407e2a23,
    0x407e9f59,
    0x407f1bb0,
    0x407f9957,
    0x40801d77,
    0x40809bd8,
    0x40811e1c,
    0x40819d51,
    0x40822848,
    0x4082993d,
    0x40831f34,
    0x4083a1d8,
    0x40841bec,
    0x40849f91,
    0x40852016,
    0x4085a10e,
    0x4086206a,
    0x40869dba,
    0x40872875,
    0x4087a13f,
    0x4088199e,
    0x4088a2c6,
    0x408919ed,
    0x4089997a,
    0x408a257d,
    0x408a97ae,
    0x408b2acf,
    0x408b9a63,
    0x41f4244f,
    0x41f924e1,
    0x41fe23d4,
    0x41fea5c9,
    0x41ff26ba,
    0x42032468,
    0x4208248a,
    0x4208a4c6,
    0x420923b8,
    0x4209a500,
    0x420a240f,
    0x420aa3ef,
    0x420b242f,
    0x420ba4a8,
    0x420c26d6,
    0x420ca596,
    0x420d25b0,
    0x420da5e7,
    0x42122601,
    0x4217269d,
    0x4217a643,
    0x421c2665,
    0x421f2620,
    0x422126ed,
    0x42262680,
    0x422b27bc,
    0x422ba76a,
    0x422c27a4,
    0x422ca729,
    0x422d2708,
    0x422da789,
    0x422e274f,
    0x4432072b,
    0x4432873a,
    0x44330746,
    0x44338754,
    0x44340767,
    0x44348778,
    0x4435077f,
    0x44358789,
    0x4436079c,
    0x443687b2,
    0x443707c4,
    0x443787d1,
    0x443807e0,
    0x443887e8,
    0x44390800,
    0x4439880e,
    0x443a0821,
    0x4c321235,
    0x4c329245,
    0x4c331258,
    0x4c339278,
    0x4c3400ac,
    0x4c3480ea,
    0x4c351284,
    0x4c359292,
    0x4c3612ae,
    0x4c3692c1,
    0x4c3712d0,
    0x4c3792de,
    0x4c3812f3,
    0x4c3892ff,
    0x4c39131f,
    0x4c399349,
    0x4c3a1362,
    0x4c3a937b,
    0x4c3b05fb,
    0x4c3b9394,
    0x4c3c13a6,
    0x4c3c93b5,
    0x4c3d13ce,
    0x4c3d8c29,
    0x4c3e1427,
    0x4c3e93dd,
    0x4c3f1449,
    0x4c3f91f7,
    0x4c4013f3,
    0x4c409221,
    0x4c411417,
    0x50322d7f,
    0x5032ad8e,
    0x50332d99,
    0x5033ada9,
    0x50342dc2,
    0x5034addc,
    0x50352dea,
    0x5035ae00,
    0x50362e12,
    0x5036ae28,
    0x50372e41,
    0x5037ae54,
    0x50382e6c,
    0x5038ae7d,
    0x50392e92,
    0x5039aea6,
    0x503a2ec6,
    0x503aaedc,
    0x503b2ef4,
    0x503baf06,
    0x503c2f22,
    0x503caf39,
    0x503d2f52,
    0x503daf68,
    0x503e2f75,
    0x503eaf8b,
    0x503f2f9d,
    0x503f8382,
    0x50402fb0,
    0x5040afc0,
    0x50412fda,
    0x5041afe9,
    0x50423003,
    0x5042b020,
    0x50433030,
    0x5043b040,
    0x5044304f,
    0x5044843f,
    0x50453063,
    0x5045b081,
    0x50463094,
    0x5046b0aa,
    0x504730bc,
    0x5047b0d1,
    0x504830f7,
    0x5048b105,
    0x50493118,
    0x5049b12d,
    0x504a3143,
    0x504ab153,
    0x504b3173,
    0x504bb186,
    0x504c31a9,
    0x504cb1d7,
    0x504d31e9,
    0x504db206,
    0x504e3221,
    0x504eb23d,
    0x504f324f,
    0x504fb266,
    0x50503275,
    0x505086ef,
    0x50513288,
    0x58320ef2,
    0x68320eb4,
    0x68328c4e,
    0x68330c61,
    0x68338ec2,
    0x68340ed2,
    0x683480ea,
    0x6c320e90,
    0x6c328c18,
    0x6c330e9b,
    0x74320a0b,
    0x743280ac,
    0x74330c29,
    0x78320970,
    0x78328985,
    0x78330991,
    0x78338083,
    0x783409a0,
    0x783489b5,
    0x783509d4,
    0x783589f6,
    0x78360a0b,
    0x78368a21,
    0x78370a31,
    0x78378a44,
    0x78380a57,
    0x78388a69,
    0x78390a76,
    0x78398a95,
    0x783a0aaa,
    0x783a8ab8,
    0x783b0ac2,
    0x783b8ad6,
    0x783c0aed,
    0x783c8b02,
    0x783d0b19,
    0x783d8b2e,
    0x783e0a84,
    0x7c321123,
};

const size_t kOpenSSLReasonValuesLen = sizeof(kOpenSSLReasonValues) / sizeof(kOpenSSLReasonValues[0]);

const char kOpenSSLReasonStringData[] =
    "ASN1_LENGTH_MISMATCH\0"
    "AUX_ERROR\0"
    "BAD_GET_ASN1_OBJECT_CALL\0"
    "BAD_OBJECT_HEADER\0"
    "BMPSTRING_IS_WRONG_LENGTH\0"
    "BN_LIB\0"
    "BOOLEAN_IS_WRONG_LENGTH\0"
    "BUFFER_TOO_SMALL\0"
    "CONTEXT_NOT_INITIALISED\0"
    "DECODE_ERROR\0"
    "DEPTH_EXCEEDED\0"
    "DIGEST_AND_KEY_TYPE_NOT_SUPPORTED\0"
    "ENCODE_ERROR\0"
    "ERROR_GETTING_TIME\0"
    "EXPECTING_AN_ASN1_SEQUENCE\0"
    "EXPECTING_AN_INTEGER\0"
    "EXPECTING_AN_OBJECT\0"
    "EXPECTING_A_BOOLEAN\0"
    "EXPECTING_A_TIME\0"
    "EXPLICIT_LENGTH_MISMATCH\0"
    "EXPLICIT_TAG_NOT_CONSTRUCTED\0"
    "FIELD_MISSING\0"
    "FIRST_NUM_TOO_LARGE\0"
    "HEADER_TOO_LONG\0"
    "ILLEGAL_BITSTRING_FORMAT\0"
    "ILLEGAL_BOOLEAN\0"
    "ILLEGAL_CHARACTERS\0"
    "ILLEGAL_FORMAT\0"
    "ILLEGAL_HEX\0"
    "ILLEGAL_IMPLICIT_TAG\0"
    "ILLEGAL_INTEGER\0"
    "ILLEGAL_NESTED_TAGGING\0"
    "ILLEGAL_NULL\0"
    "ILLEGAL_NULL_VALUE\0"
    "ILLEGAL_OBJECT\0"
    "ILLEGAL_OPTIONAL_ANY\0"
    "ILLEGAL_OPTIONS_ON_ITEM_TEMPLATE\0"
    "ILLEGAL_TAGGED_ANY\0"
    "ILLEGAL_TIME_VALUE\0"
    "INTEGER_NOT_ASCII_FORMAT\0"
    "INTEGER_TOO_LARGE_FOR_LONG\0"
    "INVALID_BIT_STRING_BITS_LEFT\0"
    "INVALID_BMPSTRING_LENGTH\0"
    "INVALID_DIGIT\0"
    "INVALID_MODIFIER\0"
    "INVALID_NUMBER\0"
    "INVALID_OBJECT_ENCODING\0"
    "INVALID_SEPARATOR\0"
    "INVALID_TIME_FORMAT\0"
    "INVALID_UNIVERSALSTRING_LENGTH\0"
    "INVALID_UTF8STRING\0"
    "LIST_ERROR\0"
    "MISSING_ASN1_EOS\0"
    "MISSING_EOC\0"
    "MISSING_SECOND_NUMBER\0"
    "MISSING_VALUE\0"
    "MSTRING_NOT_UNIVERSAL\0"
    "MSTRING_WRONG_TAG\0"
    "NESTED_ASN1_ERROR\0"
    "NESTED_ASN1_STRING\0"
    "NON_HEX_CHARACTERS\0"
    "NOT_ASCII_FORMAT\0"
    "NOT_ENOUGH_DATA\0"
    "NO_MATCHING_CHOICE_TYPE\0"
    "NULL_IS_WRONG_LENGTH\0"
    "OBJECT_NOT_ASCII_FORMAT\0"
    "ODD_NUMBER_OF_CHARS\0"
    "SECOND_NUMBER_TOO_LARGE\0"
    "SEQUENCE_LENGTH_MISMATCH\0"
    "SEQUENCE_NOT_CONSTRUCTED\0"
    "SEQUENCE_OR_SET_NEEDS_CONFIG\0"
    "SHORT_LINE\0"
    "STREAMING_NOT_SUPPORTED\0"
    "STRING_TOO_LONG\0"
    "STRING_TOO_SHORT\0"
    "TAG_VALUE_TOO_HIGH\0"
    "TIME_NOT_ASCII_FORMAT\0"
    "TOO_LONG\0"
    "TYPE_NOT_CONSTRUCTED\0"
    "TYPE_NOT_PRIMITIVE\0"
    "UNEXPECTED_EOC\0"
    "UNIVERSALSTRING_IS_WRONG_LENGTH\0"
    "UNKNOWN_FORMAT\0"
    "UNKNOWN_MESSAGE_DIGEST_ALGORITHM\0"
    "UNKNOWN_SIGNATURE_ALGORITHM\0"
    "UNKNOWN_TAG\0"
    "UNSUPPORTED_ANY_DEFINED_BY_TYPE\0"
    "UNSUPPORTED_PUBLIC_KEY_TYPE\0"
    "UNSUPPORTED_TYPE\0"
    "WRONG_PUBLIC_KEY_TYPE\0"
    "WRONG_TAG\0"
    "WRONG_TYPE\0"
    "BAD_FOPEN_MODE\0"
    "BROKEN_PIPE\0"
    "CONNECT_ERROR\0"
    "ERROR_SETTING_NBIO\0"
    "INVALID_ARGUMENT\0"
    "IN_USE\0"
    "KEEPALIVE\0"
    "NBIO_CONNECT_ERROR\0"
    "NO_HOSTNAME_SPECIFIED\0"
    "NO_PORT_SPECIFIED\0"
    "NO_SUCH_FILE\0"
    "NULL_PARAMETER\0"
    "SYS_LIB\0"
    "UNABLE_TO_CREATE_SOCKET\0"
    "UNINITIALIZED\0"
    "UNSUPPORTED_METHOD\0"
    "WRITE_TO_READ_ONLY_BIO\0"
    "ARG2_LT_ARG3\0"
    "BAD_ENCODING\0"
    "BAD_RECIPROCAL\0"
    "BIGNUM_TOO_LONG\0"
    "BITS_TOO_SMALL\0"
    "CALLED_WITH_EVEN_MODULUS\0"
    "DIV_BY_ZERO\0"
    "EXPAND_ON_STATIC_BIGNUM_DATA\0"
    "INPUT_NOT_REDUCED\0"
    "INVALID_RANGE\0"
    "NEGATIVE_NUMBER\0"
    "NOT_A_SQUARE\0"
    "NOT_INITIALIZED\0"
    "NO_INVERSE\0"
    "PRIVATE_KEY_TOO_LARGE\0"
    "P_IS_NOT_PRIME\0"
    "TOO_MANY_ITERATIONS\0"
    "TOO_MANY_TEMPORARY_VARIABLES\0"
    "AES_KEY_SETUP_FAILED\0"
    "BAD_DECRYPT\0"
    "BAD_KEY_LENGTH\0"
    "CTRL_NOT_IMPLEMENTED\0"
    "CTRL_OPERATION_NOT_IMPLEMENTED\0"
    "DATA_NOT_MULTIPLE_OF_BLOCK_LENGTH\0"
    "INITIALIZATION_ERROR\0"
    "INPUT_NOT_INITIALIZED\0"
    "INVALID_AD_SIZE\0"
    "INVALID_KEY_LENGTH\0"
    "INVALID_NONCE_SIZE\0"
    "INVALID_OPERATION\0"
    "IV_TOO_LARGE\0"
    "NO_CIPHER_SET\0"
    "NO_DIRECTION_SET\0"
    "OUTPUT_ALIASES_INPUT\0"
    "TAG_TOO_LARGE\0"
    "TOO_LARGE\0"
    "UNSUPPORTED_AD_SIZE\0"
    "UNSUPPORTED_INPUT_SIZE\0"
    "UNSUPPORTED_KEY_SIZE\0"
    "UNSUPPORTED_NONCE_SIZE\0"
    "UNSUPPORTED_TAG_SIZE\0"
    "WRONG_FINAL_BLOCK_LENGTH\0"
    "LIST_CANNOT_BE_NULL\0"
    "MISSING_CLOSE_SQUARE_BRACKET\0"
    "MISSING_EQUAL_SIGN\0"
    "NO_CLOSE_BRACE\0"
    "UNABLE_TO_CREATE_NEW_SECTION\0"
    "VARIABLE_EXPANSION_TOO_LONG\0"
    "VARIABLE_HAS_NO_VALUE\0"
    "BAD_GENERATOR\0"
    "INVALID_PUBKEY\0"
    "MODULUS_TOO_LARGE\0"
    "NO_PRIVATE_VALUE\0"
    "UNKNOWN_HASH\0"
    "BAD_Q_VALUE\0"
    "BAD_VERSION\0"
    "MISSING_PARAMETERS\0"
    "NEED_NEW_SETUP_VALUES\0"
    "BIGNUM_OUT_OF_RANGE\0"
    "COORDINATES_OUT_OF_RANGE\0"
    "D2I_ECPKPARAMETERS_FAILURE\0"
    "EC_GROUP_NEW_BY_NAME_FAILURE\0"
    "GROUP2PKPARAMETERS_FAILURE\0"
    "GROUP_MISMATCH\0"
    "I2D_ECPKPARAMETERS_FAILURE\0"
    "INCOMPATIBLE_OBJECTS\0"
    "INVALID_COFACTOR\0"
    "INVALID_COMPRESSED_POINT\0"
    "INVALID_COMPRESSION_BIT\0"
    "INVALID_ENCODING\0"
    "INVALID_FIELD\0"
    "INVALID_FORM\0"
    "INVALID_GROUP_ORDER\0"
    "INVALID_PRIVATE_KEY\0"
    "MISSING_PRIVATE_KEY\0"
    "NON_NAMED_CURVE\0"
    "PKPARAMETERS2GROUP_FAILURE\0"
    "POINT_AT_INFINITY\0"
    "POINT_IS_NOT_ON_CURVE\0"
    "SLOT_FULL\0"
    "UNDEFINED_GENERATOR\0"
    "UNKNOWN_GROUP\0"
    "UNKNOWN_ORDER\0"
    "WRONG_CURVE_PARAMETERS\0"
    "WRONG_ORDER\0"
    "KDF_FAILED\0"
    "POINT_ARITHMETIC_FAILURE\0"
    "BAD_SIGNATURE\0"
    "NOT_IMPLEMENTED\0"
    "RANDOM_NUMBER_GENERATION_FAILED\0"
    "OPERATION_NOT_SUPPORTED\0"
    "COMMAND_NOT_SUPPORTED\0"
    "DIFFERENT_KEY_TYPES\0"
    "DIFFERENT_PARAMETERS\0"
    "EXPECTING_AN_EC_KEY_KEY\0"
    "EXPECTING_AN_RSA_KEY\0"
    "EXPECTING_A_DSA_KEY\0"
    "ILLEGAL_OR_UNSUPPORTED_PADDING_MODE\0"
    "INVALID_DIGEST_LENGTH\0"
    "INVALID_DIGEST_TYPE\0"
    "INVALID_KEYBITS\0"
    "INVALID_MGF1_MD\0"
    "INVALID_PADDING_MODE\0"
    "INVALID_PSS_SALTLEN\0"
    "INVALID_SIGNATURE\0"
    "KEYS_NOT_SET\0"
    "NOT_A_PRIVATE_KEY\0"
    "NO_DEFAULT_DIGEST\0"
    "NO_KEY_SET\0"
    "NO_MDC2_SUPPORT\0"
    "NO_NID_FOR_CURVE\0"
    "NO_OPERATION_SET\0"
    "NO_PARAMETERS_SET\0"
    "OPERATION_NOT_SUPPORTED_FOR_THIS_KEYTYPE\0"
    "OPERATON_NOT_INITIALIZED\0"
    "UNKNOWN_PUBLIC_KEY_TYPE\0"
    "UNSUPPORTED_ALGORITHM\0"
    "OUTPUT_TOO_LARGE\0"
    "UNKNOWN_NID\0"
    "BAD_BASE64_DECODE\0"
    "BAD_END_LINE\0"
    "BAD_IV_CHARS\0"
    "BAD_PASSWORD_READ\0"
    "CIPHER_IS_NULL\0"
    "ERROR_CONVERTING_PRIVATE_KEY\0"
    "NOT_DEK_INFO\0"
    "NOT_ENCRYPTED\0"
    "NOT_PROC_TYPE\0"
    "NO_START_LINE\0"
    "READ_KEY\0"
    "SHORT_HEADER\0"
    "UNSUPPORTED_CIPHER\0"
    "UNSUPPORTED_ENCRYPTION\0"
    "BAD_ITERATION_COUNT\0"
    "BAD_PKCS12_DATA\0"
    "BAD_PKCS12_VERSION\0"
    "CIPHER_HAS_NO_OBJECT_IDENTIFIER\0"
    "CRYPT_ERROR\0"
    "ENCRYPT_ERROR\0"
    "ERROR_SETTING_CIPHER_PARAMS\0"
    "INCORRECT_PASSWORD\0"
    "KEYGEN_FAILURE\0"
    "KEY_GEN_ERROR\0"
    "METHOD_NOT_SUPPORTED\0"
    "MISSING_MAC\0"
    "MULTIPLE_PRIVATE_KEYS_IN_PKCS12\0"
    "PKCS12_PUBLIC_KEY_INTEGRITY_NOT_SUPPORTED\0"
    "PKCS12_TOO_DEEPLY_NESTED\0"
    "PRIVATE_KEY_DECODE_ERROR\0"
    "PRIVATE_KEY_ENCODE_ERROR\0"
    "UNKNOWN_ALGORITHM\0"
    "UNKNOWN_CIPHER\0"
    "UNKNOWN_CIPHER_ALGORITHM\0"
    "UNKNOWN_DIGEST\0"
    "UNSUPPORTED_KEYLENGTH\0"
    "UNSUPPORTED_KEY_DERIVATION_FUNCTION\0"
    "UNSUPPORTED_PRF\0"
    "UNSUPPORTED_PRIVATE_KEY_ALGORITHM\0"
    "UNSUPPORTED_SALT_TYPE\0"
    "BAD_E_VALUE\0"
    "BAD_FIXED_HEADER_DECRYPT\0"
    "BAD_PAD_BYTE_COUNT\0"
    "BAD_RSA_PARAMETERS\0"
    "BLOCK_TYPE_IS_NOT_01\0"
    "BN_NOT_INITIALIZED\0"
    "CANNOT_RECOVER_MULTI_PRIME_KEY\0"
    "CRT_PARAMS_ALREADY_GIVEN\0"
    "CRT_VALUES_INCORRECT\0"
    "DATA_LEN_NOT_EQUAL_TO_MOD_LEN\0"
    "DATA_TOO_LARGE\0"
    "DATA_TOO_LARGE_FOR_KEY_SIZE\0"
    "DATA_TOO_LARGE_FOR_MODULUS\0"
    "DATA_TOO_SMALL\0"
    "DATA_TOO_SMALL_FOR_KEY_SIZE\0"
    "DIGEST_TOO_BIG_FOR_RSA_KEY\0"
    "D_E_NOT_CONGRUENT_TO_1\0"
    "EMPTY_PUBLIC_KEY\0"
    "FIRST_OCTET_INVALID\0"
    "INCONSISTENT_SET_OF_CRT_VALUES\0"
    "INTERNAL_ERROR\0"
    "INVALID_MESSAGE_LENGTH\0"
    "KEY_SIZE_TOO_SMALL\0"
    "LAST_OCTET_INVALID\0"
    "MUST_HAVE_AT_LEAST_TWO_PRIMES\0"
    "NO_PUBLIC_EXPONENT\0"
    "NULL_BEFORE_BLOCK_MISSING\0"
    "N_NOT_EQUAL_P_Q\0"
    "OAEP_DECODING_ERROR\0"
    "ONLY_ONE_OF_P_Q_GIVEN\0"
    "OUTPUT_BUFFER_TOO_SMALL\0"
    "PADDING_CHECK_FAILED\0"
    "PKCS_DECODING_ERROR\0"
    "SLEN_CHECK_FAILED\0"
    "SLEN_RECOVERY_FAILED\0"
    "UNKNOWN_ALGORITHM_TYPE\0"
    "UNKNOWN_PADDING_TYPE\0"
    "VALUE_MISSING\0"
    "WRONG_SIGNATURE_LENGTH\0"
    "ALPN_MISMATCH_ON_EARLY_DATA\0"
    "APP_DATA_IN_HANDSHAKE\0"
    "ATTEMPT_TO_REUSE_SESSION_IN_DIFFERENT_CONTEXT\0"
    "BAD_ALERT\0"
    "BAD_CHANGE_CIPHER_SPEC\0"
    "BAD_DATA_RETURNED_BY_CALLBACK\0"
    "BAD_DH_P_LENGTH\0"
    "BAD_DIGEST_LENGTH\0"
    "BAD_ECC_CERT\0"
    "BAD_ECPOINT\0"
    "BAD_HANDSHAKE_RECORD\0"
    "BAD_HELLO_REQUEST\0"
    "BAD_LENGTH\0"
    "BAD_PACKET_LENGTH\0"
    "BAD_RSA_ENCRYPT\0"
    "BAD_SRTP_MKI_VALUE\0"
    "BAD_SRTP_PROTECTION_PROFILE_LIST\0"
    "BAD_SSL_FILETYPE\0"
    "BAD_WRITE_RETRY\0"
    "BIO_NOT_SET\0"
    "BLOCK_CIPHER_PAD_IS_WRONG\0"
    "BUFFERED_MESSAGES_ON_CIPHER_CHANGE\0"
    "CANNOT_HAVE_BOTH_PRIVKEY_AND_METHOD\0"
    "CANNOT_PARSE_LEAF_CERT\0"
    "CA_DN_LENGTH_MISMATCH\0"
    "CA_DN_TOO_LONG\0"
    "CCS_RECEIVED_EARLY\0"
    "CERTIFICATE_AND_PRIVATE_KEY_MISMATCH\0"
    "CERTIFICATE_VERIFY_FAILED\0"
    "CERT_CB_ERROR\0"
    "CERT_LENGTH_MISMATCH\0"
    "CHANNEL_ID_NOT_P256\0"
    "CHANNEL_ID_ON_EARLY_DATA\0"
    "CHANNEL_ID_SIGNATURE_INVALID\0"
    "CIPHER_OR_HASH_UNAVAILABLE\0"
    "CLIENTHELLO_PARSE_FAILED\0"
    "CLIENTHELLO_TLSEXT\0"
    "CONNECTION_REJECTED\0"
    "CONNECTION_TYPE_NOT_SET\0"
    "CUSTOM_EXTENSION_ERROR\0"
    "DATA_LENGTH_TOO_LONG\0"
    "DECRYPTION_FAILED\0"
    "DECRYPTION_FAILED_OR_BAD_RECORD_MAC\0"
    "DH_PUBLIC_VALUE_LENGTH_IS_WRONG\0"
    "DH_P_TOO_LONG\0"
    "DIGEST_CHECK_FAILED\0"
    "DOWNGRADE_DETECTED\0"
    "DTLS_MESSAGE_TOO_BIG\0"
    "DUPLICATE_EXTENSION\0"
    "DUPLICATE_KEY_SHARE\0"
    "ECC_CERT_NOT_FOR_SIGNING\0"
    "EMS_STATE_INCONSISTENT\0"
    "ENCRYPTED_LENGTH_TOO_LONG\0"
    "ERROR_ADDING_EXTENSION\0"
    "ERROR_IN_RECEIVED_CIPHER_LIST\0"
    "ERROR_PARSING_EXTENSION\0"
    "EXCESSIVE_MESSAGE_SIZE\0"
    "EXTRA_DATA_IN_MESSAGE\0"
    "FRAGMENT_MISMATCH\0"
    "GOT_NEXT_PROTO_WITHOUT_EXTENSION\0"
    "HANDSHAKE_FAILURE_ON_CLIENT_HELLO\0"
    "HTTPS_PROXY_REQUEST\0"
    "HTTP_REQUEST\0"
    "INAPPROPRIATE_FALLBACK\0"
    "INVALID_ALPN_PROTOCOL\0"
    "INVALID_COMMAND\0"
    "INVALID_COMPRESSION_LIST\0"
    "INVALID_MESSAGE\0"
    "INVALID_OUTER_RECORD_TYPE\0"
    "INVALID_SCT_LIST\0"
    "INVALID_SSL_SESSION\0"
    "INVALID_TICKET_KEYS_LENGTH\0"
    "LENGTH_MISMATCH\0"
    "MISSING_EXTENSION\0"
    "MISSING_KEY_SHARE\0"
    "MISSING_RSA_CERTIFICATE\0"
    "MISSING_TMP_DH_KEY\0"
    "MISSING_TMP_ECDH_KEY\0"
    "MIXED_SPECIAL_OPERATOR_WITH_GROUPS\0"
    "MTU_TOO_SMALL\0"
    "NEGOTIATED_BOTH_NPN_AND_ALPN\0"
    "NESTED_GROUP\0"
    "NO_CERTIFICATES_RETURNED\0"
    "NO_CERTIFICATE_ASSIGNED\0"
    "NO_CERTIFICATE_SET\0"
    "NO_CIPHERS_AVAILABLE\0"
    "NO_CIPHERS_PASSED\0"
    "NO_CIPHERS_SPECIFIED\0"
    "NO_CIPHER_MATCH\0"
    "NO_COMMON_SIGNATURE_ALGORITHMS\0"
    "NO_COMPRESSION_SPECIFIED\0"
    "NO_GROUPS_SPECIFIED\0"
    "NO_METHOD_SPECIFIED\0"
    "NO_P256_SUPPORT\0"
    "NO_PRIVATE_KEY_ASSIGNED\0"
    "NO_RENEGOTIATION\0"
    "NO_REQUIRED_DIGEST\0"
    "NO_SHARED_CIPHER\0"
    "NO_SHARED_GROUP\0"
    "NULL_SSL_CTX\0"
    "NULL_SSL_METHOD_PASSED\0"
    "OLD_SESSION_CIPHER_NOT_RETURNED\0"
    "OLD_SESSION_PRF_HASH_MISMATCH\0"
    "OLD_SESSION_VERSION_NOT_RETURNED\0"
    "PARSE_TLSEXT\0"
    "PATH_TOO_LONG\0"
    "PEER_DID_NOT_RETURN_A_CERTIFICATE\0"
    "PEER_ERROR_UNSUPPORTED_CERTIFICATE_TYPE\0"
    "PRE_SHARED_KEY_MUST_BE_LAST\0"
    "PROTOCOL_IS_SHUTDOWN\0"
    "PSK_IDENTITY_BINDER_COUNT_MISMATCH\0"
    "PSK_IDENTITY_NOT_FOUND\0"
    "PSK_NO_CLIENT_CB\0"
    "PSK_NO_SERVER_CB\0"
    "READ_TIMEOUT_EXPIRED\0"
    "RECORD_LENGTH_MISMATCH\0"
    "RECORD_TOO_LARGE\0"
    "RENEGOTIATION_EMS_MISMATCH\0"
    "RENEGOTIATION_ENCODING_ERR\0"
    "RENEGOTIATION_MISMATCH\0"
    "REQUIRED_CIPHER_MISSING\0"
    "RESUMED_EMS_SESSION_WITHOUT_EMS_EXTENSION\0"
    "RESUMED_NON_EMS_SESSION_WITH_EMS_EXTENSION\0"
    "SCSV_RECEIVED_WHEN_RENEGOTIATING\0"
    "SERVERHELLO_TLSEXT\0"
    "SERVER_CERT_CHANGED\0"
    "SESSION_ID_CONTEXT_UNINITIALIZED\0"
    "SESSION_MAY_NOT_BE_CREATED\0"
    "SHUTDOWN_WHILE_IN_INIT\0"
    "SIGNATURE_ALGORITHMS_EXTENSION_SENT_BY_SERVER\0"
    "SRTP_COULD_NOT_ALLOCATE_PROFILES\0"
    "SRTP_UNKNOWN_PROTECTION_PROFILE\0"
    "SSL3_EXT_INVALID_SERVERNAME\0"
    "SSLV3_ALERT_BAD_CERTIFICATE\0"
    "SSLV3_ALERT_BAD_RECORD_MAC\0"
    "SSLV3_ALERT_CERTIFICATE_EXPIRED\0"
    "SSLV3_ALERT_CERTIFICATE_REVOKED\0"
    "SSLV3_ALERT_CERTIFICATE_UNKNOWN\0"
    "SSLV3_ALERT_CLOSE_NOTIFY\0"
    "SSLV3_ALERT_DECOMPRESSION_FAILURE\0"
    "SSLV3_ALERT_HANDSHAKE_FAILURE\0"
    "SSLV3_ALERT_ILLEGAL_PARAMETER\0"
    "SSLV3_ALERT_NO_CERTIFICATE\0"
    "SSLV3_ALERT_UNEXPECTED_MESSAGE\0"
    "SSLV3_ALERT_UNSUPPORTED_CERTIFICATE\0"
    "SSL_CTX_HAS_NO_DEFAULT_SSL_VERSION\0"
    "SSL_HANDSHAKE_FAILURE\0"
    "SSL_SESSION_ID_CONTEXT_TOO_LONG\0"
    "TICKET_ENCRYPTION_FAILED\0"
    "TLSV1_ALERT_ACCESS_DENIED\0"
    "TLSV1_ALERT_DECODE_ERROR\0"
    "TLSV1_ALERT_DECRYPTION_FAILED\0"
    "TLSV1_ALERT_DECRYPT_ERROR\0"
    "TLSV1_ALERT_EXPORT_RESTRICTION\0"
    "TLSV1_ALERT_INAPPROPRIATE_FALLBACK\0"
    "TLSV1_ALERT_INSUFFICIENT_SECURITY\0"
    "TLSV1_ALERT_INTERNAL_ERROR\0"
    "TLSV1_ALERT_NO_RENEGOTIATION\0"
    "TLSV1_ALERT_PROTOCOL_VERSION\0"
    "TLSV1_ALERT_RECORD_OVERFLOW\0"
    "TLSV1_ALERT_UNKNOWN_CA\0"
    "TLSV1_ALERT_USER_CANCELLED\0"
    "TLSV1_BAD_CERTIFICATE_HASH_VALUE\0"
    "TLSV1_BAD_CERTIFICATE_STATUS_RESPONSE\0"
    "TLSV1_CERTIFICATE_REQUIRED\0"
    "TLSV1_CERTIFICATE_UNOBTAINABLE\0"
    "TLSV1_UNKNOWN_PSK_IDENTITY\0"
    "TLSV1_UNRECOGNIZED_NAME\0"
    "TLSV1_UNSUPPORTED_EXTENSION\0"
    "TLS_PEER_DID_NOT_RESPOND_WITH_CERTIFICATE_LIST\0"
    "TLS_RSA_ENCRYPTED_VALUE_LENGTH_IS_WRONG\0"
    "TOO_MANY_EMPTY_FRAGMENTS\0"
    "TOO_MANY_KEY_UPDATES\0"
    "TOO_MANY_WARNING_ALERTS\0"
    "TOO_MUCH_SKIPPED_EARLY_DATA\0"
    "UNABLE_TO_FIND_ECDH_PARAMETERS\0"
    "UNEXPECTED_EXTENSION\0"
    "UNEXPECTED_MESSAGE\0"
    "UNEXPECTED_OPERATOR_IN_GROUP\0"
    "UNEXPECTED_RECORD\0"
    "UNKNOWN_ALERT_TYPE\0"
    "UNKNOWN_CERTIFICATE_TYPE\0"
    "UNKNOWN_CIPHER_RETURNED\0"
    "UNKNOWN_CIPHER_TYPE\0"
    "UNKNOWN_KEY_EXCHANGE_TYPE\0"
    "UNKNOWN_PROTOCOL\0"
    "UNKNOWN_SSL_VERSION\0"
    "UNKNOWN_STATE\0"
    "UNSAFE_LEGACY_RENEGOTIATION_DISABLED\0"
    "UNSUPPORTED_COMPRESSION_ALGORITHM\0"
    "UNSUPPORTED_ELLIPTIC_CURVE\0"
    "UNSUPPORTED_PROTOCOL\0"
    "UNSUPPORTED_PROTOCOL_FOR_CUSTOM_KEY\0"
    "WRONG_CERTIFICATE_TYPE\0"
    "WRONG_CIPHER_RETURNED\0"
    "WRONG_CURVE\0"
    "WRONG_MESSAGE_TYPE\0"
    "WRONG_SIGNATURE_TYPE\0"
    "WRONG_SSL_VERSION\0"
    "WRONG_VERSION_NUMBER\0"
    "WRONG_VERSION_ON_EARLY_DATA\0"
    "X509_LIB\0"
    "X509_VERIFICATION_SETUP_PROBLEMS\0"
    "AKID_MISMATCH\0"
    "BAD_PKCS7_VERSION\0"
    "BAD_X509_FILETYPE\0"
    "BASE64_DECODE_ERROR\0"
    "CANT_CHECK_DH_KEY\0"
    "CERT_ALREADY_IN_HASH_TABLE\0"
    "CRL_ALREADY_DELTA\0"
    "CRL_VERIFY_FAILURE\0"
    "IDP_MISMATCH\0"
    "INVALID_DIRECTORY\0"
    "INVALID_FIELD_NAME\0"
    "INVALID_PARAMETER\0"
    "INVALID_PSS_PARAMETERS\0"
    "INVALID_TRUST\0"
    "ISSUER_MISMATCH\0"
    "KEY_TYPE_MISMATCH\0"
    "KEY_VALUES_MISMATCH\0"
    "LOADING_CERT_DIR\0"
    "LOADING_DEFAULTS\0"
    "NAME_TOO_LONG\0"
    "NEWER_CRL_NOT_NEWER\0"
    "NOT_PKCS7_SIGNED_DATA\0"
    "NO_CERTIFICATES_INCLUDED\0"
    "NO_CERT_SET_FOR_US_TO_VERIFY\0"
    "NO_CRLS_INCLUDED\0"
    "NO_CRL_NUMBER\0"
    "PUBLIC_KEY_DECODE_ERROR\0"
    "PUBLIC_KEY_ENCODE_ERROR\0"
    "SHOULD_RETRY\0"
    "UNKNOWN_KEY_TYPE\0"
    "UNKNOWN_PURPOSE_ID\0"
    "UNKNOWN_TRUST_ID\0"
    "WRONG_LOOKUP_TYPE\0"
    "BAD_IP_ADDRESS\0"
    "BAD_OBJECT\0"
    "BN_DEC2BN_ERROR\0"
    "BN_TO_ASN1_INTEGER_ERROR\0"
    "CANNOT_FIND_FREE_FUNCTION\0"
    "DIRNAME_ERROR\0"
    "DISTPOINT_ALREADY_SET\0"
    "DUPLICATE_ZONE_ID\0"
    "ERROR_CONVERTING_ZONE\0"
    "ERROR_CREATING_EXTENSION\0"
    "ERROR_IN_EXTENSION\0"
    "EXPECTED_A_SECTION_NAME\0"
    "EXTENSION_EXISTS\0"
    "EXTENSION_NAME_ERROR\0"
    "EXTENSION_NOT_FOUND\0"
    "EXTENSION_SETTING_NOT_SUPPORTED\0"
    "EXTENSION_VALUE_ERROR\0"
    "ILLEGAL_EMPTY_EXTENSION\0"
    "ILLEGAL_HEX_DIGIT\0"
    "INCORRECT_POLICY_SYNTAX_TAG\0"
    "INVALID_BOOLEAN_STRING\0"
    "INVALID_EXTENSION_STRING\0"
    "INVALID_MULTIPLE_RDNS\0"
    "INVALID_NAME\0"
    "INVALID_NULL_ARGUMENT\0"
    "INVALID_NULL_NAME\0"
    "INVALID_NULL_VALUE\0"
    "INVALID_NUMBERS\0"
    "INVALID_OBJECT_IDENTIFIER\0"
    "INVALID_OPTION\0"
    "INVALID_POLICY_IDENTIFIER\0"
    "INVALID_PROXY_POLICY_SETTING\0"
    "INVALID_PURPOSE\0"
    "INVALID_SECTION\0"
    "INVALID_SYNTAX\0"
    "ISSUER_DECODE_ERROR\0"
    "NEED_ORGANIZATION_AND_NUMBERS\0"
    "NO_CONFIG_DATABASE\0"
    "NO_ISSUER_CERTIFICATE\0"
    "NO_ISSUER_DETAILS\0"
    "NO_POLICY_IDENTIFIER\0"
    "NO_PROXY_CERT_POLICY_LANGUAGE_DEFINED\0"
    "NO_PUBLIC_KEY\0"
    "NO_SUBJECT_DETAILS\0"
    "ODD_NUMBER_OF_DIGITS\0"
    "OPERATION_NOT_DEFINED\0"
    "OTHERNAME_ERROR\0"
    "POLICY_LANGUAGE_ALREADY_DEFINED\0"
    "POLICY_PATH_LENGTH\0"
    "POLICY_PATH_LENGTH_ALREADY_DEFINED\0"
    "POLICY_WHEN_PROXY_LANGUAGE_REQUIRES_NO_POLICY\0"
    "SECTION_NOT_FOUND\0"
    "UNABLE_TO_GET_ISSUER_DETAILS\0"
    "UNABLE_TO_GET_ISSUER_KEYID\0"
    "UNKNOWN_BIT_STRING_ARGUMENT\0"
    "UNKNOWN_EXTENSION\0"
    "UNKNOWN_EXTENSION_NAME\0"
    "UNKNOWN_OPTION\0"
    "UNSUPPORTED_OPTION\0"
    "USER_TOO_LONG\0"
    "";

