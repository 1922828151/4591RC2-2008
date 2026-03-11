/*
 * func-name: ?SetMass@Actor@@QAEXM@Z
 * func-address: 0x1004de50
 * callers: none
 * callees: none
 */

void __thiscall Actor::SetMass(Actor *this, float a2)
{
  if ( *((_DWORD *)this + 155) )
  {
    if ( (*(unsigned __int16 (__thiscall **)(_DWORD))(**((_DWORD **)this + 155) + 88))(*((_DWORD *)this + 155)) == 5 )
      *(float *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 155) + 4) + 12) + 4) = a2;
  }
}
