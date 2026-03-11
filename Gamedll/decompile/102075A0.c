/*
 * func-name: sub_102075A0
 * func-address: 0x102075a0
 * callers: 0x10010f0f
 * callees: none
 */

int __thiscall sub_102075A0(_DWORD **this)
{
  int result; // eax

  if ( this[74] )
    return (*(int (__thiscall **)(_DWORD *, _DWORD **))(*this[74] + 8))(this[74], this);
  return result;
}
