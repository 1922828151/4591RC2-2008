/*
 * func-name: sub_1001ED40
 * func-address: 0x1001ed40
 * callers: 0x1001fb90
 * callees: none
 */

_DWORD *__stdcall sub_1001ED40(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const struct Outpop::IONetwork::INET_Addr *a9,
        Outpop::Utility::Ref_Object **a10,
        Outpop::Utility::Ref_Object **a11)
{
  Outpop::Utility::Ref_Object *v11; // ecx
  bool v12; // zf
  Outpop::Utility::Ref_Object *v13; // ecx

  Outpop::Utility::Thread_Message::Thread_Message((Outpop::Utility::Thread_Message *)a1);
  a1[3] = a3;
  a1[2] = a2;
  a1[6] = a4;
  a1[4] = a6;
  a1[5] = a7;
  *a1 = &Outpop::Message::Channel_Connect_Failed_TM::`vftable';
  a1[7] = a5;
  a1[8] = a8;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 9), a9);
  v11 = *a10;
  v12 = *a10 == 0;
  a1[16] = *a10;
  if ( !v12 )
    Outpop::Utility::Ref_Object::addref(v11);
  v13 = *a11;
  v12 = *a11 == 0;
  a1[17] = *a11;
  if ( !v12 )
    Outpop::Utility::Ref_Object::addref(v13);
  return a1;
}
