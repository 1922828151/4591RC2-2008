/*
 * func-name: sub_100D30A0
 * func-address: 0x100d30a0
 * callers: 0x1000fe5c
 * callees: none
 */

int __thiscall sub_100D30A0(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = this[39];
  if ( v3 && a2 < (this[40] - v3) >> 2 )
    return *(_DWORD *)(this[39] + 4 * a2);
  else
    return 0;
}
