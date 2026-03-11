/*
 * func-name: ?Shutdown@LocalUserManager@GameClient@@UAE_NXZ_0
 * func-address: 0x1020ee40
 * callers: 0x100198bc
 * callees: 0x10005556
 */

char __thiscall GameClient::LocalUserManager::Shutdown(GameClient::LocalUserManager *this)
{
  _DWORD *v1; // esi
  char *v2; // edi
  void (__thiscall ***v3)(_DWORD, int); // ecx

  v1 = (_DWORD *)**((_DWORD **)this + 3);
  v2 = (char *)this + 8;
  while ( v1 != *((_DWORD **)v2 + 1) )
  {
    if ( v1[3] )
    {
      if ( v1 == *((_DWORD **)v2 + 1) )
        _invalid_parameter_noinfo();
      v3 = (void (__thiscall ***)(_DWORD, int))v1[3];
      if ( v3 )
        (**v3)(v3, 1);
      if ( v1 == *((_DWORD **)v2 + 1) )
        _invalid_parameter_noinfo();
      v1[3] = 0;
    }
    if ( v1 == *((_DWORD **)v2 + 1) )
      _invalid_parameter_noinfo();
    v1 = (_DWORD *)*v1;
  }
  sub_10005556();
  return 1;
}
