/*
 * func-name: ?OnLostDevice@ShaderManager@@UAEXXZ
 * func-address: 0x10120b80
 * callers: none
 * callees: none
 */

void __thiscall ShaderManager::OnLostDevice(ShaderManager *this)
{
  unsigned int v1; // edi
  int i; // ebx
  int v4; // ecx
  int v5; // eax

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
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 30) + i + 28) + 16) + 276))(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 30) + i + 28) + 16));
    }
    ++v1;
  }
}
