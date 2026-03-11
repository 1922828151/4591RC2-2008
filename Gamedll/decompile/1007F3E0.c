/*
 * func-name: ?SetActivation@Effect_DynamicLasers@@UAEX_N@Z_0
 * func-address: 0x1007f3e0
 * callers: 0x100068b6
 * callees: 0x1000cd2e, 0x10012080
 */

void __thiscall Effect_DynamicLasers::SetActivation(Effect_DynamicLasers *this, bool a2)
{
  DynamicLasers *v3; // ecx

  v3 = (DynamicLasers *)*((_DWORD *)this + 263);
  if ( v3 )
    DynamicLasers::Reset(v3);
  Effect_Base::SetActivation(this, a2);
}
