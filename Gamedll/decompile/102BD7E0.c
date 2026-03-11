/*
 * func-name: sub_102BD7E0
 * func-address: 0x102bd7e0
 * callers: 0x100a00d0, 0x102adff0, 0x102b58c0, 0x102b7ad0
 * callees: 0x10011b7b, 0x102c7520
 */

char __thiscall sub_102BD7E0(
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
  unsigned int v16; // edi
  int v17; // ebp
  int v18; // eax
  int v19; // eax

  sub_102C7520(&a2);
  v16 = 0;
  if ( sub_10011B7B() )
  {
    v17 = 0;
    while ( 1 )
    {
      v18 = this[1];
      if ( !v18 || v16 >= (this[2] - v18) / 28 )
        _invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(&a2, v17 + this[1]) )
      {
        if ( !std::string::length(&a9) )
          break;
        v19 = this[9];
        if ( !v19 || v16 >= (this[10] - v19) / 28 )
          _invalid_parameter_noinfo();
        if ( (unsigned __int8)std::operator==<char>(&a9, v17 + this[9]) )
          break;
      }
      ++v16;
      v17 += 28;
      if ( v16 >= sub_10011B7B() )
        goto LABEL_13;
    }
    std::string::~string(&a2);
    std::string::~string(&a9);
    return 1;
  }
  else
  {
LABEL_13:
    std::string::~string(&a2);
    std::string::~string(&a9);
    return 0;
  }
}
