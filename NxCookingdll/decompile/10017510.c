/*
 * func-name: sub_10017510
 * func-address: 0x10017510
 * callers: none
 * callees: none
 */

int __thiscall sub_10017510(_DWORD **this)
{
  if ( this[4] == (_DWORD *)-32 )
    return 0;
  else
    return (*(int (__thiscall **)(_DWORD *))(*this[4] + 16))(this[4]);
}
