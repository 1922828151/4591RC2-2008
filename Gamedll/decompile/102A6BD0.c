/*
 * func-name: sub_102A6BD0
 * func-address: 0x102a6bd0
 * callers: 0x100075b3
 * callees: 0x10006802, 0x1000d10c, 0x1000e56b, 0x10010a32, 0x10013eb7, 0x10015eab, 0x10018313
 */

void __stdcall sub_102A6BD0(Outpop::Utility::Ref_Object *a1, int a2, char a3, char a4, char a5)
{
  Outpop::Utility::Ref_Object *v5; // edi
  struct GameClient::LocalUser *User; // esi
  int v7; // [esp-8h] [ebp-20h]
  int v8; // [esp-4h] [ebp-1Ch]

  v5 = a1;
  User = GameClient::LocalUserManager::GetUser(GameClient::LocalUserManager::s_pInstance, (unsigned int)a1);
  if ( User )
  {
    sub_1000D10C((int)&a1, 17, 17012, (int)v5, 0, 512);
    sub_10006802((int)&a2);
    sub_10018313((int)&a3);
    sub_10015EAB((int)&a4);
    sub_10015EAB((int)&a5);
    sub_1000E56B(*((_DWORD *)User + 9), (int)&a1);
    sub_10013EB7(v7, v8);
    if ( a1 )
      Outpop::Utility::Ref_Object::release(a1);
  }
}
