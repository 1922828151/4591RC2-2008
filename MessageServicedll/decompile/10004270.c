/*
 * func-name: ?get_token@Message@1Outpop@@QAEIXZ
 * func-address: 0x10004270
 * callers: 0x100119c0
 * callees: none
 */

unsigned int __thiscall Outpop::Message::Message::get_token(Outpop::Message::Message *this)
{
  if ( (*((_BYTE *)this + 97) & 0xF) != 0 )
    return *(_DWORD *)((*((_BYTE *)this + 97) & 0xF) + *((_DWORD *)this + 25));
  else
    return -1;
}
