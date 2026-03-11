/*
 * func-name: sub_1002B060
 * func-address: 0x1002b060
 * callers: 0x10012e59
 * callees: none
 */

struct SkyController *__cdecl sub_1002B060(int a1)
{
  struct SkyController *result; // eax

  result = SkyController::Instance;
  if ( SkyController::Instance )
  {
    result = SkyController::Instance;
    *((_DWORD *)SkyController::Instance + 264) = a1;
  }
  return result;
}
