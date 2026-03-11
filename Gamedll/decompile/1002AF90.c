/*
 * func-name: sub_1002AF90
 * func-address: 0x1002af90
 * callers: 0x100115ea
 * callees: none
 */

void __cdecl sub_1002AF90(int a1, float a2, float a3)
{
  if ( SkyController::Instance )
    SkyController::FadeSky(SkyController::Instance, a1, a2, a3);
}
