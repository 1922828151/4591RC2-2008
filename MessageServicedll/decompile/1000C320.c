/*
 * func-name: sub_1000C320
 * func-address: 0x1000c320
 * callers: 0x1000d080, 0x10016b80
 * callees: 0x1000dc30, 0x1001a3e0, 0x100295c0
 */

int __stdcall sub_1000C320(int a1, int a2, int a3)
{
  void *v3; // eax
  int v4; // esi

  v3 = operator new(0x14u);
  v4 = 0;
  if ( v3 )
    v4 = sub_1001A3E0(v3, a2, a3);
  sub_1000DC30();
  return v4;
}
