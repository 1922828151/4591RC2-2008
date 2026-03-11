/*
 * func-name: ?get_message_type@Message@1Outpop@@QAE?AW4EMessageType@12@XZ
 * func-address: 0x10004330
 * callers: 0x100119c0
 * callees: none
 */

int __thiscall Outpop::Message::Message::get_message_type(_BYTE **this)
{
  char v1; // al

  v1 = *this[25];
  if ( (v1 & 4) != 0 )
    return 1;
  else
    return (v1 & 8) != 8 ? 0 : 2;
}
