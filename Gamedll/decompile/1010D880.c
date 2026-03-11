/*
 * func-name: sub_1010D880
 * func-address: 0x1010d880
 * callers: 0x1001822d
 * callees: 0x1000bc62, 0x100182cd
 */

unsigned int __thiscall sub_1010D880(_DWORD *this, unsigned int a2, char a3, unsigned int a4)
{
  unsigned int v5; // ecx
  unsigned int result; // eax
  int v7; // edi
  unsigned int v8; // ebp
  unsigned int v9; // ebp
  unsigned int v10; // edi
  unsigned int v11; // edi

  v5 = this[1];
  if ( v5 )
    result = (int)(this[2] - v5) >> 3;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v5 )
    {
      v9 = this[2];
      result = (int)(v9 - v5) >> 3;
      if ( a2 < result )
      {
        if ( v5 > v9 )
          _invalid_parameter_noinfo();
        v10 = this[1];
        if ( v10 > this[2] )
          _invalid_parameter_noinfo();
        a4 = v10;
        v11 = v10 + 8 * a2;
        if ( v11 > this[2] || v11 < this[1] )
          _invalid_parameter_noinfo();
        return sub_100182CD((int)&a3, (int)this, v11, (int)this, v9);
      }
    }
  }
  else
  {
    if ( v5 )
      v7 = (int)(this[2] - v5) >> 3;
    else
      v7 = 0;
    v8 = this[2];
    if ( v5 > v8 )
      _invalid_parameter_noinfo();
    return sub_1000BC62((int)this, v8, a2 - v7, (int)&a3);
  }
  return result;
}
