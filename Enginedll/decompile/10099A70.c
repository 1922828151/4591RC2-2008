/*
 * func-name: sub_10099A70
 * func-address: 0x10099a70
 * callers: 0x10097220, 0x10099a70
 * callees: 0x1007bd80, 0x100997d0, 0x10099a70
 */

char __thiscall sub_10099A70(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int first_of; // esi
  int v11; // eax
  char v12; // bl
  _BYTE *v14; // ecx
  int v15; // eax
  int v16; // eax
  char v17; // [esp-20h] [ebp-ACh] BYREF
  _DWORD v18[6]; // [esp-1Ch] [ebp-A8h] BYREF
  int v19; // [esp-4h] [ebp-90h]
  char *v20; // [esp+Ch] [ebp-80h]
  _BYTE v21[28]; // [esp+10h] [ebp-7Ch] BYREF
  _BYTE v22[28]; // [esp+2Ch] [ebp-60h] BYREF
  _BYTE v23[28]; // [esp+48h] [ebp-44h] BYREF
  _BYTE v24[28]; // [esp+64h] [ebp-28h] BYREF
  int v25; // [esp+88h] [ebp-4h]

  v25 = 0;
  first_of = std::string::find_first_of(&a2, &unk_101C4390, 0);
  if ( first_of == std::string::npos )
  {
    v15 = std::operator+<char>(v24, this + 11, "\\");
    LOBYTE(v25) = 3;
    std::operator+<char>(v21, v15, &a2);
    LOBYTE(v25) = 5;
    std::string::~string(v24);
    v16 = std::string::c_str(v21);
    v20 = (char *)v18;
    std::string::string(v18, v16);
    if ( sub_1007BD80(v18[0]) )
    {
      std::string::operator=(a9, v21);
      LOBYTE(v25) = 0;
      std::string::~string(v21);
      v25 = -1;
      std::string::~string(&a2);
      return 1;
    }
    v14 = v21;
  }
  else
  {
    std::string::substr(&a2, v22, 0, first_of);
    LOBYTE(v25) = 1;
    if ( sub_100997D0(this, (int)v22) )
    {
      v11 = std::string::substr(&a2, v23, first_of + 1, std::string::npos);
      LOBYTE(v25) = 2;
      std::string::operator=(&a2, v11);
      LOBYTE(v25) = 1;
      std::string::~string(v23);
      v19 = a9;
      v20 = &v17;
      std::string::string(&v17, &a2);
      v12 = sub_10099A70(v17, v18[0], v18[1], v18[2], v18[3], v18[4], v18[5], v19);
      LOBYTE(v25) = 0;
      std::string::~string(v22);
      v25 = -1;
      std::string::~string(&a2);
      return v12;
    }
    v14 = v22;
  }
  LOBYTE(v25) = 0;
  std::string::~string(v14);
  v25 = -1;
  std::string::~string(&a2);
  return 0;
}
