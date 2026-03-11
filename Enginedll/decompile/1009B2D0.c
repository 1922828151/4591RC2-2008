/*
 * func-name: sub_1009B2D0
 * func-address: 0x1009b2d0
 * callers: none
 * callees: 0x1012ffd0, 0x101a2534
 */

SkyController *__stdcall sub_1009B2D0(struct World *a1)
{
  SkyController *v1; // eax

  v1 = (SkyController *)operator new(0x1148u);
  if ( v1 )
    return SkyController::SkyController(v1, a1);
  else
    return 0;
}
