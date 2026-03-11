/*
 * func-name: ?set_trans_time@Message@1Outpop@@QAEXI@Z
 * func-address: 0x10004430
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Message::Message::set_trans_time(Outpop::Message::Message *this, unsigned int a2)
{
  unsigned int v2; // eax

  v2 = a2;
  if ( a2 < 0x1F4 )
    v2 = 500;
  *((_DWORD *)this + 18) = v2;
}
