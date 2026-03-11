/*
 * func-name: ??1MaterialLibrary@@QAE@XZ
 * func-address: 0x100e3fc0
 * callers: 0x100e78e0
 * callees: 0x100e3ef0, 0x101a2500
 */

void __thiscall MaterialLibrary::~MaterialLibrary(void **this)
{
  unsigned int i; // edi
  struct MaterialManager *v3; // eax
  int v4; // ecx
  char *v5; // eax
  struct MaterialManager *v6; // eax
  int v7; // ecx
  char *v8; // esi
  struct MaterialManager *v9; // eax
  unsigned int v10; // ebp
  char *v11; // esi
  unsigned int v12; // edi
  struct MaterialManager *v13; // eax
  char *v14; // esi
  int v15; // eax

  for ( i = 0; ; ++i )
  {
    v3 = MaterialManager::Instance();
    v4 = *((_DWORD *)v3 + 6);
    v5 = (char *)v3 + 20;
    if ( !v4 || i >= (*((_DWORD *)v5 + 2) - v4) >> 2 )
      break;
    v6 = MaterialManager::Instance();
    v7 = *((_DWORD *)v6 + 6);
    v8 = (char *)v6 + 20;
    if ( !v7 || i >= (*((_DWORD *)v6 + 7) - v7) >> 2 )
      invalid_parameter_noinfo();
    if ( this == *(void ***)(*((_DWORD *)v8 + 1) + 4 * i) )
    {
      v9 = MaterialManager::Instance();
      v10 = *((_DWORD *)v9 + 6);
      v11 = (char *)v9 + 20;
      if ( v10 > *((_DWORD *)v9 + 7) )
        invalid_parameter_noinfo();
      v12 = v10 + 4 * i;
      if ( v12 > *((_DWORD *)v11 + 2) || v12 < *((_DWORD *)v11 + 1) )
        invalid_parameter_noinfo();
      v13 = MaterialManager::Instance();
      v14 = (char *)v13 + 20;
      v15 = (int)(*((_DWORD *)v13 + 7) - (v12 + 4)) >> 2;
      if ( v15 > 0 )
        memmove_s((void *const)v12, 4 * v15, (const void *const)(v12 + 4), 4 * v15);
      *((_DWORD *)v14 + 2) -= 4;
      break;
    }
  }
  std::string::~string(this + 4);
  if ( this[1] )
    operator delete(this[1]);
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
}
