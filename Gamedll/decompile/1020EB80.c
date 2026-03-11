/*
 * func-name: ?GetUserByDirectToken@LocalUserManager@GameClient@@QAEPAVLocalUser@2@I@Z_0
 * func-address: 0x1020eb80
 * callers: 0x1000b4e2
 * callees: none
 */

struct GameClient::LocalUser *__thiscall GameClient::LocalUserManager::GetUserByDirectToken(
        GameClient::LocalUserManager *this,
        unsigned int a2)
{
  _DWORD *v2; // esi
  char *v3; // edi

  v2 = (_DWORD *)**((_DWORD **)this + 3);
  v3 = (char *)this + 8;
  while ( 1 )
  {
    if ( v2 == *((_DWORD **)v3 + 1) )
      return 0;
    if ( *(_DWORD *)(v2[3] + 72) == a2 )
      break;
    if ( v2 == *((_DWORD **)v3 + 1) )
      _invalid_parameter_noinfo();
    v2 = (_DWORD *)*v2;
  }
  if ( v2 == *((_DWORD **)v3 + 1) )
    _invalid_parameter_noinfo();
  return (struct GameClient::LocalUser *)v2[3];
}
