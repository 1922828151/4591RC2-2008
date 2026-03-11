/*
 * func-name: sub_102A6850
 * func-address: 0x102a6850
 * callers: 0x10009eb7
 * callees: 0x1000d10c, 0x1000e56b, 0x10010a32, 0x10013eb7
 */

void __stdcall sub_102A6850(Outpop::Utility::Ref_Object *a1)
{
  Outpop::Utility::Ref_Object *v1; // edi
  struct GameClient::LocalUser *User; // esi
  int v3; // [esp-8h] [ebp-20h]
  int v4; // [esp-4h] [ebp-1Ch]

  v1 = a1;
  User = GameClient::LocalUserManager::GetUser(GameClient::LocalUserManager::s_pInstance, (unsigned int)a1);
  if ( User )
  {
    sub_1000D10C((int)&a1, 13, 13000, (int)v1, 0, 512);
    sub_1000E56B(*((_DWORD *)User + 9), (int)&a1);
    sub_10013EB7(v3, v4);
    LogPrintf("User %d get character list.", *((_DWORD *)User + 9));
    if ( a1 )
      Outpop::Utility::Ref_Object::release(a1);
  }
}
