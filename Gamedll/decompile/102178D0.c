/*
 * func-name: sub_102178D0
 * func-address: 0x102178d0
 * callers: 0x10012ed6
 * callees: 0x100016fe, 0x1000e56b, 0x1001055a, 0x102c9d62, 0x102c9d98
 */

char __thiscall sub_102178D0(int this, int a2)
{
  _DWORD *v3; // eax
  EventAttemper *v4; // eax
  _DWORD *v5; // eax
  EventAttemper *v6; // eax
  struct GameClient::LocalUser *UserByIndex; // edi
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // [esp-34h] [ebp-BCh]
  unsigned int v14; // [esp-34h] [ebp-BCh]
  int v15; // [esp-30h] [ebp-B8h]
  int v16; // [esp-2Ch] [ebp-B4h]
  int v17; // [esp-24h] [ebp-ACh]
  unsigned __int16 v18; // [esp+4h] [ebp-84h]
  unsigned int v19; // [esp+8h] [ebp-80h]
  Outpop::Utility::Ref_Object *v20; // [esp+20h] [ebp-68h] BYREF
  _BYTE v21[28]; // [esp+24h] [ebp-64h] BYREF
  _BYTE v22[28]; // [esp+40h] [ebp-48h] BYREF
  _BYTE v23[28]; // [esp+5Ch] [ebp-2Ch] BYREF
  int v24; // [esp+84h] [ebp-4h]

  v3 = operator new(4u);
  if ( v3 )
    *v3 = &GameClient::GS_Connect_InBattle_Observer::`vftable';
  v4 = (EventAttemper *)EventAttemper::Instance(9, 2012);
  *(_DWORD *)(this + 24) = EventAttemper::AddObserver(v4);
  v5 = operator new(4u);
  if ( v5 )
    *v5 = &GameClient::GS_Battle_Initialize_Observer::`vftable';
  v6 = (EventAttemper *)EventAttemper::Instance(19, 4050);
  *(_DWORD *)(this + 28) = EventAttemper::AddObserver(v6);
  UserByIndex = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0);
  if ( !UserByIndex )
    return 0;
  v20 = 0;
  v19 = *(_DWORD *)(this + 16);
  v18 = *(_WORD *)(this + 20);
  v24 = 0;
  v9 = Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v21, v18, v19);
  v17 = *(_DWORD *)(this + 12);
  v16 = *((_DWORD *)UserByIndex + 18);
  v13 = *((_DWORD *)UserByIndex + 1);
  LOBYTE(v24) = 1;
  sub_1000E56B(v13, v9);
  sub_100016FE(v14, v15, v16, 9, v17, 19, (int)&v20, 0, 0, 0, 0xFFFF, 0xFFFF, 0xFFFF, 10000, 0, 5);
  LOBYTE(v24) = 0;
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v21);
  v24 = -1;
  if ( v20 )
    Outpop::Utility::Ref_Object::release(v20);
  std::wstring::wstring(v21, L"IN_CONNECT_GAMESERVER");
  v24 = 2;
  Precacher::GetText(v23, v21);
  LOBYTE(v24) = 4;
  std::wstring::~wstring(v21);
  v10 = operator new(4u);
  if ( v10 )
    *v10 = &GameClient::ConnectMsgHandler::`vftable';
  v11 = std::wstring::c_str(v23);
  std::wstring::wstring(v22, v11);
  LOBYTE(v24) = 5;
  v12 = CDlgMgr::Instance();
  CDlgMgr::ConfirmMessage(v12);
  LOBYTE(v24) = 4;
  std::wstring::~wstring(v22);
  v24 = -1;
  std::wstring::~wstring(v23);
  return 1;
}
