/*
 * func-name: ?RemoveAura@AuraManager@GameClient@@QAEPAVAura@2@K@Z_0
 * func-address: 0x10142320
 * callers: 0x1000f849
 * callees: 0x1000c72f, 0x10018f2a
 */

struct GameClient::Aura *__thiscall GameClient::AuraManager::RemoveAura(GameClient::AuraManager *this, unsigned int a2)
{
  int v3; // edi
  void *v4; // ebp
  _DWORD *v5; // ebx
  int v6; // ebp
  int v8; // [esp+10h] [ebp-8h] BYREF
  void *v9; // [esp+14h] [ebp-4h]

  sub_10018F2A((int)&v8, (int)&a2);
  v3 = v8;
  v4 = (void *)*((_DWORD *)this + 2);
  if ( !v8 || (GameClient::AuraManager *)v8 != (GameClient::AuraManager *)((char *)this + 4) )
    _invalid_parameter_noinfo();
  v5 = v9;
  if ( v9 == v4 )
    return 0;
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v5 == *(_DWORD **)(v3 + 4) )
    _invalid_parameter_noinfo();
  v6 = v5[3];
  sub_1000C72F((int)&v8, v3, v5);
  return (struct GameClient::Aura *)v6;
}
