/*
 * func-name: sub_1007DD90
 * func-address: 0x1007dd90
 * callers: 0x1001523a
 * callees: 0x10012279, 0x10016b3f
 */

unsigned int __thiscall sub_1007DD90(
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
        int a14)
{
  unsigned int v15; // ecx
  unsigned int result; // eax
  int v17; // edi
  unsigned int v18; // ebp
  unsigned int v19; // edi
  unsigned int v20; // ebp
  unsigned int v21; // ebx
  bool v22; // cc

  v15 = this[1];
  if ( v15 )
    result = (int)(this[2] - v15) / 48;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v15 )
    {
      v19 = this[2];
      result = (int)(v19 - v15) / 48;
      if ( a2 < result )
      {
        if ( v15 > v19 )
          _invalid_parameter_noinfo();
        v20 = this[1];
        if ( v20 > this[2] )
          _invalid_parameter_noinfo();
        v21 = 48 * a2 + v20;
        v22 = v21 <= this[2];
        a4 = v20;
        if ( !v22 || v21 < this[1] )
          _invalid_parameter_noinfo();
        return sub_10012279((int)&a3, (int)this, v21, (int)this, v19);
      }
    }
  }
  else
  {
    if ( v15 )
      v17 = (int)(this[2] - v15) / 48;
    else
      v17 = 0;
    v18 = this[2];
    if ( v15 > v18 )
      _invalid_parameter_noinfo();
    return sub_10016B3F((int)this, v18, a2 - v17, &a3);
  }
  return result;
}
