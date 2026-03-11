/*
 * func-name: ?handle_message@Request_Handler@Message@Outpop@@UAEXAAV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@@Z
 * func-address: 0x10023cb0
 * callers: none
 * callees: 0x10023ad0, 0x100295c0
 */

void __thiscall Outpop::Message::Request_Handler::handle_message(int this, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v3; // eax
  Outpop::Utility::Ref_Object *v4; // eax
  Outpop::Utility::Ref_Object *v5[2]; // [esp+8h] [ebp-14h] BYREF
  int v6; // [esp+18h] [ebp-4h]

  if ( *(_DWORD *)(this + 12) )
  {
    v3 = (Outpop::Utility::Ref_Object *)operator new(0x10u);
    v5[1] = v3;
    v6 = 0;
    if ( v3 )
      v4 = sub_10023AD0(v3, *(_DWORD *)(this + 8), a2);
    else
      v4 = 0;
    v6 = -1;
    v5[0] = v4;
    if ( v4 )
      Outpop::Utility::Ref_Object::addref(v4);
    v6 = 1;
    (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **))(**(_DWORD **)(this + 16) + 8))(
      *(_DWORD *)(this + 16),
      v5);
    v6 = -1;
    if ( v5[0] )
      Outpop::Utility::Ref_Object::release(v5[0]);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **))(**(_DWORD **)(this + 8) + 4))(
      *(_DWORD *)(this + 8),
      a2);
  }
}
