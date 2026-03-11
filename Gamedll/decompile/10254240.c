/*
 * func-name: sub_10254240
 * func-address: 0x10254240
 * callers: 0x10013ac5
 * callees: 0x10001181, 0x100128e1, 0x10013fcf, 0x10015c85, 0x102c9ea8
 */

void __stdcall sub_10254240(int a1)
{
  int v1; // esi
  Outpop::Message::Message *v2; // ecx
  Outpop::Message::Message *v3; // ecx
  CDlgMgr *v4; // eax
  struct CTYDialog *Dialog; // eax
  CBattleFieldDetailUI *v6; // eax
  int i; // ebx
  Outpop::Utility::Ref_Object *v8; // [esp+34h] [ebp-28h] BYREF
  int v9; // [esp+38h] [ebp-24h] BYREF
  Outpop::Utility::Ref_Object *v10; // [esp+3Ch] [ebp-20h] BYREF
  unsigned __int8 v11[4]; // [esp+40h] [ebp-1Ch] BYREF
  float v12; // [esp+44h] [ebp-18h] BYREF
  float v13; // [esp+48h] [ebp-14h] BYREF
  CBattleFieldDetailUI *v14; // [esp+4Ch] [ebp-10h]
  int v15; // [esp+58h] [ebp-4h]

  v1 = a1;
  v2 = *(Outpop::Message::Message **)Event::GetRequestMessage(a1, &v8);
  v15 = 0;
  Outpop::Message::Message::reset_to_data(v2);
  v15 = -1;
  if ( v8 )
    Outpop::Utility::Ref_Object::release(v8);
  v3 = *(Outpop::Message::Message **)Event::GetAckMessage(v1, &v8);
  v15 = 1;
  Outpop::Message::Message::reset_to_data(v3);
  v15 = -1;
  if ( v8 )
    Outpop::Utility::Ref_Object::release(v8);
  Event::GetRequestMessage(v1, &v8);
  v15 = 2;
  sub_10001181((int)&v9);
  v15 = -1;
  if ( v8 )
    Outpop::Utility::Ref_Object::release(v8);
  v4 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v4);
  v6 = (CBattleFieldDetailUI *)_RTDynamicCast(
                                 Dialog,
                                 0,
                                 &CTYDialog `RTTI Type Descriptor',
                                 &CBattleFieldDetailUI `RTTI Type Descriptor');
  v14 = v6;
  if ( v6 && *((_DWORD *)v6 + 968) == v9 )
  {
    Event::GetAckMessage(v1, &v8);
    v15 = 3;
    sub_10001181((int)&a1);
    v15 = -1;
    if ( v8 )
      Outpop::Utility::Ref_Object::release(v8);
    for ( i = 0; i < a1; ++i )
    {
      Event::GetAckMessage(v1, &v10);
      v15 = 4;
      sub_10015C85((int)&v13);
      sub_10015C85((int)&v12);
      sub_100128E1((int)v11);
      v15 = -1;
      if ( v10 )
        Outpop::Utility::Ref_Object::release(v10);
      CBattleFieldDetailUI::AddBattlePoint(v14, v13, v12, v11[0]);
    }
  }
}
