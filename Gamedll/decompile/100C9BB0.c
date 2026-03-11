/*
 * func-name: sub_100C9BB0
 * func-address: 0x100c9bb0
 * callers: 0x100028d3
 * callees: 0x1000529f, 0x10016716
 */

unsigned int __thiscall sub_100C9BB0(
        _DWORD *this,
        unsigned int a2,
        char a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  unsigned int v10; // edi
  unsigned int result; // eax
  int v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // edi
  unsigned int v17; // ebp
  bool v18; // cc
  int v19; // [esp+14h] [ebp+4h]

  v10 = this[1];
  if ( v10 )
    result = (int)(this[2] - v10) / 28;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v10 )
    {
      v15 = this[2];
      result = (int)(v15 - v10) / 28;
      if ( a2 < result )
      {
        if ( v10 > v15 )
          _invalid_parameter_noinfo();
        v16 = this[1];
        if ( v16 > this[2] )
          _invalid_parameter_noinfo();
        v17 = v16 + 28 * a2;
        v18 = v17 <= this[2];
        a4 = v16;
        if ( !v18 || v17 < this[1] )
          _invalid_parameter_noinfo();
        return sub_1000529F((int)&a3, (int)this, v17, (int)this, v15);
      }
    }
  }
  else
  {
    if ( v10 )
      v13 = (int)(this[2] - v10) / 28;
    else
      v13 = 0;
    v14 = this[2];
    v19 = v14;
    if ( v10 > v14 )
    {
      _invalid_parameter_noinfo();
      v14 = v19;
    }
    return sub_10016716((int)this, v14, a2 - v13, &a3);
  }
  return result;
}
