/*
 * func-name: ?LogPopPrefix@@YAXXZ
 * func-address: 0x100e2400
 * callers: 0x10097ea0
 * callees: 0x100e23a0
 */

void __cdecl LogPopPrefix()
{
  EngineLog *v0; // eax

  v0 = EngineLog::Instance();
  EngineLog::PopPrefix(v0);
}
