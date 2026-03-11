/*
 * func-name: sub_1014BF80
 * func-address: 0x1014bf80
 * callers: 0x10014ace
 * callees: 0x10008ea9, 0x1000aff6, 0x1001067c, 0x10010f8c, 0x10012c29, 0x100158a2, 0x10017a26, 0x1001ac58
 */

struct GameClient::Bullet *__userpurge sub_1014BF80@<eax>(
        int a1@<ebx>,
        unsigned int a2,
        struct Vector *a3,
        struct Vector *a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9)
{
  GameClient::FlyweightManager *v9; // eax
  struct GameClient::Bullet *result; // eax
  struct GameClient::Bullet *v11; // ebp
  GameClient::FlyweightManager *v12; // eax
  struct GameClient::Bullet *v13; // ebx
  unsigned int i; // edi
  int v15; // ecx
  int v16; // [esp-10h] [ebp-18h]
  int v17; // [esp-Ch] [ebp-14h]
  int v19; // [esp+0h] [ebp-8h]

  v9 = GameClient::FlyweightManager::Instance();
  result = GameClient::FlyweightManager::GetFlyweight(v9, a2);
  v11 = result;
  if ( result )
  {
    if ( *((_BYTE *)result + 160) )
    {
      v12 = GameClient::FlyweightManager::Instance();
      result = GameClient::FlyweightManager::NewBullet(v12, a2, a3, a4);
    }
    else
    {
      sub_10010F8C((int)result, (int)a3);
      result = (struct GameClient::Bullet *)sub_10008EA9(v16, v17, (int)a4);
    }
    v13 = result;
    if ( result )
    {
      *((_DWORD *)result + 33) = a5;
      *((_DWORD *)result + 34) = a6;
      for ( i = 0; i < sub_1001AC58(); ++i )
      {
        v15 = *(_DWORD *)(a7 + 4);
        if ( !v15 || i >= (*(_DWORD *)(a7 + 8) - v15) >> 2 )
          _invalid_parameter_noinfo();
        sub_10017A26(*(_DWORD *)(*(_DWORD *)(a7 + 4) + 4 * i));
      }
      *((float *)v13 + 36) = a8;
      *((_DWORD *)v13 + 44) = a9;
      if ( !*((_BYTE *)v11 + 160) )
        sub_100158A2(a1, v19);
      return v13;
    }
  }
  return result;
}
