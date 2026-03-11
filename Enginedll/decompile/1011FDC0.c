/*
 * func-name: ?End@Shader@@QAEXXZ
 * func-address: 0x1011fdc0
 * callers: 0x10055d20, 0x10056950, 0x100569f0, 0x10059880, 0x100678c0, 0x100a0810, 0x100e5360, 0x100f1010, 0x101077c0, 0x101282d0, 0x10128c50, 0x1012c590, 0x1012cad0, 0x1012d660, 0x1012e2b0, 0x10139150
 * callees: none
 */

void __thiscall Shader::End(Shader *this)
{
  *((_BYTE *)this + 180) = 0;
  (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 4) + 268))(*((_DWORD *)this + 4));
}
