/*
 * func-name: ?NewBullet@FlyweightManager@GameClient@@QAEPAVBullet@2@KABVVector@@0@Z_0
 * func-address: 0x1022df80
 * callers: 0x1001067c
 * callees: 0x100029cd, 0x10013a84, 0x10014d21, 0x10018e71
 */

struct GameClient::Bullet *__userpurge GameClient::FlyweightManager::NewBullet@<eax>(
        GameClient::FlyweightManager *this@<ecx>,
        int a2@<edi>,
        int a3@<esi>,
        unsigned int a4,
        const struct Vector *a5,
        const struct Vector *a6)
{
  struct GameClient::Bullet *result; // eax
  struct GameClient::Bullet *v7; // ebx
  double v8; // st7
  float v9; // [esp+4h] [ebp-58h]
  int v10; // [esp+8h] [ebp-54h]
  int v11; // [esp+Ch] [ebp-50h]
  int v12[3]; // [esp+10h] [ebp-4Ch] BYREF
  _BYTE v13[64]; // [esp+1Ch] [ebp-40h] BYREF

  result = GameClient::FlyweightManager::NewInstance(this, a4, 0xFFFFFFFF);
  v7 = result;
  if ( result )
  {
    *((_DWORD *)result + 3) = *(_DWORD *)a5;
    *((_DWORD *)result + 4) = *((_DWORD *)a5 + 1);
    *((_DWORD *)result + 5) = *((_DWORD *)a5 + 2);
    *((_DWORD *)result + 6) = *(_DWORD *)a6;
    *((_DWORD *)result + 7) = *((_DWORD *)a6 + 1);
    *((_DWORD *)result + 8) = *((_DWORD *)a6 + 2);
    v9 = *(float *)a6 - *(float *)a5;
    *(float *)&v10 = *((float *)a6 + 1) - *((float *)a5 + 1);
    v8 = *((float *)a6 + 2) - *((float *)a5 + 2);
    v12[1] = v10;
    *(float *)&v11 = v8;
    *(float *)v12 = v9;
    v12[2] = v11;
    sub_100029CD();
    qmemcpy((char *)v7 + 48, (const void *)sub_10018E71(v13, (int)v12), 0x40u);
    sub_10014D21(a2, a3);
    return v7;
  }
  return result;
}
