/*
 * func-name: sub_100F7530
 * func-address: 0x100f7530
 * callers: 0x100f37e0, 0x100f7ee0
 * callees: 0x100f6030, 0x100f6900
 */

unsigned int __thiscall sub_100F7530(int this, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
  unsigned int v8; // ecx
  unsigned int result; // eax
  int v10; // edi
  char *v11; // ebp
  char *v12; // edi
  unsigned int v13; // ebp
  char *v14; // ebx
  bool v15; // cc

  v8 = *(_DWORD *)(this + 4);
  if ( v8 )
    result = (int)(*(_DWORD *)(this + 8) - v8) / 20;
  else
    result = 0;
  if ( result >= a2 )
  {
    if ( v8 )
    {
      v12 = *(char **)(this + 8);
      result = (int)&v12[-v8] / 20;
      if ( a2 < result )
      {
        if ( v8 > (unsigned int)v12 )
          invalid_parameter_noinfo();
        v13 = *(_DWORD *)(this + 4);
        if ( v13 > *(_DWORD *)(this + 8) )
          invalid_parameter_noinfo();
        v14 = (char *)(v13 + 20 * a2);
        v15 = (unsigned int)v14 <= *(_DWORD *)(this + 8);
        a4 = v13;
        if ( !v15 || (unsigned int)v14 < *(_DWORD *)(this + 4) )
          invalid_parameter_noinfo();
        return (unsigned int)std::vector<AttributeRange>::erase((char **)this, &a3, this, v14, this, v12);
      }
    }
  }
  else
  {
    if ( v8 )
      v10 = (int)(*(_DWORD *)(this + 8) - v8) / 20;
    else
      v10 = 0;
    v11 = *(char **)(this + 8);
    if ( v8 > (unsigned int)v11 )
      invalid_parameter_noinfo();
    return sub_100F6900(this, this, v11, a2 - v10, &a3);
  }
  return result;
}
