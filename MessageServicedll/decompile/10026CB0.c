/*
 * func-name: ?next_token@Request_Ack@Message@Outpop@@QAEIXZ
 * func-address: 0x10026cb0
 * callers: none
 * callees: none
 */

LONG __thiscall Outpop::Message::Request_Ack::next_token(volatile LONG *this)
{
  LONG result; // eax

  result = InterlockedIncrement(this + 34);
  if ( result == -1 )
    return 1;
  return result;
}
