/*
 * func-name: sub_100CF940
 * func-address: 0x100cf940
 * callers: 0x100133c7
 * callees: 0x10008445, 0x10009f39
 */

unsigned int __thiscall sub_100CF940(
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
        int a18)
{
  unsigned int v19; // ecx
  unsigned int result; // eax
  int v21; // ebx
  unsigned int v22; // ebp
  unsigned int v23; // ebp
  unsigned int v24; // ebx
  unsigned int v25; // edi
  bool v26; // cc

  v19 = this[1];
  if ( v19 )
    result = (int)(this[2] - v19) >> 6;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v19 )
    {
      v23 = this[2];
      result = (int)(v23 - v19) >> 6;
      if ( a2 < result )
      {
        if ( v19 > v23 )
          _invalid_parameter_noinfo();
        v24 = this[1];
        if ( v24 > this[2] )
          _invalid_parameter_noinfo();
        v25 = v24 + (a2 << 6);
        v26 = v25 <= this[2];
        a4 = v24;
        if ( !v26 || v25 < this[1] )
          _invalid_parameter_noinfo();
        return sub_10008445((int)&a3, (int)this, v25, (int)this, v23);
      }
    }
  }
  else
  {
    if ( v19 )
      v21 = (int)(this[2] - v19) >> 6;
    else
      v21 = 0;
    v22 = this[2];
    if ( v19 > v22 )
      _invalid_parameter_noinfo();
    return sub_10009F39((int)this, v22, a2 - v21, &a3);
  }
  return result;
}
