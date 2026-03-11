/*
 * func-name: ??0EstabManager@GameClient@@QAE@XZ_0
 * func-address: 0x101ab3e0
 * callers: 0x10018ac5
 * callees: 0x100033a5, 0x1000614f, 0x102c9d98
 */

GameClient::EstabManager *__thiscall GameClient::EstabManager::EstabManager(GameClient::EstabManager *this)
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
  _DWORD *v22; // eax
  EventAttemper *v23; // eax
  _DWORD *v24; // eax
  EventAttemper *v25; // eax
  _DWORD *v26; // eax
  EventAttemper *v27; // eax
  _DWORD *v28; // eax
  EventAttemper *v29; // eax
  _DWORD *v30; // eax
  EventAttemper *v31; // eax
  _DWORD *v32; // eax
  EventAttemper *v33; // eax
  _DWORD *v34; // eax
  EventAttemper *v35; // eax
  _DWORD *v36; // eax
  EventAttemper *v37; // eax
  _DWORD *v38; // eax
  EventAttemper *v39; // eax
  char v41; // [esp+DFh] [ebp-11h] BYREF
  GameClient::EstabManager *v42; // [esp+E0h] [ebp-10h]
  int v43; // [esp+ECh] [ebp-4h]

  v42 = this;
  *(_DWORD *)this = &GameClient::EstabManager::`vftable';
  sub_1000614F((int)&v41, (int)&v41);
  v43 = 0;
  sub_100033A5((int)&v41, (int)&v41);
  LOBYTE(v43) = 1;
  v2 = operator new(4u);
  if ( v2 )
    *v2 = &GameClient::BoardRobotObserver::`vftable';
  v3 = (EventAttemper *)EventAttemper::Instance(19, 5320);
  EventAttemper::AddObserver(v3);
  v4 = operator new(4u);
  if ( v4 )
    *v4 = &GameClient::UnBoardRobotObserver::`vftable';
  v5 = (EventAttemper *)EventAttemper::Instance(19, 5321);
  EventAttemper::AddObserver(v5);
  v6 = operator new(4u);
  if ( v6 )
    *v6 = &GameClient::ChangeSeatObserver::`vftable';
  v7 = (EventAttemper *)EventAttemper::Instance(19, 5323);
  EventAttemper::AddObserver(v7);
  v8 = operator new(4u);
  if ( v8 )
    *v8 = &GameClient::CtlEsabTransformObserver::`vftable';
  v9 = (EventAttemper *)EventAttemper::Instance(19, 5322);
  EventAttemper::AddObserver(v9);
  v10 = operator new(4u);
  if ( v10 )
    *v10 = &GameClient::SyncEstabInfoObserver::`vftable';
  v11 = (EventAttemper *)EventAttemper::Instance(19, 5220);
  EventAttemper::AddObserver(v11);
  v12 = operator new(4u);
  if ( v12 )
    *v12 = &GameClient::EstabStateChangedObserver::`vftable';
  v13 = (EventAttemper *)EventAttemper::Instance(19, 5221);
  EventAttemper::AddObserver(v13);
  v14 = operator new(4u);
  if ( v14 )
    *v14 = &GameClient::UseEstabObserver::`vftable';
  v15 = (EventAttemper *)EventAttemper::Instance(19, 5214);
  EventAttemper::AddObserver(v15);
  v16 = operator new(4u);
  if ( v16 )
    *v16 = &GameClient::EndUseEstabObserver::`vftable';
  v17 = (EventAttemper *)EventAttemper::Instance(19, 5215);
  EventAttemper::AddObserver(v17);
  v18 = operator new(4u);
  if ( v18 )
    *v18 = &GameClient::EstabDoorState::`vftable';
  v19 = (EventAttemper *)EventAttemper::Instance(19, 5225);
  EventAttemper::AddObserver(v19);
  v20 = operator new(4u);
  if ( v20 )
    *v20 = &GameClient::CtlEsabHeartMoveP2PObserver::`vftable';
  v21 = (EventAttemper *)EventAttemper::Instance(9, 4358);
  EventAttemper::AddObserver(v21);
  v22 = operator new(4u);
  if ( v22 )
    *v22 = &GameClient::CtlEsabHeartPosObserver::`vftable';
  v23 = (EventAttemper *)EventAttemper::Instance(19, 5360);
  EventAttemper::AddObserver(v23);
  v24 = operator new(4u);
  if ( v24 )
    *v24 = &GameClient::CtlEsabHeartRotObserver::`vftable';
  v25 = (EventAttemper *)EventAttemper::Instance(19, 5361);
  EventAttemper::AddObserver(v25);
  v26 = operator new(4u);
  if ( v26 )
    *v26 = &GameClient::GS_Wheel_Move_Observer::`vftable';
  v27 = (EventAttemper *)EventAttemper::Instance(19, 5350);
  EventAttemper::AddObserver(v27);
  v28 = operator new(4u);
  if ( v28 )
    *v28 = &GameClient::GS_Pedrail_Move_Observer::`vftable';
  v29 = (EventAttemper *)EventAttemper::Instance(19, 5351);
  EventAttemper::AddObserver(v29);
  v30 = operator new(4u);
  if ( v30 )
    *v30 = &GameClient::GS_Suspend_Move_Observer::`vftable';
  v31 = (EventAttemper *)EventAttemper::Instance(19, 5352);
  EventAttemper::AddObserver(v31);
  v32 = operator new(4u);
  if ( v32 )
    *v32 = &GameClient::GS_Aircraft_Move_Observer::`vftable';
  v33 = (EventAttemper *)EventAttemper::Instance(19, 5353);
  EventAttemper::AddObserver(v33);
  v34 = operator new(4u);
  if ( v34 )
    *v34 = &GameClient::CtlEsabStageChangeObserver::`vftable';
  v35 = (EventAttemper *)EventAttemper::Instance(19, 5356);
  EventAttemper::AddObserver(v35);
  v36 = operator new(4u);
  if ( v36 )
    *v36 = &GameClient::SyncSeatRotationObserver::`vftable';
  v37 = (EventAttemper *)EventAttemper::Instance(19, 5380);
  EventAttemper::AddObserver(v37);
  v38 = operator new(4u);
  if ( v38 )
    *v38 = &GameClient::EstabOccupyObserver::`vftable';
  v39 = (EventAttemper *)EventAttemper::Instance(19, 5324);
  EventAttemper::AddObserver(v39);
  return this;
}
