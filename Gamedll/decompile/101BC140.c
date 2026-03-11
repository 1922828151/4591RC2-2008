/*
 * func-name: ?UpdateInput@AircraftVehicleController@GameClient@@UAEXPAVSeat@2@@Z_0
 * func-address: 0x101bc140
 * callers: 0x1001355c
 * callees: 0x1000e363, 0x100115cc, 0x10018d0e
 */

void __thiscall GameClient::AircraftVehicleController::UpdateInput(
        GameClient::AircraftVehicleController *this,
        struct GameClient::Seat *a2)
{
  int v3; // eax
  int v4; // esi
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
  double v16; // st7
  int v17; // eax
  int v18; // eax
  double v19; // st7
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // esi
  Input *v24; // eax
  int v25; // ecx
  int v26; // esi
  Input *v27; // eax
  unsigned int v28; // esi
  int v29; // ecx
  _DWORD *v30; // edi
  Input *v31; // eax
  int v32; // [esp+30h] [ebp-20h]
  int v33; // [esp+30h] [ebp-20h]
  int v34; // [esp+30h] [ebp-20h]
  int v35; // [esp+30h] [ebp-20h]
  unsigned int v36; // [esp+3Ch] [ebp-14h]
  int v37; // [esp+44h] [ebp-Ch]
  float v38; // [esp+48h] [ebp-8h]
  float retaddr; // [esp+50h] [ebp+0h]
  float v40; // [esp+54h] [ebp+4h]
  float v41; // [esp+54h] [ebp+4h]
  float v42; // [esp+54h] [ebp+4h]
  float v43; // [esp+54h] [ebp+4h]

  v37 = (int)this;
  GameClient::ICtlEstabController::UpdateInput(this, a2);
  if ( *((_DWORD *)this + 3) )
  {
    v3 = *(_DWORD *)(dword_103B67B4 + 8);
    v4 = dword_103B67B4 + 8;
    v36 = 0;
    if ( !v3 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v3) >> 2) <= 6 )
      _invalid_parameter_noinfo();
    v5 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v4 + 24));
    Input::ControlDown(v5);
    v6 = *(_DWORD *)(dword_103B67B4 + 8);
    v7 = dword_103B67B4 + 8;
    if ( !v6 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v6) >> 2) <= 7 )
      _invalid_parameter_noinfo();
    v8 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v7 + 28));
    Input::ControlDown(v8);
    v9 = *(_DWORD *)(dword_103B67B4 + 8);
    v10 = dword_103B67B4 + 8;
    if ( !v9 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v9) >> 2) <= 8 )
      _invalid_parameter_noinfo();
    v11 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v10 + 32));
    Input::ControlDown(v11);
    v12 = *(_DWORD *)(dword_103B67B4 + 8);
    v13 = dword_103B67B4 + 8;
    if ( !v12 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v12) >> 2) <= 9 )
      _invalid_parameter_noinfo();
    v14 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v13 + 36));
    Input::ControlDown(v14);
    retaddr = fabs(*((float *)this + 4));
    if ( v38 > (double)retaddr )
    {
      if ( *((float *)this + 4) > 0.0 )
      {
        v40 = *((float *)this + 4) - GDeltaTime * 0.0;
        *((float *)this + 4) = v40;
        if ( v40 < 0.0 )
          *((float *)this + 4) = 0.0;
      }
      if ( *((float *)this + 4) < 0.0 )
      {
        v41 = 0.0 * GDeltaTime + *((float *)this + 4);
        *((float *)this + 4) = v41;
        if ( v41 > 0.0 )
          *((float *)this + 4) = 0.0;
      }
    }
    v15 = Input::Instance(v32);
    v42 = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 100))(v15) + *((float *)this + 4);
    v16 = v42;
    *((float *)this + 4) = v42;
    v43 = fabs(v42);
    if ( v38 <= (double)v43 )
    {
      v43 = -v38;
      if ( v43 < v16 )
      {
        v19 = v38;
      }
      else
      {
        v19 = v38;
        *((float *)this + 4) = v43;
        *((_DWORD *)this + 6) = 2;
      }
      if ( *((float *)this + 4) >= v19 )
      {
        *((float *)this + 4) = v19;
        *((_DWORD *)this + 6) = 1;
      }
    }
    else
    {
      v17 = Input::Instance(v33);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 100))(v17) < 0 && *((_DWORD *)this + 6) == 1 )
      {
        *((_DWORD *)this + 6) = 0;
        *((float *)this + 4) = 0.0;
      }
      v18 = Input::Instance(v34);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 100))(v18) > 0 && *((_DWORD *)this + 6) == 2 )
      {
        *((_DWORD *)this + 6) = 0;
        *((float *)this + 4) = 0.0;
      }
    }
    v20 = Input::Instance(v33);
    (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 104))(v20);
    v21 = Input::Instance(v35);
    (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 104))(v21);
    v22 = *(_DWORD *)(dword_103B67B4 + 8);
    v23 = dword_103B67B4 + 8;
    if ( !v22 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v22) >> 2) <= 0xA )
      _invalid_parameter_noinfo();
    v24 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v23 + 40));
    if ( Input::ControlDown(v24) )
      v37 = 1;
    v25 = *(_DWORD *)(dword_103B67B4 + 8);
    v26 = dword_103B67B4 + 8;
    if ( !v25 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v25) >> 2) <= 0xB )
      _invalid_parameter_noinfo();
    v27 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v26 + 44));
    if ( Input::ControlDown(v27) )
      v36 = 2;
    v28 = 17;
    while ( 1 )
    {
      v29 = *(_DWORD *)(dword_103B67B4 + 8);
      v30 = (_DWORD *)(dword_103B67B4 + 8);
      if ( !v29 || v28 >= (*(_DWORD *)(dword_103B67B4 + 12) - v29) >> 2 )
        _invalid_parameter_noinfo();
      v31 = (Input *)Input::Instance(*(_DWORD *)(*v30 + 4 * v28));
      if ( Input::ControlJustPressed(v31) )
        break;
      if ( (int)++v28 > 26 )
        goto LABEL_51;
    }
    GameClient::ControlledEstab::SetCurDriverStageLocal(*(GameClient::ControlledEstab **)(v37 + 12), v28 - 17);
LABEL_51:
    GameClient::AircraftVehicle::Move(*(GameClient::AircraftVehicle **)(v37 + 12), LODWORD(v43), 0, v36);
  }
}
