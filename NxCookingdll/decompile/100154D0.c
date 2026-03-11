/*
 * func-name: sub_100154D0
 * func-address: 0x100154d0
 * callers: 0x1002e590
 * callees: none
 */

char __thiscall sub_100154D0(_DWORD *this, int a2, int a3)
{
  if ( *this == a2 )
  {
    *this = a3;
    return 1;
  }
  else if ( this[1] == a2 )
  {
    this[1] = a3;
    return 1;
  }
  else if ( this[2] == a2 )
  {
    this[2] = a3;
    return 1;
  }
  else
  {
    return 0;
  }
}
