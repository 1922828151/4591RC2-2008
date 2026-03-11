/*
 * func-name: ?Reset@Profiler@@QAEXXZ
 * func-address: 0x10116f50
 * callers: 0x10001c00, 0x1013e2e0
 * callees: 0x101a251c
 */

void __thiscall Profiler::Reset(Profiler *this)
{
  memset(this, 0, 0xB0u);
  *((_DWORD *)this + 16) = 1;
}
