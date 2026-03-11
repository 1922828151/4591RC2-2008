/*
 * func-name: sub_10016A70
 * func-address: 0x10016a70
 * callers: 0x10016ca0
 * callees: none
 */

Outpop::Utility::Thread_Message *__stdcall sub_10016A70(
        Outpop::Utility::Thread_Message *a1,
        int a2,
        Outpop::Utility::Ref_Object **a3)
{
  Outpop::Utility::Ref_Object *v3; // ecx

  Outpop::Utility::Thread_Message::Thread_Message(a1);
  *(_DWORD *)a1 = &Outpop::Message::Disptch_Simple_Message::`vftable';
  *((_DWORD *)a1 + 2) = a2;
  v3 = *a3;
  *((_DWORD *)a1 + 3) = *a3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  return a1;
}
