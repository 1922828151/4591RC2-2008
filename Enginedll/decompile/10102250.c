/*
 * func-name: sub_10102250
 * func-address: 0x10102250
 * callers: 0x101396e0
 * callees: 0x10102180
 */

char __thiscall sub_10102250(int *this, Camera *a2)
{
  int *v2; // eax
  int v3; // ecx

  v2 = this;
  v3 = *this;
  if ( v3 )
    LOBYTE(v2) = sub_10102180(v3, a2, v2[2]);
  return (char)v2;
}
