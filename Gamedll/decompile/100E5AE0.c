/*
 * func-name: ?LoadResource@SampleWeapon@@QAEXXZ_0
 * func-address: 0x100e5ae0
 * callers: 0x1000842c
 * callees: 0x102c9d62, 0x102c9d98
 */

void __thiscall SampleWeapon::LoadResource(SampleWeapon *this)
{
  int v2; // eax
  int NodeHandle; // eax
  int Animation; // eax
  int v5; // eax
  SoundEmitter *v6; // eax
  SoundEmitter *v7; // eax
  int v8; // eax
  _DWORD v9[3]; // [esp+98h] [ebp-78h] BYREF
  const char *v10; // [esp+A4h] [ebp-6Ch]
  int v11; // [esp+A8h] [ebp-68h] BYREF
  const char *v12; // [esp+ACh] [ebp-64h]
  int v13; // [esp+B0h] [ebp-60h] BYREF
  int v14; // [esp+B4h] [ebp-5Ch] BYREF
  int v15; // [esp+B8h] [ebp-58h]
  int v16; // [esp+BCh] [ebp-54h]
  int v17; // [esp+C0h] [ebp-50h]
  int v18; // [esp+C4h] [ebp-4Ch]
  int v19; // [esp+C8h] [ebp-48h]
  int v20; // [esp+CCh] [ebp-44h]
  SoundEmitter *v21; // [esp+DCh] [ebp-34h]
  int *v22; // [esp+E0h] [ebp-30h]
  _BYTE v23[28]; // [esp+E4h] [ebp-2Ch] BYREF
  int v24; // [esp+10Ch] [ebp-4h]

  if ( !*((_DWORD *)this + 179) )
  {
    v20 = 1;
    v19 = 0;
    v18 = 0;
    v21 = (SoundEmitter *)&v11;
    std::string::string(&v11, "M_ParticleGun01.xml");
    v2 = Precacher::CacheModel();
    v20 = 0;
    v21 = (SoundEmitter *)&v13;
    v12 = "Shoot_Point";
    *((_DWORD *)this + 179) = v2;
    std::string::string(&v13, v12);
    NodeHandle = StaticModel::GetNodeHandle(*((_DWORD *)this + 179), v13, v14, v15, v16, v17, v18, v19, v20);
    v20 = 0;
    v19 = 0;
    v18 = 1;
    v21 = (SoundEmitter *)&v11;
    v10 = "M_ParticleGun01_Idle.X";
    *((_DWORD *)this + 264) = NodeHandle;
    std::string::string(&v11, v10);
    Animation = Model::LoadAnimation(*((_DWORD *)this + 179), v11, v12, v13, v14, v15, v16, v17, v18, v19, v20);
    v20 = 0;
    v19 = 0;
    v18 = 1;
    v21 = (SoundEmitter *)&v11;
    v10 = "M_ParticleGun01_Walk.X";
    *((_DWORD *)this + 270) = Animation;
    std::string::string(&v11, v10);
    v5 = Model::LoadAnimation(*((_DWORD *)this + 179), v11, v12, v13, v14, v15, v16, v17, v18, v19, v20);
    v20 = 0;
    v19 = 0;
    v18 = 0;
    v21 = (SoundEmitter *)&v11;
    v10 = "M_ParticleGun01_Shoot.X";
    *((_DWORD *)this + 271) = v5;
    std::string::string(&v11, v10);
    *((_DWORD *)this + 272) = Model::LoadAnimation(
                                *((_DWORD *)this + 179),
                                v11,
                                v12,
                                v13,
                                v14,
                                v15,
                                v16,
                                v17,
                                v18,
                                v19,
                                v20);
  }
  v6 = (SoundEmitter *)operator new(0x30u);
  v21 = v6;
  v24 = 0;
  if ( v6 )
    v7 = SoundEmitter::SoundEmitter(v6);
  else
    v7 = 0;
  v24 = -1;
  *((_DWORD *)this + 273) = v7;
  if ( v7 )
    (**(void (__thiscall ***)(SoundEmitter *, char *, char *, _DWORD))v7)(
      v7,
      (char *)this + 856,
      (char *)this + 844,
      3000.0);
  v21 = (SoundEmitter *)&v14;
  std::string::string(&v14, "ParticleWeaponFireSound");
  v22 = v9;
  v24 = 1;
  std::string::string(v9, "ParticleWeaponSound");
  LOBYTE(v24) = 2;
  v8 = MaterialIntersect::Instance(v23, v9[0], v9[1], v9[2], v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20);
  MaterialIntersect::GetSound(v8);
  v20 = 1;
  v22 = &v13;
  v24 = 3;
  std::string::string(&v13, v23);
  *((_DWORD *)this + 274) = Precacher::CacheSound();
  *((_DWORD *)this + 275) = 0;
  v24 = -1;
  std::string::~string(v23);
}
