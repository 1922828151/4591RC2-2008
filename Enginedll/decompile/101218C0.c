/*
 * func-name: ?SetMeshParams@Shader@@QAEX_N00@Z
 * func-address: 0x101218c0
 * callers: 0x1005bd90
 * callees: 0x10120f40
 */

void __thiscall Shader::SetMeshParams(Shader *this, bool a2, bool a3, bool a4)
{
  char *v5; // edi

  v5 = (char *)this + 13128;
  *((_DWORD *)this + 3297) = &a2;
  Shader::SetVar(this, (Shader *)((char *)this + 13128));
  *((_DWORD *)v5 + 69) = 0;
  *((_DWORD *)this + 3437) = &a4;
  Shader::SetVar(this, (Shader *)((char *)this + 13688));
  *((_DWORD *)this + 3491) = 0;
  *((_DWORD *)this + 3367) = &a3;
  Shader::SetVar(this, (Shader *)((char *)this + 13408));
  *((_DWORD *)this + 3421) = 0;
}
