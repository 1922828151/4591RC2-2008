/*
 * func-name: sub_10015530
 * func-address: 0x10015530
 * callers: 0x1000f030
 * callees: none
 */

char __thiscall sub_10015530(int *this, int a2, int a3)
{
  int v3; // eax
  int v5; // eax

  v3 = *this;
  if ( *this == a2 && this[1] == a3 || v3 == a3 && this[1] == a2 )
    return 0;
  if ( v3 == a2 && this[2] == a3 || v3 == a3 && this[2] == a2 )
    return 1;
  v5 = this[1];
  if ( v5 == a2 && this[2] == a3 || v5 == a3 && this[2] == a2 )
    return 2;
  else
    return -1;
}
