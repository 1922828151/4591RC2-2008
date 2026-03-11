/*
 * func-name: sub_1009B110
 * func-address: 0x1009b110
 * callers: none
 * callees: 0x100de9e0, 0x101a2534
 */

Light *__stdcall sub_1009B110(struct World *a1)
{
  Light *v1; // eax

  v1 = (Light *)operator new(0x5B0u);
  if ( v1 )
    return Light::Light(v1, a1);
  else
    return 0;
}
