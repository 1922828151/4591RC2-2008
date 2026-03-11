/*
 * func-name: sub_1017BD70
 * func-address: 0x1017bd70
 * callers: 0x1007ef60, 0x10097ea0, 0x10108550, 0x1013a9b0
 * callees: 0x100993b0, 0x1017a610
 */

char __thiscall sub_1017BD70(
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

  sub_1017A610((int)&a2);
  v16 = 0;
  if ( sub_100993B0(this) )
  {
    v17 = 0;
    while ( 1 )
    {
      v18 = this[1];
      if ( !v18 || v16 >= (this[2] - v18) / 28 )
        invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator==<char>(&a2, v17 + this[1]) )
      {
        if ( !std::string::length(&a9) )
          break;
        v19 = this[9];
        if ( !v19 || v16 >= (this[10] - v19) / 28 )
          invalid_parameter_noinfo();
        if ( (unsigned __int8)std::operator==<char>(&a9, v17 + this[9]) )
          break;
      }
      ++v16;
      v17 += 28;
      if ( v16 >= sub_100993B0(this) )
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
