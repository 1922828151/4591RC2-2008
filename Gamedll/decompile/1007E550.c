/*
 * func-name: ?SetWorld@Effect_Base@@UAEXPAVWorld@@@Z_0
 * func-address: 0x1007e550
 * callers: 0x10006ab4
 * callees: none
 */

void __thiscall Effect_Base::SetWorld(Effect_Base *this, struct World *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 263);
  if ( v2 )
    *(_DWORD *)(v2 + 116) = a2;
  Actor::SetWorld(this, a2);
}
