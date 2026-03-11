/*
 * func-name: sub_1017C5A0
 * func-address: 0x1017c5a0
 * callers: none
 * callees: 0x1017a7e0, 0x1017bed0, 0x101a2c8e
 */

float *__thiscall sub_1017C5A0(
        _DWORD *this,
        float *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  _BYTE *v17; // eax
  int v18; // eax
  _BYTE *v19; // eax
  int v20; // eax
  _BYTE *v21; // eax
  int v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  const char *v25; // eax
  char *v26; // eax
  char *v27; // eax
  char *v28; // eax
  void (__cdecl **v29)(void *, const char *, int); // edi
  int v30; // eax
  int v32[6]; // [esp-38h] [ebp-130h] BYREF
  int v33; // [esp-20h] [ebp-118h] BYREF
  int v34; // [esp-1Ch] [ebp-114h] BYREF
  int v35; // [esp-18h] [ebp-110h]
  int v36; // [esp-14h] [ebp-10Ch]
  int v37; // [esp-10h] [ebp-108h]
  int v38; // [esp-Ch] [ebp-104h]
  int v39; // [esp-8h] [ebp-100h]
  int v40; // [esp-4h] [ebp-FCh]
  int *v41; // [esp+10h] [ebp-E8h]
  char *v42; // [esp+14h] [ebp-E4h] BYREF
  char *v43; // [esp+18h] [ebp-E0h] BYREF
  char *EndPtr[2]; // [esp+1Ch] [ebp-DCh] BYREF
  _BYTE v45[28]; // [esp+24h] [ebp-D4h] BYREF
  _BYTE v46[28]; // [esp+40h] [ebp-B8h] BYREF
  _BYTE v47[28]; // [esp+5Ch] [ebp-9Ch] BYREF
  _BYTE v48[28]; // [esp+78h] [ebp-80h] BYREF
  _BYTE v49[28]; // [esp+94h] [ebp-64h] BYREF
  _BYTE v50[28]; // [esp+B0h] [ebp-48h] BYREF
  _BYTE v51[28]; // [esp+CCh] [ebp-2Ch] BYREF
  int v52; // [esp+F4h] [ebp-4h]

  EndPtr[1] = (char *)&v34;
  v52 = 1;
  std::string::string(&v34, &a10);
  v41 = v32;
  LOBYTE(v52) = 2;
  std::string::string(v32, &a3);
  LOBYTE(v52) = 1;
  sub_1017BED0(this, (int)v49, v32[0], v32[1], v32[2], v32[3], v32[4], v32[5], v33, v34, v35, v36, v37, v38, v39, v40);
  *a2 = 0.0;
  v40 = 0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  v41 = &v33;
  LOBYTE(v52) = 3;
  EndPtr[0] = 0;
  v42 = 0;
  v43 = 0;
  std::string::string(&v33, v49);
  v17 = sub_1017A7E0(v45, v33, v34, v35, v36, v37, v38, v39, v40);
  LOBYTE(v52) = 4;
  v18 = std::string::c_str(v17);
  std::string::string(v48, v18);
  LOBYTE(v52) = 6;
  std::string::~string(v45);
  v40 = 1;
  v41 = &v33;
  std::string::string(&v33, v49);
  v19 = sub_1017A7E0(v47, v33, v34, v35, v36, v37, v38, v39, v40);
  LOBYTE(v52) = 7;
  v20 = std::string::c_str(v19);
  std::string::string(v51, v20);
  LOBYTE(v52) = 9;
  std::string::~string(v47);
  v40 = 2;
  v41 = &v33;
  std::string::string(&v33, v49);
  v21 = sub_1017A7E0(v46, v33, v34, v35, v36, v37, v38, v39, v40);
  LOBYTE(v52) = 10;
  v22 = std::string::c_str(v21);
  std::string::string(v50, v22);
  LOBYTE(v52) = 12;
  std::string::~string(v46);
  v40 = (int)EndPtr;
  v23 = (const char *)std::string::c_str(v48);
  *a2 = strtod(v23, (char **)v40);
  v40 = (int)&v42;
  v24 = (const char *)std::string::c_str(v51);
  a2[1] = strtod(v24, (char **)v40);
  v40 = (int)&v43;
  v25 = (const char *)std::string::c_str(v50);
  a2[2] = strtod(v25, (char **)v40);
  v26 = (char *)std::string::c_str(v48);
  if ( EndPtr[0] == v26
    || (v27 = (char *)std::string::c_str(v48), v42 == v27)
    || (v28 = (char *)std::string::c_str(v48), v43 == v28) )
  {
    v29 = *(void (__cdecl ***)(void *, const char *, int))dword_11249F38;
    v40 = std::string::c_str(v49);
    v30 = std::string::c_str(&a3);
    (*v29)(dword_11249F38, "ConfigFile::GetVector: The value for the key '%s' was invalid: '%s'", v30);
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
  }
  LOBYTE(v52) = 9;
  std::string::~string(v50);
  LOBYTE(v52) = 6;
  std::string::~string(v51);
  LOBYTE(v52) = 3;
  std::string::~string(v48);
  LOBYTE(v52) = 1;
  std::string::~string(v49);
  LOBYTE(v52) = 0;
  std::string::~string(&a3);
  v52 = -1;
  std::string::~string(&a10);
  return a2;
}
