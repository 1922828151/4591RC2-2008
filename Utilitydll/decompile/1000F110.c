/*
 * func-name: ?reset_read_pos@Stream_Base@Utility@Outpop@@QAEXXZ
 * func-address: 0x1000f110
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Stream_Base::reset_read_pos(Outpop::Utility::Stream_Base *this)
{
  *((_DWORD *)this + 4) = 0;
}
