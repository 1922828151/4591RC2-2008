/*
 * func-name: sub_1008AC30
 * func-address: 0x1008ac30
 * callers: 0x10001339
 * callees: 0x10009c2d, 0x102c9d98
 */

Effect_LightDizzy *__stdcall sub_1008AC30(struct World *a1)
{
  Effect_LightDizzy *v1; // eax

  v1 = (Effect_LightDizzy *)operator new(0x498u);
  if ( v1 )
    return Effect_LightDizzy::Effect_LightDizzy(v1, a1);
  else
    return 0;
}
