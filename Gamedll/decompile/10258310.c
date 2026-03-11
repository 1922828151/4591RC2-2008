/*
 * func-name: ?SendText@CChatInputUI@@IAEXXZ_0
 * func-address: 0x10258310
 * callers: 0x1000c8ba
 * callees: 0x1000194c, 0x10003bf2, 0x1000e3ae, 0x102c8d66, 0x102c9d62
 */

void __thiscall CChatInputUI::SendText(CChatInputUI *this)
{
  struct GameClient::LocalCharacter *v2; // edi
  const wchar_t *v3; // eax
  const char *v4; // eax
  int v5; // [esp-8h] [ebp-5Ch]
  _BYTE v6[28]; // [esp+Ch] [ebp-48h] BYREF
  _BYTE v7[20]; // [esp+28h] [ebp-2Ch] BYREF
  int v8; // [esp+3Ch] [ebp-18h]
  int v9; // [esp+50h] [ebp-4h]

  v2 = (struct GameClient::LocalCharacter *)sub_1000194C(0);
  if ( v2 )
  {
    std::wstring::wstring(v7, *(_DWORD *)(*((_DWORD *)this + 969) + 532));
    v9 = 0;
    if ( v8 )
    {
      CREEditBox::SetText(*((CREEditBox **)this + 969), word_103208C8, 0);
      v3 = (const wchar_t *)std::wstring::c_str(v7);
      v4 = wtoa(v3);
      std::string::string(v6, v4);
      v5 = *((_DWORD *)this + 970);
      LOBYTE(v9) = 1;
      GameClient::ChatManager::Instance();
      GameClient::ChatManager::SendMessageA(v2, v5, v6);
      LOBYTE(v9) = 0;
      std::string::~string(v6);
    }
    v9 = -1;
    std::wstring::~wstring(v7);
  }
}
