/*
 * func-name: sub_101E1F60
 * func-address: 0x101e1f60
 * callers: 0x10001f6e
 * callees: none
 */

int __thiscall sub_101E1F60(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = this[68];
  if ( v3 && a2 < (this[69] - v3) >> 2 )
    return *(_DWORD *)(this[68] + 4 * a2);
  else
    return 0;
}
