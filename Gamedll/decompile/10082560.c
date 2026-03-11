/*
 * func-name: ?SetActivation@Effect_LaserParticle@@UAEX_N@Z_0
 * func-address: 0x10082560
 * callers: 0x10010028
 * callees: 0x10012080
 */

void __thiscall Effect_LaserParticle::SetActivation(Effect_LaserParticle *this, bool a2)
{
  int v3; // eax

  v3 = *(_DWORD *)this;
  if ( a2 )
    (*(void (**)(void))(v3 + 128))();
  else
    (*(void (**)(void))(v3 + 132))();
  Effect_Base::SetActivation(this, a2);
}
