/*
 * func-name: ?set_token@Message@1Outpop@@QAEXI@Z
 * func-address: 0x100043b0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Message::Message::set_token(Outpop::Message::Message *this, unsigned int a2)
{
  if ( (*((_BYTE *)this + 97) & 0xF) != 0 )
    *(_DWORD *)((*((_BYTE *)this + 97) & 0xF) + *((_DWORD *)this + 25)) = a2;
}
