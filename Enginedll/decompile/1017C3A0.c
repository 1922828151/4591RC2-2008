/*
 * func-name: sub_1017C3A0
 * func-address: 0x1017c3a0
 * callers: 0x1007ef60, 0x100dbc90, 0x100e1dc0
 * callees: 0x1017bed0, 0x101a2c8e
 */

double __thiscall sub_1017C3A0(
        _DWORD *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  int *v16; // eax
  const char *v17; // eax
  char *v18; // eax
  int v19; // esi
  int v20; // eax
  int v22[7]; // [esp-1Ch] [ebp-78h] BYREF
  char v23[4]; // [esp+0h] [ebp-5Ch] BYREF
  int v24; // [esp+4h] [ebp-58h]
  int v25; // [esp+8h] [ebp-54h]
  int v26; // [esp+Ch] [ebp-50h]
  int v27; // [esp+10h] [ebp-4Ch]
  int v28; // [esp+14h] [ebp-48h]
  char **v29; // [esp+18h] [ebp-44h]
  float v30; // [esp+24h] [ebp-38h]
  char *EndPtr[2]; // [esp+28h] [ebp-34h] BYREF
  _BYTE v32[28]; // [esp+30h] [ebp-2Ch] BYREF
  int v33; // [esp+58h] [ebp-4h]

  v30 = COERCE_FLOAT(v23);
  v33 = 1;
  std::string::string(v23, &a9);
  EndPtr[1] = (char *)v22;
  LOBYTE(v33) = 2;
  std::string::string(v22, &a2);
  LOBYTE(v33) = 1;
  sub_1017BED0(
    this,
    (int)v32,
    v22[0],
    v22[1],
    v22[2],
    v22[3],
    v22[4],
    v22[5],
    v22[6],
    v23[0],
    v24,
    v25,
    v26,
    v27,
    v28,
    (int)v29);
  LOBYTE(v33) = 3;
  v16 = errno();
  v29 = EndPtr;
  *v16 = 0;
  v17 = (const char *)std::string::c_str(v32);
  v30 = strtod(v17, v29);
  v18 = (char *)std::string::c_str(v32);
  if ( EndPtr[0] == v18 )
  {
    v19 = *(_DWORD *)dword_11249F38;
    v29 = (char **)std::string::c_str(v32);
    v20 = std::string::c_str(&a2);
    (*(void (__cdecl **)(void *, const char *, int))(v19 + 4))(
      dword_11249F38,
      "ConfigFile::GetInt: The value for the key '%s' was invalid: '%s'",
      v20);
  }
  LOBYTE(v33) = 1;
  std::string::~string(v32);
  LOBYTE(v33) = 0;
  std::string::~string(&a2);
  v33 = -1;
  std::string::~string(&a9);
  return v30;
}
