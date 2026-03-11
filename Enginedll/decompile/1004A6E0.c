/*
 * func-name: ?GetFloatColor@XMLSystem@@QAE?AUFloatColor@@PAVDOMNode@xercesc_2_5@@_N@Z
 * func-address: 0x1004a6e0
 * callers: 0x100373d0, 0x100412c0, 0x1004a8d0
 * callees: 0x100492d0, 0x1017a7e0
 */

float *__stdcall XMLSystem::GetFloatColor(float *a1, int *a2, char *a3)
{
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  int v8; // [esp-20h] [ebp-C8h] BYREF
  int v9; // [esp-1Ch] [ebp-C4h]
  int v10; // [esp-18h] [ebp-C0h]
  int v11; // [esp-14h] [ebp-BCh]
  int v12; // [esp-10h] [ebp-B8h]
  int v13; // [esp-Ch] [ebp-B4h]
  int v14; // [esp-8h] [ebp-B0h]
  int v15; // [esp-4h] [ebp-ACh]
  float v16; // [esp+4h] [ebp-A4h]
  float v17; // [esp+8h] [ebp-A0h]
  float v18; // [esp+Ch] [ebp-9Ch]
  _BYTE v19[28]; // [esp+10h] [ebp-98h] BYREF
  _BYTE v20[28]; // [esp+2Ch] [ebp-7Ch] BYREF
  _BYTE v21[28]; // [esp+48h] [ebp-60h] BYREF
  _BYTE v22[28]; // [esp+64h] [ebp-44h] BYREF
  _BYTE v23[28]; // [esp+80h] [ebp-28h] BYREF
  int v24; // [esp+A4h] [ebp-4h]

  XMLSystem::GetString((int)v19, a2, a3);
  v15 = 0;
  v16 = COERCE_FLOAT(&v8);
  v24 = 0;
  std::string::string(&v8, v19);
  sub_1017A7E0(v23, v8, v9, v10, v11, v12, v13, v14, v15);
  v15 = 1;
  v16 = COERCE_FLOAT(&v8);
  LOBYTE(v24) = 1;
  std::string::string(&v8, v19);
  sub_1017A7E0(v21, v8, v9, v10, v11, v12, v13, v14, v15);
  v15 = 2;
  v16 = COERCE_FLOAT(&v8);
  LOBYTE(v24) = 2;
  std::string::string(&v8, v19);
  sub_1017A7E0(v20, v8, v9, v10, v11, v12, v13, v14, v15);
  v15 = 3;
  v16 = COERCE_FLOAT(&v8);
  LOBYTE(v24) = 3;
  std::string::string(&v8, v19);
  sub_1017A7E0(v22, v8, v9, v10, v11, v12, v13, v14, v15);
  LOBYTE(v24) = 4;
  v3 = (const char *)std::string::c_str(v22);
  v16 = atof(v3);
  v4 = (const char *)std::string::c_str(v20);
  v17 = atof(v4);
  v5 = (const char *)std::string::c_str(v21);
  v18 = atof(v5);
  v6 = (const char *)std::string::c_str(v23);
  *a1 = atof(v6);
  a1[1] = v18;
  LOBYTE(v24) = 3;
  a1[2] = v17;
  a1[3] = v16;
  std::string::~string(v22);
  LOBYTE(v24) = 2;
  std::string::~string(v20);
  LOBYTE(v24) = 1;
  std::string::~string(v21);
  LOBYTE(v24) = 0;
  std::string::~string(v23);
  v24 = -1;
  std::string::~string(v19);
  return a1;
}
