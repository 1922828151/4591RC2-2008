/*
 * func-name: ?get_read_ptr@Stream_Base@Utility@Outpop@@QAEPADXZ
 * func-address: 0x1000f260
 * callers: none
 * callees: none
 */

char *__thiscall Outpop::Utility::Stream_Base::get_read_ptr(Outpop::Utility::Stream_Base *this)
{
  return (char *)(*((_DWORD *)this + 4) + **((_DWORD **)this + 2));
}
