/*
 * func-name: ?get_write_ptr@Stream_Base@Utility@Outpop@@QAEPADXZ
 * func-address: 0x1000f270
 * callers: none
 * callees: none
 */

char *__thiscall Outpop::Utility::Stream_Base::get_write_ptr(Outpop::Utility::Stream_Base *this)
{
  return (char *)(*((_DWORD *)this + 3) + **((_DWORD **)this + 2));
}
