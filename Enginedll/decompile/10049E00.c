/*
 * func-name: ?GetVector4@XMLSystem@@QAE?AVVector4@@PAVDOMNode@xercesc_2_5@@_N@Z
 * func-address: 0x10049e00
 * callers: 0x1004a8d0, 0x1014a750, 0x1014c910, 0x1014cc50, 0x1014cfa0
 * callees: 0x100492d0, 0x10097800, 0x1017a7e0
 */

float *__stdcall XMLSystem::GetVector4(float *a1, int *a2, char *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  const char *v11; // eax
  const char *v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  char *v15; // eax
  char *v16; // eax
  char *v17; // eax
  const char *v18; // eax
  int v20; // [esp-20h] [ebp-140h] BYREF
  int v21; // [esp-1Ch] [ebp-13Ch]
  int v22; // [esp-18h] [ebp-138h]
  int v23; // [esp-14h] [ebp-134h]
  int v24; // [esp-10h] [ebp-130h]
  int v25; // [esp-Ch] [ebp-12Ch]
  int v26; // [esp-8h] [ebp-128h]
  int p_EndPtr; // [esp-4h] [ebp-124h]
  int *v28; // [esp+8h] [ebp-118h]
  char *v29; // [esp+Ch] [ebp-114h] BYREF
  char *v30; // [esp+10h] [ebp-110h] BYREF
  char *EndPtr; // [esp+14h] [ebp-10Ch] BYREF
  _BYTE v32[28]; // [esp+18h] [ebp-108h] BYREF
  _BYTE v33[28]; // [esp+34h] [ebp-ECh] BYREF
  _BYTE v34[28]; // [esp+50h] [ebp-D0h] BYREF
  _BYTE v35[28]; // [esp+6Ch] [ebp-B4h] BYREF
  _BYTE v36[28]; // [esp+88h] [ebp-98h] BYREF
  _BYTE v37[28]; // [esp+A4h] [ebp-7Ch] BYREF
  _BYTE v38[28]; // [esp+C0h] [ebp-60h] BYREF
  _BYTE v39[28]; // [esp+DCh] [ebp-44h] BYREF
  _BYTE v40[28]; // [esp+F8h] [ebp-28h] BYREF
  int v41; // [esp+11Ch] [ebp-4h]

  XMLSystem::GetString((int)v32, a2, a3);
  *a1 = 0.0;
  a1[1] = 0.0;
  p_EndPtr = 0;
  a1[2] = 0.0;
  a1[3] = 0.0;
  v28 = &v20;
  v41 = 0;
  EndPtr = 0;
  v30 = 0;
  v29 = 0;
  std::string::string(&v20, v32);
  v3 = sub_1017A7E0(v37, v20, v21, v22, v23, v24, v25, v26, p_EndPtr);
  LOBYTE(v41) = 1;
  v4 = std::string::c_str(v3);
  std::string::string(v33, v4);
  LOBYTE(v41) = 3;
  std::string::~string(v37);
  p_EndPtr = 1;
  v28 = &v20;
  std::string::string(&v20, v32);
  v5 = sub_1017A7E0(v39, v20, v21, v22, v23, v24, v25, v26, p_EndPtr);
  LOBYTE(v41) = 4;
  v6 = std::string::c_str(v5);
  std::string::string(v36, v6);
  LOBYTE(v41) = 6;
  std::string::~string(v39);
  p_EndPtr = 2;
  v28 = &v20;
  std::string::string(&v20, v32);
  v7 = sub_1017A7E0(v38, v20, v21, v22, v23, v24, v25, v26, p_EndPtr);
  LOBYTE(v41) = 7;
  v8 = std::string::c_str(v7);
  std::string::string(v35, v8);
  LOBYTE(v41) = 9;
  std::string::~string(v38);
  p_EndPtr = 3;
  v28 = &v20;
  std::string::string(&v20, v32);
  v9 = sub_1017A7E0(v40, v20, v21, v22, v23, v24, v25, v26, p_EndPtr);
  LOBYTE(v41) = 10;
  v10 = std::string::c_str(v9);
  std::string::string(v34, v10);
  LOBYTE(v41) = 12;
  std::string::~string(v40);
  p_EndPtr = (int)&EndPtr;
  v11 = (const char *)std::string::c_str(v33);
  *a1 = strtod(v11, (char **)p_EndPtr);
  p_EndPtr = (int)&v30;
  v12 = (const char *)std::string::c_str(v36);
  a1[1] = strtod(v12, (char **)p_EndPtr);
  p_EndPtr = (int)&v29;
  v13 = (const char *)std::string::c_str(v35);
  a1[2] = strtod(v13, (char **)p_EndPtr);
  p_EndPtr = 0;
  v14 = (const char *)std::string::c_str(v34);
  a1[3] = strtod(v14, (char **)p_EndPtr);
  v15 = (char *)std::string::c_str(v33);
  if ( EndPtr == v15
    || (v16 = (char *)std::string::c_str(v33), v30 == v16)
    || (v17 = (char *)std::string::c_str(v33), v29 == v17) )
  {
    v18 = (const char *)std::string::c_str(v32);
    Warning("XMLSystem::GetVector4: The value for the node was invalid: '%s'", v18);
  }
  LOBYTE(v41) = 9;
  std::string::~string(v34);
  LOBYTE(v41) = 6;
  std::string::~string(v35);
  LOBYTE(v41) = 3;
  std::string::~string(v36);
  LOBYTE(v41) = 0;
  std::string::~string(v33);
  v41 = -1;
  std::string::~string(v32);
  return a1;
}
