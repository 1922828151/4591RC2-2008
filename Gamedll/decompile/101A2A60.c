/*
 * func-name: sub_101A2A60
 * func-address: 0x101a2a60
 * callers: 0x100121ed
 * callees: 0x1000adc6, 0x1000dafd
 */

struct GameClient::Establishment *__thiscall sub_101A2A60(_DWORD *this, int a2, int a3)
{
  GameClient::EstabManager *v3; // eax
  struct GameClient::Establishment *result; // eax
  unsigned int v5; // [esp-4h] [ebp-4h]

  v5 = this[1];
  v3 = GameClient::EstabManager::Instance();
  result = GameClient::EstabManager::GetEstablishment(v3, v5);
  if ( result )
    return (struct GameClient::Establishment *)(*(int (__thiscall **)(struct GameClient::Establishment *, int, int))(*(_DWORD *)result + 92))(
                                                 result,
                                                 a2,
                                                 a3);
  return result;
}
