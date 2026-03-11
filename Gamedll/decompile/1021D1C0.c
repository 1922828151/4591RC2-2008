/*
 * func-name: ?RequestMapInfo@BattleFieldManager@GameClient@@QAEXJ@Z_0
 * func-address: 0x1021d1c0
 * callers: 0x10001438
 * callees: 0x1000194c, 0x1000e56b, 0x10013eb7, 0x10015eab
 */

void __thiscall GameClient::BattleFieldManager::RequestMapInfo(GameClient::BattleFieldManager *this, int a2)
{
  int v2; // edi
  Outpop::Message::Message *v3; // eax
  Outpop::Message::Message *v4; // esi
  Outpop::Message::Message *v5; // ecx
  int v6; // [esp-8h] [ebp-28h]
  int v7; // [esp-4h] [ebp-24h]
  Outpop::Message::Message *v8[2]; // [esp+Ch] [ebp-14h] BYREF
  int v9; // [esp+1Ch] [ebp-4h]

  v2 = sub_1000194C(0);
  if ( v2 )
  {
    v3 = (Outpop::Message::Message *)Outpop::Message::Message::operator new(0x6Cu);
    v4 = v3;
    v8[1] = v3;
    v9 = 0;
    if ( v3 )
    {
      Outpop::Message::Message::Message(v3, 1, 1, 1, 0, 512);
      *(_DWORD *)v4 = &Outpop::Message::Message::`vftable';
      v5 = v4;
    }
    else
    {
      v5 = 0;
    }
    v9 = -1;
    v8[0] = v5;
    if ( v5 )
      Outpop::Utility::Ref_Object::addref(v5);
    v9 = 1;
    Outpop::Message::Message::set_protocol_catalog(v8[0], 0x11u);
    Outpop::Message::Message::set_protocol_type(v8[0], 0x4270u);
    sub_10015EAB((int)&a2);
    sub_1000E56B(*(_DWORD *)(v2 + 236), (int)v8);
    sub_10013EB7(v6, v7);
    v9 = -1;
    if ( v8[0] )
      Outpop::Utility::Ref_Object::release(v8[0]);
  }
}
