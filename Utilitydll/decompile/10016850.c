/*
 * func-name: ?write_file@Logger@Utility@Outpop@@QAEXPA_W@Z
 * func-address: 0x10016850
 * callers: 0x10002f40, 0x10003e80, 0x10004830, 0x1000bb00, 0x1000bc60, 0x1000d0e0, 0x10016fc0, 0x10018720
 * callees: none
 */

void __thiscall Outpop::Utility::Logger::write_file(Outpop::Utility::Logger *this, wchar_t *lpBuffer)
{
  wchar_t *v2; // eax
  wchar_t *v3; // edi
  void *v5; // [esp-14h] [ebp-1Ch]
  wchar_t *v6; // [esp-10h] [ebp-18h]

  v2 = lpBuffer;
  v3 = lpBuffer + 1;
  while ( *v2++ )
    ;
  v6 = lpBuffer;
  v5 = (void *)*((_DWORD *)this + 11);
  lpBuffer = 0;
  WriteFile(v5, v6, 2 * (v2 - v3), (LPDWORD)&lpBuffer, 0);
}
