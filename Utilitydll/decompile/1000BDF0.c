/*
 * func-name: ?remove@Event_Base@Utility@Outpop@@QAEHXZ
 * func-address: 0x1000bdf0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::Event_Base::remove(Outpop::Utility::Event_Base *this)
{
  int result; // eax
  void *v2; // [esp-4h] [ebp-4h]

  result = -1;
  if ( !*((_DWORD *)this + 1) )
  {
    v2 = *(void **)this;
    *((_DWORD *)this + 1) = 1;
    return CloseHandle(v2) - 1;
  }
  return result;
}
