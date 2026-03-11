/*
 * func-name: sub_10032C90
 * func-address: 0x10032c90
 * callers: 0x10014385
 * callees: none
 */

int __thiscall sub_10032C90(_DWORD **this)
{
  int result; // eax

  if ( this[1] )
    return (*(int (__thiscall **)(_DWORD *))(*this[1] + 16))(this[1]);
  return result;
}
