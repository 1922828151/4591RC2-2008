/*
 * func-name: sub_100814B0
 * func-address: 0x100814b0
 * callers: 0x1001960a
 * callees: 0x10010a5a, 0x102c9d98
 */

Effect_Laser *__stdcall sub_100814B0(struct World *a1)
{
  Effect_Laser *v1; // eax

  v1 = (Effect_Laser *)operator new(0x488u);
  if ( v1 )
    return Effect_Laser::Effect_Laser(v1, a1);
  else
    return 0;
}
