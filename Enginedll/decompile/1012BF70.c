/*
 * func-name: sub_1012BF70
 * func-address: 0x1012bf70
 * callers: 0x10128c50
 * callees: 0x1012b540, 0x1012b9e0
 */

void __thiscall sub_1012BF70(
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
        int a16)
{
  unsigned int v17; // edi
  unsigned int v18; // eax
  int v20; // ebx
  char *v21; // eax
  char *v22; // ebx
  unsigned int v23; // edi
  unsigned int v24; // ebp
  bool v25; // cc
  int v26; // [esp+14h] [ebp+4h]

  v17 = *(_DWORD *)(this + 4);
  if ( v17 )
    v18 = (int)(*(_DWORD *)(this + 8) - v17) / 56;
  else
    v18 = 0;
  if ( v18 >= a2 )
  {
    if ( v17 )
    {
      v22 = *(char **)(this + 8);
      if ( a2 < (int)&v22[-v17] / 56 )
      {
        if ( v17 > (unsigned int)v22 )
          invalid_parameter_noinfo();
        v23 = *(_DWORD *)(this + 4);
        if ( v23 > *(_DWORD *)(this + 8) )
          invalid_parameter_noinfo();
        v24 = v23 + 56 * a2;
        v25 = v24 <= *(_DWORD *)(this + 8);
        a4 = v23;
        if ( !v25 || v24 < *(_DWORD *)(this + 4) )
          invalid_parameter_noinfo();
        sub_1012B540((char **)this, &a3, this, v24, this, v22);
      }
    }
  }
  else
  {
    if ( v17 )
      v20 = (int)(*(_DWORD *)(this + 8) - v17) / 56;
    else
      v20 = 0;
    v21 = *(char **)(this + 8);
    v26 = (int)v21;
    if ( v17 > (unsigned int)v21 )
    {
      invalid_parameter_noinfo();
      v21 = (char *)v26;
    }
    sub_1012B9E0(this, this, v21, a2 - v20, &a3);
  }
}
