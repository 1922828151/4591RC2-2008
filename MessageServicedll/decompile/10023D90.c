/*
 * func-name: sub_10023D90
 * func-address: 0x10023d90
 * callers: 0x10023fd0, 0x10024380
 * callees: none
 */

Outpop::Utility::Thread_Message *__stdcall sub_10023D90(
        Outpop::Utility::Thread_Message *a1,
        int a2,
        Outpop::Utility::Ref_Object **a3,
        Outpop::Utility::Ref_Object **a4,
        Outpop::Utility::Ref_Object **a5)
{
  Outpop::Utility::Ref_Object *v5; // ecx
  Outpop::Utility::Ref_Object *v6; // ecx
  bool v7; // zf
  Outpop::Utility::Ref_Object *v8; // ecx

  Outpop::Utility::Thread_Message::Thread_Message(a1);
  *(_DWORD *)a1 = &Outpop::Message::Dispatch_App_Ack_Handler::`vftable';
  *((_DWORD *)a1 + 2) = a2;
  v5 = *a3;
  *((_DWORD *)a1 + 3) = *a3;
  if ( v5 )
    Outpop::Utility::Ref_Object::addref(v5);
  v6 = *a4;
  v7 = *a4 == 0;
  *((_DWORD *)a1 + 4) = *a4;
  if ( !v7 )
    Outpop::Utility::Ref_Object::addref(v6);
  v8 = *a5;
  v7 = *a5 == 0;
  *((_DWORD *)a1 + 5) = *a5;
  if ( !v7 )
    Outpop::Utility::Ref_Object::addref(v8);
  return a1;
}
