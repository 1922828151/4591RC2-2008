/*
 * func-name: ??1Event_Base@Utility@Outpop@@QAE@XZ
 * func-address: 0x1000bdc0
 * callers: 0x10003e80, 0x1000bf30, 0x1000bff0
 * callees: none
 */

void __thiscall Outpop::Utility::Event_Base::~Event_Base(Outpop::Utility::Event_Base *this)
{
  void *v1; // [esp-4h] [ebp-4h]

  if ( !*((_DWORD *)this + 1) )
  {
    v1 = *(void **)this;
    *((_DWORD *)this + 1) = 1;
    CloseHandle(v1);
  }
}
