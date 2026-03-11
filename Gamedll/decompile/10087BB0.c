/*
 * func-name: ?SetActivation@Effect_LightBeam@@UAEX_N@Z_0
 * func-address: 0x10087bb0
 * callers: 0x10014182
 * callees: 0x10006235, 0x10012080
 */

void __thiscall Effect_LightBeam::SetActivation(Effect_LightBeam *this, bool a2)
{
  LightBeam *v3; // ecx

  if ( a2 )
  {
    v3 = (LightBeam *)*((_DWORD *)this + 263);
    if ( v3 )
      LightBeam::Random(v3, *((float *)this + 293), *((float *)this + 294));
  }
  Effect_Base::SetActivation(this, a2);
}
