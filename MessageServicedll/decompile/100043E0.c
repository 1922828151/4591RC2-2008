/*
 * func-name: ?get_result@Message@1Outpop@@QAEGXZ
 * func-address: 0x100043e0
 * callers: none
 * callees: none
 */

unsigned __int16 __thiscall Outpop::Message::Message::get_result(Outpop::Message::Message *this)
{
  if ( ((*((_BYTE *)this + 96) >> 4) & 0xF) != 0 )
    return *(_WORD *)(((*((_BYTE *)this + 96) >> 4) & 0xF) + *((_DWORD *)this + 25));
  else
    return -1;
}
