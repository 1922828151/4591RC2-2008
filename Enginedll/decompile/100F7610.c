/*
 * func-name: sub_100F7610
 * func-address: 0x100f7610
 * callers: 0x100f37e0, 0x100f7f20
 * callees: 0x100204a0, 0x100f6bc0
 */

unsigned int __thiscall sub_100F7610(_DWORD *this, unsigned int a2, int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v7; // ecx
  unsigned int result; // eax
  int v9; // ebx
  char *v10; // ebp
  unsigned int v11; // ebp
  unsigned int v12; // ebx
  unsigned int v13; // edi
  bool v14; // cc

  v7 = this[1];
  if ( v7 )
    result = (int)(this[2] - v7) >> 4;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v7 )
    {
      v11 = this[2];
      result = (int)(v11 - v7) >> 4;
      if ( a2 < result )
      {
        if ( v7 > v11 )
          invalid_parameter_noinfo();
        v12 = this[1];
        if ( v12 > this[2] )
          invalid_parameter_noinfo();
        v13 = v12 + 16 * a2;
        v14 = v13 <= this[2];
        a4 = v12;
        if ( !v14 || v13 < this[1] )
          invalid_parameter_noinfo();
        return (unsigned int)sub_100204A0(this, &a3, (int)this, v13, (int)this, v11);
      }
    }
  }
  else
  {
    if ( v7 )
      v9 = (int)(this[2] - v7) >> 4;
    else
      v9 = 0;
    v10 = (char *)this[2];
    if ( v7 > (unsigned int)v10 )
      invalid_parameter_noinfo();
    return (unsigned int)sub_100F6BC0((int)this, (int)this, v10, a2 - v9, &a3);
  }
  return result;
}
