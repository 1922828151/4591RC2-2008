/*
 * func-name: sub_1002B040
 * func-address: 0x1002b040
 * callers: 0x10007685
 * callees: none
 */

int sub_1002B040()
{
  if ( SkyController::Instance )
    return *((_DWORD *)SkyController::Instance + 264);
  else
    return -1;
}
