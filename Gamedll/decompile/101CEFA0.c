/*
 * func-name: ?Cast@AAlarm@GameClient@@UAEXM@Z_0
 * func-address: 0x101cefa0
 * callers: 0x10013d81
 * callees: 0x10001122, 0x1000516e, 0x10005c40, 0x10006a19, 0x100076c6, 0x10008170, 0x1000f1dc, 0x102c0750, 0x102c8d6c, 0x102c9d62, 0x102c9ea8
 */

void __thiscall GameClient::AAlarm::Cast(GameClient::AAlarm *this, float a2)
{
  GameClient::WorldObject *v3; // ecx
  int v4; // ebp
  struct Game *v5; // eax
  CDlgMgr *v6; // eax
  struct CTYDialog *Dialog; // eax
  const char *v8; // eax
  const wchar_t *v9; // eax
  int v10; // eax
  CDlgMgr *v11; // eax
  struct CTYDialog *v12; // eax
  CRadarMapUI *v13; // eax
  int v14; // [esp+Ch] [ebp-90h]
  float v15; // [esp+10h] [ebp-8Ch]
  float v16[10]; // [esp+2Ch] [ebp-70h] BYREF
  float v17[7]; // [esp+54h] [ebp-48h] BYREF
  _BYTE v18[4]; // [esp+70h] [ebp-2Ch] BYREF
  int v19[6]; // [esp+74h] [ebp-28h] BYREF
  int v20; // [esp+98h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+9Ch] [ebp+0h]

  v3 = (GameClient::WorldObject *)*((_DWORD *)this + 8);
  if ( v3 )
  {
    if ( GameClient::WorldObject::IsLocal(v3) )
    {
      v4 = *((_DWORD *)this + 2);
      sub_1000F1DC();
      v20 = 0;
      v5 = Game::Instance();
      World::GetWorldBBox(*((World **)v5 + 25), (struct BBox *)v16);
      std::wstring::wstring(v19);
      v16[0] = v17[0] - *((float *)this + 41);
      LOBYTE(retaddr) = 1;
      v15 = v16[0];
      v16[0] = *((float *)this + 39) - v16[5];
      sub_10008170(v16[0], v15, (int)v19);
      v6 = (CDlgMgr *)CDlgMgr::Instance();
      Dialog = CDlgMgr::GetDialog(v6);
      if ( _RTDynamicCast(Dialog, 28, 0, &CTYDialog `RTTI Type Descriptor', &CAlarmMessageUI `RTTI Type Descriptor') )
      {
        v8 = (const char *)std::string::c_str(v4 + 260);
        v9 = atow(v8);
        v10 = std::operator+<wchar_t>(v17, v18, v9);
        v14 = *((_DWORD *)this + 3);
        LOBYTE(v20) = 2;
        CAlarmMessageUI::AddAlarmMessage(v14, v10);
        LOBYTE(v20) = 1;
        std::wstring::~wstring(v17);
      }
      v11 = (CDlgMgr *)CDlgMgr::Instance();
      v12 = CDlgMgr::GetDialog(v11);
      v13 = (CRadarMapUI *)_RTDynamicCast(
                             v12,
                             0,
                             &CTYDialog `RTTI Type Descriptor',
                             &CRadarMapUI `RTTI Type Descriptor',
                             0);
      if ( v13 )
        CRadarMapUI::AddAlarmArea(v13, *((_DWORD *)this + 3), *((float *)this + 39), *((float *)this + 41));
      LOBYTE(v20) = 0;
      std::wstring::~wstring(v18);
      v20 = -1;
      sub_102C0750(v16);
    }
    GameClient::Aura::Cast(this, a2);
  }
}
