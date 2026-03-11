/*
 * func-name: ?CommitChanges@Shader@@QAEXXZ
 * func-address: 0x10120900
 * callers: 0x10059880, 0x1005bd90, 0x1005cb50, 0x100e5360, 0x100f1010, 0x101077c0, 0x101280a0, 0x1012e2b0, 0x10139150
 * callees: none
 */

void __thiscall Shader::CommitChanges(Shader *this)
{
  if ( !byte_112417B4 )
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 4) + 260))(*((_DWORD *)this + 4));
}
