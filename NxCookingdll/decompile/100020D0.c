/*
 * func-name: sub_100020D0
 * func-address: 0x100020d0
 * callers: 0x10002e20
 * callees: 0x10001f90, 0x10001ff0
 */

bool __thiscall sub_100020D0(_DWORD *this, int a2)
{
  bool result; // al

  result = sub_10001FF0(this, a2);
  if ( result )
    return sub_10001F90(this, a2 + 36);
  return result;
}
