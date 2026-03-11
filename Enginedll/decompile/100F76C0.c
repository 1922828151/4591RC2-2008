/*
 * func-name: sub_100F76C0
 * func-address: 0x100f76c0
 * callers: 0x100f7f60
 * callees: 0x100f6080, 0x100f6e10
 */

unsigned int __thiscall sub_100F76C0(
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
        int a19)
{
  unsigned int v20; // ecx
  unsigned int result; // eax
  int v22; // edi
  char *v23; // ebp
  char *v24; // edi
  unsigned int v25; // ebp
  unsigned int v26; // ebx
  bool v27; // cc

  v20 = *(_DWORD *)(this + 4);
  if ( v20 )
    result = (int)(*(_DWORD *)(this + 8) - v20) / 68;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v20 )
    {
      v24 = *(char **)(this + 8);
      result = (int)&v24[-v20] / 68;
      if ( a2 < result )
      {
        if ( v20 > (unsigned int)v24 )
          invalid_parameter_noinfo();
        v25 = *(_DWORD *)(this + 4);
        if ( v25 > *(_DWORD *)(this + 8) )
          invalid_parameter_noinfo();
        v26 = v25 + 68 * a2;
        v27 = v26 <= *(_DWORD *)(this + 8);
        a4 = v25;
        if ( !v27 || v26 < *(_DWORD *)(this + 4) )
          invalid_parameter_noinfo();
        return (unsigned int)sub_100F6080((char **)this, &a3, this, v26, this, v24);
      }
    }
  }
  else
  {
    if ( v20 )
      v22 = (int)(*(_DWORD *)(this + 8) - v20) / 68;
    else
      v22 = 0;
    v23 = *(char **)(this + 8);
    if ( v20 > (unsigned int)v23 )
      invalid_parameter_noinfo();
    return sub_100F6E10(this, this, v23, a2 - v22, (float *)&a3);
  }
  return result;
}
