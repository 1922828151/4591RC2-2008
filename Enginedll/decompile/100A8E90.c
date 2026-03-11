/*
 * func-name: ?ShowScroll@CMultiLineStatic@@QAEX_N@Z
 * func-address: 0x100a8e90
 * callers: 0x1006b9c0
 * callees: none
 */

void __thiscall CMultiLineStatic::ShowScroll(CMultiLineStatic *this, int a2)
{
  if ( *((_DWORD *)this + 189) )
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 189) + 136))(*((_DWORD *)this + 189), a2);
}
