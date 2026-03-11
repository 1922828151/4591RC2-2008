/*
 * func-name: sub_1021DE50
 * func-address: 0x1021de50
 * callers: 0x1000e6a1
 * callees: 0x10001181, 0x1000242d, 0x1000d512, 0x100128e1, 0x10015a2d, 0x1001a109, 0x102c9d50
 */

void __stdcall sub_1021DE50(int a1)
{
  int v1; // esi
  Outpop::Message::Message *v2; // ecx
  bool v3; // bl
  Outpop::Message::Message *v4; // ecx
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // [esp+18h] [ebp-4Ch] BYREF
  int v8; // [esp+1Ch] [ebp-48h] BYREF
  Outpop::Utility::Ref_Object *v9; // [esp+20h] [ebp-44h] BYREF
  int v10; // [esp+24h] [ebp-40h] BYREF
  int v11; // [esp+28h] [ebp-3Ch] BYREF
  int v12; // [esp+2Ch] [ebp-38h] BYREF
  int v13; // [esp+30h] [ebp-34h] BYREF
  void *v14; // [esp+44h] [ebp-20h]
  int v15; // [esp+48h] [ebp-1Ch]
  int v16; // [esp+4Ch] [ebp-18h]
  int i; // [esp+60h] [ebp-4h]

  v1 = a1;
  v2 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v9);
  i = 0;
  v3 = Outpop::Message::Message::get_result(v2) != 0;
  i = -1;
  if ( v9 )
    Outpop::Utility::Ref_Object::release(v9);
  if ( !v3 )
  {
    v4 = *(Outpop::Message::Message **)Event::GetRequestMessage(v1, &v9);
    i = 1;
    Outpop::Message::Message::reset_to_data(v4);
    i = -1;
    if ( v9 )
      Outpop::Utility::Ref_Object::release(v9);
    Event::GetRequestMessage(v1, &v9);
    i = 2;
    sub_10001181((int)&v12);
    i = -1;
    if ( v9 )
      Outpop::Utility::Ref_Object::release(v9);
    v8 = 0;
    v7 = 0;
    Event::GetAckMessage(v1, &v9);
    i = 3;
    sub_10001181((int)&v8);
    i = -1;
    if ( v9 )
      Outpop::Utility::Ref_Object::release(v9);
    Event::GetAckMessage(v1, &v9);
    i = 4;
    sub_10001181((int)&v7);
    i = -1;
    if ( v9 )
      Outpop::Utility::Ref_Object::release(v9);
    sub_1000D512((int)&a1, (int)&a1);
    v5 = 0;
    for ( i = 5; v5 < v7; *v6 = v11 )
    {
      Event::GetAckMessage(v1, &v9);
      LOBYTE(i) = 6;
      sub_100128E1((int)&a1);
      sub_10001181((int)&v11);
      LOBYTE(i) = 5;
      if ( v9 )
        Outpop::Utility::Ref_Object::release(v9);
      v10 = (unsigned __int8)a1;
      v6 = (_DWORD *)sub_1000242D((int)&v10);
      ++v5;
    }
    GameClient::BattleFieldManager::SetMapStatus(v12, (int)&v13, v8);
    if ( v14 )
      operator delete(v14);
    v14 = 0;
    v15 = 0;
    v16 = 0;
    sub_10015A2D();
  }
}
