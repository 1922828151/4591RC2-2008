/*
 * func-name: ?get_readable@Stream_Base@Utility@Outpop@@QAEHXZ
 * func-address: 0x1000f130
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::Stream_Base::get_readable(Outpop::Utility::Stream_Base *this)
{
  return *((_DWORD *)this + 3) - *((_DWORD *)this + 4);
}
