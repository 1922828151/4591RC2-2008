/*
 * func-name: ?SetImpluseAccel@ControlledEstab@GameClient@@QAEXM@Z_0
 * func-address: 0x1019cbe0
 * callers: 0x10019cd6
 * callees: none
 */

void __thiscall GameClient::ControlledEstab::SetImpluseAccel(GameClient::ControlledEstab *this, float a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 114);
  if ( v2 )
    *(float *)(v2 + 184) = a2;
}
