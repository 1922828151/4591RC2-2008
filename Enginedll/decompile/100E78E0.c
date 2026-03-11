/*
 * func-name: ?Shutdown@MaterialManager@@QAEXXZ
 * func-address: 0x100e78e0
 * callers: none
 * callees: 0x100e3ef0, 0x100e3fc0, 0x100e4420, 0x100e81c0, 0x101a2500
 */

void __thiscall MaterialManager::Shutdown(Material **this)
{
  Material *v2; // esi
  struct MaterialManager *v3; // eax
  unsigned int v4; // edi
  char *v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  void *v9; // ebx

  v2 = *this;
  if ( *((_DWORD *)*this + 80) == 1 )
  {
    Material::~Material(*this);
    operator delete(v2);
  }
  else
  {
    v3 = MaterialManager::Instance();
    --*((_DWORD *)v3 + 9);
    --*((_DWORD *)v2 + 80);
  }
  v4 = 0;
  v5 = (char *)(this + 5);
  while ( 1 )
  {
    v6 = *((_DWORD *)v5 + 1);
    if ( !v6 || v4 >= (*((_DWORD *)v5 + 2) - v6) >> 2 )
      break;
    v7 = *((_DWORD *)v5 + 1);
    if ( *(_DWORD *)(v7 + 4 * v4) )
    {
      if ( !v7 || v4 >= (*((_DWORD *)v5 + 2) - v7) >> 2 )
        invalid_parameter_noinfo();
      v8 = *((_DWORD *)v5 + 1);
      v9 = *(void **)(v8 + 4 * v4);
      if ( v9 )
      {
        MaterialLibrary::~MaterialLibrary(*(void ***)(v8 + 4 * v4));
        operator delete(v9);
      }
    }
    ++v4;
  }
  sub_100E81C0((int)v5, 0, 0);
}
