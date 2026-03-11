/*
 * func-name: ?AddKillingInfo@CKillingInfoUI@@QAEXKKK@Z_0
 * func-address: 0x10276120
 * callers: 0x10001221
 * callees: 0x10009d68, 0x1000aff6, 0x10012c29, 0x10017337, 0x102c8d6c, 0x102c9d62
 */

void __thiscall CKillingInfoUI::AddKillingInfo(CKillingInfoUI *this, char a2, char a3, unsigned int a4)
{
  int v4; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // esi
  const char *v8; // eax
  const wchar_t *v9; // eax
  int v10; // esi
  int v11; // esi
  int v12; // eax
  int v13; // esi
  const char *v14; // eax
  const wchar_t *v15; // eax
  GameClient::FlyweightManager *v16; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  _BYTE v18[28]; // [esp+14h] [ebp-64h] BYREF
  _BYTE v19[28]; // [esp+30h] [ebp-48h] BYREF
  _BYTE v20[28]; // [esp+4Ch] [ebp-2Ch] BYREF
  int v21; // [esp+74h] [ebp-4h]

  std::wstring::wstring(v20);
  v4 = 0;
  v21 = 0;
  std::wstring::wstring(v18);
  LOBYTE(v21) = 1;
  v5 = 0;
  v6 = sub_10009D68(a2);
  v7 = v6;
  if ( v6 )
  {
    v8 = (const char *)std::string::c_str(v6 + 8);
    v9 = atow(v8);
    std::wstring::operator=(v20, v9);
    v10 = *(_DWORD *)(v7 + 48) - 2;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        if ( v11 == 4 )
          v4 = -7882110;
      }
      else
      {
        v4 = -5216390;
      }
    }
    else
    {
      v4 = -10050359;
    }
  }
  v12 = sub_10009D68(a3);
  v13 = v12;
  if ( v12 )
  {
    v14 = (const char *)std::string::c_str(v12 + 8);
    v15 = atow(v14);
    std::wstring::operator=(v18, v15);
    switch ( *(_DWORD *)(v13 + 48) )
    {
      case 2:
        v5 = -10050359;
        break;
      case 4:
        v5 = -5216390;
        break;
      case 8:
        v5 = -7882110;
        break;
    }
  }
  std::string::string(v19, "DefaultKillIcon.dds");
  LOBYTE(v21) = 2;
  if ( a4 != -1 )
  {
    v16 = GameClient::FlyweightManager::Instance();
    Flyweight = GameClient::FlyweightManager::GetFlyweight(v16, a4);
    if ( Flyweight )
      std::string::operator=(v19, (char *)Flyweight + 80);
  }
  sub_10017337((int)v20, v4, (int)v18, v5, (int)v19);
  LOBYTE(v21) = 1;
  std::string::~string(v19);
  LOBYTE(v21) = 0;
  std::wstring::~wstring(v18);
  v21 = -1;
  std::wstring::~wstring(v20);
}
