/*
 * func-name: sub_100DBDD0
 * func-address: 0x100dbdd0
 * callers: 0x10014e7a
 * callees: 0x1000efd4, 0x102c9d98
 */

Effect_Light *__stdcall sub_100DBDD0(struct World *a1)
{
  Effect_Light *v1; // eax

  v1 = (Effect_Light *)operator new(0x478u);
  if ( v1 )
    return Effect_Light::Effect_Light(v1, a1);
  else
    return 0;
}
