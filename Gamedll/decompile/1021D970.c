/*
 * func-name: sub_1021D970
 * func-address: 0x1021d970
 * callers: 0x10004188
 * callees: 0x10001181, 0x100074c3, 0x1000e5ed, 0x100128e1, 0x100147c7, 0x10015c85, 0x10017fe9, 0x102c9d62
 */

void __stdcall sub_1021D970(int a1)
{
  Outpop::Message::Message *v1; // ecx
  bool v2; // bl
  int v3; // [esp+0h] [ebp-E4h]
  int v4; // [esp+0h] [ebp-E4h]
  int v5; // [esp+4h] [ebp-E0h]
  int v6; // [esp+4h] [ebp-E0h]
  int v7; // [esp+10h] [ebp-D4h] BYREF
  Outpop::Utility::Ref_Object *v8; // [esp+14h] [ebp-D0h] BYREF
  int v9; // [esp+18h] [ebp-CCh] BYREF
  Outpop::Utility::Ref_Object *v10; // [esp+1Ch] [ebp-C8h] BYREF
  _BYTE v11[28]; // [esp+20h] [ebp-C4h] BYREF
  _BYTE v12[28]; // [esp+3Ch] [ebp-A8h] BYREF
  char v13; // [esp+58h] [ebp-8Ch] BYREF
  char v14; // [esp+59h] [ebp-8Bh] BYREF
  char v15; // [esp+5Ah] [ebp-8Ah] BYREF
  char v16; // [esp+5Bh] [ebp-89h] BYREF
  int v17; // [esp+5Ch] [ebp-88h]
  _BYTE v18[4]; // [esp+60h] [ebp-84h] BYREF
  _BYTE v19[4]; // [esp+64h] [ebp-80h] BYREF
  _BYTE v20[4]; // [esp+68h] [ebp-7Ch] BYREF
  _BYTE v21[4]; // [esp+6Ch] [ebp-78h] BYREF
  _BYTE v22[28]; // [esp+70h] [ebp-74h] BYREF
  _BYTE v23[4]; // [esp+8Ch] [ebp-58h] BYREF
  _BYTE v24[4]; // [esp+90h] [ebp-54h] BYREF
  _BYTE v25[64]; // [esp+94h] [ebp-50h] BYREF
  int v26; // [esp+E0h] [ebp-4h]

  v1 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v10);
  v26 = 0;
  v2 = Outpop::Message::Message::get_result(v1) != 0;
  v26 = -1;
  if ( v10 )
    Outpop::Utility::Ref_Object::release(v10);
  if ( !v2 )
  {
    sub_1000E5ED(v3, v5);
    v26 = 1;
    Event::GetAckMessage(a1, &v8);
    LOBYTE(v26) = 2;
    sub_10001181((int)&v9);
    sub_10017FE9((int)v11);
    sub_10017FE9((int)v12);
    sub_100128E1((int)&v13);
    sub_100128E1((int)&v14);
    sub_100128E1((int)&v15);
    sub_100128E1((int)&v16);
    sub_100128E1((int)&v7 + 3);
    sub_10001181((int)v20);
    sub_10001181((int)v21);
    sub_10001181((int)v18);
    sub_10001181((int)v19);
    sub_10017FE9((int)v22);
    sub_10015C85((int)v23);
    sub_10015C85((int)v24);
    sub_10015C85((int)v25);
    LOBYTE(v26) = 1;
    if ( v8 )
      Outpop::Utility::Ref_Object::release(v8);
    v17 = HIBYTE(v7);
    GameClient::BattleFieldManager::AddBattleFieldIntro(
      GameClient::BattleFieldManager::s_pInstance,
      v9,
      (const struct GameClient::BATTLE_FIELD_INFO *)v11);
    v26 = -1;
    sub_100074C3(v4, v6);
  }
}
