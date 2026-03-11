/*
 * func-name: sub_100F19E0
 * func-address: 0x100f19e0
 * callers: 0x100f1a90
 * callees: 0x10020450, 0x1007df50
 */

void __thiscall sub_100F19E0(
        _DWORD *this,
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
        int a18)
{
  unsigned int v19; // ecx
  unsigned int v20; // eax
  int v21; // ebx
  char *v22; // ebp
  unsigned int v23; // ebp
  unsigned int v24; // ebx
  unsigned int v25; // edi
  bool v26; // cc

  v19 = this[1];
  if ( v19 )
    v20 = (int)(this[2] - v19) >> 6;
  else
    v20 = 0;
  if ( v20 >= a2 )
  {
    if ( v19 )
    {
      v23 = this[2];
      if ( a2 < (int)(v23 - v19) >> 6 )
      {
        if ( v19 > v23 )
          invalid_parameter_noinfo();
        v24 = this[1];
        if ( v24 > this[2] )
          invalid_parameter_noinfo();
        v25 = v24 + (a2 << 6);
        v26 = v25 <= this[2];
        a4 = v24;
        if ( !v26 || v25 < this[1] )
          invalid_parameter_noinfo();
        sub_10020450(this, &a3, (int)this, v25, (int)this, v23);
      }
    }
  }
  else
  {
    if ( v19 )
      v21 = (int)(this[2] - v19) >> 6;
    else
      v21 = 0;
    v22 = (char *)this[2];
    if ( v19 > (unsigned int)v22 )
      invalid_parameter_noinfo();
    sub_1007DF50((int)this, (int)this, v22, a2 - v21, &a3);
  }
}
