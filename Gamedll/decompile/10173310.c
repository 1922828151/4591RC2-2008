/*
 * func-name: ?SetBuffState@Robot@GameClient@@UAEXK@Z_0
 * func-address: 0x10173310
 * callers: 0x100136fb
 * callees: none
 */

void __thiscall GameClient::Robot::SetBuffState(GameClient::Robot *this, unsigned int a2)
{
  if ( (a2 & 0x40) == 0 || (*((_BYTE *)this + 140) & 0x40) != 0 )
  {
    if ( (a2 & 0x40) == 0 && (*((_BYTE *)this + 140) & 0x40) != 0 )
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 48) + 24))(*((_DWORD *)this + 48), 1);
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 48) + 24))(*((_DWORD *)this + 48), 0);
  }
  *((_DWORD *)this + 35) = a2;
}
