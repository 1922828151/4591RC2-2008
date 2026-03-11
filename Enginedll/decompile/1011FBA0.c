/*
 * func-name: ?AddRef@Shader@@QAEXXZ
 * func-address: 0x1011fba0
 * callers: none
 * callees: none
 */

void __thiscall Shader::AddRef(Shader *this)
{
  ++*((_DWORD *)this + 1);
}
