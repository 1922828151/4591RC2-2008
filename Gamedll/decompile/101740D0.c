/*
 * func-name: ?ChangeViewMode@Robot@GameClient@@QAEX_N@Z_0
 * func-address: 0x101740d0
 * callers: 0x10016f95
 * callees: 0x10006a19, 0x10012166, 0x10013651
 */

void __thiscall GameClient::Robot::ChangeViewMode(GameClient::Robot *this, bool a2)
{
  char v3; // cl
  int v4; // eax
  bool v5; // zf
  GameClient::CombinActor *v6; // ecx
  int v7; // eax
  GameClient::Equip *v8; // ecx
  unsigned int i; // edi
  int v10; // ecx
  int v11; // eax
  int v12; // ecx

  *((_BYTE *)this + 700) = GameClient::WorldObject::IsLocal(this) && a2;
  v3 = *((_BYTE *)this + 700);
  if ( !v3 )
  {
    *((_DWORD *)this + 165) = 1;
    *((float *)this + 167) = 100.0;
  }
  if ( (*((_DWORD *)this + 92) & 0x20) != 0 || (v4 = *((_DWORD *)this + 90), v4 == 2) || v4 == 3 )
  {
    GameClient::CombinActor::DisplayPart(*((GameClient::CombinActor **)this + 43), 0);
    *(_BYTE *)(*((_DWORD *)this + 43) + 1392) = 0;
  }
  else
  {
    v5 = v3 == 0;
    v6 = (GameClient::CombinActor *)*((_DWORD *)this + 43);
    if ( v5 )
    {
      GameClient::CombinActor::DisplayPart(v6, 1);
      *(_BYTE *)(*((_DWORD *)this + 43) + 1392) = 0;
    }
    else
    {
      GameClient::CombinActor::DisplayPart(v6, 0);
      *(_BYTE *)(*((_DWORD *)this + 43) + 1392) = *((_DWORD *)this + 57)
                                               && *(_DWORD *)(*((_DWORD *)this + 2) + 308) != 3;
    }
  }
  v7 = *((_DWORD *)this + 372);
  if ( v7 )
    *(_BYTE *)(v7 + 4) = *((_BYTE *)this + 700) != 0;
  v8 = (GameClient::Equip *)*((_DWORD *)this + 57);
  if ( v8 )
    GameClient::Equip::ChangeShowState(v8, 1);
  for ( i = 0; ; ++i )
  {
    v10 = *((_DWORD *)this + 63);
    if ( !v10 || i >= (*((_DWORD *)this + 64) - v10) >> 2 )
      break;
    v11 = *((_DWORD *)this + 63);
    if ( *(_DWORD *)(v11 + 4 * i) )
    {
      if ( !v11 || i >= (*((_DWORD *)this + 64) - v11) >> 2 )
        _invalid_parameter_noinfo();
      v12 = *((_DWORD *)this + 63);
      if ( *(_DWORD *)(v12 + 4 * i) != *((_DWORD *)this + 57) )
      {
        if ( !v12 || i >= (*((_DWORD *)this + 64) - v12) >> 2 )
          _invalid_parameter_noinfo();
        GameClient::Equip::ChangeShowState(*(GameClient::Equip **)(*((_DWORD *)this + 63) + 4 * i), 0);
      }
    }
  }
}
