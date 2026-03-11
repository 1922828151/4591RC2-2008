/*
 * func-name: sub_102A69D0
 * func-address: 0x102a69d0
 * callers: none
 * callees: 0x10006802, 0x1000d10c, 0x1000e56b, 0x10010a32, 0x10013eb7
 */

void __stdcall sub_102A69D0(Outpop::Utility::Ref_Object *a1, int a2)
{
  Outpop::Utility::Ref_Object *v2; // edi
  struct GameClient::LocalUser *User; // esi
  int v4; // [esp-8h] [ebp-20h]
  int v5; // [esp-4h] [ebp-1Ch]

  v2 = a1;
  User = GameClient::LocalUserManager::GetUser(GameClient::LocalUserManager::s_pInstance, (unsigned int)a1);
  if ( User )
  {
    sub_1000D10C((int)&a1, 17, 17002, (int)v2, 0, 512);
    sub_10006802((int)&a2);
    sub_1000E56B(*((_DWORD *)User + 9), (int)&a1);
    sub_10013EB7(v4, v5);
    if ( a1 )
      Outpop::Utility::Ref_Object::release(a1);
  }
}
