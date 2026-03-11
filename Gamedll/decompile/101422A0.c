/*
 * func-name: ?GetAura@AuraManager@GameClient@@QAEPAVAura@2@K@Z_0
 * func-address: 0x101422a0
 * callers: 0x1001124d
 * callees: 0x10018f2a
 */

struct GameClient::Aura *__thiscall GameClient::AuraManager::GetAura(GameClient::AuraManager *this, unsigned int a2)
{
  int v4; // edi
  char *v5; // eax
  char *v6; // esi
  int v7; // ebx
  char *v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h]

  if ( a2 == -1 )
    return 0;
  sub_10018F2A((int)&v8, (int)&a2);
  v4 = *((_DWORD *)this + 2);
  v5 = (char *)this + 4;
  v6 = v8;
  if ( !v8 || v8 != v5 )
    _invalid_parameter_noinfo();
  v7 = v9;
  if ( v9 == v4 )
    return 0;
  if ( !v6 )
    _invalid_parameter_noinfo();
  if ( v7 == *((_DWORD *)v6 + 1) )
    _invalid_parameter_noinfo();
  return *(struct GameClient::Aura **)(v7 + 12);
}
