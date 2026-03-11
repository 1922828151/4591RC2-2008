/*
 * func-name: sub_10238100
 * func-address: 0x10238100
 * callers: 0x10008be8
 * callees: 0x10005afb, 0x10017864, 0x10019ace
 */

int __thiscall sub_10238100(
        _DWORD *this,
        unsigned int a2,
        int a3,
        int a4,
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
  int v18; // ebx
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // edi
  unsigned int v23; // ebp
  bool v24; // cc
  int v26; // [esp+0h] [ebp-28h]
  int v27; // [esp+4h] [ebp-24h]
  _DWORD v28[2]; // [esp+14h] [ebp-14h] BYREF
  int v29; // [esp+24h] [ebp-4h]

  v17 = this[1];
  v18 = 0;
  v29 = 0;
  if ( v17 )
    v19 = (int)(this[2] - v17) / 56;
  else
    v19 = 0;
  if ( v19 >= a2 )
  {
    if ( v17 )
    {
      v21 = this[2];
      if ( a2 < (int)(v21 - v17) / 56 )
      {
        if ( v17 > v21 )
          _invalid_parameter_noinfo();
        v22 = this[1];
        if ( v22 > this[2] )
          _invalid_parameter_noinfo();
        v23 = v22 + 56 * a2;
        v24 = v23 <= this[2];
        v28[1] = v22;
        if ( !v24 || v23 < this[1] )
          _invalid_parameter_noinfo();
        sub_10019ACE((int)v28, (int)this, v23, (int)this, v21);
      }
    }
  }
  else
  {
    if ( v17 )
      v18 = (int)(this[2] - v17) / 56;
    v28[0] = this[2];
    v20 = v28[0];
    if ( v17 > v28[0] )
    {
      _invalid_parameter_noinfo();
      v20 = v28[0];
    }
    sub_10017864((int)this, v20, a2 - v18, (int)&a3);
  }
  v29 = -1;
  return sub_10005AFB(v26, v27);
}
