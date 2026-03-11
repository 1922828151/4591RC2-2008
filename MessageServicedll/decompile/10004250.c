/*
 * func-name: ?get_type@Message@1Outpop@@QAEGXZ
 * func-address: 0x10004250
 * callers: 0x100119c0, 0x10016ca0, 0x10019b50, 0x10019f50, 0x10028370
 * callees: none
 */

unsigned __int16 __thiscall Outpop::Message::Message::get_type(Outpop::Message::Message *this)
{
  unsigned __int16 v1; // ax

  v1 = *((_WORD *)this + 48) >> 12;
  if ( v1 )
    return *(_WORD *)(v1 + *((_DWORD *)this + 25));
  else
    return -1;
}
