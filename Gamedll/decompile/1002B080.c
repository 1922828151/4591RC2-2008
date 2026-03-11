/*
 * func-name: sub_1002B080
 * func-address: 0x1002b080
 * callers: 0x10003251
 * callees: none
 */

void __cdecl sub_1002B080(float a1)
{
  if ( SkyController::Instance )
    SkyController::SetDayTime(SkyController::Instance, a1);
}
