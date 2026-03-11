/*
 * func-name: ?has_type@Message@1Outpop@@QAE_NXZ
 * func-address: 0x100042f0
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Message::Message::has_type(Outpop::Message::Message *this)
{
  return (**((_BYTE **)this + 25) & 0x80) == 0x80;
}
