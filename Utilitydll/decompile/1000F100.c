/*
 * func-name: ?reset_all@Stream_Base@Utility@Outpop@@QAEXXZ
 * func-address: 0x1000f100
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Stream_Base::reset_all(Outpop::Utility::Stream_Base *this)
{
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
}
