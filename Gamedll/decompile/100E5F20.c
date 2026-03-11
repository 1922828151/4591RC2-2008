/*
 * func-name: ?LoadResource@SampleBullet@@QAEXXZ_0
 * func-address: 0x100e5f20
 * callers: 0x10005fbf
 * callees: 0x102c9d62
 */

void __thiscall SampleBullet::LoadResource(SampleBullet *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // [esp+34h] [ebp-94h] BYREF
  int v7; // [esp+38h] [ebp-90h]
  int v8; // [esp+3Ch] [ebp-8Ch]
  int v9; // [esp+40h] [ebp-88h]
  int v10; // [esp+44h] [ebp-84h]
  int v11; // [esp+48h] [ebp-80h] BYREF
  const char *v12; // [esp+4Ch] [ebp-7Ch] BYREF
  int v13; // [esp+50h] [ebp-78h] BYREF
  int v14; // [esp+54h] [ebp-74h]
  int v15; // [esp+58h] [ebp-70h]
  int v16; // [esp+5Ch] [ebp-6Ch]
  int v17; // [esp+60h] [ebp-68h]
  int v18; // [esp+64h] [ebp-64h]
  int v19; // [esp+68h] [ebp-60h]
  const char **v20; // [esp+78h] [ebp-50h]
  int *v21; // [esp+7Ch] [ebp-4Ch]
  _BYTE v22[28]; // [esp+80h] [ebp-48h] BYREF
  _BYTE v23[28]; // [esp+9Ch] [ebp-2Ch] BYREF
  int v24; // [esp+C4h] [ebp-4h]

  v21 = &v13;
  std::string::string(&v13, "G_WolfParticleGun");
  v20 = (const char **)&v6;
  v24 = 0;
  std::string::string(&v6, "Bullet_Fly");
  LOBYTE(v24) = 1;
  v2 = MaterialIntersect::Instance(v23, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19);
  MaterialIntersect::GetFX(v2);
  v3 = *((_DWORD *)this + 178);
  v19 = 1;
  v18 = v3;
  v20 = (const char **)&v11;
  v24 = 2;
  std::string::string(&v11, v23);
  v4 = Precacher::CacheActorGroup();
  v20 = (const char **)&v13;
  v12 = "water";
  *((_DWORD *)this + 263) = v4;
  std::string::string(&v13, v12);
  v21 = &v6;
  LOBYTE(v24) = 3;
  std::string::string(&v6, "BulletExplodeSound");
  LOBYTE(v24) = 4;
  v5 = MaterialIntersect::Instance(v22, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19);
  MaterialIntersect::GetSound(v5);
  v19 = 1;
  v20 = &v12;
  LOBYTE(v24) = 5;
  std::string::string(&v12, v22);
  *((_DWORD *)this + 264) = Precacher::CacheSound();
  LOBYTE(v24) = 2;
  std::string::~string(v22);
  v24 = -1;
  std::string::~string(v23);
}
