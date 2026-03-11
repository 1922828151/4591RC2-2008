/*
 * func-name: sub_101374B0
 * func-address: 0x101374b0
 * callers: 0x100018e3
 * callees: 0x1000308f, 0x102c9d98
 */

HookAlarmArea *__stdcall sub_101374B0(struct World *a1)
{
  HookAlarmArea *v1; // eax

  v1 = (HookAlarmArea *)operator new(0x4B0u);
  if ( v1 )
    return HookAlarmArea::HookAlarmArea(v1, a1);
  else
    return 0;
}
