/*
 * func-name: sub_102B4AF0
 * func-address: 0x102b4af0
 * callers: 0x10004124
 * callees: 0x10004886, 0x10009674, 0x10009e6c, 0x1000e56b, 0x1001055a, 0x100154d3, 0x10019b46
 */

int __userpurge sub_102B4AF0@<eax>(int a1@<esi>, int a2)
{
  int result; // eax
  struct GameClient::LocalUser *UserByIndex; // eax
  struct GameClient::LocalUser *v4; // esi
  int v5; // [esp-8h] [ebp-8h]
  int v6; // [esp-8h] [ebp-8h]

  result = dword_103B665C;
  if ( *(_DWORD *)(dword_103B665C + 12) != 1 )
  {
    UserByIndex = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0);
    v4 = UserByIndex;
    if ( UserByIndex )
    {
      if ( *((_DWORD *)UserByIndex + 17) != -1 )
      {
        sub_1000E56B(*((_DWORD *)UserByIndex + 17), a1);
        sub_100154D3(v5);
      }
      sub_10009674(-1);
      sub_10019B46(-1);
      *((_DWORD *)v4 + 9) = -1;
    }
    v6 = *(_DWORD *)(sub_10009E6C() + 20);
    sub_10009E6C();
    return sub_10004886(v6);
  }
  return result;
}
