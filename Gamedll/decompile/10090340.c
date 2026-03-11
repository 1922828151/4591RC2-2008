/*
 * func-name: ?SetActivation@Effect_ParticleSystem@@UAEX_N@Z_0
 * func-address: 0x10090340
 * callers: 0x10011f1d
 * callees: 0x10012080
 */

void __thiscall Effect_ParticleSystem::SetActivation(Effect_ParticleSystem *this, bool a2)
{
  int v3; // eax

  v3 = *(_DWORD *)this;
  if ( a2 )
    (*(void (**)(void))(v3 + 128))();
  else
    (*(void (**)(void))(v3 + 132))();
  Effect_Base::SetActivation(this, a2);
}
