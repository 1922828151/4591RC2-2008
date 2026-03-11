/*
 * func-name: ?get_multi_id@Message@1Outpop@@QAEIXZ
 * func-address: 0x100042a0
 * callers: 0x100119c0
 * callees: none
 */

unsigned int __thiscall Outpop::Message::Message::get_multi_id(Outpop::Message::Message *this)
{
  if ( (*((_BYTE *)this + 96) & 0xF) != 0 )
    return *(_DWORD *)((*((_BYTE *)this + 96) & 0xF) + *((_DWORD *)this + 25));
  else
    return -1;
}
