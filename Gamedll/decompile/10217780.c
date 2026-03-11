/*
 * func-name: sub_10217780
 * func-address: 0x10217780
 * callers: 0x10003abc
 * callees: 0x1000e56b, 0x1001055a, 0x1001732d
 */

struct GameClient::LocalUser *sub_10217780()
{
  struct GameClient::LocalUser *result; // eax
  struct GameClient::LocalUser *v1; // esi
  CDlgMgr *v2; // eax
  char v3; // [esp-4h] [ebp-8h]
  int v4; // [esp+0h] [ebp-4h]

  result = GameClient::LocalUserManager::GetUserByIndex(GameClient::LocalUserManager::s_pInstance, 0);
  v1 = result;
  if ( result )
  {
    v2 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::EndMessage(v2);
    sub_1000E56B(*((_DWORD *)v1 + 1), v4);
    return (struct GameClient::LocalUser *)sub_1001732D(v3);
  }
  return result;
}
