/*
 * func-name: sub_1018AF70
 * func-address: 0x1018af70
 * callers: 0x10018f6b
 * callees: 0x100021b7, 0x100036b1, 0x10014c90
 */

int __thiscall sub_1018AF70(
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
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22)
{
  unsigned int v23; // ecx
  int v24; // edi
  unsigned int v25; // eax
  unsigned int v26; // ebp
  unsigned int v27; // edi
  unsigned int v28; // ebp
  unsigned int v29; // ebx
  bool v30; // cc
  int v32; // [esp+0h] [ebp-28h]
  int v33; // [esp+4h] [ebp-24h]
  _BYTE v34[4]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v35; // [esp+18h] [ebp-10h]
  int v36; // [esp+24h] [ebp-4h]

  v23 = this[1];
  v24 = 0;
  v36 = 0;
  if ( v23 )
    v25 = (int)(this[2] - v23) / 80;
  else
    v25 = 0;
  if ( v25 >= a2 )
  {
    if ( v23 )
    {
      v27 = this[2];
      if ( a2 < (int)(v27 - v23) / 80 )
      {
        if ( v23 > v27 )
          _invalid_parameter_noinfo();
        v28 = this[1];
        if ( v28 > this[2] )
          _invalid_parameter_noinfo();
        v29 = 80 * a2 + v28;
        v30 = v29 <= this[2];
        v35 = v28;
        if ( !v30 || v29 < this[1] )
          _invalid_parameter_noinfo();
        sub_100036B1((int)v34, (int)this, v29, (int)this, v27);
      }
    }
  }
  else
  {
    if ( v23 )
      v24 = (int)(this[2] - v23) / 80;
    v26 = this[2];
    if ( v23 > v26 )
      _invalid_parameter_noinfo();
    sub_100021B7((int)this, v26, a2 - v24, (int)&a3);
  }
  v36 = -1;
  return sub_10014C90(v32, v33);
}
