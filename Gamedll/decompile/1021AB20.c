/*
 * func-name: sub_1021AB20
 * func-address: 0x1021ab20
 * callers: 0x10001ea1
 * callees: 0x1000516e, 0x10009b5b, 0x1000d6de, 0x1000e56b, 0x102bdcd0, 0x102c9d98
 */

char __thiscall sub_1021AB20(_DWORD *this)
{
  _DWORD *v2; // eax
  EventAttemper *v3; // eax
  _DWORD *v4; // eax
  EventAttemper *v5; // eax
  _DWORD *v6; // eax
  EventAttemper *v7; // eax
  _DWORD *v8; // eax
  EventAttemper *v9; // eax
  _DWORD *v10; // eax
  EventAttemper *v11; // eax
  _DWORD *v12; // eax
  EventAttemper *v13; // eax
  _DWORD *v14; // eax
  EventAttemper *v15; // eax
  _DWORD *v16; // eax
  EventAttemper *v17; // eax
  _DWORD *v18; // eax
  EventAttemper *v19; // eax
  _DWORD *v20; // eax
  EventAttemper *v21; // eax
  int v22; // eax
  int v23; // esi
  _DWORD v25[5]; // [esp+30h] [ebp-5Ch] BYREF
  void *v26; // [esp+44h] [ebp-48h]
  const char *v27; // [esp+48h] [ebp-44h] BYREF
  int v28; // [esp+4Ch] [ebp-40h] BYREF
  int v29; // [esp+50h] [ebp-3Ch]
  int v30; // [esp+54h] [ebp-38h]
  int v31; // [esp+58h] [ebp-34h]
  int v32; // [esp+5Ch] [ebp-30h]
  int v33; // [esp+60h] [ebp-2Ch]
  unsigned int v34; // [esp+64h] [ebp-28h]
  int v35; // [esp+68h] [ebp-24h]
  int v36; // [esp+6Ch] [ebp-20h]
  int *v37; // [esp+78h] [ebp-14h]
  _DWORD *v38; // [esp+7Ch] [ebp-10h]
  int v39; // [esp+88h] [ebp-4h]

  v2 = operator new(4u);
  if ( v2 )
    *v2 = &GameClient::LS_Connect_MU_Observer::`vftable';
  v3 = (EventAttemper *)EventAttemper::Instance(9, 2010);
  v34 = 4;
  this[3] = EventAttemper::AddObserver(v3);
  v4 = operator new(v34);
  if ( v4 )
    *v4 = &GameClient::LS_Vailid_MU_Observer::`vftable';
  v5 = (EventAttemper *)EventAttemper::Instance(10, 10000);
  v34 = 4;
  this[4] = EventAttemper::AddObserver(v5);
  v6 = operator new(v34);
  if ( v6 )
    *v6 = &GameClient::GT_Connect_MU_Observer::`vftable';
  v7 = (EventAttemper *)EventAttemper::Instance(9, 2011);
  v34 = 4;
  this[5] = EventAttemper::AddObserver(v7);
  v8 = operator new(v34);
  if ( v8 )
    *v8 = &GameClient::CS_GetCharacterList_MU_Observer::`vftable';
  v9 = (EventAttemper *)EventAttemper::Instance(13, 13000);
  v34 = 4;
  this[6] = EventAttemper::AddObserver(v9);
  v10 = operator new(v34);
  if ( v10 )
    *v10 = &GameClient::CS_OnlineCharacter_MU_Observer::`vftable';
  v11 = (EventAttemper *)EventAttemper::Instance(13, 13004);
  v34 = 4;
  this[7] = EventAttemper::AddObserver(v11);
  v12 = operator new(v34);
  if ( v12 )
    *v12 = &GameClient::BS_GetBattleList_MU_Observer::`vftable';
  v13 = (EventAttemper *)EventAttemper::Instance(17, 17006);
  v34 = 4;
  this[8] = EventAttemper::AddObserver(v13);
  v14 = operator new(v34);
  if ( v14 )
    *v14 = &GameClient::BS_GetEntry_MU_Observer::`vftable';
  v15 = (EventAttemper *)EventAttemper::Instance(17, 17012);
  v34 = 4;
  this[9] = EventAttemper::AddObserver(v15);
  v16 = operator new(v34);
  if ( v16 )
    *v16 = &GameClient::QS_ApplyIntoGame_MU_Observer::`vftable';
  v17 = (EventAttemper *)EventAttemper::Instance(18, 18000);
  v34 = 4;
  this[10] = EventAttemper::AddObserver(v17);
  v18 = operator new(v34);
  if ( v18 )
    *v18 = &GameClient::GS_Connect_MU_Observer::`vftable';
  v19 = (EventAttemper *)EventAttemper::Instance(9, 2012);
  v34 = 4;
  this[11] = EventAttemper::AddObserver(v19);
  v20 = operator new(v34);
  if ( v20 )
    *v20 = &GameClient::GS_InitBattle_MU_Observer::`vftable';
  v21 = (EventAttemper *)EventAttemper::Instance(19, 4050);
  v34 = 0;
  v37 = (int *)&v27;
  v26 = &unk_103195D0;
  this[12] = EventAttemper::AddObserver(v21);
  std::string::string(&v27, v26);
  v39 = 0;
  Game::Instance();
  v39 = -1;
  Game::NewMap((char)v27, v28, v29, v30, v31, v32, v33, v34);
  v37 = &v28;
  v27 = "Game.AIUser";
  this[13] = 0;
  std::string::string(&v28, v27);
  v38 = v25;
  v39 = 1;
  std::string::string(v25, "AIUserCharacterCount");
  LOBYTE(v39) = 2;
  Engine::Instance(v25[0]);
  v39 = -1;
  v22 = sub_102BDCD0(v25[0], v25[1], v25[2], v25[3], v25[4], v26, v27, v28, v29, v30, v31, v32, v33, v34);
  if ( v22 )
  {
    v23 = v22;
    do
    {
      sub_1000E56B(v35, v36);
      sub_10009B5B(v35, v36);
      LogPrintf("Connect login server...");
      --v23;
    }
    while ( v23 );
  }
  return 1;
}
