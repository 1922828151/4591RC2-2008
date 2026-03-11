/*
 * func-name: ?handle_time_out@Asynch_Ack_Handler@Message@Outpop@@QAEXAAV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@0AAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@53@@Z
 * func-address: 0x10024380
 * callers: 0x100248a0, 0x100253f0, 0x10025e70
 * callees: 0x10023d90, 0x100295c0
 */

void __thiscall Outpop::Message::Asynch_Ack_Handler::handle_time_out(
        int this,
        Outpop::Utility::Ref_Object **a2,
        Outpop::Utility::Ref_Object **a3,
        Outpop::Utility::Ref_Object **a4)
{
  Outpop::Utility::Ref_Object *v5; // eax
  Outpop::Utility::Ref_Object *v6; // eax
  Outpop::Utility::Ref_Object *v7[2]; // [esp+8h] [ebp-14h] BYREF
  int v8; // [esp+18h] [ebp-4h]

  if ( *(_DWORD *)(this + 12) )
  {
    v5 = (Outpop::Utility::Ref_Object *)operator new(0x18u);
    v7[1] = v5;
    v8 = 0;
    if ( v5 )
      v6 = sub_10023D90(v5, *(_DWORD *)(this + 8), a3, a2, a4);
    else
      v6 = 0;
    v8 = -1;
    v7[0] = v6;
    if ( v6 )
      Outpop::Utility::Ref_Object::addref(v6);
    v8 = 1;
    (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **))(**(_DWORD **)(this + 16) + 8))(
      *(_DWORD *)(this + 16),
      v7);
    v8 = -1;
    if ( v7[0] )
      Outpop::Utility::Ref_Object::release(v7[0]);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **, Outpop::Utility::Ref_Object **, Outpop::Utility::Ref_Object **))(**(_DWORD **)(this + 8) + 4))(
      *(_DWORD *)(this + 8),
      a3,
      a2,
      a4);
  }
}
