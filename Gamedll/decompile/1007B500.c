/*
 * func-name: ?GetMaxNodes@DynamicLasers@@QAEIXZ_0
 * func-address: 0x1007b500
 * callers: 0x10014fe7
 * callees: none
 */

int __thiscall DynamicLasers::GetMaxNodes(DynamicLasers *this)
{
  int result; // eax

  result = *((_DWORD *)this + 65);
  if ( result )
    return (*((_DWORD *)this + 66) - result) / 48;
  return result;
}
