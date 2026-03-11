/*
 * func-name: sub_1015E9B0
 * func-address: 0x1015e9b0
 * callers: 0x10001794
 * callees: 0x10007711, 0x10016b58, 0x10017c7e
 */

int __thiscall sub_1015E9B0(
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
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32)
{
  unsigned int v33; // edi
  int v34; // ebx
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // ebx
  unsigned int v38; // edi
  unsigned int v39; // ebp
  bool v40; // cc
  int v42; // [esp+0h] [ebp-28h]
  int v43; // [esp+4h] [ebp-24h]
  _DWORD v44[2]; // [esp+14h] [ebp-14h] BYREF
  int v45; // [esp+24h] [ebp-4h]

  v33 = this[1];
  v34 = 0;
  v45 = 0;
  if ( v33 )
    v35 = (int)(this[2] - v33) / 120;
  else
    v35 = 0;
  if ( v35 >= a2 )
  {
    if ( v33 )
    {
      v37 = this[2];
      if ( a2 < (int)(v37 - v33) / 120 )
      {
        if ( v33 > v37 )
          _invalid_parameter_noinfo();
        v38 = this[1];
        if ( v38 > this[2] )
          _invalid_parameter_noinfo();
        v39 = v38 + 120 * a2;
        v40 = v39 <= this[2];
        v44[1] = v38;
        if ( !v40 || v39 < this[1] )
          _invalid_parameter_noinfo();
        sub_10017C7E((int)v44, (int)this, v39, (int)this, v37);
      }
    }
  }
  else
  {
    if ( v33 )
      v34 = (int)(this[2] - v33) / 120;
    v44[0] = this[2];
    v36 = v44[0];
    if ( v33 > v44[0] )
    {
      _invalid_parameter_noinfo();
      v36 = v44[0];
    }
    sub_10007711((int)this, v36, a2 - v34, (int)&a3);
  }
  v45 = -1;
  return sub_10016B58(v42, v43);
}
