/*
 * func-name: ?UpdateInput@SuspendVehicleController@GameClient@@UAEXPAVSeat@2@@Z_0
 * func-address: 0x101be9c0
 * callers: 0x1000b136
 * callees: 0x1000e363, 0x10017184, 0x10018d0e
 */

void __thiscall GameClient::SuspendVehicleController::UpdateInput(
        GameClient::SuspendVehicleController *this,
        struct GameClient::Seat *a2)
{
  int v2; // eax
  int v3; // esi
  void (__cdecl *v4)(); // ebp
  Input *v5; // eax
  int v6; // ecx
  int v7; // esi
  Input *v8; // eax
  int v9; // ecx
  int v10; // esi
  Input *v11; // eax
  int v12; // ecx
  int v13; // esi
  Input *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // esi
  Input *v19; // eax
  unsigned int v20; // esi
  int v21; // ecx
  _DWORD *v22; // edi
  Input *v23; // eax
  int v24; // [esp+28h] [ebp-18h]
  bool v25; // [esp+34h] [ebp-Ch]
  int v26; // [esp+38h] [ebp-8h]
  struct GameClient::Seat *v27; // [esp+44h] [ebp+4h]

  v26 = (int)this;
  if ( *((_DWORD *)this + 3) )
  {
    GameClient::ICtlEstabController::UpdateInput(this, a2);
    v2 = *(_DWORD *)(dword_103B67B4 + 8);
    v3 = dword_103B67B4 + 8;
    v25 = 0;
    if ( v2 && (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v2) >> 2) > 6 )
    {
      v4 = _invalid_parameter_noinfo;
    }
    else
    {
      v4 = _invalid_parameter_noinfo;
      _invalid_parameter_noinfo();
    }
    v5 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v3 + 24));
    Input::ControlDown(v5);
    v6 = *(_DWORD *)(dword_103B67B4 + 8);
    v7 = dword_103B67B4 + 8;
    if ( !v6 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v6) >> 2) <= 7 )
      v4();
    v8 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v7 + 28));
    Input::ControlDown(v8);
    v9 = *(_DWORD *)(dword_103B67B4 + 8);
    v10 = dword_103B67B4 + 8;
    if ( !v9 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v9) >> 2) <= 8 )
      v4();
    v11 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v10 + 32));
    Input::ControlDown(v11);
    v12 = *(_DWORD *)(dword_103B67B4 + 8);
    v13 = dword_103B67B4 + 8;
    if ( !v12 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v12) >> 2) <= 9 )
      v4();
    v14 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v13 + 36));
    Input::ControlDown(v14);
    v15 = Input::Instance(0);
    if ( (double)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 100))(v15) > 0.0 )
      v26 = 1;
    v16 = Input::Instance(v24);
    v27 = (struct GameClient::Seat *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 100))(v16);
    if ( (double)(int)v27 < 0.0 )
      v26 = 2;
    v17 = *(_DWORD *)(dword_103B67B4 + 8);
    v18 = dword_103B67B4 + 8;
    if ( !v17 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v17) >> 2) <= 0xE )
      v4();
    v19 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v18 + 56));
    if ( Input::ControlDown(v19) )
      v25 = 1;
    v20 = 17;
    while ( 1 )
    {
      v21 = *(_DWORD *)(dword_103B67B4 + 8);
      v22 = (_DWORD *)(dword_103B67B4 + 8);
      if ( !v21 || v20 >= (*(_DWORD *)(dword_103B67B4 + 12) - v21) >> 2 )
        _invalid_parameter_noinfo();
      v23 = (Input *)Input::Instance(*(_DWORD *)(*v22 + 4 * v20));
      if ( Input::ControlJustPressed(v23) )
        break;
      if ( (int)++v20 > 26 )
        goto LABEL_32;
    }
    GameClient::ControlledEstab::SetCurDriverStageLocal(*(GameClient::ControlledEstab **)(v26 + 12), v20 - 17);
LABEL_32:
    GameClient::SuspendVehicle::Move(*(GameClient::SuspendVehicle **)(v26 + 12), 0, (unsigned int)v27, v25);
  }
}
