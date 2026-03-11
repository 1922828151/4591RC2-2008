/*
 * func-name: sub_10217FE0
 * func-address: 0x10217fe0
 * callers: 0x10015c76
 * callees: 0x10001195, 0x100025cc, 0x10003bd9, 0x1000516e, 0x100070c2, 0x100074be, 0x1000766c, 0x1000a097, 0x1000aa9c, 0x1000b8a2, 0x1000dbd9, 0x1000e674, 0x100167b6, 0x10016dba, 0x10017c29, 0x10018e71, 0x10019092, 0x102bdf50, 0x102c9d62, 0x102c9d98
 */

char __thiscall sub_10217FE0(int this, int a2)
{
  GameClient::GroupManager *v3; // eax
  _DWORD *v4; // eax
  EventAttemper *v5; // eax
  _DWORD *v6; // eax
  EventAttemper *v7; // eax
  _DWORD *v8; // eax
  EventAttemper *v9; // eax
  CDlgMgr *v10; // eax
  int v11; // edi
  int v12; // eax
  unsigned __int8 (__thiscall *v13)(int); // edx
  struct Game *v15; // eax
  struct Game *v16; // eax
  CameraHandler *v17; // eax
  struct Game *v18; // eax
  int Actor; // ebp
  DWORD TickCount; // eax
  int v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // edi
  GameClient::Robot *v24; // eax
  int v25; // eax
  int v26; // ecx
  CLoginUI *v27; // eax
  CLoginUI *v28; // eax
  CDlgMgr *v29; // eax
  CDlgMgr *v30; // eax
  _DWORD v31[7]; // [esp+Ch] [ebp-140h] BYREF
  int v32; // [esp+28h] [ebp-124h] BYREF
  char v33; // [esp+2Ch] [ebp-120h]
  int v34; // [esp+30h] [ebp-11Ch]
  int v35; // [esp+34h] [ebp-118h]
  int v36; // [esp+38h] [ebp-114h]
  int v37; // [esp+3Ch] [ebp-110h]
  unsigned int v38; // [esp+40h] [ebp-10Ch]
  struct CTYDialog *v39; // [esp+44h] [ebp-108h]
  int v40; // [esp+48h] [ebp-104h]
  GameClient::Robot *v41; // [esp+58h] [ebp-F4h]
  int *v42; // [esp+5Ch] [ebp-F0h]
  float v43[3]; // [esp+60h] [ebp-ECh] BYREF
  int v44[3]; // [esp+6Ch] [ebp-E0h] BYREF
  _BYTE v45[4]; // [esp+78h] [ebp-D4h] BYREF
  _BYTE v46[24]; // [esp+7Ch] [ebp-D0h] BYREF
  _BYTE v47[64]; // [esp+94h] [ebp-B8h] BYREF
  _BYTE v48[28]; // [esp+D4h] [ebp-78h] BYREF
  int v49; // [esp+F4h] [ebp-58h] BYREF
  _BYTE v50[64]; // [esp+FCh] [ebp-50h] BYREF
  int v51; // [esp+148h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+14Ch] [ebp+0h]

  sub_100074BE();
  GameClient::BattleFieldManager::ClearBattleField(GameClient::BattleFieldManager::s_pInstance);
  GameClient::BattleFieldManager::ClearBattleFieldIntro(GameClient::BattleFieldManager::s_pInstance);
  GameClient::LocalUserManager::ClearUser(GameClient::LocalUserManager::s_pInstance);
  v3 = GameClient::GroupManager::Instance();
  GameClient::GroupManager::Clear(v3);
  v4 = operator new(4u);
  if ( v4 )
    *v4 = &GameClient::LS_Connect_Observer::`vftable';
  v5 = (EventAttemper *)EventAttemper::Instance(9, 2010);
  v38 = 4;
  *(_DWORD *)(this + 68) = EventAttemper::AddObserver(v5);
  v6 = operator new(v38);
  if ( v6 )
    *v6 = &GameClient::LS_ValidatePassword_LoginWorld_Observer::`vftable';
  v7 = (EventAttemper *)EventAttemper::Instance(10, 10000);
  v38 = 4;
  *(_DWORD *)(this + 72) = EventAttemper::AddObserver(v7);
  v8 = operator new(v38);
  if ( v8 )
    *v8 = &GameClient::GT_Connect_Observer::`vftable';
  v9 = (EventAttemper *)EventAttemper::Instance(9, 2011);
  *(_DWORD *)(this + 76) = EventAttemper::AddObserver(v9);
  *((_BYTE *)Game::Instance() + 6) = 0;
  v10 = (CDlgMgr *)CDlgMgr::Instance();
  CDlgMgr::HideAllUI(v10);
  v51 = 0;
  if ( operator new(0x30u) )
    v11 = sub_10019092();
  else
    v11 = 0;
  sub_1000DBD9((int)v39, v40);
  v42 = &v32;
  v51 = 1;
  v49 = 0;
  std::string::string(&v32, "Game.User");
  v41 = (GameClient::Robot *)v31;
  LOBYTE(v51) = 2;
  std::string::string(v31, "LoginWorld");
  LOBYTE(v51) = 3;
  Engine::Instance(v45);
  v12 = sub_102BDF50(v31[0], v31[1], v31[2], v31[3], v31[4], v31[5], v31[6], v32, v33, v34, v35, v36, v37, v38, v39);
  std::string::operator=(v50, v12);
  LOBYTE(retaddr) = 1;
  std::string::~string(v46);
  v13 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 4);
  v39 = (struct CTYDialog *)&v49;
  if ( v13(v11) )
  {
    *(_DWORD *)(dword_103B665C + 4) = v11;
    *((_BYTE *)Game::Instance() + 6) = 1;
    v43[0] = 0.0;
    v43[1] = 0.0;
    v43[2] = 0.0;
    *(float *)&v38 = COERCE_FLOAT(v43);
    *(float *)v44 = 0.0;
    *(float *)&v44[1] = 0.0;
    *(float *)&v44[2] = 0.0;
    v15 = Game::Instance();
    World::GetDefaultCameraPos(*((World **)v15 + 25), (struct Vector *)v38);
    *(float *)&v38 = COERCE_FLOAT(v44);
    v16 = Game::Instance();
    World::GetDefaultCameraDir(*((World **)v16 + 25), (struct Vector *)v38);
    *(float *)&v38 = 90.0;
    *(float *)&v37 = 0.0;
    v36 = sub_10018E71(v47, (int)v44);
    v35 = (int)v43;
    v17 = CameraHandler::Instance();
    CameraHandler::setToView(v17, (struct Vector *)v35, (struct Matrix *)v36, *(float *)&v37, *(float *)&v38);
    std::string::string(v48, "RobotPos");
    *(float *)&v38 = COERCE_FLOAT(v48);
    LOBYTE(v51) = 5;
    v18 = Game::Instance();
    Actor = World::FindActor(*((_DWORD *)v18 + 25), v38);
    if ( Actor )
    {
      TickCount = GetTickCount();
      srand(TickCount);
      v21 = *(_DWORD *)(this + 84);
      if ( v21 )
        v22 = (*(_DWORD *)(this + 88) - v21) >> 4;
      else
        v22 = 0;
      v23 = rand() % v22;
      v24 = (GameClient::Robot *)operator new(0x5D4u);
      v41 = v24;
      LOBYTE(v51) = 6;
      if ( v24 )
        v25 = GameClient::Robot::Robot(v24, 0xFFFFFFFF);
      else
        v25 = 0;
      *(_DWORD *)(this + 96) = v25;
      *(_DWORD *)(v25 + 360) = 0;
      v26 = *(_DWORD *)(this + 84);
      LOBYTE(v51) = 5;
      if ( !v26 || v23 >= (*(_DWORD *)(this + 88) - v26) >> 4 )
        _invalid_parameter_noinfo();
      GameClient::Robot::addSystemPart(*(GameClient::Robot **)(this + 96), *(_DWORD *)(this + 84) + 16 * v23);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 96) + 36))(*(_DWORD *)(this + 96), Actor + 856);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 96) + 40))(*(_DWORD *)(this + 96), Actor + 868);
      *(_DWORD *)(*(_DWORD *)(this + 96) + 368) |= 0x80u;
      sub_10003BD9(*(_DWORD *)(this + 96));
    }
    v27 = (CLoginUI *)operator new(0xF28u);
    v41 = v27;
    LOBYTE(v51) = 7;
    if ( v27 )
      v28 = CLoginUI::CLoginUI(v27);
    else
      v28 = 0;
    v38 = (unsigned int)v28;
    LOBYTE(v51) = 5;
    v29 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::AddDialog(v29, v39);
    *(float *)&v38 = 0.0;
    v37 = 1;
    v36 = 1;
    v35 = 9;
    v30 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v30);
    LOBYTE(v51) = 1;
    std::string::~string(v48);
    v51 = -1;
    sub_1000E674((int)v39, v40);
    return 1;
  }
  else
  {
    v51 = -1;
    sub_1000E674((int)v39, v40);
    return 0;
  }
}
