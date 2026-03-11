/*
 * func-name: ?get_space@Stream_Base@Utility@Outpop@@QAEHXZ
 * func-address: 0x1000f240
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::Stream_Base::get_space(Outpop::Utility::Stream_Base *this)
{
  if ( *((_BYTE *)this + 20) )
    return *(_DWORD *)(*((_DWORD *)this + 2) + 4) - *((_DWORD *)this + 3);
  else
    return 0;
}
