/*
 * func-name: ?CreateTriger@Interactable@GameClient@@UAEXABVVector@@MM@Z_0
 * func-address: 0x101608a0
 * callers: 0x10014254
 * callees: 0x102c9d98
 */

void __thiscall GameClient::Interactable::CreateTriger(
        GameClient::Interactable *this,
        const struct Vector *a2,
        float a3,
        float a4)
{
  _DWORD *v5; // eax
  int v6; // eax

  v5 = operator new(8u);
  if ( v5 )
  {
    *v5 = &GameClient::InteractableObserver::`vftable';
    v5[1] = this;
  }
  else
  {
    v5 = 0;
  }
  *((_DWORD *)this + 3) = v5;
  v6 = NxPhysics::Instance(LODWORD(a3), LODWORD(a4), a2, *((_DWORD *)this + 1), 0);
  *((_DWORD *)this + 2) = NxPhysics::CreateTriggerActor(v6);
}
