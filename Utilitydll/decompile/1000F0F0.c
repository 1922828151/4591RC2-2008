/*
 * func-name: ?move_write_pos@Stream_Base@Utility@Outpop@@QAEXH@Z
 * func-address: 0x1000f0f0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Stream_Base::move_write_pos(Outpop::Utility::Stream_Base *this, int a2)
{
  *((_DWORD *)this + 3) += a2;
}
