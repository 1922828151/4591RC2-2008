/*
 * func-name: ??0FuncTimer@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10095ca0
 * callers: 0x10174aa0
 * callees: 0x1007e380, 0x1007e670
 */

void *__thiscall FuncTimer::FuncTimer(void *this, int a2)
{
  LARGE_INTEGER *v3; // eax

  std::string::string(this, a2);
  v3 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v3);
  return this;
}
