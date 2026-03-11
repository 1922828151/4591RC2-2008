/*
 * func-name: ?make_id@Message@Outpop@@YAIEG@Z
 * func-address: 0x10004cd0
 * callers: none
 * callees: none
 */

int __cdecl Outpop::Message::make_id(Outpop::Message *this, unsigned __int16 a2)
{
  return a2 + ((unsigned __int8)this << 16);
}
