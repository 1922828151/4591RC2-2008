/*
 * func-name: sub_1007FF60
 * func-address: 0x1007ff60
 * callers: 0x10010415
 * callees: 0x10006cad, 0x102c9d98
 */

Effect_DynamicLasers *__stdcall sub_1007FF60(struct World *a1)
{
  Effect_DynamicLasers *v1; // eax

  v1 = (Effect_DynamicLasers *)operator new(0x498u);
  if ( v1 )
    return Effect_DynamicLasers::Effect_DynamicLasers(v1, a1);
  else
    return 0;
}
