/*
 * func-name: ??1ControlledEstab@GameClient@@UAE@XZ_0
 * func-address: 0x1019df70
 * callers: 0x10007e37
 * callees: 0x100090f7, 0x1000a4f7, 0x102c9d50
 */

void __thiscall GameClient::ControlledEstab::~ControlledEstab(GameClient::ControlledEstab *this)
{
  void *v2; // eax

  *(_DWORD *)this = &GameClient::ControlledEstab::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::ControlledEstab::`vftable'{for `GameClient::DamageUnit'};
  v2 = (void *)*((_DWORD *)this + 127);
  if ( v2 )
  {
    operator delete(v2);
    *((_DWORD *)this + 127) = 0;
  }
  sub_100090F7();
  GameClient::Establishment::~Establishment(this);
}
