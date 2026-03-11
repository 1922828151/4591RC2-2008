/*
 * func-name: ?BeginPass@Shader@@QAEXI@Z
 * func-address: 0x10122050
 * callers: 0x1005bd90, 0x1005cb50, 0x100678c0, 0x100a0810, 0x100e5360, 0x100f1010, 0x101077c0, 0x101282d0, 0x10128c50, 0x1012c590, 0x1012cad0, 0x1012d660, 0x1012e2b0, 0x10139150
 * callees: 0x10106b20, 0x10120f40
 */

void __thiscall Shader::BeginPass(Shader *this, unsigned int a2)
{
  unsigned int v3; // ecx

  v3 = a2;
  *((_DWORD *)this + 46) = a2;
  if ( !byte_112417B4 )
    (*(void (__stdcall **)(_DWORD, unsigned int))(**((_DWORD **)this + 4) + 256))(*((_DWORD *)this + 4), v3);
  a2 = *(unsigned __int8 *)PostProcess::Instance();
  *((_DWORD *)this + 3227) = &a2;
  Shader::SetVar(this, (Shader *)((char *)this + 12848));
  *((_DWORD *)this + 3281) = 0;
}
