/*
 * func-name: ?GetUser@LocalUserManager@GameClient@@QAEPAVLocalUser@2@K@Z_0
 * func-address: 0x1020ec80
 * callers: 0x10010a32
 * callees: 0x1000dbf7
 */

struct GameClient::LocalUser *__thiscall GameClient::LocalUserManager::GetUser(
        GameClient::LocalUserManager *this,
        unsigned int a2)
{
  int v3; // edi
  char *v4; // eax
  char *v5; // esi
  int v6; // ebx
  char *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  sub_1000DBF7((int)&v8, (int)&a2);
  v3 = *((_DWORD *)this + 3);
  v4 = (char *)this + 8;
  v5 = v8;
  if ( !v8 || v8 != v4 )
    _invalid_parameter_noinfo();
  v6 = v9;
  if ( v9 == v3 )
    return 0;
  if ( !v5 )
    _invalid_parameter_noinfo();
  if ( v6 == *((_DWORD *)v5 + 1) )
    _invalid_parameter_noinfo();
  return *(struct GameClient::LocalUser **)(v6 + 12);
}
