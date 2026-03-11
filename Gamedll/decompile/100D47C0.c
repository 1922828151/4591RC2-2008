/*
 * func-name: sub_100D47C0
 * func-address: 0x100d47c0
 * callers: 0x1000c554
 * callees: 0x100129ea
 */

int __thiscall sub_100D47C0(int this, int a2)
{
  int v2; // esi
  int v3; // ecx

  v2 = this + 152;
  sub_100129EA((void *)(this + 152), (int)&a2);
  v3 = *(_DWORD *)(v2 + 4);
  if ( v3 )
    return ((*(_DWORD *)(v2 + 8) - v3) >> 2) - 1;
  else
    return -1;
}
