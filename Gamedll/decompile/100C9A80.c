/*
 * func-name: sub_100C9A80
 * func-address: 0x100c9a80
 * callers: 0x100155f5
 * callees: 0x10010dd9, 0x100170f8
 */

unsigned int __thiscall sub_100C9A80(
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
        int a16)
{
  unsigned int v17; // edi
  unsigned int result; // eax
  int v20; // ebx
  unsigned int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // edi
  unsigned int v24; // ebp
  bool v25; // cc
  int v26; // [esp+14h] [ebp+4h]

  v17 = this[1];
  if ( v17 )
    result = (int)(this[2] - v17) / 56;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v17 )
    {
      v22 = this[2];
      result = (int)(v22 - v17) / 56;
      if ( a2 < result )
      {
        if ( v17 > v22 )
          _invalid_parameter_noinfo();
        v23 = this[1];
        if ( v23 > this[2] )
          _invalid_parameter_noinfo();
        v24 = v23 + 56 * a2;
        v25 = v24 <= this[2];
        a4 = v23;
        if ( !v25 || v24 < this[1] )
          _invalid_parameter_noinfo();
        return sub_10010DD9((int)&a3, (int)this, v24, (int)this, v22);
      }
    }
  }
  else
  {
    if ( v17 )
      v20 = (int)(this[2] - v17) / 56;
    else
      v20 = 0;
    v21 = this[2];
    v26 = v21;
    if ( v17 > v21 )
    {
      _invalid_parameter_noinfo();
      v21 = v26;
    }
    return sub_100170F8((int)this, v21, a2 - v20, &a3);
  }
  return result;
}
