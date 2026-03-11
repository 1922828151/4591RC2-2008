/*
 * func-name: ?SetVar@Shader@@QAEXAAUShaderVar@@PAX@Z
 * func-address: 0x10121330
 * callers: 0x1012ffd0
 * callees: 0x10120f40
 */

void __thiscall Shader::SetVar(Shader *this, struct ShaderVar *a2, void *a3)
{
  *((_DWORD *)a2 + 15) = a3;
  Shader::SetVar(this, a2);
  *((_DWORD *)a2 + 69) = 0;
}
