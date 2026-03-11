/*
 * func-name: ?RemoveBeLockedTarget@Robot@GameClient@@QAEXK@Z_0
 * func-address: 0x10178360
 * callers: 0x1000ede0
 * callees: none
 */

void __thiscall GameClient::Robot::RemoveBeLockedTarget(GameClient::Robot *this, unsigned int a2)
{
  char *v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // ebx
  int v5; // eax

  if ( a2 != -1 )
  {
    v2 = (char *)this + 304;
    v3 = (_DWORD *)*((_DWORD *)this + 77);
    if ( (unsigned int)v3 > *((_DWORD *)this + 78) )
      _invalid_parameter_noinfo();
    while ( 1 )
    {
      v4 = (_DWORD *)*((_DWORD *)v2 + 2);
      if ( *((_DWORD *)v2 + 1) > (unsigned int)v4 )
        _invalid_parameter_noinfo();
      if ( v3 == v4 )
        break;
      if ( (unsigned int)v3 >= *((_DWORD *)v2 + 2) )
        _invalid_parameter_noinfo();
      if ( *v3 == a2 )
      {
        v5 = (*((_DWORD *)v2 + 2) - (int)(v3 + 1)) >> 2;
        if ( v5 > 0 )
          memmove_s(v3, 4 * v5, v3 + 1, 4 * v5);
        *((_DWORD *)v2 + 2) -= 4;
        return;
      }
      if ( (unsigned int)v3 >= *((_DWORD *)v2 + 2) )
        _invalid_parameter_noinfo();
      ++v3;
    }
  }
}
