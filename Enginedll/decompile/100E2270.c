/*
 * func-name: ?Init@EngineLog@@QAEXPAD@Z
 * func-address: 0x100e2270
 * callers: 0x10097ea0
 * callees: none
 */

void __thiscall EngineLog::Init(EngineLog *this, char *a2)
{
  *((_DWORD *)this + 61) = 0;
  std::ofstream::open(a2, 2, 64);
}
