/*
 * func-name: sub_10289F70
 * func-address: 0x10289f70
 * callers: 0x10012e9f
 * callees: 0x1000194c, 0x1000516e, 0x10008170, 0x1000a3a8, 0x1000ed13, 0x1000f1dc, 0x10011a4f, 0x10014d17, 0x10017c29, 0x102c0750, 0x102c8d6c, 0x102c9d62, 0x102c9fe0
 */

struct CREControl *__thiscall sub_10289F70(CREStatic **this)
{
  unsigned int v2; // eax
  int i; // edi
  struct CREControl *Control; // eax
  struct CREControl *v5; // eax
  struct CREControl *result; // eax
  GameClient::GroupManager *v7; // eax
  const struct GroupMemberInfo *CorpMemberInfo; // ebp
  int j; // ebx
  struct CREControl *v10; // eax
  struct Game *v11; // eax
  int v12; // eax
  int v13; // ebx
  struct CREControl *v14; // eax
  struct CREControl *v15; // eax
  const char *v16; // eax
  const wchar_t *v17; // eax
  GameClient::RobotManager *v18; // eax
  struct GameClient::Robot *Robot; // ebx
  double v20; // st7
  const wchar_t *v21; // eax
  struct CREControl *v22; // eax
  struct CREControl *v23; // eax
  const char *v24; // eax
  const wchar_t *v25; // eax
  GameClient::RobotManager *v26; // eax
  struct GameClient::Robot *v27; // edi
  double v28; // st7
  const wchar_t *v29; // eax
  int k; // edi
  struct CREControl *v31; // eax
  float v32; // [esp+24h] [ebp-13Ch]
  float v33; // [esp+24h] [ebp-13Ch]
  unsigned int v34; // [esp+28h] [ebp-138h]
  int v35; // [esp+28h] [ebp-138h]
  int v36; // [esp+28h] [ebp-138h]
  unsigned int v37; // [esp+40h] [ebp-120h]
  float v38; // [esp+40h] [ebp-120h]
  float v39; // [esp+40h] [ebp-120h]
  float v40; // [esp+40h] [ebp-120h]
  float v41; // [esp+40h] [ebp-120h]
  float v42; // [esp+40h] [ebp-120h]
  float v43; // [esp+40h] [ebp-120h]
  _BYTE v44[16]; // [esp+44h] [ebp-11Ch] BYREF
  float v45; // [esp+54h] [ebp-10Ch]
  float v46; // [esp+68h] [ebp-F8h]
  int v47[7]; // [esp+6Ch] [ebp-F4h] BYREF
  wchar_t Buffer[100]; // [esp+88h] [ebp-D8h] BYREF
  int v49; // [esp+15Ch] [ebp-4h]

  v2 = *((_DWORD *)GameClient::GroupManager::Instance() + 45);
  v37 = v2;
  if ( v2 == -1 )
  {
    for ( i = 2; i <= 8; ++i )
    {
      Control = CREDialog::GetControl((CREDialog *)this, i);
      if ( Control )
        (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)Control + 136))(Control, 0);
    }
    v5 = CREDialog::GetControl((CREDialog *)this, 1);
    return (struct CREControl *)(*(int (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v5 + 136))(v5, 1);
  }
  else
  {
    v34 = v2;
    v7 = GameClient::GroupManager::Instance();
    CorpMemberInfo = GameClient::GroupManager::GetCorpMemberInfo(v7, v34);
    if ( CorpMemberInfo )
    {
      for ( j = 3; j <= 8; ++j )
      {
        v10 = CREDialog::GetControl((CREDialog *)this, j);
        if ( v10 )
          (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v10 + 136))(v10, 1);
      }
      sub_1000F1DC();
      v49 = 0;
      v11 = Game::Instance();
      World::GetWorldBBox(*((World **)v11 + 25), (struct BBox *)v44);
      v12 = sub_1000194C(0);
      v13 = v12;
      if ( v12 )
      {
        if ( *(_DWORD *)(v12 + 4) == v37 )
        {
          v14 = CREDialog::GetControl((CREDialog *)this, 1);
          (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v14 + 136))(v14, 0);
          v15 = CREDialog::GetControl((CREDialog *)this, 2);
          (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v15 + 136))(v15, 1);
          v16 = (const char *)std::string::c_str(v13 + 8);
          v17 = atow(v16);
          CREStatic::SetText(this[971], v17);
          v35 = *(_DWORD *)(v13 + 292);
          v18 = GameClient::RobotManager::Instance();
          Robot = GameClient::RobotManager::GetRobot(v18, v35);
          std::wstring::wstring(v47);
          v20 = v46;
          LOBYTE(v49) = 1;
          if ( Robot )
          {
            v38 = v20 - *((float *)Robot + 8);
            v32 = v38;
            v39 = *((float *)Robot + 6) - v45;
          }
          else
          {
            v40 = v20 - *((float *)CorpMemberInfo + 10);
            v32 = v40;
            v39 = *((float *)CorpMemberInfo + 9) - v45;
          }
          sub_10008170(v39, v32, (int)v47);
          v21 = (const wchar_t *)std::wstring::c_str(v47);
          CREStatic::SetText(this[973], v21);
          sub_10011A4F(Buffer, (size_t)L"%d/%d", (int)*((float *)CorpMemberInfo + 11));
          CREStatic::SetText(this[974], Buffer);
        }
        else
        {
          v22 = CREDialog::GetControl((CREDialog *)this, 1);
          (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v22 + 136))(v22, 1);
          v23 = CREDialog::GetControl((CREDialog *)this, 2);
          (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v23 + 136))(v23, 0);
          v24 = (const char *)std::string::c_str((char *)CorpMemberInfo + 4);
          v25 = atow(v24);
          CREStatic::SetText(this[971], v25);
          v36 = *((_DWORD *)CorpMemberInfo + 8);
          v26 = GameClient::RobotManager::Instance();
          v27 = GameClient::RobotManager::GetRobot(v26, v36);
          std::wstring::wstring(v47);
          v28 = v46;
          LOBYTE(v49) = 2;
          if ( v27 )
          {
            v41 = v28 - *((float *)v27 + 8);
            v33 = v41;
            v42 = *((float *)v27 + 6) - v45;
          }
          else
          {
            v43 = v28 - *((float *)CorpMemberInfo + 10);
            v33 = v43;
            v42 = *((float *)CorpMemberInfo + 9) - v45;
          }
          sub_10008170(v42, v33, (int)v47);
          v29 = (const wchar_t *)std::wstring::c_str(v47);
          CREStatic::SetText(this[973], v29);
          sub_10011A4F(Buffer, (size_t)L"%d/%d", (int)*((float *)CorpMemberInfo + 11));
          CREStatic::SetText(this[974], Buffer);
        }
        LOBYTE(v49) = 0;
        std::wstring::~wstring(v47);
      }
      v49 = -1;
      return (struct CREControl *)sub_102C0750(v44);
    }
    else
    {
      for ( k = 2; k <= 8; ++k )
      {
        v31 = CREDialog::GetControl((CREDialog *)this, k);
        if ( v31 )
          (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v31 + 136))(v31, 0);
      }
      result = CREDialog::GetControl((CREDialog *)this, 1);
      if ( result )
        return (struct CREControl *)(*(int (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)result + 136))(
                                      result,
                                      0);
    }
  }
  return result;
}
