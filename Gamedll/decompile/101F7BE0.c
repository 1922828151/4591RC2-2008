/*
 * func-name: ?OnEnd@InviteResObserver@GameClient@@UAEXAAVEvent@@@Z_0
 * func-address: 0x101f7be0
 * callers: 0x1001965f
 * callees: 0x10003bf2, 0x1001a159, 0x102c8d66, 0x102c9d62, 0x102c9ea2
 */

void __thiscall GameClient::InviteResObserver::OnEnd(GameClient::InviteResObserver *this, struct Event *a2)
{
  Outpop::Message::Message *v2; // ecx
  unsigned __int16 result; // si
  _BYTE *v4; // ecx
  const wchar_t *v5; // eax
  const char *v6; // eax
  Outpop::Utility::Ref_Object *v7; // [esp+10h] [ebp-200h] BYREF
  _BYTE v8[28]; // [esp+14h] [ebp-1FCh] BYREF
  _BYTE v9[28]; // [esp+30h] [ebp-1E0h] BYREF
  _BYTE v10[28]; // [esp+4Ch] [ebp-1C4h] BYREF
  _BYTE v11[28]; // [esp+68h] [ebp-1A8h] BYREF
  _BYTE v12[28]; // [esp+84h] [ebp-18Ch] BYREF
  _BYTE v13[28]; // [esp+A0h] [ebp-170h] BYREF
  _BYTE v14[28]; // [esp+BCh] [ebp-154h] BYREF
  _BYTE v15[28]; // [esp+D8h] [ebp-138h] BYREF
  _BYTE v16[28]; // [esp+F4h] [ebp-11Ch] BYREF
  _BYTE v17[28]; // [esp+110h] [ebp-100h] BYREF
  _BYTE v18[28]; // [esp+12Ch] [ebp-E4h] BYREF
  _BYTE v19[28]; // [esp+148h] [ebp-C8h] BYREF
  _BYTE v20[28]; // [esp+164h] [ebp-ACh] BYREF
  _BYTE v21[28]; // [esp+180h] [ebp-90h] BYREF
  char Buffer[100]; // [esp+19Ch] [ebp-74h] BYREF
  int v23; // [esp+20Ch] [ebp-4h]

  v2 = *(Outpop::Message::Message **)Event::GetAckMessage(a2, &v7);
  v23 = 0;
  result = Outpop::Message::Message::get_result(v2);
  v23 = -1;
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  if ( result > 0x5272u )
  {
    if ( result >= 0x5274u )
    {
      if ( result <= 0x5276u )
      {
        std::wstring::wstring(v10, L"ERROR_GROUP_TARGETBUSY");
        v23 = 9;
        Precacher::GetText(v21, v10);
        LOBYTE(v23) = 11;
        std::wstring::~wstring(v10);
        v5 = (const wchar_t *)std::wstring::c_str(v21);
        v6 = wtoa(v5);
        std::string::string(v14, v6);
        LOBYTE(v23) = 12;
        std::string::string(v12, &unk_103176C7);
        LOBYTE(v23) = 13;
        GameClient::ChatManager::Instance();
        GameClient::ChatManager::AddMessage(0, (int)v12, (int)v14);
        LOBYTE(v23) = 12;
        std::string::~string(v12);
        LOBYTE(v23) = 11;
        std::string::~string(v14);
        v23 = -1;
        std::wstring::~wstring(v21);
        return;
      }
      if ( result == 21115 )
      {
        std::string::string(v9, &unk_10317770);
        v23 = 1;
        std::string::string(v8, &unk_1031767E);
        LOBYTE(v23) = 2;
        GameClient::ChatManager::Instance();
        GameClient::ChatManager::AddMessage(0, (int)v8, (int)v9);
        LOBYTE(v23) = 1;
        std::string::~string(v8);
        v4 = v9;
        goto LABEL_17;
      }
    }
    goto LABEL_16;
  }
  switch ( result )
  {
    case 0x5272u:
      std::string::string(v19, &unk_10317790);
      v23 = 5;
      std::string::string(v13, &unk_1031768F);
      LOBYTE(v23) = 6;
      GameClient::ChatManager::Instance();
      GameClient::ChatManager::AddMessage(0, (int)v13, (int)v19);
      LOBYTE(v23) = 5;
      std::string::~string(v13);
      v4 = v19;
      goto LABEL_17;
    case 0u:
      return;
    case 0x526Du:
      std::string::string(v18, &unk_1031779C);
      v23 = 7;
      std::string::string(v11, &unk_103176C6);
      LOBYTE(v23) = 8;
      GameClient::ChatManager::Instance();
      GameClient::ChatManager::AddMessage(0, (int)v11, (int)v18);
      LOBYTE(v23) = 7;
      std::string::~string(v11);
      v4 = v18;
      goto LABEL_17;
  }
  if ( result != 21105 )
  {
LABEL_16:
    memset(Buffer, 0, sizeof(Buffer));
    sprintf(Buffer, &byte_103177D8, result);
    std::string::string(v17, Buffer);
    v23 = 14;
    std::string::string(v20, &unk_103176CD);
    LOBYTE(v23) = 15;
    GameClient::ChatManager::Instance();
    GameClient::ChatManager::AddMessage(0, (int)v20, (int)v17);
    LOBYTE(v23) = 14;
    std::string::~string(v20);
    v4 = v17;
    goto LABEL_17;
  }
  std::string::string(v16, &unk_1031777C);
  v23 = 3;
  std::string::string(v15, &unk_1031767F);
  LOBYTE(v23) = 4;
  GameClient::ChatManager::Instance();
  GameClient::ChatManager::AddMessage(0, (int)v15, (int)v16);
  LOBYTE(v23) = 3;
  std::string::~string(v15);
  v4 = v16;
LABEL_17:
  v23 = -1;
  std::string::~string(v4);
}
