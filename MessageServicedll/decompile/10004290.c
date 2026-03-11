/*
 * func-name: ?is_trans@Message@1Outpop@@QAE_NXZ
 * func-address: 0x10004290
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Message::Message::is_trans(Outpop::Message::Message *this)
{
  return (**((_BYTE **)this + 25) & 2) == 2;
}
