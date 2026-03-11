/*
 * func-name: ?Tick@Effect_ShadedParticles@@UAEXXZ_0
 * func-address: 0x10098710
 * callers: 0x10019ffb
 * callees: 0x1000abb4, 0x102c0ed0, 0x102c0f30, 0x102c9d50, 0x102c9d98
 */

void __thiscall Effect_ShadedParticles::Tick(Material **this)
{
  const char *v2; // eax
  ParticleSystem *v3; // ebp
  struct Vector *v4; // eax
  ParticleSystem *v5; // edi
  Material *v6; // edi
  Material *v7; // ecx
  Material *v8; // eax
  Material *v9; // eax
  const char *v10; // eax
  ParticleSystem *v11; // ebp
  struct Vector *v12; // eax
  ParticleSystem *v13; // edi
  struct Vector *v14; // [esp+20h] [ebp-B4h]
  struct Vector *v15; // [esp+20h] [ebp-B4h]
  float v16; // [esp+2Ch] [ebp-A8h]
  float v17; // [esp+2Ch] [ebp-A8h]
  float v18; // [esp+38h] [ebp-9Ch]
  float v19; // [esp+38h] [ebp-9Ch]
  float v20; // [esp+3Ch] [ebp-98h]
  float v21; // [esp+3Ch] [ebp-98h]
  float v22; // [esp+40h] [ebp-94h]
  float v23; // [esp+40h] [ebp-94h]
  float v24; // [esp+44h] [ebp-90h]
  float v25; // [esp+44h] [ebp-90h]
  float v26; // [esp+48h] [ebp-8Ch]
  float v27; // [esp+48h] [ebp-8Ch]
  float v28; // [esp+4Ch] [ebp-88h]
  float v29; // [esp+4Ch] [ebp-88h]
  float v30; // [esp+50h] [ebp-84h]
  float v31; // [esp+50h] [ebp-84h]
  struct Material *v32; // [esp+58h] [ebp-7Ch]
  struct Material *v33; // [esp+58h] [ebp-7Ch]
  float v34; // [esp+70h] [ebp-64h]
  float v35; // [esp+74h] [ebp-60h]
  float v36; // [esp+74h] [ebp-60h]
  float v37; // [esp+78h] [ebp-5Ch]
  float v38[3]; // [esp+80h] [ebp-54h] BYREF
  float v39[3]; // [esp+8Ch] [ebp-48h] BYREF
  char v40[12]; // [esp+98h] [ebp-3Ch] BYREF
  char v41[12]; // [esp+A4h] [ebp-30h] BYREF
  char v42[12]; // [esp+B0h] [ebp-24h] BYREF
  int v43[3]; // [esp+BCh] [ebp-18h] BYREF
  int v44; // [esp+D0h] [ebp-4h]

  if ( !this[306] )
  {
    if ( this[303] )
    {
      v2 = (const char *)std::string::c_str(this + 283);
      Material::Load(this[303], v2);
      v3 = (ParticleSystem *)operator new(0x164u);
      v44 = 0;
      if ( v3 )
      {
        v32 = this[303];
        v35 = *((float *)this + 274);
        v37 = *((float *)this + 275);
        v38[0] = *((float *)this + 273);
        v38[1] = v35;
        v38[2] = v37;
        v30 = *((float *)this + 272);
        v28 = *((float *)this + 271);
        v26 = *((float *)this + 270);
        v24 = *((float *)this + 269);
        v22 = *((float *)this + 268);
        v20 = *((float *)this + 267);
        v18 = *((float *)this + 265);
        v16 = *((float *)this + 266);
        v14 = (struct Vector *)sub_102C0F30(v40);
        v4 = (struct Vector *)sub_102C0ED0(v41);
        v5 = ParticleSystem::ParticleSystem(
               v3,
               this[178],
               NAN,
               10.0,
               0,
               0,
               (struct Vector *)(this + 214),
               v4,
               v14,
               1,
               (struct Vector *)v38,
               v16,
               v18,
               v18,
               v18,
               v20,
               v22,
               v24,
               v26,
               v28,
               v30,
               0,
               v32);
      }
      else
      {
        v5 = 0;
      }
      v44 = -1;
      FXSystem::RegisterWithHash(v5);
      this[305] = (Material *)*((_DWORD *)v5 + 30);
      this[306] = v5;
      std::string::operator=(this + 290, this + 283);
    }
    *((_BYTE *)this + 1216) = 1;
  }
  if ( (unsigned __int8)std::operator!=<char>(this + 283, this + 290) )
  {
    v6 = this[303];
    if ( v6 )
    {
      Material::~Material(this[303]);
      operator delete(v6);
      this[303] = 0;
    }
    v7 = this[306];
    if ( v7 )
    {
      (**(void (__thiscall ***)(Material *, int))v7)(v7, 1);
      this[306] = 0;
    }
    v8 = (Material *)operator new(0x154u);
    v44 = 1;
    if ( v8 )
      v9 = Material::Material(v8);
    else
      v9 = 0;
    v44 = -1;
    this[303] = v9;
    v10 = (const char *)std::string::c_str(this + 283);
    Material::Load(this[303], v10);
    v11 = (ParticleSystem *)operator new(0x164u);
    v44 = 2;
    if ( v11 )
    {
      v33 = this[303];
      v36 = *((float *)this + 274);
      v34 = *((float *)this + 275);
      v39[0] = *((float *)this + 273);
      v39[1] = v36;
      v39[2] = v34;
      v31 = *((float *)this + 272);
      v29 = *((float *)this + 271);
      v27 = *((float *)this + 270);
      v25 = *((float *)this + 269);
      v23 = *((float *)this + 268);
      v21 = *((float *)this + 267);
      v19 = *((float *)this + 265);
      v17 = *((float *)this + 266);
      v15 = (struct Vector *)sub_102C0F30(v42);
      v12 = (struct Vector *)sub_102C0ED0(v43);
      v13 = ParticleSystem::ParticleSystem(
              v11,
              this[178],
              NAN,
              10.0,
              0,
              0,
              (struct Vector *)(this + 214),
              v12,
              v15,
              1,
              (struct Vector *)v39,
              v17,
              v19,
              v19,
              v19,
              v21,
              v23,
              v25,
              v27,
              v29,
              v31,
              0,
              v33);
    }
    else
    {
      v13 = 0;
    }
    v44 = -1;
    FXSystem::RegisterWithHash(v13);
    this[305] = (Material *)*((_DWORD *)v13 + 30);
    this[306] = v13;
    std::string::operator=(this + 290, this + 283);
  }
  Actor::Tick((Actor *)this);
}
