/*
 * func-name: ?set_result@Message@1Outpop@@QAEXG@Z
 * func-address: 0x10004400
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Message::Message::set_result(Outpop::Message::Message *this, unsigned __int16 a2)
{
  if ( ((*((_BYTE *)this + 96) >> 4) & 0xF) != 0 )
    *(_WORD *)(((*((_BYTE *)this + 96) >> 4) & 0xF) + *((_DWORD *)this + 25)) = a2;
}
