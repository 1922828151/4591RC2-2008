/*
 * func-name: ?CheckGroupCmdKey@GroupManager@GameClient@@QAEXPBVGroup@2@@Z_0
 * func-address: 0x101f8100
 * callers: 0x1001532f
 * callees: 0x10015acd, 0x102c9ea8
 */

void __thiscall GameClient::GroupManager::CheckGroupCmdKey(
        GameClient::GroupManager *this,
        const struct GameClient::Group *a2)
{
  unsigned int v3; // ebp
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  _DWORD *v7; // ebx
  unsigned int v8; // esi
  Input *v9; // eax
  CDlgMgr *v10; // eax
  struct CTYDialog *Dialog; // eax
  int v12; // eax
  CDlgMgr *v13; // eax
  const struct GameClient::Group *i; // [esp+24h] [ebp+4h]

  v3 = 0;
  for ( i = 0; ; i = (const struct GameClient::Group *)((char *)i + 84) )
  {
    v4 = *((_DWORD *)a2 + 4);
    if ( !v4 || v3 >= (*((_DWORD *)a2 + 5) - v4) / 84 )
      break;
    v5 = *((_DWORD *)a2 + 4);
    if ( !v5 || v3 >= (*((_DWORD *)a2 + 5) - v5) / 84 )
      _invalid_parameter_noinfo();
    v6 = *(_DWORD *)(dword_103B67B4 + 8);
    v7 = (_DWORD *)(dword_103B67B4 + 8);
    v8 = *(_DWORD *)((char *)i + *((_DWORD *)a2 + 4) + 32) + 27;
    if ( !v6 || v8 >= (*(_DWORD *)(dword_103B67B4 + 12) - v6) >> 2 )
      _invalid_parameter_noinfo();
    v9 = (Input *)Input::Instance(*(_DWORD *)(*v7 + 4 * v8));
    if ( Input::ControlJustPressed(v9) )
    {
      v10 = (CDlgMgr *)CDlgMgr::Instance();
      Dialog = CDlgMgr::GetDialog(v10);
      if ( _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CCommandUI `RTTI Type Descriptor', 0) )
      {
        v12 = *((_DWORD *)a2 + 4);
        if ( !v12 || v3 >= (*((_DWORD *)a2 + 5) - v12) / 84 )
          _invalid_parameter_noinfo();
        sub_10015ACD(*(_DWORD *)(*((_DWORD *)a2 + 4) + 84 * v3 + 32));
      }
      v13 = (CDlgMgr *)CDlgMgr::Instance();
      CDlgMgr::ShowDialog(v13);
      return;
    }
    ++v3;
  }
}
