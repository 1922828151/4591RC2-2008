/*
 * func-name: ?GetShader@ShaderManager@@QAEPAVShader@@H@Z
 * func-address: 0x1001c1e0
 * callers: none
 * callees: none
 */

struct Shader *__thiscall ShaderManager::GetShader(ShaderManager *this, unsigned int a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 30);
  if ( !v3 || a2 >= (*((_DWORD *)this + 31) - v3) >> 5 )
    invalid_parameter_noinfo();
  return *(struct Shader **)(32 * a2 + *((_DWORD *)this + 30) + 28);
}
