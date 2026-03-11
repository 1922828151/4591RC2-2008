/*
 * func-name: sub_101F0DC0
 * func-address: 0x101f0dc0
 * callers: 0x100156d1
 * callees: 0x10001181, 0x10002f31, 0x1000956b
 */

void __stdcall sub_101F0DC0(Outpop::Utility::Ref_Object *a1)
{
  Outpop::Utility::Ref_Object *v1; // esi
  Outpop::Message::Message *v2; // ecx
  bool v3; // bl
  Outpop::Message::Message *v4; // ecx
  Outpop::Utility::Ref_Object *v5; // [esp+14h] [ebp-18h] BYREF
  int v6; // [esp+18h] [ebp-14h] BYREF
  int v7; // [esp+1Ch] [ebp-10h] BYREF
  int v8; // [esp+28h] [ebp-4h]

  v1 = a1;
  v2 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &a1);
  v3 = Outpop::Message::Message::get_result(v2) != 0;
  v8 = -1;
  if ( a1 )
    Outpop::Utility::Ref_Object::release(a1);
  if ( !v3 )
  {
    v4 = *(Outpop::Message::Message **)Event::GetRequestMessage(v1, &a1);
    Outpop::Message::Message::reset_to_data(v4);
    v8 = -1;
    if ( a1 )
      Outpop::Utility::Ref_Object::release(a1);
    Event::GetRequestMessage(v1, &a1);
    v8 = 2;
    sub_10002F31((int)&v7);
    v8 = -1;
    if ( a1 )
      Outpop::Utility::Ref_Object::release(a1);
    Event::GetAckMessage(v1, &v5);
    v8 = 3;
    sub_10001181((int)&v6);
    v8 = -1;
    if ( v5 )
      Outpop::Utility::Ref_Object::release(v5);
    sub_1000956B(v7, v6);
  }
}
