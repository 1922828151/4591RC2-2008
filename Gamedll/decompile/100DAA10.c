/*
 * func-name: ?SetScale@Effect_Light@@UAEXM@Z_0
 * func-address: 0x100daa10
 * callers: 0x1001309d
 * callees: 0x100134d5
 */

void __thiscall Effect_Light::SetScale(Effect_Light *this, float a2)
{
  Light *v3; // ecx
  float v4; // [esp+Ch] [ebp-4h]

  v3 = (Light *)*((_DWORD *)this + 284);
  if ( v3 )
  {
    v4 = *((float *)this + 285) * a2;
    Light::SetRange(v3, v4);
  }
  Effect_Base::SetScale(this, a2);
}
