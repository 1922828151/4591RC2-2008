/*
 * func-name: ??0FuncManager@GameClient@@QAE@XZ_0
 * func-address: 0x101cb280
 * callers: 0x10012c74
 * callees: 0x10011973, 0x102c9d98
 */

GameClient::FuncManager *__thiscall GameClient::FuncManager::FuncManager(GameClient::FuncManager *this)
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
  char v37; // [esp+C7h] [ebp-11h] BYREF
  GameClient::FuncManager *v38; // [esp+C8h] [ebp-10h]
  int v39; // [esp+D4h] [ebp-4h]

  v38 = this;
  *(_DWORD *)this = &GameClient::FuncManager::`vftable';
  sub_10011973((int)&v37, (int)&v37);
  v39 = 0;
  v2 = operator new(4u);
  if ( v2 )
    *v2 = &GameClient::FunctionUseObserver::`vftable';
  v3 = (EventAttemper *)EventAttemper::Instance(19, 5301);
  EventAttemper::AddObserver(v3);
  v4 = operator new(4u);
  if ( v4 )
    *v4 = &GameClient::FunctionEndUseObserver::`vftable';
  v5 = (EventAttemper *)EventAttemper::Instance(19, 5302);
  EventAttemper::AddObserver(v5);
  v6 = operator new(4u);
  if ( v6 )
    *v6 = &GameClient::FunctionKBObserver::`vftable';
  v7 = (EventAttemper *)EventAttemper::Instance(9, 4401);
  EventAttemper::AddObserver(v7);
  v8 = operator new(4u);
  if ( v8 )
    *v8 = &GameClient::UpdateAllStockObserver::`vftable';
  v9 = (EventAttemper *)EventAttemper::Instance(19, 5310);
  EventAttemper::AddObserver(v9);
  v10 = operator new(4u);
  if ( v10 )
    *v10 = &GameClient::UpdateStockObserver::`vftable';
  v11 = (EventAttemper *)EventAttemper::Instance(19, 5311);
  EventAttemper::AddObserver(v11);
  v12 = operator new(4u);
  if ( v12 )
    *v12 = &GameClient::NeedPasswordObserver::`vftable';
  v13 = (EventAttemper *)EventAttemper::Instance(19, 5201);
  EventAttemper::AddObserver(v13);
  v14 = operator new(4u);
  if ( v14 )
    *v14 = &GameClient::SelectRebornLocObserver::`vftable';
  v15 = (EventAttemper *)EventAttemper::Instance(19, 5330);
  EventAttemper::AddObserver(v15);
  v16 = operator new(4u);
  if ( v16 )
    *v16 = &GameClient::OccupyStartObserver::`vftable';
  v17 = (EventAttemper *)EventAttemper::Instance(19, 5210);
  EventAttemper::AddObserver(v17);
  v18 = operator new(4u);
  if ( v18 )
    *v18 = &GameClient::WritingStartObserver::`vftable';
  v19 = (EventAttemper *)EventAttemper::Instance(19, 5211);
  EventAttemper::AddObserver(v19);
  v20 = operator new(4u);
  if ( v20 )
    *v20 = &GameClient::SyncNationObserver::`vftable';
  v21 = (EventAttemper *)EventAttemper::Instance(19, 5213);
  EventAttemper::AddObserver(v21);
  v22 = operator new(4u);
  if ( v22 )
    *v22 = &GameClient::OccupyEndObserver::`vftable';
  v23 = (EventAttemper *)EventAttemper::Instance(19, 5212);
  EventAttemper::AddObserver(v23);
  v24 = operator new(4u);
  if ( v24 )
    *v24 = &GameClient::SyncPowerEnergyObserver::`vftable';
  v25 = (EventAttemper *)EventAttemper::Instance(19, 5305);
  EventAttemper::AddObserver(v25);
  v26 = operator new(4u);
  if ( v26 )
    *v26 = &GameClient::SyncPowerHyperEnergyObserver::`vftable';
  v27 = (EventAttemper *)EventAttemper::Instance(19, 5306);
  EventAttemper::AddObserver(v27);
  v28 = operator new(4u);
  if ( v28 )
    *v28 = &GameClient::SyncPowerHeatObserver::`vftable';
  v29 = (EventAttemper *)EventAttemper::Instance(19, 5307);
  EventAttemper::AddObserver(v29);
  v30 = operator new(4u);
  if ( v30 )
    *v30 = &GameClient::PowerTransportObserver::`vftable';
  v31 = (EventAttemper *)EventAttemper::Instance(19, 5315);
  EventAttemper::AddObserver(v31);
  v32 = operator new(4u);
  if ( v32 )
    *v32 = &GameClient::UpdateQueuePosObserver::`vftable';
  v33 = (EventAttemper *)EventAttemper::Instance(19, 5313);
  EventAttemper::AddObserver(v33);
  v34 = operator new(4u);
  if ( v34 )
    *v34 = &GameClient::UpdateSatellitePosObserver::`vftable';
  v35 = (EventAttemper *)EventAttemper::Instance(19, 5700);
  EventAttemper::AddObserver(v35);
  return this;
}
