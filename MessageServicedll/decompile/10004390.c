/*
 * func-name: ?set_multi_id@Message@1Outpop@@QAEXI@Z
 * func-address: 0x10004390
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Message::Message::set_multi_id(Outpop::Message::Message *this, unsigned int a2)
{
  if ( (*((_BYTE *)this + 96) & 0xF) != 0 )
    *(_DWORD *)((*((_BYTE *)this + 96) & 0xF) + *((_DWORD *)this + 25)) = a2;
}
