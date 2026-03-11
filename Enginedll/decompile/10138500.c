/*
 * func-name: ?SetMaterialList@World@@QAEXABV?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@@Z
 * func-address: 0x10138500
 * callers: 0x10003a50, 0x10040990
 * callees: 0x1000ce20, 0x10076ef0, 0x100e4400, 0x100e6830
 */

int __thiscall World::SetMaterialList(void *this, _DWORD *a2)
{
  unsigned int v2; // esi
  int i; // edi
  int v4; // ecx
  unsigned int j; // ebx
  int v6; // ecx

  v2 = 0;
  for ( i = (int)this + 708; ; Material::Release(*(Material **)(*(_DWORD *)(i + 4) + 4 * v2++)) )
  {
    v4 = *(_DWORD *)(i + 4);
    if ( !v4 || v2 >= (*(_DWORD *)(i + 8) - v4) >> 2 )
      break;
  }
  for ( j = 0; j < std::vector<Model *>::size(a2); ++j )
  {
    v6 = a2[1];
    if ( !v6 || j >= (a2[2] - v6) >> 2 )
      invalid_parameter_noinfo();
    Material::AddRef(*(Material **)(a2[1] + 4 * j));
  }
  return std::vector<Material *>::operator=(i, (int)a2);
}
