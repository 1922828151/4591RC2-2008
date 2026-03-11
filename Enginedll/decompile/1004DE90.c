/*
 * func-name: ?GetMass@Actor@@QAEMXZ
 * func-address: 0x1004de90
 * callers: none
 * callees: none
 */

double __thiscall Actor::GetMass(Actor *this)
{
  if ( *((_DWORD *)this + 155)
    && (*(unsigned __int16 (__thiscall **)(_DWORD))(**((_DWORD **)this + 155) + 88))(*((_DWORD *)this + 155)) == 5 )
  {
    return *(float *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 155) + 4) + 12) + 4);
  }
  else
  {
    return 0.0;
  }
}
