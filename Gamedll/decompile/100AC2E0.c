/*
 * func-name: sub_100AC2E0
 * func-address: 0x100ac2e0
 * callers: 0x100171bb
 * callees: 0x1000d85f, 0x10013e67
 */

unsigned int __thiscall sub_100AC2E0(
        _DWORD *this,
        unsigned int a2,
        char a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned int v9; // ecx
  unsigned int result; // eax
  int v11; // edi
  unsigned int v12; // ebp
  unsigned int v13; // edi
  unsigned int v14; // ebp
  unsigned int v15; // ebx
  bool v16; // cc

  v9 = this[1];
  if ( v9 )
    result = (int)(this[2] - v9) / 24;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v9 )
    {
      v13 = this[2];
      result = (int)(v13 - v9) / 24;
      if ( a2 < result )
      {
        if ( v9 > v13 )
          _invalid_parameter_noinfo();
        v14 = this[1];
        if ( v14 > this[2] )
          _invalid_parameter_noinfo();
        v15 = v14 + 24 * a2;
        v16 = v15 <= this[2];
        a4 = v14;
        if ( !v16 || v15 < this[1] )
          _invalid_parameter_noinfo();
        return sub_1000D85F((int)&a3, (int)this, v15, (int)this, v13);
      }
    }
  }
  else
  {
    if ( v9 )
      v11 = (int)(this[2] - v9) / 24;
    else
      v11 = 0;
    v12 = this[2];
    if ( v9 > v12 )
      _invalid_parameter_noinfo();
    return sub_10013E67((int)this, v12, a2 - v11, &a3);
  }
  return result;
}
