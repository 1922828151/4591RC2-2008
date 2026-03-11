/*
 * func-name: sub_1002AF70
 * func-address: 0x1002af70
 * callers: 0x10010c9e
 * callees: none
 */

double sub_1002AF70()
{
  if ( SkyController::Instance )
    return SkyController::GetDayTimeMinutes(SkyController::Instance);
  else
    return 0.0;
}
