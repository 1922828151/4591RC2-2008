/*
 * func-name: ?Tick@ActorInstancer@@UAEXXZ
 * func-address: 0x100546d0
 * callers: none
 * callees: 0x100542a0
 */

void __thiscall ActorInstancer::Tick(ActorInstancer *this)
{
  int v2; // ebx

  if ( !*((_BYTE *)this + 1052) )
  {
    ActorInstancer::DoInstancing(this);
    *((_BYTE *)this + 1052) = 1;
  }
  v2 = *((_DWORD *)this + 25);
  if ( v2 && *(_DWORD *)(v2 + 712) )
  {
    *((_BYTE *)this + 440) = 1;
    *((_DWORD *)this + 214) = *(_DWORD *)(v2 + 856);
    *((_DWORD *)this + 215) = *(_DWORD *)(v2 + 860);
    *((_DWORD *)this + 216) = *(_DWORD *)(v2 + 864);
    qmemcpy((char *)this + 868, (const void *)(v2 + 868), 0x40u);
    std::string::operator=((char *)this + 1084, v2 + 444);
    *(_BYTE *)(v2 + 442) = 1;
    Actor::Tick(this);
  }
  else
  {
    *((_BYTE *)this + 440) = 0;
    Actor::Tick(this);
  }
}
