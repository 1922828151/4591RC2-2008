/*
 * func-name: sub_1007BF40
 * func-address: 0x1007bf40
 * callers: 0x1007c450, 0x1007d280
 * callees: none
 */

int __thiscall sub_1007BF40(
        _DWORD *this,
        int a2,
        char a3,
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
  int v17; // eax
  int v18; // eax
  int v19; // esi
  int last_of; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // esi
  _BYTE v27[28]; // [esp+Ch] [ebp-7Ch] BYREF
  _BYTE v28[28]; // [esp+28h] [ebp-60h] BYREF
  _BYTE v29[28]; // [esp+44h] [ebp-44h] BYREF
  _BYTE v30[28]; // [esp+60h] [ebp-28h] BYREF
  int v31; // [esp+84h] [ebp-4h]

  v31 = 2;
  std::string::string(v28);
  v17 = this[4];
  LOBYTE(v31) = 3;
  if ( v17 )
  {
    v18 = std::string::c_str(v17 + 3188);
    std::string::operator=(v28, v18);
  }
  else
  {
    v19 = this[1];
    if ( !v19 )
    {
      v25 = a2;
      std::operator+<char>(a2, &a3, &a10);
      goto LABEL_9;
    }
    std::string::operator=(v28, v19 + 320);
  }
  last_of = std::string::find_last_of(v28, &unk_101C2DB0, std::string::npos);
  std::string::substr(v28, v27, 0, last_of);
  LOBYTE(v31) = 4;
  if ( std::string::find_last_of(v27, &unk_101C2DB4, std::string::npos) != -1 )
  {
    v21 = std::string::find_last_of(v27, &unk_101C2DB8, std::string::npos);
    v22 = std::string::substr(v27, v29, 0, v21);
    LOBYTE(v31) = 5;
    std::string::operator=(v27, v22);
    LOBYTE(v31) = 4;
    std::string::~string(v29);
  }
  v23 = std::operator+<char>(v30, &unk_101C2DBC, &a3);
  LOBYTE(v31) = 6;
  v24 = std::operator+<char>(v29, v23, &a10);
  LOBYTE(v31) = 7;
  std::string::operator+=(v27, v24);
  LOBYTE(v31) = 6;
  std::string::~string(v29);
  LOBYTE(v31) = 4;
  std::string::~string(v30);
  v25 = a2;
  std::string::string(a2, v27);
  LOBYTE(v31) = 3;
  std::string::~string(v27);
LABEL_9:
  LOBYTE(v31) = 2;
  std::string::~string(v28);
  LOBYTE(v31) = 1;
  std::string::~string(&a3);
  LOBYTE(v31) = 0;
  std::string::~string(&a10);
  return v25;
}
