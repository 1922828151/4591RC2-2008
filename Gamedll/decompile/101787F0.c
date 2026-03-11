/*
 * func-name: ?ClearRobot@Robot@GameClient@@QAEXXZ_0
 * func-address: 0x101787f0
 * callers: 0x1000762b
 * callees: 0x100084f4, 0x1000aff6, 0x10013327, 0x10014178
 */

void __thiscall GameClient::Robot::ClearRobot(GameClient::Robot *this)
{
  int v2; // ecx
  int v3; // eax
  GameClient::FlyweightManager *v4; // eax
  int v5; // ecx
  int v6; // eax
  GameClient::FlyweightManager *v7; // eax
  int v8; // ecx
  int v9; // eax
  GameClient::FlyweightManager *v10; // eax
  int v11; // eax
  GameClient::FlyweightManager *v12; // eax
  int v13; // eax
  GameClient::FlyweightManager *v14; // eax
  int v15; // eax
  GameClient::FlyweightManager *v16; // eax
  int v17; // eax
  GameClient::FlyweightManager *v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // ebx
  unsigned int v21; // [esp-8h] [ebp-18h]
  unsigned int v22; // [esp-8h] [ebp-18h]
  unsigned int v23; // [esp-8h] [ebp-18h]
  unsigned int v24; // [esp-8h] [ebp-18h]
  unsigned int v25; // [esp-8h] [ebp-18h]
  unsigned int v26; // [esp-8h] [ebp-18h]
  unsigned int v27; // [esp-8h] [ebp-18h]
  unsigned int v28; // [esp-4h] [ebp-14h]
  unsigned int v29; // [esp-4h] [ebp-14h]
  unsigned int v30; // [esp-4h] [ebp-14h]
  unsigned int v31; // [esp-4h] [ebp-14h]
  unsigned int v32; // [esp-4h] [ebp-14h]
  unsigned int v33; // [esp-4h] [ebp-14h]
  unsigned int v34; // [esp-4h] [ebp-14h]

  v2 = *((_DWORD *)this + 55);
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 54) = -1;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 0;
  if ( v2 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 48))(v2);
    v3 = *((_DWORD *)this + 55);
    v28 = *(_DWORD *)(v3 + 12);
    v21 = *(_DWORD *)(v3 + 4);
    v4 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v4, v21, v28);
    *((_DWORD *)this + 55) = 0;
  }
  v5 = *((_DWORD *)this + 56);
  if ( v5 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 48))(v5);
    v6 = *((_DWORD *)this + 56);
    v29 = *(_DWORD *)(v6 + 12);
    v22 = *(_DWORD *)(v6 + 4);
    v7 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v7, v22, v29);
    *((_DWORD *)this + 56) = 0;
  }
  v8 = *((_DWORD *)this + 36);
  if ( v8 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 48))(v8);
    v9 = *((_DWORD *)this + 36);
    v30 = *(_DWORD *)(v9 + 12);
    v23 = *(_DWORD *)(v9 + 4);
    v10 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v10, v23, v30);
    *((_DWORD *)this + 36) = 0;
  }
  GameClient::WorldObject::ClearAura(this);
  v11 = *((_DWORD *)this + 48);
  if ( v11 )
  {
    v31 = *(_DWORD *)(v11 + 32);
    v24 = *(_DWORD *)(v11 + 20);
    v12 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v12, v24, v31);
    *((_DWORD *)this + 48) = 0;
  }
  v13 = *((_DWORD *)this + 50);
  if ( v13 )
  {
    v32 = *(_DWORD *)(v13 + 12);
    v25 = *(_DWORD *)(v13 + 4);
    v14 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v14, v25, v32);
    *((_DWORD *)this + 50) = 0;
  }
  v15 = *((_DWORD *)this + 51);
  if ( v15 )
  {
    v33 = *(_DWORD *)(v15 + 12);
    v26 = *(_DWORD *)(v15 + 4);
    v16 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v16, v26, v33);
    *((_DWORD *)this + 51) = 0;
  }
  v17 = *((_DWORD *)this + 52);
  if ( v17 )
  {
    v34 = *(_DWORD *)(v17 + 12);
    v27 = *(_DWORD *)(v17 + 4);
    v18 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v18, v27, v34);
    *((_DWORD *)this + 52) = 0;
  }
  v19 = *((_DWORD *)this + 40);
  if ( *((_DWORD *)this + 39) > v19 )
    _invalid_parameter_noinfo();
  v20 = *((_DWORD *)this + 39);
  if ( v20 > *((_DWORD *)this + 40) )
    _invalid_parameter_noinfo();
  if ( v20 != v19 )
    *((_DWORD *)this + 40) = sub_10013327(v19, *((_DWORD *)this + 40), v20);
}
