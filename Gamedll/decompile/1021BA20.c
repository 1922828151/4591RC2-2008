/*
 * func-name: sub_1021BA20
 * func-address: 0x1021ba20
 * callers: 0x1000e525
 * callees: 0x10010a32, 0x10011abd, 0x1001572b, 0x102bdcd0, 0x102c9d62
 */

void __stdcall sub_1021BA20(int a1)
{
  Outpop::Message::Message *v1; // ecx
  bool v2; // bl
  Outpop::Message::Message *v3; // ecx
  unsigned __int16 result; // ax
  Outpop::Message::Message **RequestMessage; // eax
  GameClient::LocalUserManager *v6; // esi
  Outpop::Message::Message *v7; // ecx
  unsigned int multi_id; // eax
  struct GameClient::LocalUser *User; // esi
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  _DWORD v14[7]; // [esp-38h] [ebp-104h] BYREF
  char v15; // [esp-1Ch] [ebp-E8h] BYREF
  int v16; // [esp-18h] [ebp-E4h]
  unsigned int v17; // [esp-14h] [ebp-E0h]
  int v18; // [esp-10h] [ebp-DCh]
  int v19; // [esp-Ch] [ebp-D8h]
  int v20; // [esp-8h] [ebp-D4h]
  _BYTE *v21; // [esp-4h] [ebp-D0h]
  Outpop::Utility::Ref_Object *v22[3]; // [esp+14h] [ebp-B8h] BYREF
  _BYTE v23[28]; // [esp+20h] [ebp-ACh] BYREF
  char v24[28]; // [esp+3Ch] [ebp-90h] BYREF
  char Buffer[100]; // [esp+58h] [ebp-74h] BYREF
  int v26; // [esp+C8h] [ebp-4h]

  v1 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, v22);
  v26 = 0;
  v2 = Outpop::Message::Message::get_result(v1) != 0;
  v26 = -1;
  if ( v22[0] )
    Outpop::Utility::Ref_Object::release(v22[0]);
  if ( v2 )
  {
    v3 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, v22);
    v26 = 1;
    result = Outpop::Message::Message::get_result(v3);
    LogPrintf("Get entry list is failed. Error code: %d", result);
    v26 = -1;
    if ( v22[0] )
      Outpop::Utility::Ref_Object::release(v22[0]);
  }
  else
  {
    LogPrintf("Get entry list is success.");
    std::string::string(v24, &unk_1031972A);
    v26 = 2;
    RequestMessage = (Outpop::Message::Message **)Event::GetRequestMessage(a1, v22);
    v6 = GameClient::LocalUserManager::s_pInstance;
    v7 = *RequestMessage;
    LOBYTE(v26) = 3;
    multi_id = Outpop::Message::Message::get_multi_id(v7);
    User = GameClient::LocalUserManager::GetUser(v6, multi_id);
    LOBYTE(v26) = 2;
    if ( v22[0] )
      Outpop::Utility::Ref_Object::release(v22[0]);
    if ( User )
    {
      v22[2] = (Outpop::Utility::Ref_Object *)&v15;
      std::string::string(&v15, "Game.AIUser");
      v22[1] = (Outpop::Utility::Ref_Object *)v14;
      LOBYTE(v26) = 4;
      std::string::string(v14, "AIUserRebornPoint");
      LOBYTE(v26) = 5;
      Engine::Instance(v14[0]);
      LOBYTE(v26) = 2;
      v10 = sub_102BDCD0(v14[0], v14[1], v14[2], v14[3], v14[4], v14[5], v14[6], v15, v16, v17, v18, v19, v20, v21);
      sprintf(Buffer, "%d", v10);
      std::string::string(v23, Buffer);
      v11 = *((_DWORD *)User + 20);
      v12 = *((_DWORD *)User + 19);
      v21 = v23;
      v20 = 3;
      v19 = v11;
      v13 = *((_DWORD *)User + 1);
      LOBYTE(v26) = 6;
      sub_10011ABD(v13, v12);
      sub_1001572B(v17, v18, v19, v20, (int)v21);
      LOBYTE(v26) = 2;
      std::string::~string(v23);
    }
    v26 = -1;
    std::string::~string(v24);
  }
}
