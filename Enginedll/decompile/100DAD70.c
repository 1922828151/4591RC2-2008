/*
 * func-name: ?Bind@Input@@QAEXHHH@Z
 * func-address: 0x100dad70
 * callers: 0x100b3e00
 * callees: none
 */

void __thiscall Input::Bind(Input *this, int a2, int a3, int a4)
{
  if ( a3 != -1 && a2 != -1 )
    *((_DWORD *)this + 2 * a2 + a4 + 28) = a3;
}
