/*
 * func-name: sub_100967E0
 * func-address: 0x100967e0
 * callers: 0x1000eff2
 * callees: 0x10013e12, 0x102c9d98
 */

Effect_Precipitation *__stdcall sub_100967E0(struct World *a1)
{
  Effect_Precipitation *v1; // eax

  v1 = (Effect_Precipitation *)operator new(0x588u);
  if ( v1 )
    return Effect_Precipitation::Effect_Precipitation(v1, a1);
  else
    return 0;
}
