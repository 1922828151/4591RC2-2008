/*
 * func-name: sub_102BF0F0
 * func-address: 0x102bf0f0
 * callers: 0x102bf760, 0x102bf800, 0x102bf8a0, 0x102bf960, 0x102bfa30
 * callees: 0x1000ab4b, 0x10011b7b, 0x102c04d0, 0x102c7520, 0x102c7980, 0x102c9d62
 */

void __thiscall sub_102BF0F0(
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
  unsigned int v16; // ebx
  _DWORD *v17; // esi
  int i; // ebp
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // ebp
  int v23; // eax
  unsigned int v24; // ebp
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  void *v29; // eax
  int v30; // eax
  unsigned int v31; // edi
  int j; // ebx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // [esp+14h] [ebp-144h]
  _BYTE v37[28]; // [esp+18h] [ebp-140h] BYREF
  _BYTE v38[28]; // [esp+34h] [ebp-124h] BYREF
  _BYTE v39[136]; // [esp+50h] [ebp-108h] BYREF
  _BYTE v40[28]; // [esp+D8h] [ebp-80h] BYREF
  _BYTE v41[28]; // [esp+F4h] [ebp-64h] BYREF
  _BYTE v42[28]; // [esp+110h] [ebp-48h] BYREF
  _BYTE v43[28]; // [esp+12Ch] [ebp-2Ch] BYREF
  int v44; // [esp+154h] [ebp-4h]

  v44 = 1;
  std::string::string(v40, &a2);
  LOBYTE(v44) = 2;
  sub_102C7520(v40);
  std::operator+<char>(v43, v40, " ");
  LOBYTE(v44) = 3;
  std::operator+<char>(v42, v40, "=");
  v16 = 0;
  LOBYTE(v44) = 4;
  v17 = this + 12;
  for ( i = 0; ; i += 28 )
  {
    v19 = this[13];
    if ( !v19 || v16 >= (this[14] - v19) / 28 )
      break;
    v20 = this[13];
    if ( !v20 || v16 >= (this[14] - v20) / 28 )
      _invalid_parameter_noinfo();
    std::string::string(v41, (void *)(i + this[13]));
    LOBYTE(v44) = 5;
    sub_102C7520(v41);
    if ( !std::string::find(v41, v43, 0) || !std::string::find(v41, v42, 0) )
    {
      v21 = std::operator+<char>(v37, &a2, " = ");
      LOBYTE(v44) = 6;
      v22 = std::operator+<char>(v38, v21, &a9);
      v23 = this[13];
      LOBYTE(v44) = 7;
      if ( !v23 || v16 >= (this[14] - v23) / 28 )
        _invalid_parameter_noinfo();
      std::string::operator=(this[13] + 28 * v16, v22);
      LOBYTE(v44) = 6;
      std::string::~string(v38);
      LOBYTE(v44) = 5;
      std::string::~string(v37);
      v24 = 0;
      if ( sub_10011B7B() )
      {
        v36 = 0;
        do
        {
          v25 = this[1];
          if ( !v25 || v24 >= (this[2] - v25) / 28 )
            _invalid_parameter_noinfo();
          if ( (unsigned __int8)std::operator==<char>(v36 + this[1], v40) )
          {
            v26 = this[5];
            if ( !v26 || v24 >= (this[6] - v26) / 28 )
              _invalid_parameter_noinfo();
            std::string::operator=(v36 + this[5], &a9);
          }
          v36 += 28;
          ++v24;
        }
        while ( v24 < sub_10011B7B() );
      }
      LOBYTE(v44) = 4;
      std::string::~string(v41);
      break;
    }
    LOBYTE(v44) = 4;
    std::string::~string(v41);
    ++v16;
  }
  v27 = this[13];
  if ( v27 )
    v27 = (this[14] - v27) / 28;
  if ( v16 == v27 )
  {
    sub_1000AB4B(this, v40);
    sub_1000AB4B(this + 4, &a9);
    v28 = std::operator+<char>(v38, &a2, " = ");
    LOBYTE(v44) = 8;
    v29 = (void *)std::operator+<char>(v37, v28, &a9);
    LOBYTE(v44) = 9;
    sub_1000AB4B(this + 12, v29);
    LOBYTE(v44) = 8;
    std::string::~string(v37);
    LOBYTE(v44) = 4;
    std::string::~string(v38);
  }
  sub_102C7980();
  v30 = std::string::c_str(this + 16);
  std::ofstream::ofstream(v39, v30, 2, 64, 1);
  v31 = 0;
  LOBYTE(v44) = 10;
  for ( j = 0; ; j += 28 )
  {
    v33 = v17[1];
    if ( !v33 || v31 >= (v17[2] - v33) / 28 )
      break;
    v34 = v17[1];
    if ( !v34 || v31 >= (v17[2] - v34) / 28 )
      _invalid_parameter_noinfo();
    v35 = std::operator<<<char>(v39, j + v17[1]);
    std::ostream::operator<<(v35, std::endl);
    ++v31;
  }
  sub_102C04D0(v39, "//END-OF-FILE");
  std::ofstream::close(v39);
  LOBYTE(v44) = 4;
  std::ofstream::`vbase destructor'(v39);
  LOBYTE(v44) = 3;
  std::string::~string(v42);
  LOBYTE(v44) = 2;
  std::string::~string(v43);
  LOBYTE(v44) = 1;
  std::string::~string(v40);
  LOBYTE(v44) = 0;
  std::string::~string(&a2);
  v44 = -1;
  std::string::~string(&a9);
}
