/*
 * func-name: ?RefreshMaterialsSimple@MaterialManager@@QAEXXZ
 * func-address: 0x1001c290
 * callers: 0x1013e1c0
 * callees: 0x100e3c20
 */

void __thiscall MaterialManager::RefreshMaterialsSimple(MaterialManager *this)
{
  unsigned int i; // edi
  int v3; // ecx

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 2);
    if ( !v3 || i >= (*((_DWORD *)this + 3) - v3) >> 2 )
      break;
    Material::RefreshSimple(*(Material **)(*((_DWORD *)this + 2) + 4 * i));
  }
}
