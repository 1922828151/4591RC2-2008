/*
 * func-name: sub_10215900
 * func-address: 0x10215900
 * callers: 0x100091b5
 * callees: 0x10001181, 0x1000186b, 0x10002f6d, 0x1000783d, 0x10008e59, 0x1001055a, 0x10011abd, 0x100128e1, 0x1001503c, 0x1001572b, 0x10015c85, 0x10017fe9, 0x102bdcd0, 0x102c9d50, 0x102c9d62, 0x102c9ea8
 */

void __stdcall sub_10215900(int a1)
{
  Outpop::Message::Message *v1; // ecx
  int v2; // edi
  bool v3; // bl
  Outpop::Message::Message *v4; // ecx
  unsigned __int16 result; // ax
  struct GameClient::LocalUser *UserByIndex; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  Outpop::Message::Message *v10; // ecx
  CDlgMgr *v11; // eax
  struct CTYDialog *Dialog; // eax
  CBattleFieldDetailUI *v13; // eax
  _DWORD v14[4]; // [esp-38h] [ebp-F0h] BYREF
  _BYTE *v15; // [esp-28h] [ebp-E0h]
  _BYTE *v16; // [esp-24h] [ebp-DCh]
  char *v17; // [esp-20h] [ebp-D8h]
  char *v18; // [esp-1Ch] [ebp-D4h] BYREF
  char *v19; // [esp-18h] [ebp-D0h]
  unsigned int v20; // [esp-14h] [ebp-CCh]
  char *v21; // [esp-10h] [ebp-C8h]
  void ***v22; // [esp-Ch] [ebp-C4h]
  int v23; // [esp-8h] [ebp-C0h]
  char *v24; // [esp-4h] [ebp-BCh]
  int v25; // [esp+0h] [ebp-B8h]
  int v26; // [esp+4h] [ebp-B4h]
  char **v27; // [esp+14h] [ebp-A4h] BYREF
  int v28; // [esp+18h] [ebp-A0h] BYREF
  int v29; // [esp+1Ch] [ebp-9Ch] BYREF
  _BYTE v30[4]; // [esp+20h] [ebp-98h] BYREF
  void *v31; // [esp+24h] [ebp-94h]
  int v32; // [esp+28h] [ebp-90h]
  int v33; // [esp+2Ch] [ebp-8Ch]
  Outpop::Utility::Ref_Object *v34; // [esp+30h] [ebp-88h] BYREF
  char *v35; // [esp+34h] [ebp-84h]
  _BYTE v36[4]; // [esp+38h] [ebp-80h] BYREF
  char v37; // [esp+3Ch] [ebp-7Ch] BYREF
  char v38; // [esp+40h] [ebp-78h] BYREF
  _BYTE v39[28]; // [esp+44h] [ebp-74h] BYREF
  _BYTE v40[28]; // [esp+60h] [ebp-58h] BYREF
  char v41; // [esp+7Ch] [ebp-3Ch] BYREF
  char v42; // [esp+80h] [ebp-38h] BYREF
  char v43; // [esp+81h] [ebp-37h] BYREF
  char v44; // [esp+82h] [ebp-36h] BYREF
  char v45; // [esp+84h] [ebp-34h] BYREF
  char v46; // [esp+88h] [ebp-30h] BYREF
  _BYTE v47[28]; // [esp+8Ch] [ebp-2Ch] BYREF
  int v48; // [esp+B4h] [ebp-4h]

  v1 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v27);
  v2 = 0;
  v48 = 0;
  v3 = Outpop::Message::Message::get_result(v1) != 0;
  v48 = -1;
  if ( v27 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v27);
  if ( v3 )
  {
    v4 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v27);
    v48 = 1;
    result = Outpop::Message::Message::get_result(v4);
    LogPrintf("Get entry list is failed. Error code: %d", result);
    v48 = -1;
    if ( v27 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v27);
  }
  else
  {
    LogPrintf("Get entry list is success.");
    v27 = &v18;
    std::string::string(&v18, "Game.AIUser");
    v35 = (char *)v14;
    v48 = 2;
    std::string::string(v14, "AIUserCharacterBattel");
    LOBYTE(v48) = 3;
    Engine::Instance(v14[0]);
    v48 = -1;
    if ( sub_102BDCD0(v14[0], v14[1], v14[2], v14[3], v15, v16, v17, (char)v18, v19, v20, v21, v22, v23, v24) )
    {
      std::string::string(v47, &unk_10318E0E);
      v48 = 4;
      UserByIndex = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0);
      if ( UserByIndex )
      {
        v7 = *((_DWORD *)UserByIndex + 20);
        v8 = *((_DWORD *)UserByIndex + 19);
        v9 = *((_DWORD *)UserByIndex + 1);
        v24 = v47;
        v23 = 3;
        v22 = (void ***)v7;
        sub_10011ABD(v9, v8);
        sub_1001572B(v20, (int)v21, (char)v22, v23, (int)v24);
      }
      v48 = -1;
      std::string::~string(v47);
    }
    else
    {
      v10 = *(Outpop::Message::Message **)Event::GetRequestMessage(a1, &v27);
      v48 = 5;
      Outpop::Message::Message::reset_to_data(v10);
      v48 = -1;
      if ( v27 )
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v27);
      Event::GetRequestMessage(a1, &v27);
      v48 = 6;
      sub_10001181((int)&v28);
      v48 = -1;
      if ( v27 )
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v27);
      Event::GetAckMessage(a1, &v27);
      v48 = 7;
      sub_10001181((int)&v29);
      v48 = -1;
      if ( v27 )
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v27);
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v48 = 8;
      if ( v29 > 0 )
      {
        do
        {
          std::string::string(v39);
          LOBYTE(v48) = 9;
          std::string::string(v40);
          LOBYTE(v48) = 10;
          Event::GetAckMessage(a1, &v34);
          v24 = &v38;
          v23 = (int)&v37;
          v22 = (void ***)&v46;
          v21 = &v45;
          v20 = (unsigned int)&v44;
          v19 = &v43;
          v18 = &v42;
          v17 = &v41;
          v16 = v40;
          v15 = v39;
          LOBYTE(v48) = 11;
          sub_10001181((int)v36);
          sub_10017FE9((int)v15);
          sub_10017FE9((int)v16);
          sub_10001181((int)v17);
          sub_100128E1((int)v18);
          sub_100128E1((int)v19);
          sub_100128E1(v20);
          sub_10001181((int)v21);
          sub_10001181((int)v22);
          sub_10015C85(v23);
          sub_10015C85((int)v24);
          LOBYTE(v48) = 10;
          if ( v34 )
            Outpop::Utility::Ref_Object::release(v34);
          sub_10002F6D((int)v36);
          LOBYTE(v48) = 8;
          sub_1000186B(v25, v26);
          ++v2;
        }
        while ( v2 < v29 );
      }
      GameClient::BattleFieldManager::UpdateEntryPoint(v28, (int)v30);
      v24 = 0;
      v23 = (int)&CBattleFieldDetailUI `RTTI Type Descriptor';
      v22 = &CTYDialog `RTTI Type Descriptor';
      v21 = 0;
      v20 = 19;
      v11 = (CDlgMgr *)CDlgMgr::Instance();
      Dialog = CDlgMgr::GetDialog(v11);
      v13 = (CBattleFieldDetailUI *)_RTDynamicCast(Dialog, v21, v22, v23, v24);
      if ( v13 )
        CBattleFieldDetailUI::RefreshEntryPoint(v13, v28);
      v48 = -1;
      if ( v31 )
      {
        v24 = v35;
        v23 = (int)v30;
        sub_1001503C((int)v31, v32);
        operator delete(v31);
      }
    }
  }
}
