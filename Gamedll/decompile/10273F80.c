/*
 * func-name: ?Tick@CGroupQuickCallUI@@UAEXM@Z_0
 * func-address: 0x10273f80
 * callers: 0x100016b8
 * callees: 0x1000194c, 0x10003bf2, 0x1000e3ae, 0x102c8d66, 0x102c9d62
 */

void __thiscall CGroupQuickCallUI::Tick(CGroupQuickCallUI *this, float a2)
{
  _DWORD *i; // ebp
  int v3; // ecx
  unsigned int v4; // esi
  _DWORD *v5; // edi
  Input *v6; // eax
  CREStatic *Control; // esi
  struct GameClient::LocalCharacter *v8; // edi
  const wchar_t *Text; // eax
  const char *v10; // eax
  int v11; // eax
  int v12; // eax
  CDlgMgr *v13; // eax
  _BYTE v15[28]; // [esp+28h] [ebp-48h] BYREF
  _BYTE v16[28]; // [esp+44h] [ebp-2Ch] BYREF
  int v17; // [esp+6Ch] [ebp-4h]

  for ( i = (_DWORD *)**((_DWORD **)this + 970); i != *((_DWORD **)this + 970); i = (_DWORD *)*i )
  {
    v3 = *(_DWORD *)(dword_103B67B4 + 8);
    v4 = i[2];
    v5 = (_DWORD *)(dword_103B67B4 + 8);
    if ( !v3 || v4 >= (*(_DWORD *)(dword_103B67B4 + 12) - v3) >> 2 )
      _invalid_parameter_noinfo();
    v6 = (Input *)Input::Instance(*(_DWORD *)(*v5 + 4 * v4));
    if ( Input::ControlJustPressed(v6) )
    {
      if ( i == *((_DWORD **)this + 970) )
        _invalid_parameter_noinfo();
      Control = CREDialog::GetControl(this, i[3]);
      if ( Control )
      {
        v8 = (struct GameClient::LocalCharacter *)sub_1000194C(0);
        if ( v8 )
        {
          Text = CREStatic::GetText(Control);
          v10 = wtoa(Text);
          std::string::string(v16, v10);
          v17 = 0;
          v11 = std::string::size(v16);
          v12 = std::string::substr(v16, v15, 2, v11 - 2);
          LOBYTE(v17) = 1;
          std::string::operator=(v16, v12);
          LOBYTE(v17) = 0;
          std::string::~string(v15);
          GameClient::ChatManager::Instance();
          GameClient::ChatManager::SendMessageA(v8, 3, v16);
          v17 = -1;
          std::string::~string(v16);
        }
      }
      v13 = (CDlgMgr *)CDlgMgr::Instance();
      CDlgMgr::ShowDialog(v13);
    }
    if ( i == *((_DWORD **)this + 970) )
      _invalid_parameter_noinfo();
  }
  CTYDialog::Tick(this, a2);
}
