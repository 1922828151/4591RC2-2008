/*
 * func-name: ?GetUserByIndex@LocalUserManager@GameClient@@QAEPAVLocalUser@2@I@Z_0
 * func-address: 0x1020eb30
 * callers: 0x1001055a
 * callees: none
 */

struct GameClient::LocalUser *__thiscall GameClient::LocalUserManager::GetUserByIndex(
        GameClient::LocalUserManager *this,
        unsigned int a2)
{
  unsigned int v2; // edi
  _DWORD *v5; // esi

  v2 = a2;
  if ( a2 >= *((_DWORD *)this + 4) )
    return 0;
  v5 = (_DWORD *)**((_DWORD **)this + 3);
  if ( a2 )
  {
    do
    {
      --v2;
      if ( v5 == *((_DWORD **)this + 3) )
        _invalid_parameter_noinfo();
      v5 = (_DWORD *)*v5;
    }
    while ( v2 );
  }
  if ( v5 == *((_DWORD **)this + 3) )
    _invalid_parameter_noinfo();
  return (struct GameClient::LocalUser *)v5[3];
}
