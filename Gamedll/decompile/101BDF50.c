/*
 * func-name: ?UpdateInput@ICtlEstabController@GameClient@@UAEXPAVSeat@2@@Z_0
 * func-address: 0x101bdf50
 * callers: 0x10018d0e
 * callees: 0x10007040, 0x10011559, 0x100125c1
 */

void __thiscall GameClient::ICtlEstabController::UpdateInput(
        GameClient::ICtlEstabController *this,
        struct GameClient::Seat *a2)
{
  int v3; // ecx
  int v4; // edi
  Input *v5; // eax

  GameClient::IEstabController::UpdateInput(this, a2);
  v3 = *(_DWORD *)(dword_103B67B4 + 8);
  v4 = dword_103B67B4 + 8;
  if ( !v3 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v3) >> 2) <= 0x10 )
    _invalid_parameter_noinfo();
  v5 = (Input *)Input::Instance(*(_DWORD *)(*(_DWORD *)v4 + 64));
  if ( Input::ControlJustPressed(v5) )
  {
    if ( *(_DWORD *)(GameClient::ControlledEstab::GetTransState(*(_DWORD *)(*((_DWORD *)this + 2) + 464)) + 8) == 1 )
    {
      GameClient::ControlledEstab::SubmitTransform(0);
    }
    else if ( !*(_DWORD *)(GameClient::ControlledEstab::GetTransState(*(_DWORD *)(*((_DWORD *)this + 2) + 464)) + 8) )
    {
      if ( *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 2) + 460) + 744) )
        GameClient::ControlledEstab::SubmitTransform(1);
    }
  }
}
