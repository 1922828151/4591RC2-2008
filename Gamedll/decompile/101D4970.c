/*
 * func-name: sub_101D4970
 * func-address: 0x101d4970
 * callers: 0x100173a0
 * callees: 0x1000204a, 0x1000533a, 0x10010bae, 0x10010f8c, 0x10012837, 0x100186ec
 */

void __thiscall sub_101D4970(_DWORD **this, float a2)
{
  CRETimer *v3; // eax
  int **v4; // edi
  _DWORD **v5; // esi
  CRETimer *v6; // eax
  CRETimer *v7; // eax
  GameClient::AuraManager *v8; // eax
  CRETimer *v9; // eax
  CRETimer *v10; // eax
  CRETimer *v11; // eax
  CRETimer *v12; // eax
  SoundMgr *v13; // eax
  CRETimer *v14; // eax
  int v15; // [esp+8h] [ebp-10h]
  int v16; // [esp+Ch] [ebp-Ch]
  float v17; // [esp+14h] [ebp-4h]
  float v18; // [esp+1Ch] [ebp+4h]
  float v19; // [esp+1Ch] [ebp+4h]
  float v20; // [esp+1Ch] [ebp+4h]

  v3 = REGetGlobalTimer();
  CRETimer::StartMiniTimer(v3);
  v4 = (int **)*this[4];
  v5 = this + 3;
  while ( v4 != v5[1] )
  {
    (*(void (__stdcall **)(_DWORD))(*v4[3] + 32))(LODWORD(a2));
    if ( v4 == v5[1] )
      _invalid_parameter_noinfo();
    v4 = (int **)*v4;
  }
  v6 = REGetGlobalTimer();
  v17 = CRETimer::StopMiniTimer(v6);
  if ( v17 > 2.0 )
    LogPrintf("upObjMS: %.2f", v17);
  v7 = REGetGlobalTimer();
  CRETimer::StartMiniTimer(v7);
  v8 = GameClient::AuraManager::Instance();
  GameClient::AuraManager::Update(v8, a2);
  v9 = REGetGlobalTimer();
  v18 = CRETimer::StopMiniTimer(v9);
  if ( v18 > 2.0 )
    LogPrintf("upAuraMS: %.2f", v18);
  v10 = REGetGlobalTimer();
  CRETimer::StartMiniTimer(v10);
  sub_10010F8C(v15, v16);
  sub_100186EC();
  v11 = REGetGlobalTimer();
  v19 = CRETimer::StopMiniTimer(v11);
  if ( v19 > 2.0 )
    LogPrintf("upBltMS: %.2f", v19);
  v12 = REGetGlobalTimer();
  CRETimer::StartMiniTimer(v12);
  v13 = SoundMgr::Instance();
  SoundMgr::Update(v13);
  v14 = REGetGlobalTimer();
  v20 = CRETimer::StopMiniTimer(v14);
  if ( v20 > 2.0 )
    LogPrintf("upSndMS: %.2f", v20);
}
