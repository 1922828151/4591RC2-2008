/*
 * func-name: ?UpdateInput@PedrailVehicleController@GameClient@@UAEXPAVSeat@2@@Z_0
 * func-address: 0x101be6b0
 * callers: 0x10013e17
 * callees: 0x10008e86, 0x1000e363, 0x10018d0e
 */

void __thiscall GameClient::PedrailVehicleController::UpdateInput(
        GameClient::PedrailVehicleController *this,
        struct GameClient::Seat *a2)
{
  int v2; // eax
  int v3; // esi
  Input *v4; // eax
  int v5; // ecx
  int v6; // esi
  Input *v7; // eax
  int v8; // ecx
  int v9; // esi
  Input *v10; // eax
  int v11; // ecx
  int v12; // esi
  Input *v13; // eax
  int v14; // ecx
  int v15; // esi
  Input *v16; // eax
  unsigned int v17; // esi
  int v18; // ecx
  _DWORD *v19; // edi
  Input *v20; // eax
  bool v21; // [esp+34h] [ebp-8h]
  int v22; // [esp+38h] [ebp-4h]
  int retaddr; // [esp+3Ch] [ebp+0h]

  v22 = (int)this;
  if ( *((_DWORD *)this + 3) )
  {
    GameClient::ICtlEstabController::UpdateInput(this, a2);
    v2 = *(_DWORD *)(dword_103B67B4 + 8);
    v3 = dword_103B67B4 + 8;
    v21 = 0;
    if ( !v2 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v2) >> 2) <= 6 )
      _invalid_parameter_noinfo();
    v4 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v3 + 24));
    Input::ControlDown(v4);
    v5 = *(_DWORD *)(dword_103B67B4 + 8);
    v6 = dword_103B67B4 + 8;
    if ( !v5 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v5) >> 2) <= 7 )
      _invalid_parameter_noinfo();
    v7 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v6 + 28));
    Input::ControlDown(v7);
    v8 = *(_DWORD *)(dword_103B67B4 + 8);
    v9 = dword_103B67B4 + 8;
    if ( !v8 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v8) >> 2) <= 8 )
      _invalid_parameter_noinfo();
    v10 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v9 + 32));
    if ( Input::ControlDown(v10) )
      retaddr = 1;
    v11 = *(_DWORD *)(dword_103B67B4 + 8);
    v12 = dword_103B67B4 + 8;
    if ( !v11 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v11) >> 2) <= 9 )
      _invalid_parameter_noinfo();
    v13 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v12 + 36));
    if ( Input::ControlDown(v13) )
      v22 = 2;
    v14 = *(_DWORD *)(dword_103B67B4 + 8);
    v15 = dword_103B67B4 + 8;
    if ( !v14 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v14) >> 2) <= 0xE )
      _invalid_parameter_noinfo();
    v16 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v15 + 56));
    if ( Input::ControlDown(v16) )
      v21 = 1;
    v17 = 17;
    while ( 1 )
    {
      v18 = *(_DWORD *)(dword_103B67B4 + 8);
      v19 = (_DWORD *)(dword_103B67B4 + 8);
      if ( !v18 || v17 >= (*(_DWORD *)(dword_103B67B4 + 12) - v18) >> 2 )
        _invalid_parameter_noinfo();
      v20 = (Input *)Input::Instance(*(_DWORD *)(*v19 + 4 * v17));
      if ( Input::ControlJustPressed(v20) )
        break;
      if ( (int)++v17 > 26 )
        goto LABEL_31;
    }
    GameClient::ControlledEstab::SetCurDriverStageLocal(*(GameClient::ControlledEstab **)(v22 + 12), v17 - 17);
LABEL_31:
    GameClient::PedrailVehicle::Move(*(GameClient::PedrailVehicle **)(v22 + 12), 0, 0, v21);
  }
}
