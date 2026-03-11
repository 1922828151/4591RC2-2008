/*
 * func-name: ??1Dispatch_Thread@Utility@Outpop@@UAE@XZ
 * func-address: 0x1000a880
 * callers: 0x10003d30, 0x10003d90, 0x1000ada0, 0x1000ae20, 0x10016c00, 0x10016e80
 * callees: 0x10007910, 0x1000ce30, 0x10018cf2
 */

void __thiscall Outpop::Utility::Dispatch_Thread::~Dispatch_Thread(Outpop::Utility::Dispatch_Thread *this)
{
  *(_DWORD *)this = &Outpop::Utility::Dispatch_Thread::`vftable';
  CloseHandle(*((HANDLE *)this + 36));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 116));
  CloseHandle(*((HANDLE *)this + 35));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  sub_10007910((int)this + 76);
  operator delete(*((void **)this + 20));
  *((_DWORD *)this + 20) = 0;
  Outpop::Utility::Task::~Task(this);
}
