/*
 * func-name: sub_10096870
 * func-address: 0x10096870
 * callers: 0x10018f98
 * callees: 0x1000d0e9, 0x100124b8
 */

unsigned int __thiscall sub_10096870(_DWORD *this, unsigned int a2, int (__thiscall ***a3)(_DWORD, int), int a4)
{
  unsigned int v5; // ecx
  int v6; // edi
  unsigned int result; // eax
  unsigned int v8; // ebp
  unsigned int v9; // ebp
  unsigned int v10; // edi
  unsigned int v11; // edi
  _BYTE v12[4]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+24h] [ebp-4h]

  v5 = this[1];
  v6 = 0;
  v14 = 0;
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
        v13 = v10;
        v11 = v10 + 8 * a2;
        if ( v11 > this[2] || v11 < this[1] )
          _invalid_parameter_noinfo();
        result = sub_100124B8((int)v12, (int)this, v11, (int)this, v9);
      }
    }
  }
  else
  {
    if ( v5 )
      v6 = (int)(this[2] - v5) >> 3;
    v8 = this[2];
    if ( v5 > v8 )
      _invalid_parameter_noinfo();
    result = sub_1000D0E9((int)this, v8, a2 - v6, (int)&a3);
  }
  v14 = -1;
  if ( a3 )
    return (**a3)(a3, 1);
  return result;
}
