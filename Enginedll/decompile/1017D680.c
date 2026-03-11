/*
 * func-name: sub_1017D680
 * func-address: 0x1017d680
 * callers: 0x1017dcf0, 0x1017dd90, 0x1017de30, 0x1017def0, 0x1017dfc0
 * callees: 0x100116a0, 0x100161f0, 0x100993b0, 0x1017a610, 0x1017aa70, 0x101a2c8e
 */

int __thiscall sub_1017D680(
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
  int v37; // [esp+14h] [ebp-144h]
  _BYTE v38[28]; // [esp+18h] [ebp-140h] BYREF
  _BYTE v39[28]; // [esp+34h] [ebp-124h] BYREF
  _BYTE v40[136]; // [esp+50h] [ebp-108h] BYREF
  _BYTE v41[28]; // [esp+D8h] [ebp-80h] BYREF
  _BYTE v42[28]; // [esp+F4h] [ebp-64h] BYREF
  _BYTE v43[28]; // [esp+110h] [ebp-48h] BYREF
  _BYTE v44[28]; // [esp+12Ch] [ebp-2Ch] BYREF
  int v45; // [esp+154h] [ebp-4h]

  v45 = 1;
  std::string::string(v41, &a2);
  LOBYTE(v45) = 2;
  sub_1017A610((int)v41);
  std::operator+<char>(v44, v41, " ");
  LOBYTE(v45) = 3;
  std::operator+<char>(v43, v41, "=");
  v16 = 0;
  LOBYTE(v45) = 4;
  v17 = this + 12;
  for ( i = 0; ; i += 28 )
  {
    v19 = this[13];
    if ( !v19 || v16 >= (this[14] - v19) / 28 )
      break;
    v20 = this[13];
    if ( !v20 || v16 >= (this[14] - v20) / 28 )
      invalid_parameter_noinfo();
    std::string::string(v42, i + this[13]);
    LOBYTE(v45) = 5;
    sub_1017A610((int)v42);
    if ( !std::string::find(v42, v44, 0) || !std::string::find(v42, v43, 0) )
    {
      v21 = std::operator+<char>(v38, &a2, " = ");
      LOBYTE(v45) = 6;
      v22 = std::operator+<char>(v39, v21, &a9);
      v23 = this[13];
      LOBYTE(v45) = 7;
      if ( !v23 || v16 >= (this[14] - v23) / 28 )
        invalid_parameter_noinfo();
      std::string::operator=(this[13] + 28 * v16, v22);
      LOBYTE(v45) = 6;
      std::string::~string(v39);
      LOBYTE(v45) = 5;
      std::string::~string(v38);
      v24 = 0;
      if ( sub_100993B0(this) )
      {
        v37 = 0;
        do
        {
          v25 = this[1];
          if ( !v25 || v24 >= (this[2] - v25) / 28 )
            invalid_parameter_noinfo();
          if ( (unsigned __int8)std::operator==<char>(v37 + this[1], v41) )
          {
            v26 = this[5];
            if ( !v26 || v24 >= (this[6] - v26) / 28 )
              invalid_parameter_noinfo();
            std::string::operator=(v37 + this[5], &a9);
          }
          v37 += 28;
          ++v24;
        }
        while ( v24 < sub_100993B0(this) );
      }
      LOBYTE(v45) = 4;
      std::string::~string(v42);
      break;
    }
    LOBYTE(v45) = 4;
    std::string::~string(v42);
    ++v16;
  }
  v27 = this[13];
  if ( v27 )
    v27 = (this[14] - v27) / 28;
  if ( v16 == v27 )
  {
    sub_100116A0(this, v41);
    sub_100116A0(this + 4, &a9);
    v28 = std::operator+<char>(v39, &a2, " = ");
    LOBYTE(v45) = 8;
    v29 = (void *)std::operator+<char>(v38, v28, &a9);
    LOBYTE(v45) = 9;
    sub_100116A0(this + 12, v29);
    LOBYTE(v45) = 8;
    std::string::~string(v38);
    LOBYTE(v45) = 4;
    std::string::~string(v39);
  }
  sub_1017AA70();
  v30 = std::string::c_str(this + 16);
  std::ofstream::ofstream(v40, v30, 2, 64, 1);
  v31 = 0;
  LOBYTE(v45) = 10;
  for ( j = 0; ; j += 28 )
  {
    v33 = v17[1];
    if ( !v33 || v31 >= (v17[2] - v33) / 28 )
      break;
    v34 = v17[1];
    if ( !v34 || v31 >= (v17[2] - v34) / 28 )
      invalid_parameter_noinfo();
    v35 = std::operator<<<char>(v40, j + v17[1]);
    std::ostream::operator<<(v35, std::endl);
    ++v31;
  }
  sub_100161F0((int)v40, (int)"//END-OF-FILE");
  std::ofstream::close(v40);
  LOBYTE(v45) = 4;
  std::ofstream::`vbase destructor'(v40);
  LOBYTE(v45) = 3;
  std::string::~string(v43);
  LOBYTE(v45) = 2;
  std::string::~string(v44);
  LOBYTE(v45) = 1;
  std::string::~string(v41);
  LOBYTE(v45) = 0;
  std::string::~string(&a2);
  v45 = -1;
  return std::string::~string(&a9);
}
