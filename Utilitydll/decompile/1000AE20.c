/*
 * func-name: ??1Dispatch_Thread_2@Utility@Outpop@@UAE@XZ
 * func-address: 0x1000ae20
 * callers: 0x10003e20
 * callees: 0x10008a40, 0x1000a880, 0x10018cf2
 */

void __thiscall Outpop::Utility::Dispatch_Thread_2::~Dispatch_Thread_2(Outpop::Utility::Dispatch_Thread_2 *this)
{
  LONG v2; // eax
  LONG v3; // eax

  *(_DWORD *)this = &Outpop::Utility::Dispatch_Thread_2::`vftable';
  v2 = *((_DWORD *)this + 46);
  if ( v2 )
  {
    sub_10008A40(v2, *((int **)this + 47));
    operator delete(*((void **)this + 46));
  }
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  v3 = *((_DWORD *)this + 42);
  if ( v3 )
  {
    sub_10008A40(v3, *((int **)this + 43));
    operator delete(*((void **)this + 42));
  }
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  Outpop::Utility::Dispatch_Thread::~Dispatch_Thread(this);
}
