/*
 * func-name: sub_102B4D50
 * func-address: 0x102b4d50
 * callers: none
 * callees: 0x1000aff6, 0x1000f722
 */

void __cdecl sub_102B4D50(int a1)
{
  int v1; // [esp-4h] [ebp-30h]
  _BYTE v2[28]; // [esp+4h] [ebp-28h] BYREF
  int v3; // [esp+28h] [ebp-4h]

  v1 = std::string::string(v2, a1);
  v3 = 0;
  GameClient::FlyweightManager::Instance();
  GameClient::FlyweightManager::RefreshFlyweigth(v1);
  v3 = -1;
  std::string::~string(v2);
}
