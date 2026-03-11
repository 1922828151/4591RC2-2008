/*
 * func-name: sub_100D0290
 * func-address: 0x100d0290
 * callers: 0x1000f75e
 * callees: 0x1000240f, 0x10016f09, 0x102c9d50
 */

void __thiscall sub_100D0290(
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
        void *a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48)
{
  unsigned int v49; // edi
  int v50; // ebx
  unsigned int v51; // eax
  unsigned int v53; // eax
  unsigned int v54; // ebx
  unsigned int v55; // edi
  unsigned int v56; // ebp
  bool v57; // cc
  _BYTE v58[4]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v59; // [esp+18h] [ebp-10h]
  int v60; // [esp+24h] [ebp-4h]
  int v61; // [esp+2Ch] [ebp+4h]

  v49 = this[1];
  v50 = 0;
  v60 = 0;
  if ( v49 )
    v51 = (int)(this[2] - v49) / 184;
  else
    v51 = 0;
  if ( v51 >= a2 )
  {
    if ( v49 )
    {
      v54 = this[2];
      if ( a2 < (int)(v54 - v49) / 184 )
      {
        if ( v49 > v54 )
          _invalid_parameter_noinfo();
        v55 = this[1];
        if ( v55 > this[2] )
          _invalid_parameter_noinfo();
        v56 = v55 + 184 * a2;
        v57 = v56 <= this[2];
        v59 = v55;
        if ( !v57 || v56 < this[1] )
          _invalid_parameter_noinfo();
        sub_1000240F((int)v58, (int)this, v56, (int)this, v54);
      }
    }
  }
  else
  {
    if ( v49 )
      v50 = (int)(this[2] - v49) / 184;
    v53 = this[2];
    v61 = v53;
    if ( v49 > v53 )
    {
      _invalid_parameter_noinfo();
      v53 = v61;
    }
    sub_10016F09((int)this, v53, a2 - v50, &a3);
  }
  if ( a29 )
    operator delete(a29);
}
