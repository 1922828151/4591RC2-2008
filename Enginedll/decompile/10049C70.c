/*
 * func-name: ?GetVector2@XMLSystem@@QAE?AVVector2@@PAVDOMNode@xercesc_2_5@@_N@Z
 * func-address: 0x10049c70
 * callers: 0x1004a8d0, 0x1014a750, 0x1014c910, 0x1014cc50, 0x1014cfa0
 * callees: 0x100492d0, 0x1017a7e0
 */

float *__stdcall XMLSystem::GetVector2(float *a1, int *a2, char *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  int v10; // [esp-20h] [ebp-CCh] BYREF
  int v11; // [esp-1Ch] [ebp-C8h]
  int v12; // [esp-18h] [ebp-C4h]
  int v13; // [esp-14h] [ebp-C0h]
  int v14; // [esp-10h] [ebp-BCh]
  int v15; // [esp-Ch] [ebp-B8h]
  int v16; // [esp-8h] [ebp-B4h]
  char **p_EndPtr; // [esp-4h] [ebp-B0h]
  char *v18; // [esp+8h] [ebp-A4h] BYREF
  char *EndPtr; // [esp+Ch] [ebp-A0h] BYREF
  int *v20; // [esp+10h] [ebp-9Ch]
  _BYTE v21[28]; // [esp+14h] [ebp-98h] BYREF
  _BYTE v22[28]; // [esp+30h] [ebp-7Ch] BYREF
  _BYTE v23[28]; // [esp+4Ch] [ebp-60h] BYREF
  _BYTE v24[28]; // [esp+68h] [ebp-44h] BYREF
  _BYTE v25[28]; // [esp+84h] [ebp-28h] BYREF
  int v26; // [esp+A8h] [ebp-4h]

  XMLSystem::GetString((int)v21, a2, a3);
  *a1 = 0.0;
  a1[1] = 0.0;
  p_EndPtr = 0;
  v20 = &v10;
  v26 = 0;
  EndPtr = 0;
  v18 = 0;
  std::string::string(&v10, v21);
  v3 = sub_1017A7E0(v24, v10, v11, v12, v13, v14, v15, v16, p_EndPtr);
  LOBYTE(v26) = 1;
  v4 = std::string::c_str(v3);
  std::string::string(v22, v4);
  LOBYTE(v26) = 3;
  std::string::~string(v24);
  p_EndPtr = (char **)1;
  v20 = &v10;
  std::string::string(&v10, v21);
  v5 = sub_1017A7E0(v25, v10, v11, v12, v13, v14, v15, v16, p_EndPtr);
  LOBYTE(v26) = 4;
  v6 = std::string::c_str(v5);
  std::string::string(v23, v6);
  LOBYTE(v26) = 6;
  std::string::~string(v25);
  p_EndPtr = &EndPtr;
  v7 = (const char *)std::string::c_str(v22);
  *a1 = strtod(v7, p_EndPtr);
  p_EndPtr = &v18;
  v8 = (const char *)std::string::c_str(v23);
  a1[1] = strtod(v8, p_EndPtr);
  LOBYTE(v26) = 3;
  std::string::~string(v23);
  LOBYTE(v26) = 0;
  std::string::~string(v22);
  v26 = -1;
  std::string::~string(v21);
  return a1;
}
