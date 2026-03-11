/*
 * func-name: sub_100E8AD0
 * func-address: 0x100e8ad0
 * callers: 0x10014a97
 * callees: 0x100025ea, 0x102c9d98
 */

SampleBullet *__stdcall sub_100E8AD0(struct World *a1)
{
  SampleBullet *v1; // eax

  v1 = (SampleBullet *)operator new(0x424u);
  if ( v1 )
    return SampleBullet::SampleBullet(v1, a1);
  else
    return 0;
}
