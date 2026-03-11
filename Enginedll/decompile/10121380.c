/*
 * func-name: ?SetMBVP@Shader@@QAEXABVMatrix@@0@Z
 * func-address: 0x10121380
 * callers: 0x100f1010, 0x10139150
 * callees: 0x10120f40
 */

void __thiscall Shader::SetMBVP(Shader *this, const struct Matrix *a2, const struct Matrix *a3)
{
  char *v4; // edi

  v4 = (char *)this + 1928;
  *((_DWORD *)this + 497) = a2;
  Shader::SetVar(this, (Shader *)((char *)this + 1928));
  *((_DWORD *)v4 + 69) = 0;
  *((_DWORD *)this + 1057) = a3;
  Shader::SetVar(this, (Shader *)((char *)this + 4168));
  *((_DWORD *)this + 1111) = 0;
}
