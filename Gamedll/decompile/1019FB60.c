/*
 * func-name: sub_1019FB60
 * func-address: 0x1019fb60
 * callers: 0x10019c9a
 * callees: 0x10004dea
 */

void __thiscall sub_1019FB60(int this, float a2)
{
  double v3; // st7
  GameClient::ControlledEstab *v4; // ecx
  Model *NormalModel; // eax
  Model *v6; // eax
  Model *v7; // eax
  Model *v8; // eax
  Model *v9; // eax
  int v10; // [esp+1Ch] [ebp-1Ch]
  int v11; // [esp+20h] [ebp-18h]
  int v12; // [esp+2Ch] [ebp-Ch]
  int v13; // [esp+2Ch] [ebp-Ch]
  int v14; // [esp+30h] [ebp-8h]

  v3 = a2 + *(float *)(this + 12);
  v4 = *(GameClient::ControlledEstab **)(this + 4);
  *(float *)(this + 12) = v3;
  if ( GameClient::ControlledEstab::GetNormalModel(v4) )
  {
    v12 = *(_DWORD *)(this + 28);
    NormalModel = GameClient::ControlledEstab::GetNormalModel(*(GameClient::ControlledEstab **)(this + 4));
    if ( !Model::IsPlaying(NormalModel, v12)
      && *(_DWORD *)(this + 28) != -1
      && *(float *)(this + 76) > (double)*(float *)(this + 12) )
    {
      v11 = *(_DWORD *)(this + 28);
      v6 = GameClient::ControlledEstab::GetNormalModel(*(GameClient::ControlledEstab **)(this + 4));
      Model::TransitionToAnimation(v6, v11, 0.0, -1.0, 0.0, 1.0);
    }
    v14 = *(_DWORD *)(this + 80);
    v7 = GameClient::ControlledEstab::GetNormalModel(*(GameClient::ControlledEstab **)(this + 4));
    if ( !Model::IsPlaying(v7, v14) )
    {
      v13 = *(_DWORD *)(this + 28);
      v8 = GameClient::ControlledEstab::GetNormalModel(*(GameClient::ControlledEstab **)(this + 4));
      if ( !Model::IsPlaying(v8, v13) && *(_DWORD *)(this + 80) != -1 )
      {
        v10 = *(_DWORD *)(this + 80);
        v9 = GameClient::ControlledEstab::GetNormalModel(*(GameClient::ControlledEstab **)(this + 4));
        Model::TransitionToAnimation(v9, v10, 0.0, -1.0, 0.0, 1.0);
      }
    }
  }
}
