/*
 * func-name: sub_10078B90
 * func-address: 0x10078b90
 * callers: 0x10077c20
 * callees: 0x10052250, 0x100786b0
 */

unsigned int __thiscall sub_10078B90(_DWORD *this, unsigned int a2, int a3, unsigned int a4, int a5)
{
  unsigned int v6; // ecx
  unsigned int result; // eax
  int v8; // edi
  char *v9; // ebp
  unsigned int v10; // edi
  unsigned int v11; // ebp
  unsigned int v12; // ebx
  bool v13; // cc

  v6 = this[1];
  if ( v6 )
    result = (int)(this[2] - v6) / 12;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v6 )
    {
      v10 = this[2];
      result = (int)(v10 - v6) / 12;
      if ( a2 < result )
      {
        if ( v6 > v10 )
          invalid_parameter_noinfo();
        v11 = this[1];
        if ( v11 > this[2] )
          invalid_parameter_noinfo();
        v12 = v11 + 12 * a2;
        v13 = v12 <= this[2];
        a4 = v11;
        if ( !v13 || v12 < this[1] )
          invalid_parameter_noinfo();
        return (unsigned int)sub_10052250(this, &a3, (int)this, v12, (int)this, v10);
      }
    }
  }
  else
  {
    if ( v6 )
      v8 = (int)(this[2] - v6) / 12;
    else
      v8 = 0;
    v9 = (char *)this[2];
    if ( v6 > (unsigned int)v9 )
      invalid_parameter_noinfo();
    return sub_100786B0((int)this, (int)this, v9, a2 - v8, &a3);
  }
  return result;
}
