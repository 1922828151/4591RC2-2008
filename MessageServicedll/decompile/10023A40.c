/*
 * func-name: sub_10023A40
 * func-address: 0x10023a40
 * callers: none
 * callees: 0x10025e70
 */

void __thiscall sub_10023A40(_DWORD *this, int a2, int a3, int a4, int a5)
{
  struct Outpop::Message::Request_Ack::SCacheAsynchRequest *v6; // edi
  _DWORD *v7; // esi
  struct Outpop::Message::Request_Ack::SCacheAsynchRequest *v8; // ebx

  v6 = (struct Outpop::Message::Request_Ack::SCacheAsynchRequest *)this[9];
  v7 = this + 8;
  if ( (unsigned int)v6 > this[10] )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v8 = (struct Outpop::Message::Request_Ack::SCacheAsynchRequest *)v7[2];
    if ( v7[1] > (unsigned int)v8 )
      invalid_parameter_noinfo();
    if ( v6 == v8 )
      break;
    if ( (unsigned int)v6 >= v7[2] )
      invalid_parameter_noinfo();
    Outpop::Message::Request_Ack::process_post_request(*(Outpop::Message::Request_Ack **)(this[7] + 44), v6);
    if ( (unsigned int)v6 >= v7[2] )
      invalid_parameter_noinfo();
    v6 = (struct Outpop::Message::Request_Ack::SCacheAsynchRequest *)((char *)v6 + 12);
  }
}
