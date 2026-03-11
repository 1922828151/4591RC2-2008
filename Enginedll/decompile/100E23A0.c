/*
 * func-name: ?Instance@EngineLog@@SAPAV1@XZ
 * func-address: 0x100e23a0
 * callers: 0x10096550, 0x10097ea0, 0x100e2400, 0x100e2410, 0x100e2550
 * callees: 0x10016730, 0x101a26a0
 */

struct EngineLog *__cdecl EngineLog::Instance()
{
  if ( (dword_11240D48 & 1) == 0 )
  {
    dword_11240D48 |= 1u;
    EngineLog::EngineLog((EngineLog *)&unk_11240C50);
    atexit(sub_101B9010);
  }
  return (struct EngineLog *)&unk_11240C50;
}
