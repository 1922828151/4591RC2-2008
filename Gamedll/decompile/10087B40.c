/*
 * func-name: ?Tick@Effect_LightBeam@@UAEXXZ_0
 * func-address: 0x10087b40
 * callers: 0x1000dfcb
 * callees: none
 */

void __thiscall Effect_LightBeam::Tick(Effect_LightBeam *this)
{
  if ( *((_BYTE *)this + 1064) )
    (*(void (__thiscall **)(Effect_LightBeam *))(*(_DWORD *)this + 128))(this);
  Effect_Base::Tick(this);
}
