/*
 * func-name: ?RefreshMaterials@MaterialManager@@QAEXXZ
 * func-address: 0x1001c240
 * callers: 0x10136530
 * callees: 0x100e6870
 */

void __thiscall MaterialManager::RefreshMaterials(MaterialManager *this)
{
  unsigned int i; // edi
  int v3; // ecx

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 2);
    if ( !v3 || i >= (*((_DWORD *)this + 3) - v3) >> 2 )
      break;
    Material::Refresh(*(Material **)(*((_DWORD *)this + 2) + 4 * i));
  }
}
