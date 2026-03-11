/*
 * func-name: ?Shutdown@ShaderManager@@QAEXXZ
 * func-address: 0x10121da0
 * callers: none
 * callees: 0x1009d5a0, 0x101a2500
 */

void __thiscall ShaderManager::Shutdown(ShaderManager *this)
{
  void *v2; // edi
  void *v3; // edi

  v2 = (void *)*((_DWORD *)this + 49);
  if ( v2 )
  {
    sub_1009D5A0(*((void ***)this + 49));
    operator delete(v2);
    *((_DWORD *)this + 49) = 0;
  }
  v3 = (void *)*((_DWORD *)this + 50);
  if ( v3 )
  {
    sub_1009D5A0(*((void ***)this + 50));
    operator delete(v3);
    *((_DWORD *)this + 50) = 0;
  }
}
