/*
 * func-name: sub_1021C6E0
 * func-address: 0x1021c6e0
 * callers: 0x10003d4b
 * callees: 0x10002aea, 0x10008f12, 0x1000a9de, 0x1000b1a4, 0x1000bc76, 0x1000ca6d, 0x1000ea25, 0x1001055a, 0x10010a32, 0x10011abd, 0x10016a4f, 0x10017db9, 0x1001816a, 0x102c9d62, 0x102c9d98, 0x102c9dc8, 0x102ca13e
 */

void __stdcall sub_1021C6E0(int a1)
{
  Outpop::Message::Message *v1; // ecx
  Outpop::Utility::Stream_Base **AckMessage; // esi
  Outpop::Utility::Stream_Base **v3; // eax
  Outpop::Utility::Stream_Base *v4; // ecx
  Outpop::Utility::Stream_Base *v5; // ebp
  size_t readable; // esi
  char *ptr; // ebp
  int v8; // eax
  Outpop::Message::Message **RequestMessage; // eax
  GameClient::LocalUserManager *v10; // esi
  Outpop::Message::Message *v11; // ecx
  unsigned int multi_id; // eax
  struct GameClient::LocalUser *User; // esi
  int v14; // edi
  unsigned int i; // esi
  unsigned int j; // esi
  struct GameClient::LocalUser *UserByIndex; // edi
  unsigned int v18; // [esp-4h] [ebp-118h]
  int v19; // [esp+0h] [ebp-114h]
  int v20; // [esp+0h] [ebp-114h]
  int v21; // [esp+4h] [ebp-110h]
  int v22; // [esp+4h] [ebp-110h]
  bool v23; // [esp+17h] [ebp-FDh]
  Outpop::Utility::Ref_Object *v24; // [esp+18h] [ebp-FCh] BYREF
  Outpop::Utility::Ref_Object *v25; // [esp+1Ch] [ebp-F8h] BYREF
  void **v26; // [esp+20h] [ebp-F4h] BYREF
  void *v27; // [esp+24h] [ebp-F0h]
  int v28; // [esp+28h] [ebp-ECh]
  int v29; // [esp+2Ch] [ebp-E8h]
  int v30; // [esp+30h] [ebp-E4h]
  char v31[208]; // [esp+34h] [ebp-E0h] BYREF
  int v32; // [esp+110h] [ebp-4h]

  v1 = *(Outpop::Message::Message **)Event::GetAckMessage(a1, &v25);
  v32 = 0;
  v23 = Outpop::Message::Message::get_result(v1) != 0;
  v32 = -1;
  if ( v25 )
    Outpop::Utility::Ref_Object::release(v25);
  if ( v23 )
  {
    LogPrintf("Send character online is failed.");
  }
  else
  {
    LogPrintf("Send character online is success.");
    v26 = &BinStream::`vftable';
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v32 = 1;
    AckMessage = (Outpop::Utility::Stream_Base **)Event::GetAckMessage(a1, &v24);
    LOBYTE(v32) = 2;
    v3 = (Outpop::Utility::Stream_Base **)Event::GetAckMessage(a1, &v25);
    v4 = *AckMessage;
    v5 = *v3;
    LOBYTE(v32) = 3;
    readable = Outpop::Utility::Stream_Base::get_readable(v4);
    ptr = Outpop::Utility::Stream_Base::get_read_ptr(v5);
    sub_1001816A(readable);
    memcpy((char *)v27 + v28, ptr, readable);
    v28 += readable;
    LOBYTE(v32) = 2;
    if ( v25 )
      Outpop::Utility::Ref_Object::release(v25);
    LOBYTE(v32) = 1;
    if ( v24 )
      Outpop::Utility::Ref_Object::release(v24);
    sub_10017DB9(v19, v21);
    LOBYTE(v32) = 4;
    sub_1000CA6D((int)&v26, (int)v31);
    sub_10016A4F(v31[0]);
    sub_1000B1A4((int)v31);
    v24 = (Outpop::Utility::Ref_Object *)operator new(0x1A0u);
    LOBYTE(v32) = 5;
    if ( v24 )
      v8 = sub_1000A9DE(v20, v22);
    else
      v8 = 0;
    LOBYTE(v32) = 4;
    sub_10008F12(v8);
    RequestMessage = (Outpop::Message::Message **)Event::GetRequestMessage(a1, &v24);
    v10 = GameClient::LocalUserManager::s_pInstance;
    v11 = *RequestMessage;
    LOBYTE(v32) = 6;
    multi_id = Outpop::Message::Message::get_multi_id(v11);
    User = GameClient::LocalUserManager::GetUser(v10, multi_id);
    LOBYTE(v32) = 4;
    if ( v24 )
      Outpop::Utility::Ref_Object::release(v24);
    if ( User )
    {
      *((_DWORD *)User + 19) = *(_DWORD *)v31;
      v14 = 0;
      for ( i = 0; i < GameClient::LocalUserManager::GetUserCount(GameClient::LocalUserManager::s_pInstance); ++i )
      {
        if ( *((_DWORD *)GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, i) + 19) != -1 )
          ++v14;
      }
      if ( v14 == GameClient::LocalUserManager::GetUserCount(GameClient::LocalUserManager::s_pInstance) )
      {
        for ( j = 0; j < GameClient::LocalUserManager::GetUserCount(GameClient::LocalUserManager::s_pInstance); ++j )
        {
          UserByIndex = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, j);
          LogPrintf("Send get world list.");
          sub_10011ABD(*((_DWORD *)UserByIndex + 1), v20);
          sub_10002AEA(v18);
        }
      }
    }
    LOBYTE(v32) = 1;
    sub_1000BC76(v20, v22);
    v26 = &BinStream::`vftable';
    if ( v27 )
      operator delete[](v27);
  }
}
