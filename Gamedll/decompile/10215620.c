/*
 * func-name: sub_10215620
 * func-address: 0x10215620
 * callers: 0x10001ccb
 * callees: 0x10001181, 0x10002f31, 0x10009e6c, 0x1001811a
 */

int __stdcall sub_10215620(Outpop::Utility::Ref_Object *a1)
{
  Outpop::Utility::Ref_Object *v1; // esi
  Outpop::Message::Message *v2; // ecx
  Outpop::Utility::Ref_Object *v4; // [esp+Ch] [ebp-18h] BYREF
  wchar_t Format[2]; // [esp+10h] [ebp-14h] BYREF
  int v6; // [esp+14h] [ebp-10h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  v1 = a1;
  v2 = *(Outpop::Message::Message **)Event::GetRequestMessage(a1, &a1);
  Outpop::Message::Message::reset_to_data(v2);
  v7 = -1;
  if ( a1 )
    Outpop::Utility::Ref_Object::release(a1);
  Event::GetRequestMessage(v1, &a1);
  v7 = 1;
  sub_10002F31((int)&v6);
  v7 = -1;
  if ( a1 )
    Outpop::Utility::Ref_Object::release(a1);
  Event::GetAckMessage(v1, &v4);
  v7 = 2;
  sub_10001181((int)Format);
  v7 = -1;
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  sub_10009E6C();
  return sub_1001811A(v6, Format[0]);
}
