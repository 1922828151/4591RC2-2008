/*
 * func-name: sub_1002B0C0
 * func-address: 0x1002b0c0
 * callers: 0x10001f55
 * callees: none
 */

struct SkyController *__cdecl sub_1002B0C0(int a1)
{
  struct SkyController *result; // eax

  result = SkyController::Instance;
  if ( SkyController::Instance )
  {
    result = SkyController::Instance;
    *((_DWORD *)SkyController::Instance + 265) = a1;
  }
  return result;
}
