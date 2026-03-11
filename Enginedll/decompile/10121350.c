/*
 * func-name: ?SetOldWVP@Shader@@QAEXABVMatrix@@@Z
 * func-address: 0x10121350
 * callers: 0x100f0c50, 0x100f1180, 0x10139150
 * callees: 0x10120f40
 */

void __thiscall Shader::SetOldWVP(Shader *this, const struct Matrix *a2)
{
  char *v2; // esi

  v2 = (char *)this + 4448;
  *((_DWORD *)this + 1127) = a2;
  Shader::SetVar(this, (Shader *)((char *)this + 4448));
  *((_DWORD *)v2 + 69) = 0;
}
