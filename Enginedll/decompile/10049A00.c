/*
 * func-name: ?GetVector@XMLSystem@@QAE?AVVector@@PAVDOMNode@xercesc_2_5@@_N@Z
 * func-address: 0x10049a00
 * callers: 0x10036a40, 0x10037b30, 0x100384a0, 0x10038ca0, 0x1003ef60, 0x10041980, 0x10044cf0, 0x10045740, 0x10047270, 0x10047d90, 0x1004a8d0, 0x1004bcb0
 * callees: 0x100492d0, 0x10097800, 0x1017a7e0
 */

float *__stdcall XMLSystem::GetVector(float *a1, int *a2, char *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  const char *v11; // eax
  char *v12; // eax
  char *v13; // eax
  char *v14; // eax
  const char *v15; // eax
  int v17; // [esp-20h] [ebp-108h] BYREF
  int v18; // [esp-1Ch] [ebp-104h]
  int v19; // [esp-18h] [ebp-100h]
  int v20; // [esp-14h] [ebp-FCh]
  int v21; // [esp-10h] [ebp-F8h]
  int v22; // [esp-Ch] [ebp-F4h]
  int v23; // [esp-8h] [ebp-F0h]
  int p_EndPtr; // [esp-4h] [ebp-ECh]
  char *v25; // [esp+8h] [ebp-E0h] BYREF
  char *v26; // [esp+Ch] [ebp-DCh] BYREF
  char *EndPtr; // [esp+10h] [ebp-D8h] BYREF
  int *v28; // [esp+14h] [ebp-D4h]
  _BYTE v29[28]; // [esp+18h] [ebp-D0h] BYREF
  _BYTE v30[28]; // [esp+34h] [ebp-B4h] BYREF
  _BYTE v31[28]; // [esp+50h] [ebp-98h] BYREF
  _BYTE v32[28]; // [esp+6Ch] [ebp-7Ch] BYREF
  _BYTE v33[28]; // [esp+88h] [ebp-60h] BYREF
  _BYTE v34[28]; // [esp+A4h] [ebp-44h] BYREF
  _BYTE v35[28]; // [esp+C0h] [ebp-28h] BYREF
  int v36; // [esp+E4h] [ebp-4h]

  XMLSystem::GetString((int)v29, a2, a3);
  *a1 = 0.0;
  a1[1] = 0.0;
  p_EndPtr = 0;
  a1[2] = 0.0;
  v28 = &v17;
  v36 = 0;
  EndPtr = 0;
  v25 = 0;
  v26 = 0;
  std::string::string(&v17, v29);
  v3 = sub_1017A7E0(v33, v17, v18, v19, v20, v21, v22, v23, p_EndPtr);
  LOBYTE(v36) = 1;
  v4 = std::string::c_str(v3);
  std::string::string(v30, v4);
  LOBYTE(v36) = 3;
  std::string::~string(v33);
  p_EndPtr = 1;
  v28 = &v17;
  std::string::string(&v17, v29);
  v5 = sub_1017A7E0(v34, v17, v18, v19, v20, v21, v22, v23, p_EndPtr);
  LOBYTE(v36) = 4;
  v6 = std::string::c_str(v5);
  std::string::string(v31, v6);
  LOBYTE(v36) = 6;
  std::string::~string(v34);
  p_EndPtr = 2;
  v28 = &v17;
  std::string::string(&v17, v29);
  v7 = sub_1017A7E0(v35, v17, v18, v19, v20, v21, v22, v23, p_EndPtr);
  LOBYTE(v36) = 7;
  v8 = std::string::c_str(v7);
  std::string::string(v32, v8);
  LOBYTE(v36) = 9;
  std::string::~string(v35);
  p_EndPtr = (int)&EndPtr;
  v9 = (const char *)std::string::c_str(v30);
  *a1 = strtod(v9, (char **)p_EndPtr);
  p_EndPtr = (int)&v25;
  v10 = (const char *)std::string::c_str(v31);
  a1[1] = strtod(v10, (char **)p_EndPtr);
  p_EndPtr = (int)&v26;
  v11 = (const char *)std::string::c_str(v32);
  a1[2] = strtod(v11, (char **)p_EndPtr);
  v12 = (char *)std::string::c_str(v30);
  if ( EndPtr == v12
    || (v13 = (char *)std::string::c_str(v30), v25 == v13)
    || (v14 = (char *)std::string::c_str(v30), v26 == v14) )
  {
    v15 = (const char *)std::string::c_str(v29);
    Warning("XMLSystem::GetVector: The value for the node was invalid: '%s'", v15);
    *a1 = 0.0;
    a1[1] = 0.0;
    a1[2] = 0.0;
  }
  LOBYTE(v36) = 6;
  std::string::~string(v32);
  LOBYTE(v36) = 3;
  std::string::~string(v31);
  LOBYTE(v36) = 0;
  std::string::~string(v30);
  v36 = -1;
  std::string::~string(v29);
  return a1;
}
