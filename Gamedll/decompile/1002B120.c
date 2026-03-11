/*
 * func-name: sub_1002B120
 * func-address: 0x1002b120
 * callers: 0x10018cd7
 * callees: none
 */

double sub_1002B120()
{
  if ( SkyController::Instance )
    return SkyController::GetMinutesPerGameSecond(SkyController::Instance);
  else
    return 0.0;
}
