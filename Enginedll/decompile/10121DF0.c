/*
 * func-name: ?OnResetDevice@ShaderManager@@UAEJXZ
 * func-address: 0x10121df0
 * callers: none
 * callees: 0x100977a0, 0x10121160, 0x101211e0
 */

int __thiscall ShaderManager::OnResetDevice(ShaderManager *this)
{
  unsigned int v1; // edi
  int i; // ebx
  int v4; // ecx
  int v5; // eax
  const char *v6; // eax

  v1 = 0;
  for ( i = 0; ; i += 32 )
  {
    v4 = *((_DWORD *)this + 30);
    if ( !v4 || v1 >= (*((_DWORD *)this + 31) - v4) >> 5 )
      break;
    v5 = *(_DWORD *)(*((_DWORD *)this + 30) + i + 28);
    if ( !*(_DWORD *)(v5 + 16) )
    {
      v6 = (const char *)std::string::c_str(v5 + 188);
      SeriousWarning("Shader #%d's (%s) effect is NULL", v1, v6);
      return 0;
    }
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v5 + 16) + 280))(*(_DWORD *)(v5 + 16));
    ShaderManager::SetUsedTextures(this, v1++);
  }
  ShaderManager::UpdateRenderSettings(this);
  return 0;
}
