/*
 * func-name: ?OnLoadModelComplete@WheelVehicle@GameClient@@UAEXHPAVModel@@@Z_0
 * func-address: 0x101bb190
 * callers: 0x10003a3a
 * callees: 0x1000516e, 0x10006b86, 0x10007bc1, 0x10019484
 */

void __thiscall GameClient::WheelVehicle::OnLoadModelComplete(GameClient::WheelVehicle *this, int a2, struct Model *a3)
{
  int v4; // ebp
  unsigned int v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  struct Game *v15; // eax
  struct Model *i; // [esp+18h] [ebp+8h]

  GameClient::ControlledEstab::OnLoadModelComplete(this, a2, a3);
  v4 = 0;
  v5 = 0;
  for ( i = 0; ; i = (struct Model *)((char *)i + 120) )
  {
    v6 = *((_DWORD *)this + 135);
    v7 = *(_DWORD *)(v6 + 1224);
    if ( !v7 || v5 >= (*(_DWORD *)(v6 + 1228) - v7) / 28 )
      break;
    v8 = *(_DWORD *)(v6 + 1224);
    if ( !v8 || v5 >= (*(_DWORD *)(v6 + 1228) - v8) / 28 )
      _invalid_parameter_noinfo();
    if ( !(unsigned __int8)std::operator==<char>(v4 + *(_DWORD *)(v6 + 1224), &unk_10315DA9) )
    {
      v9 = *((_DWORD *)this + 135);
      v10 = *(_DWORD *)(v9 + 1224);
      v11 = v9 + 1220;
      if ( !v10 || v5 >= (*(_DWORD *)(v11 + 8) - v10) / 28 )
        _invalid_parameter_noinfo();
      v12 = *((_DWORD *)this + 140);
      v13 = v4 + *(_DWORD *)(v11 + 4);
      if ( !v12 || v5 >= (*((_DWORD *)this + 141) - v12) / 120 )
        _invalid_parameter_noinfo();
      std::string::operator=((char *)i + *((_DWORD *)this + 140), v13);
      v14 = *((_DWORD *)this + 140);
      if ( !v14 || v5 >= (*((_DWORD *)this + 141) - v14) / 120 )
        _invalid_parameter_noinfo();
      v15 = Game::Instance();
      sub_10019484(*((_DWORD *)v15 + 25), 0);
    }
    ++v5;
    v4 += 28;
  }
  GameClient::WheelVehicle::BindWheelFrames(this);
}
