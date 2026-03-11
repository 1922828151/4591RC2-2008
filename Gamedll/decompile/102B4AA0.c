/*
 * func-name: sub_102B4AA0
 * func-address: 0x102b4aa0
 * callers: 0x10019920
 * callees: 0x10004886, 0x10009674, 0x10009e6c, 0x1001055a, 0x10019b46
 */

struct GameClient::LocalUser *__stdcall sub_102B4AA0(int a1)
{
  struct GameClient::LocalUser *result; // eax
  int v2; // [esp-8h] [ebp-8h]

  result = (struct GameClient::LocalUser *)dword_103B665C;
  if ( *(_DWORD *)(dword_103B665C + 12) != 1 )
  {
    result = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0);
    if ( result )
    {
      if ( *((_DWORD *)result + 17) == -1 )
        return result;
      sub_10009674(-1);
      sub_10019B46(-1);
    }
    v2 = *(_DWORD *)(sub_10009E6C() + 28);
    sub_10009E6C();
    return (struct GameClient::LocalUser *)sub_10004886(v2);
  }
  return result;
}
