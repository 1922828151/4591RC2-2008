/*
 * func-name: ?DestroyNxVehicle@PedrailVehicle@GameClient@@UAEXXZ_0
 * func-address: 0x101b7390
 * callers: 0x10006965
 * callees: none
 */

void __thiscall GameClient::PedrailVehicle::DestroyNxVehicle(GameClient::PedrailVehicle *this)
{
  int v2; // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = *((_DWORD *)this + 134);
  if ( v2 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
    v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 134);
    if ( v3 )
    {
      (**v3)(v3, 1);
      *((_DWORD *)this + 134) = 0;
    }
    *((_DWORD *)this + 114) = 0;
  }
}
