/*
 * func-name: ?UnbindHDRTarget@Shader@@QAEXXZ
 * func-address: 0x101218a0
 * callers: 0x10055d20, 0x10056950, 0x100569f0, 0x10059880, 0x1012c590, 0x1012cad0, 0x1012d660
 * callees: 0x10120f40
 */

void __thiscall Shader::UnbindHDRTarget(Shader *this)
{
  char *v1; // esi

  v1 = (char *)this + 12288;
  *((_DWORD *)this + 3087) = 0;
  Shader::SetVar(this, (Shader *)((char *)this + 12288));
  *((_DWORD *)v1 + 69) = 0;
}
