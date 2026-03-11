/*
 * func-name: sub_10175EA0
 * func-address: 0x10175ea0
 * callers: 0x10172f00
 * callees: 0x101100e0, 0x10175990
 */

unsigned int __thiscall sub_10175EA0(_DWORD *this, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v5; // ecx
  unsigned int result; // eax
  int v7; // edi
  char *v8; // ebp
  char *v9; // ebp
  unsigned int v10; // edi
  char *v11; // edi

  v5 = this[1];
  if ( v5 )
    result = (int)(this[2] - v5) >> 3;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v5 )
    {
      v9 = (char *)this[2];
      result = (int)&v9[-v5] >> 3;
      if ( a2 < result )
      {
        if ( v5 > (unsigned int)v9 )
          invalid_parameter_noinfo();
        v10 = this[1];
        if ( v10 > this[2] )
          invalid_parameter_noinfo();
        a4 = v10;
        v11 = (char *)(v10 + 8 * a2);
        if ( (unsigned int)v11 > this[2] || (unsigned int)v11 < this[1] )
          invalid_parameter_noinfo();
        return (unsigned int)sub_101100E0(this, &a3, (int)this, v11, (int)this, v9);
      }
    }
  }
  else
  {
    if ( v5 )
      v7 = (int)(this[2] - v5) >> 3;
    else
      v7 = 0;
    v8 = (char *)this[2];
    if ( v5 > (unsigned int)v8 )
      invalid_parameter_noinfo();
    return (unsigned int)sub_10175990(this, (int)this, v8, a2 - v7, &a3);
  }
  return result;
}
