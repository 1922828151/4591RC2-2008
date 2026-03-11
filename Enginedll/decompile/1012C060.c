/*
 * func-name: sub_1012C060
 * func-address: 0x1012c060
 * callers: 0x10128c50
 * callees: 0x1012b7d0, 0x1012bcb0
 */

void __thiscall sub_1012C060(
        int this,
        unsigned int a2,
        int a3,
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
  unsigned int v48; // eax
  int v49; // edi
  char *v50; // ebp
  char *v51; // edi
  unsigned int v52; // ebp
  unsigned int v53; // ebx
  bool v54; // cc

  v47 = *(_DWORD *)(this + 4);
  if ( v47 )
    v48 = (int)(*(_DWORD *)(this + 8) - v47) / 176;
  else
    v48 = 0;
  if ( v48 >= a2 )
  {
    if ( v47 )
    {
      v51 = *(char **)(this + 8);
      if ( a2 < (int)&v51[-v47] / 176 )
      {
        if ( v47 > (unsigned int)v51 )
          invalid_parameter_noinfo();
        v52 = *(_DWORD *)(this + 4);
        if ( v52 > *(_DWORD *)(this + 8) )
          invalid_parameter_noinfo();
        v53 = v52 + 176 * a2;
        v54 = v53 <= *(_DWORD *)(this + 8);
        a4 = v52;
        if ( !v54 || v53 < *(_DWORD *)(this + 4) )
          invalid_parameter_noinfo();
        sub_1012B7D0((char **)this, &a3, this, v53, this, v51);
      }
    }
  }
  else
  {
    if ( v47 )
      v49 = (int)(*(_DWORD *)(this + 8) - v47) / 176;
    else
      v49 = 0;
    v50 = *(char **)(this + 8);
    if ( v47 > (unsigned int)v50 )
      invalid_parameter_noinfo();
    sub_1012BCB0(this, this, v50, a2 - v49, &a3);
  }
}
