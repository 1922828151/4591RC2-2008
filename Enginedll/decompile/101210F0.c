/*
 * func-name: ?SetFog@Shader@@QAEXMUFloatColor@@MM@Z
 * func-address: 0x101210f0
 * callers: 0x1005bd90, 0x1005cb50, 0x1012d660, 0x1012e2b0
 * callees: 0x10120f40
 */

void __thiscall Shader::SetFog(_DWORD *this, char a2, char a3, int a4, int a5, int a6, char a7, char a8)
{
  this[847] = &a7;
  this[777] = &a2;
  this[917] = &a8;
  this[987] = &a3;
  Shader::SetVar((Shader *)this, (struct ShaderVar *)(this + 762));
  Shader::SetVar((Shader *)this, (struct ShaderVar *)(this + 832));
  Shader::SetVar((Shader *)this, (struct ShaderVar *)(this + 972));
  Shader::SetVar((Shader *)this, (struct ShaderVar *)(this + 902));
}
