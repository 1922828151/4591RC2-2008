/*
 * func-name: sub_1002B0E0
 * func-address: 0x1002b0e0
 * callers: 0x10012f3f
 * callees: none
 */

int sub_1002B0E0()
{
  if ( SkyController::Instance )
    return *((_DWORD *)SkyController::Instance + 265);
  else
    return -1;
}
