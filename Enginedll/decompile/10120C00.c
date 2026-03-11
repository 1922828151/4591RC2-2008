/*
 * func-name: ?OnDestroyDevice@ShaderManager@@UAEXXZ
 * func-address: 0x10120c00
 * callers: none
 * callees: none
 */

void __thiscall ShaderManager::OnDestroyDevice(ShaderManager *this)
{
  unsigned int v1; // edi
  int i; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx

  v1 = 0;
  for ( i = 0; ; i += 32 )
  {
    v4 = *((_DWORD *)this + 30);
    if ( !v4 || v1 >= (*((_DWORD *)this + 31) - v4) >> 5 )
      break;
    v5 = *((_DWORD *)this + 30);
    if ( *(_DWORD *)(*(_DWORD *)(v5 + i + 28) + 16) )
    {
      if ( !v5 || v1 >= (*((_DWORD *)this + 31) - v5) >> 5 )
        invalid_parameter_noinfo();
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 30) + i + 28) + 16) + 8))(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 30) + i + 28) + 16));
      v6 = *((_DWORD *)this + 30);
      if ( !v6 || v1 >= (*((_DWORD *)this + 31) - v6) >> 5 )
        invalid_parameter_noinfo();
      *(_DWORD *)(*(_DWORD *)(i + *((_DWORD *)this + 30) + 28) + 16) = 0;
    }
    ++v1;
  }
}
