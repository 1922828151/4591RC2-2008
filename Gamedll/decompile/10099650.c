/*
 * func-name: ?StopSpawningNow@TraceLineSystem@@UAEXXZ_0
 * func-address: 0x10099650
 * callers: 0x100127ce
 * callees: none
 */

void __thiscall TraceLineSystem::StopSpawningNow(TraceLineSystem *this)
{
  *((_BYTE *)this + 200) = 1;
}
