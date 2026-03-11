/*
 * func-name: ?change_connector_first_message@Message_Facade@Message@Outpop@@SAXHAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x1000db90
 * callers: none
 * callees: 0x10014f30
 */

void __cdecl Outpop::Message::Message_Facade::change_connector_first_message(int a1, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object **v3; // esi
  Outpop::Utility::Ref_Object *v4; // ecx
  bool v5; // zf
  Outpop::Utility::Ref_Object *v6; // [esp+Ch] [ebp-10h] BYREF
  int v7; // [esp+18h] [ebp-4h]

  Outpop::Message::Connector_Manager::find_connector(&v6, a1);
  v7 = 0;
  if ( v6 )
  {
    v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)v6 + 26);
    v3 = (Outpop::Utility::Ref_Object **)((char *)v6 + 104);
    if ( v2 )
      Outpop::Utility::Ref_Object::release(v2);
    v4 = *a2;
    v5 = *a2 == 0;
    *v3 = *a2;
    if ( !v5 )
      Outpop::Utility::Ref_Object::addref(v4);
  }
  v7 = -1;
  if ( v6 )
    Outpop::Utility::Ref_Object::release(v6);
}
