/*
 * func-name: ??1Task@Utility@Outpop@@UAE@XZ
 * func-address: 0x1000ce30
 * callers: 0x10002910, 0x100036a0, 0x10003c80, 0x10003e80, 0x10004030, 0x1000a7c0, 0x1000a880, 0x10017c30, 0x10017cb0, 0x10018660, 0x100186d0
 * callees: 0x10005930, 0x100096d0, 0x10018cf2
 */

void __thiscall Outpop::Utility::Task::~Task(Outpop::Utility::Task *this)
{
  void *v2; // edi

  *(_DWORD *)this = &Outpop::Utility::Task::`vftable';
  v2 = (void *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    Outpop::Utility::Barrier_T::~Barrier_T(*((LPCRITICAL_SECTION *)this + 2));
    operator delete(v2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 52));
  sub_10005930((int)this + 12);
}
