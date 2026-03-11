/*
 * func-name: ?SetVisible@Effect_Light@@UAEX_N@Z_0
 * func-address: 0x100da9e0
 * callers: 0x1000c018
 * callees: none
 */

void __thiscall Effect_Light::SetVisible(Effect_Light *this, bool a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 284);
  if ( v2 )
    *(_BYTE *)(v2 + 816) = !a2;
  Effect_Base::SetVisible(this, a2);
}
