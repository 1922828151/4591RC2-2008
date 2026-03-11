/*
 * func-name: sub_1002CD90
 * func-address: 0x1002cd90
 * callers: 0x10032060, 0x10176ac0
 * callees: 0x10027d40, 0x101100e0
 */

unsigned int __thiscall sub_1002CD90(_DWORD *this, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v5; // ecx
  unsigned int result; // eax
  int v7; // edi
  _DWORD *v8; // ebp
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
          invalid_parameter_noinfo();
        v10 = this[1];
        if ( v10 > this[2] )
          invalid_parameter_noinfo();
        a4 = v10;
        v11 = v10 + 8 * a2;
        if ( v11 > this[2] || v11 < this[1] )
          invalid_parameter_noinfo();
        return sub_101100E0(&a3, this, v11, this, v9);
      }
    }
  }
  else
  {
    if ( v5 )
      v7 = (int)(this[2] - v5) >> 3;
    else
      v7 = 0;
    v8 = (_DWORD *)this[2];
    if ( v5 > (unsigned int)v8 )
      invalid_parameter_noinfo();
    return (unsigned int)sub_10027D40(this, (int)this, v8, a2 - v7, &a3);
  }
  return result;
}
