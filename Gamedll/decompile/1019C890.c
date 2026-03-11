/*
 * func-name: ?DestroyDistortionVehicle@ControlledEstab@GameClient@@QAEXXZ_0
 * func-address: 0x1019c890
 * callers: 0x10009cc8
 * callees: none
 */

void __thiscall GameClient::ControlledEstab::DestroyDistortionVehicle(GameClient::ControlledEstab *this)
{
  int v2; // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v2 = *((_DWORD *)this + 114);
  if ( v2 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
    v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 114);
    if ( v3 )
    {
      (**v3)(v3, 1);
      *((_DWORD *)this + 114) = 0;
    }
  }
}
