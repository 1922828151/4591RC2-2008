/*
 * func-name: ?LoadAllShaders@ShaderManager@@UAEJXZ
 * func-address: 0x10121d10
 * callers: none
 * callees: 0x1011fbb0, 0x10121160, 0x101211e0
 */

int __thiscall ShaderManager::LoadAllShaders(ShaderManager *this)
{
  unsigned int v1; // edi
  int i; // ebx
  int v4; // ecx
  unsigned int j; // esi

  v1 = 0;
  for ( i = 0; ; i += 32 )
  {
    v4 = *((_DWORD *)this + 30);
    if ( !v4 || v1 >= (*((_DWORD *)this + 31) - v4) >> 5 )
      break;
    Shader::Reload(*(Shader **)(*((_DWORD *)this + 30) + i + 28));
    ShaderManager::SetUsedTextures(this, v1++);
  }
  ShaderManager::UpdateRenderSettings(this);
  for ( j = 0; dword_112417C0 && j < (dword_112417C4 - (int)dword_112417C0) >> 2; ++j )
    *(_DWORD *)(*((_DWORD *)dword_112417C0 + j) + 68) = 0;
  return 0;
}
