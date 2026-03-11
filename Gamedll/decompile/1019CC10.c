/*
 * func-name: ?SetHasPhysModel@ControlledEstab@GameClient@@UAEX_N@Z_0
 * func-address: 0x1019cc10
 * callers: 0x1000d0b2
 * callees: 0x100040a2
 */

void __thiscall GameClient::ControlledEstab::SetHasPhysModel(GameClient::ControlledEstab *this, bool a2)
{
  int v3; // ecx
  void (__thiscall ***v4)(_DWORD, int); // ecx

  if ( !a2 )
  {
    (*(void (__thiscall **)(GameClient::ControlledEstab *))(*(_DWORD *)this + 164))(this);
    v3 = *((_DWORD *)this + 114);
    if ( v3 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
      v4 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 114);
      if ( v4 )
      {
        (**v4)(v4, 1);
        *((_DWORD *)this + 114) = 0;
      }
    }
  }
  GameClient::Establishment::SetHasPhysModel(this, a2);
}
