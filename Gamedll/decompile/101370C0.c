/*
 * func-name: sub_101370C0
 * func-address: 0x101370c0
 * callers: 0x1000582b
 * callees: 0x10012990, 0x102c9d98
 */

HookEsbEnergy *__stdcall sub_101370C0(struct World *a1)
{
  HookEsbEnergy *v1; // eax

  v1 = (HookEsbEnergy *)operator new(0x4BCu);
  if ( v1 )
    return HookEsbEnergy::HookEsbEnergy(v1, a1);
  else
    return 0;
}
