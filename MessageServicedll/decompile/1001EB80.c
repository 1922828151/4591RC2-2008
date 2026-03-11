/*
 * func-name: sub_1001EB80
 * func-address: 0x1001eb80
 * callers: 0x1001fa50
 * callees: none
 */

_DWORD *__stdcall sub_1001EB80(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const struct Outpop::IONetwork::INET_Addr *a9,
        const struct Outpop::IONetwork::INET_Addr *a10,
        int a11,
        int a12,
        Outpop::Utility::Ref_Object **a13)
{
  Outpop::Utility::Ref_Object *v13; // ecx
  bool v14; // zf

  Outpop::Utility::Thread_Message::Thread_Message((Outpop::Utility::Thread_Message *)a1);
  a1[3] = a3;
  a1[2] = a2;
  a1[6] = a6;
  a1[4] = a4;
  a1[5] = a5;
  *a1 = &Outpop::Message::Channel_Error_TM::`vftable';
  a1[7] = a7;
  a1[8] = a8;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 9), a10);
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 16), a9);
  a1[23] = a11;
  a1[24] = a12;
  v13 = *a13;
  v14 = *a13 == 0;
  a1[25] = *a13;
  if ( !v14 )
    Outpop::Utility::Ref_Object::addref(v13);
  return a1;
}
