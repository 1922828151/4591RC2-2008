/*
 * func-name: ?GetFlyweight@FlyweightManager@GameClient@@QAEPAVFlyweight@2@K@Z_0
 * func-address: 0x1022ddb0
 * callers: 0x10012c29
 * callees: 0x10015410
 */

struct GameClient::Flyweight *__thiscall GameClient::FlyweightManager::GetFlyweight(
        GameClient::FlyweightManager *this,
        unsigned int a2)
{
  int v3; // edi
  char *v4; // eax
  char *v5; // esi
  int v6; // ebx
  char *v8; // [esp+10h] [ebp-8h] BYREF
  int v9; // [esp+14h] [ebp-4h]

  sub_10015410((int)&v8, (int)&a2);
  v3 = *((_DWORD *)this + 2);
  v4 = (char *)this + 4;
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
  return *(struct GameClient::Flyweight **)(v6 + 12);
}
