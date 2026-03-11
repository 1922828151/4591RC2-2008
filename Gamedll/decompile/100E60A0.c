/*
 * func-name: ?PlayExplodeEffect@SampleBullet@@UAEXXZ_0
 * func-address: 0x100e60a0
 * callers: 0x1000d981
 * callees: 0x102c9d62
 */

void __thiscall SampleBullet::PlayExplodeEffect(SampleBullet *this)
{
  int v2; // eax
  int v3; // ecx
  struct ActorGroup *v4; // eax
  int v5; // ecx
  _DWORD v6[5]; // [esp+18h] [ebp-78h] BYREF
  _DWORD v7[2]; // [esp+2Ch] [ebp-64h] BYREF
  _DWORD v8[5]; // [esp+34h] [ebp-5Ch] BYREF
  int v9; // [esp+48h] [ebp-48h]
  int v10; // [esp+4Ch] [ebp-44h]
  _DWORD *v11; // [esp+58h] [ebp-38h]
  struct ActorGroup *v12[2]; // [esp+5Ch] [ebp-34h] BYREF
  _BYTE v13[28]; // [esp+64h] [ebp-2Ch] BYREF
  int v14; // [esp+8Ch] [ebp-4h]

  v12[1] = (struct ActorGroup *)v8;
  std::string::string(v8, "W_ParticleGun01");
  v11 = v6;
  v14 = 0;
  std::string::string(v6, "Bullet_Explode");
  LOBYTE(v14) = 1;
  v2 = MaterialIntersect::Instance(
         v13,
         v6[0],
         v6[1],
         v6[2],
         v6[3],
         v6[4],
         v7[0],
         v7[1],
         v8[0],
         v8[1],
         v8[2],
         v8[3],
         v8[4],
         v9,
         v10);
  MaterialIntersect::GetFX(v2);
  v3 = *((_DWORD *)this + 178);
  v10 = 1;
  v9 = v3;
  v11 = v7;
  v14 = 2;
  std::string::string(v7, v13);
  v4 = (struct ActorGroup *)Precacher::CacheActorGroup();
  v12[0] = v4;
  if ( v4 )
  {
    ActorGroup::SetTransform(v4, (SampleBullet *)((char *)this + 856), (SampleBullet *)((char *)this + 868));
    Precacher::PurgeActorGroup(v12);
  }
  v5 = *((_DWORD *)this + 264);
  if ( v5 )
    (*(void (__stdcall **)(char *, char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 28))(
      (char *)this + 856,
      (char *)this + 844,
      300.0,
      0,
      1.0);
  *((float *)this + 205) = 0.0;
  v14 = -1;
  std::string::~string(v13);
}
