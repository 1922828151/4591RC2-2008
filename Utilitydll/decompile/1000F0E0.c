/*
 * func-name: ?move_read_pos@Stream_Base@Utility@Outpop@@QAEXH@Z
 * func-address: 0x1000f0e0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Stream_Base::move_read_pos(Outpop::Utility::Stream_Base *this, int a2)
{
  *((_DWORD *)this + 4) += a2;
}
