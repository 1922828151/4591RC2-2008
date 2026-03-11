/*
 * func-name: sub_1015E830
 * func-address: 0x1015e830
 * callers: 0x100081c0
 * callees: 0x100102cb, 0x10018df9, 0x10019e6b
 */

int __thiscall sub_1015E830(
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
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39)
{
  unsigned int v40; // edi
  int v41; // ebx
  unsigned int v42; // eax
  int v43; // eax
  unsigned int v44; // ebx
  unsigned int v45; // edi
  unsigned int v46; // ebp
  bool v47; // cc
  int v49; // [esp+0h] [ebp-28h]
  int v50; // [esp+4h] [ebp-24h]
  _DWORD v51[2]; // [esp+14h] [ebp-14h] BYREF
  int v52; // [esp+24h] [ebp-4h]

  v40 = this[1];
  v41 = 0;
  v52 = 0;
  if ( v40 )
    v42 = (int)(this[2] - v40) / 148;
  else
    v42 = 0;
  if ( v42 >= a2 )
  {
    if ( v40 )
    {
      v44 = this[2];
      if ( a2 < (int)(v44 - v40) / 148 )
      {
        if ( v40 > v44 )
          _invalid_parameter_noinfo();
        v45 = this[1];
        if ( v45 > this[2] )
          _invalid_parameter_noinfo();
        v46 = v45 + 148 * a2;
        v47 = v46 <= this[2];
        v51[1] = v45;
        if ( !v47 || v46 < this[1] )
          _invalid_parameter_noinfo();
        sub_10018DF9((int)v51, (int)this, v46, (int)this, v44);
      }
    }
  }
  else
  {
    if ( v40 )
      v41 = (int)(this[2] - v40) / 148;
    v51[0] = this[2];
    v43 = v51[0];
    if ( v40 > v51[0] )
    {
      _invalid_parameter_noinfo();
      v43 = v51[0];
    }
    sub_10019E6B((int)this, v43, a2 - v41, (int)&a3);
  }
  v52 = -1;
  return sub_100102CB(v49, v50);
}
