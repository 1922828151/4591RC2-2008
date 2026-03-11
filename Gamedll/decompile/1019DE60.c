/*
 * func-name: ??0ControlledEstab@GameClient@@QAE@K@Z_0
 * func-address: 0x1019de60
 * callers: 0x100060e6
 * callees: 0x10005a60, 0x102c9d98
 */

GameClient::ControlledEstab *__thiscall GameClient::ControlledEstab::ControlledEstab(
        GameClient::ControlledEstab *this,
        unsigned int a2)
{
  _DWORD *v3; // eax

  GameClient::Establishment::Establishment(this, a2);
  *((float *)this + 126) = 0.0;
  *(_DWORD *)this = &GameClient::ControlledEstab::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::ControlledEstab::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 115) = 0;
  *((_DWORD *)this + 116) = 2;
  *((_DWORD *)this + 117) = 0;
  *((_DWORD *)this + 118) = 0;
  *((_BYTE *)this + 476) = 0;
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 121) = 0;
  *((_DWORD *)this + 122) = 0;
  *((_DWORD *)this + 129) = 0;
  *((_DWORD *)this + 130) = 0;
  *((_DWORD *)this + 131) = 0;
  *((float *)this + 132) = 0.0;
  *((_BYTE *)this + 532) = 1;
  *((_DWORD *)this + 123) = 13;
  *((_DWORD *)this + 124) = 12;
  *((_DWORD *)this + 125) = 12;
  v3 = operator new(8u);
  if ( v3 )
  {
    *v3 = &GameClient::CtlEstabPssCallback::`vftable';
    v3[1] = this;
    *((_DWORD *)this + 127) = v3;
  }
  else
  {
    *((_DWORD *)this + 127) = 0;
  }
  return this;
}
