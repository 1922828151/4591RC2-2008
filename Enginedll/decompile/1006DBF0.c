/*
 * func-name: ?clearModels@C3DModel@@QAEXXZ
 * func-address: 0x1006dbf0
 * callers: none
 * callees: 0x100a1d10
 */

void __thiscall C3DModel::clearModels(C3DModel *this)
{
  int v1; // eax
  int v2; // esi
  void *v3; // edi
  void *v4; // ebx
  int v5; // [esp+0h] [ebp-8h] BYREF

  v1 = *((_DWORD *)this + 133);
  if ( v1 )
  {
    v2 = v1 + 4828;
    v3 = *(void **)(v1 + 4836);
    if ( *(_DWORD *)(v1 + 4832) > (unsigned int)v3 )
      invalid_parameter_noinfo();
    v4 = *(void **)(v2 + 4);
    if ( (unsigned int)v4 > *(_DWORD *)(v2 + 8) )
      invalid_parameter_noinfo();
    std::vector<Model *>::erase((int)&v5, v2, v4, v2, v3);
  }
}
