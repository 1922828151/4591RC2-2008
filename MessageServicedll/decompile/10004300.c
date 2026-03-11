/*
 * func-name: ?get_multi_type@Message@1Outpop@@QAE?AW4EMultiType@12@XZ
 * func-address: 0x10004300
 * callers: 0x10019b50, 0x10019f50
 * callees: none
 */

int __thiscall Outpop::Message::Message::get_multi_type(_BYTE **this)
{
  int v1; // eax

  v1 = *this[25] & 0x60;
  if ( v1 == 32 )
    return 1;
  else
    return v1 != 64 ? 0 : 2;
}
