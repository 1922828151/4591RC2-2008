/*
 * func-name: ?ClearLights@StaticModel@@QAEXXZ
 * func-address: 0x100eef10
 * callers: 0x10138880
 * callees: 0x100a1d10
 */

void __thiscall StaticModel::ClearLights(StaticModel *this)
{
  int v2; // ecx
  _DWORD *v3; // esi
  unsigned int v4; // eax
  char *v5; // ebp
  unsigned int v6; // edi
  int v7; // ebx
  char *v8; // edi
  int v9[2]; // [esp+8h] [ebp-8h] BYREF

  v2 = *((_DWORD *)this + 73);
  v3 = (_DWORD *)((char *)this + 288);
  if ( v2 )
    v4 = (*((_DWORD *)this + 74) - v2) >> 2;
  else
    v4 = 0;
  if ( *((_DWORD *)this + 76) > v4 )
    *((_DWORD *)this + 76) = 0;
  if ( v4 && v4 != *((_DWORD *)this + 76) )
  {
    v5 = (char *)*((_DWORD *)this + 74);
    if ( *((_DWORD *)this + 73) > (unsigned int)v5 )
      invalid_parameter_noinfo();
    v6 = *((_DWORD *)this + 73);
    if ( v6 > *((_DWORD *)this + 74) )
      invalid_parameter_noinfo();
    v7 = *((_DWORD *)this + 76);
    v9[1] = v6;
    v8 = (char *)(v6 + 4 * v7);
    if ( (unsigned int)v8 > v3[2] || (unsigned int)v8 < v3[1] )
      invalid_parameter_noinfo();
    std::vector<Model *>::erase(v3, v9, (int)v3, v8, (int)v3, v5);
  }
}
