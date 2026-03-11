/*
 * func-name: sub_102BDB40
 * func-address: 0x102bdb40
 * callers: 0x100a00d0, 0x1022ef60, 0x102766a0, 0x102adff0, 0x102b58c0, 0x102b7ad0
 * callees: 0x102bd940, 0x102c9d62
 */

char __thiscall sub_102BDB40(
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
  int v16; // esi
  int v17; // eax
  int v19[7]; // [esp-38h] [ebp-78h] BYREF
  char v20; // [esp-1Ch] [ebp-5Ch] BYREF
  int v21; // [esp-18h] [ebp-58h]
  int v22; // [esp-14h] [ebp-54h]
  int v23; // [esp-10h] [ebp-50h]
  int v24; // [esp-Ch] [ebp-4Ch]
  int v25; // [esp-8h] [ebp-48h]
  int v26; // [esp-4h] [ebp-44h]
  int *v27; // [esp+Ch] [ebp-34h]
  char *v28; // [esp+10h] [ebp-30h]
  _BYTE v29[28]; // [esp+14h] [ebp-2Ch] BYREF
  int v30; // [esp+3Ch] [ebp-4h]

  v28 = &v20;
  v30 = 1;
  std::string::string(&v20, &a9);
  v27 = v19;
  LOBYTE(v30) = 2;
  std::string::string(v19, &a2);
  LOBYTE(v30) = 1;
  sub_102BD940(this, v29, v19[0], v19[1], v19[2], v19[3], v19[4], v19[5], v19[6], v20, v21, v22, v23, v24, v25, v26);
  LOBYTE(v30) = 3;
  if ( (unsigned __int8)std::operator==<char>(v29, "true") || (unsigned __int8)std::operator==<char>(v29, "1") )
  {
    LOBYTE(v30) = 1;
    std::string::~string(v29);
    LOBYTE(v30) = 0;
    std::string::~string(&a2);
    v30 = -1;
    std::string::~string(&a9);
    return 1;
  }
  else
  {
    if ( !(unsigned __int8)std::operator==<char>(v29, "false") && !(unsigned __int8)std::operator==<char>(v29, "0") )
    {
      v16 = *(_DWORD *)dword_103B9580;
      v26 = std::string::c_str(v29);
      v17 = std::string::c_str(&a2);
      (*(void (__cdecl **)(int, const char *, int))(v16 + 4))(
        dword_103B9580,
        "ConfigFile::GetBool: The value for the key '%s' was invalid: '%s'",
        v17);
    }
    LOBYTE(v30) = 1;
    std::string::~string(v29);
    LOBYTE(v30) = 0;
    std::string::~string(&a2);
    v30 = -1;
    std::string::~string(&a9);
    return 0;
  }
}
