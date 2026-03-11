/*
 * func-name: _DllMain@12
 * func-address: 0x10001ad0
 * callers: 0x10019b7a
 * callees: none
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  BOOL result; // eax

  hInstance = hinstDLL;
  result = 1;
  if ( fdwReason == 1 )
    byte_100384B9 = 1;
  return result;
}
