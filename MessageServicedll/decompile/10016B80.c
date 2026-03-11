/*
 * func-name: sub_10016B80
 * func-address: 0x10016b80
 * callers: 0x10006c90
 * callees: 0x1000c320, 0x10026f30, 0x10026fb0
 */

_DWORD *__userpurge sub_10016B80@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        int a3@<ebx>,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  *a4 = &Outpop::Message::Message_Handler::`vftable';
  *a4 = &Outpop::Message::Defalut_Type_Handler::`vftable';
  a4[1] = a2;
  a4[2] = a5;
  a4[3] = Outpop::Message::Request_Ack::create_request_handler(a1, a8, a3);
  a4[4] = Outpop::Message::Request_Ack::create_asynch_ack_handler(a6, a8, a3);
  a4[5] = sub_1000C320(a7, a8, a3);
  a4[6] = a8;
  a4[7] = a3;
  return a4;
}
