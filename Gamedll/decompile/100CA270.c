/*
 * func-name: sub_100CA270
 * func-address: 0x100ca270
 * callers: 0x1000f155
 * callees: 0x1000875b, 0x100091a1
 */

unsigned int __thiscall sub_100CA270(
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
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46)
{
  unsigned int v47; // ecx
  unsigned int result; // eax
  int v49; // edi
  unsigned int v50; // ebp
  unsigned int v51; // edi
  unsigned int v52; // ebp
  unsigned int v53; // ebx
  bool v54; // cc

  v47 = this[1];
  if ( v47 )
    result = (int)(this[2] - v47) / 176;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v47 )
    {
      v51 = this[2];
      result = (int)(v51 - v47) / 176;
      if ( a2 < result )
      {
        if ( v47 > v51 )
          _invalid_parameter_noinfo();
        v52 = this[1];
        if ( v52 > this[2] )
          _invalid_parameter_noinfo();
        v53 = v52 + 176 * a2;
        v54 = v53 <= this[2];
        a4 = v52;
        if ( !v54 || v53 < this[1] )
          _invalid_parameter_noinfo();
        return sub_1000875B((int)&a3, (int)this, v53, (int)this, v51);
      }
    }
  }
  else
  {
    if ( v47 )
      v49 = (int)(this[2] - v47) / 176;
    else
      v49 = 0;
    v50 = this[2];
    if ( v47 > v50 )
      _invalid_parameter_noinfo();
    return sub_100091A1((int)this, v50, a2 - v49, &a3);
  }
  return result;
}
