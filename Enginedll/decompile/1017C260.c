/*
 * func-name: sub_1017C260
 * func-address: 0x1017c260
 * callers: 0x10068c50, 0x10097ea0, 0x100d6e70, 0x10128810
 * callees: 0x1017bed0, 0x101a2c8e
 */

int __thiscall sub_1017C260(
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
  int v18; // esi
  char *v19; // eax
  int v20; // edi
  int v21; // eax
  int v23[7]; // [esp-38h] [ebp-7Ch] BYREF
  char v24; // [esp-1Ch] [ebp-60h] BYREF
  int v25; // [esp-18h] [ebp-5Ch]
  int v26; // [esp-14h] [ebp-58h]
  int v27; // [esp-10h] [ebp-54h]
  int v28; // [esp-Ch] [ebp-50h]
  char **v29; // [esp-8h] [ebp-4Ch]
  int v30; // [esp-4h] [ebp-48h]
  char *EndPtr[3]; // [esp+Ch] [ebp-38h] BYREF
  _BYTE v32[28]; // [esp+18h] [ebp-2Ch] BYREF
  int v33; // [esp+40h] [ebp-4h]

  EndPtr[1] = &v24;
  v33 = 1;
  std::string::string(&v24, &a9);
  EndPtr[2] = (char *)v23;
  LOBYTE(v33) = 2;
  std::string::string(v23, &a2);
  LOBYTE(v33) = 1;
  sub_1017BED0(
    this,
    (int)v32,
    v23[0],
    v23[1],
    v23[2],
    v23[3],
    v23[4],
    v23[5],
    v23[6],
    v24,
    v25,
    v26,
    v27,
    v28,
    (int)v29,
    v30);
  LOBYTE(v33) = 3;
  v16 = errno();
  v30 = 10;
  v29 = EndPtr;
  *v16 = 0;
  v17 = (const char *)std::string::c_str(v32);
  v18 = strtol(v17, v29, v30);
  v19 = (char *)std::string::c_str(v32);
  if ( EndPtr[0] == v19 )
  {
    v20 = *(_DWORD *)dword_11249F38;
    v30 = std::string::c_str(v32);
    v21 = std::string::c_str(&a2);
    (*(void (__cdecl **)(void *, const char *, int))(v20 + 4))(
      dword_11249F38,
      "ConfigFile::GetInt: The value for the key '%s' was invalid: '%s'",
      v21);
  }
  LOBYTE(v33) = 1;
  std::string::~string(v32);
  LOBYTE(v33) = 0;
  std::string::~string(&a2);
  v33 = -1;
  std::string::~string(&a9);
  return v18;
}
