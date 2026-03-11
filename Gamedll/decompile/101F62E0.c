/*
 * func-name: ?CreateMessage@GroupManager@GameClient@@IAE?AV?$Smart_Ptr@VMessage@1Outpop@@@Utility@Outpop@@XZ_0
 * func-address: 0x101f62e0
 * callers: 0x100020c2
 * callees: none
 */

Outpop::Message::Message **__stdcall GameClient::GroupManager::CreateMessage(Outpop::Message::Message **a1)
{
  Outpop::Utility::Ref_Object *v1; // eax
  Outpop::Utility::Ref_Object *v2; // esi
  Outpop::Utility::Ref_Object *v3; // ecx

  v1 = (Outpop::Utility::Ref_Object *)Outpop::Message::Message::operator new(0x6Cu);
  v2 = v1;
  if ( v1 )
  {
    Outpop::Message::Message::Message(v1, 1, 1, 0, 0, 512);
    *(_DWORD *)v2 = &Outpop::Message::Message::`vftable';
    v3 = v2;
  }
  else
  {
    v3 = 0;
  }
  *a1 = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  Outpop::Message::Message::set_protocol_catalog(*a1, 0x15u);
  return a1;
}
