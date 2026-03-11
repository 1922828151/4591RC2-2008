/*
 * func-name: sub_1002B0A0
 * func-address: 0x1002b0a0
 * callers: 0x1000dae9
 * callees: none
 */

double __cdecl sub_1002B0A0(int a1)
{
  if ( SkyController::Instance )
    return *((float *)SkyController::Instance + a1 + 266);
  else
    return 0.0;
}
