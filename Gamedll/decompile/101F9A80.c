/*
 * func-name: ??0GroupManager@GameClient@@QAE@XZ_0
 * func-address: 0x101f9a80
 * callers: 0x10014295
 * callees: 0x100093c7, 0x1000a222, 0x10010e3d, 0x10011e00, 0x10015401, 0x1001a15e, 0x102c9d98
 */

GameClient::GroupManager *__thiscall GameClient::GroupManager::GroupManager(GameClient::GroupManager *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  EventAttemper *v4; // eax
  _DWORD *v5; // eax
  EventAttemper *v6; // eax
  _DWORD *v7; // eax
  EventAttemper *v8; // eax
  _DWORD *v9; // eax
  EventAttemper *v10; // eax
  _DWORD *v11; // eax
  EventAttemper *v12; // eax
  _DWORD *v13; // eax
  EventAttemper *v14; // eax
  _DWORD *v15; // eax
  EventAttemper *v16; // eax
  _DWORD *v17; // eax
  EventAttemper *v18; // eax
  _DWORD *v19; // eax
  EventAttemper *v20; // eax
  _DWORD *v21; // eax
  EventAttemper *v22; // eax
  _DWORD *v23; // eax
  EventAttemper *v24; // eax
  _DWORD *v25; // eax
  EventAttemper *v26; // eax
  _DWORD *v27; // eax
  EventAttemper *v28; // eax
  char v30; // [esp+97h] [ebp-11h] BYREF
  GameClient::GroupManager *v31; // [esp+98h] [ebp-10h]
  int v32; // [esp+A4h] [ebp-4h]

  v31 = this;
  *(_DWORD *)this = &GameClient::GroupManager::`vftable';
  sub_1000A222((int)&v30, (int)&v30);
  v32 = 0;
  sub_100093C7((int)&v30, (int)&v30);
  LOBYTE(v32) = 1;
  sub_1001A15E((int)&v30, (int)&v30);
  LOBYTE(v32) = 2;
  sub_10010E3D((int)&v30, (int)&v30);
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = -1;
  *((float *)this + 46) = 0.0;
  *((float *)this + 47) = 0.0;
  *((float *)this + 48) = 0.0;
  LOBYTE(v32) = 4;
  std::string::string((char *)this + 196);
  LOBYTE(v32) = 5;
  v2 = sub_10015401();
  *((_DWORD *)this + 57) = v2;
  *(_BYTE *)(v2 + 17) = 1;
  *(_DWORD *)(*((_DWORD *)this + 57) + 4) = *((_DWORD *)this + 57);
  **((_DWORD **)this + 57) = *((_DWORD *)this + 57);
  *(_DWORD *)(*((_DWORD *)this + 57) + 8) = *((_DWORD *)this + 57);
  *((_DWORD *)this + 58) = 0;
  LOBYTE(v32) = 6;
  sub_10011E00((int)&v30, (int)&v30);
  LOBYTE(v32) = 7;
  v3 = operator new(4u);
  if ( v3 )
    *v3 = &GameClient::AddToGroupObserver::`vftable';
  v4 = (EventAttemper *)EventAttemper::Instance(19, 5400);
  EventAttemper::AddObserver(v4);
  v5 = operator new(4u);
  if ( v5 )
    *v5 = &GameClient::RemovedFromGroupObserver::`vftable';
  v6 = (EventAttemper *)EventAttemper::Instance(19, 5401);
  EventAttemper::AddObserver(v6);
  v7 = operator new(4u);
  if ( v7 )
    *v7 = &GameClient::ChangeLeaderObserver::`vftable';
  v8 = (EventAttemper *)EventAttemper::Instance(19, 5402);
  EventAttemper::AddObserver(v8);
  v9 = operator new(4u);
  if ( v9 )
    *v9 = &GameClient::DismissGroupObserver::`vftable';
  v10 = (EventAttemper *)EventAttemper::Instance(19, 5404);
  EventAttemper::AddObserver(v10);
  v11 = operator new(4u);
  if ( v11 )
    *v11 = &GameClient::UpdateGroupMemberInfoObserver::`vftable';
  v12 = (EventAttemper *)EventAttemper::Instance(19, 5410);
  EventAttemper::AddObserver(v12);
  v13 = operator new(4u);
  if ( v13 )
    *v13 = &GameClient::UpdateGroupCmdObserver::`vftable';
  v14 = (EventAttemper *)EventAttemper::Instance(19, 5501);
  EventAttemper::AddObserver(v14);
  v15 = operator new(4u);
  if ( v15 )
    *v15 = &GameClient::UpdateMemberIDObserver::`vftable';
  v16 = (EventAttemper *)EventAttemper::Instance(19, 5403);
  EventAttemper::AddObserver(v16);
  v17 = operator new(4u);
  if ( v17 )
    *v17 = &GameClient::UpdateCommandoObserver::`vftable';
  v18 = (EventAttemper *)EventAttemper::Instance(19, 3020);
  EventAttemper::AddObserver(v18);
  v19 = operator new(4u);
  if ( v19 )
    *v19 = &GameClient::UpdateCorpMemberInfoObserver::`vftable';
  v20 = (EventAttemper *)EventAttemper::Instance(19, 3022);
  EventAttemper::AddObserver(v20);
  v21 = operator new(4u);
  if ( v21 )
    *v21 = &GameClient::UpdateCorpCmdObserver::`vftable';
  v22 = (EventAttemper *)EventAttemper::Instance(19, 3030);
  EventAttemper::AddObserver(v22);
  v23 = operator new(4u);
  if ( v23 )
    *v23 = &GameClient::InviteObserver::`vftable';
  v24 = (EventAttemper *)EventAttemper::Instance(21, 21012);
  EventAttemper::AddObserver(v24);
  v25 = operator new(4u);
  if ( v25 )
    *v25 = &GameClient::InviteResObserver::`vftable';
  v26 = (EventAttemper *)EventAttemper::Instance(21, 21011);
  EventAttemper::AddObserver(v26);
  v27 = operator new(4u);
  if ( v27 )
    *v27 = &GameClient::UpdateCorpInfoObserver::`vftable';
  v28 = (EventAttemper *)EventAttemper::Instance(15, 15022);
  EventAttemper::AddObserver(v28);
  return this;
}
