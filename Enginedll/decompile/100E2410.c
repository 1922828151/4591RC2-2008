/*
 * func-name: ?LogPushPrefix@@YAXPBD@Z
 * func-address: 0x100e2410
 * callers: 0x10097ea0
 * callees: 0x100e23a0
 */

void __cdecl LogPushPrefix(const char *a1)
{
  struct EngineLog *v1; // eax
  struct EngineLog *v2; // esi

  v1 = EngineLog::Instance();
  v2 = v1;
  if ( *((int *)v1 + 61) < 19 )
  {
    std::string::operator+=((char *)v1 + 136, a1);
    *((_DWORD *)v2 + (*((_DWORD *)v2 + 61))++ + 41) = strlen(a1);
  }
}
