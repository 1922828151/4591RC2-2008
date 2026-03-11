/*
 * func-name: sub_100B56E0
 * func-address: 0x100b56e0
 * callers: 0x10013aa7
 * callees: 0x10009c6e, 0x1000e520
 */

unsigned int __thiscall sub_100B56E0(
        _DWORD *this,
        unsigned int a2,
        char a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26)
{
  unsigned int v27; // ecx
  unsigned int result; // eax
  int v29; // edi
  unsigned int v30; // ebp
  unsigned int v31; // edi
  unsigned int v32; // ebp
  unsigned int v33; // ebx
  bool v34; // cc

  v27 = this[1];
  if ( v27 )
    result = (int)(this[2] - v27) / 96;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v27 )
    {
      v31 = this[2];
      result = (int)(v31 - v27) / 96;
      if ( a2 < result )
      {
        if ( v27 > v31 )
          _invalid_parameter_noinfo();
        v32 = this[1];
        if ( v32 > this[2] )
          _invalid_parameter_noinfo();
        v33 = 96 * a2 + v32;
        v34 = v33 <= this[2];
        a4 = v32;
        if ( !v34 || v33 < this[1] )
          _invalid_parameter_noinfo();
        return sub_1000E520((int)&a3, (int)this, v33, (int)this, v31);
      }
    }
  }
  else
  {
    if ( v27 )
      v29 = (int)(this[2] - v27) / 96;
    else
      v29 = 0;
    v30 = this[2];
    if ( v27 > v30 )
      _invalid_parameter_noinfo();
    return sub_10009C6E((int)this, v30, a2 - v29, &a3);
  }
  return result;
}
