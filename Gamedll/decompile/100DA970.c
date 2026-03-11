/*
 * func-name: ?RefreshOptions@Effect_Light@@UAEXXZ_0
 * func-address: 0x100da970
 * callers: 0x10008459
 * callees: none
 */

void __thiscall Effect_Light::RefreshOptions(Effect_Light *this)
{
  Light *v2; // ecx

  v2 = (Light *)*((_DWORD *)this + 284);
  if ( v2 )
  {
    Light::SetColor(v2, (Effect_Light *)((char *)this + 1096));
    Light::SetRange(*((Light **)this + 284), *((float *)this + 285));
  }
  Effect_Base::RefreshOptions(this);
}
