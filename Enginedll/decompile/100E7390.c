/*
 * func-name: ?Initialize@MaterialManager@@QAEXXZ
 * func-address: 0x100e7390
 * callers: none
 * callees: 0x100116a0, 0x10012320, 0x100956d0, 0x100e40e0, 0x100e68a0, 0x10122ce0, 0x10136290, 0x10136530, 0x101a2534
 */

void __thiscall MaterialManager::Initialize(Material **this)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  Texture *v3; // ebp
  void *v4; // esi
  int v5; // eax
  Texture *v6; // eax
  int v7; // eax
  Material *v8; // ecx
  Texture *v9; // eax
  Texture *v10; // esi
  int v11; // eax
  _DWORD *v12; // ecx
  float *v13; // esi
  float v14; // edx
  int v15; // eax
  Material *v16; // ecx
  char v17; // [esp-20h] [ebp-94h] BYREF
  int v18; // [esp-1Ch] [ebp-90h]
  int v19; // [esp-18h] [ebp-8Ch]
  int v20; // [esp-14h] [ebp-88h]
  int v21; // [esp-10h] [ebp-84h] BYREF
  int v22; // [esp-Ch] [ebp-80h]
  int v23; // [esp-8h] [ebp-7Ch]
  int v24; // [esp-4h] [ebp-78h] BYREF
  int v25; // [esp+0h] [ebp-74h]
  int v26; // [esp+4h] [ebp-70h]
  int v27; // [esp+8h] [ebp-6Ch]
  int v28; // [esp+Ch] [ebp-68h]
  unsigned int v29; // [esp+10h] [ebp-64h]
  int v30; // [esp+14h] [ebp-60h]
  int v31; // [esp+28h] [ebp-4Ch] BYREF
  int *v32; // [esp+2Ch] [ebp-48h]
  float v33[3]; // [esp+30h] [ebp-44h] BYREF
  float v34; // [esp+3Ch] [ebp-38h]
  _BYTE v35[28]; // [esp+4Ch] [ebp-28h] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v36; // [esp+68h] [ebp-Ch]
  void *v37; // [esp+6Ch] [ebp-8h]
  int v38; // [esp+70h] [ebp-4h]

  v38 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v37 = &loc_101AF544;
  v36 = ExceptionList;
  v3 = 0;
  if ( !*this )
  {
    v4 = operator new(0x154u);
    v31 = (int)v4;
    v38 = 0;
    if ( v4 )
    {
      v32 = &v24;
      std::string::string(&v24, "(Internal) Default Material");
      v5 = Material::Material((int)v4, v24, v25, v26, v27, v28, v29, v30);
    }
    else
    {
      v5 = 0;
    }
    v30 = 156;
    v38 = -1;
    *this = (Material *)v5;
    v6 = (Texture *)operator new(v30);
    v32 = (int *)v6;
    v38 = 1;
    if ( v6 )
      v3 = Texture::Texture(v6);
    v30 = 0;
    *(float *)&v29 = 0.0;
    v38 = -1;
    *(float *)&v28 = 1.0;
    *(float *)&v27 = 1.0;
    *(float *)&v26 = 0.0;
    *(float *)&v25 = 0.0;
    v24 = 0;
    v32 = (int *)&v17;
    std::string::string(&v17, "DefaultTexture.dds");
    if ( !(unsigned __int8)Texture::Load(
                             v17,
                             v18,
                             v19,
                             v20,
                             v21,
                             v22,
                             v23,
                             v24,
                             *(float *)&v25,
                             *(float *)&v26,
                             *(float *)&v27,
                             *(float *)&v28,
                             *(float *)&v29,
                             v30) )
      Error("Couldn't find/load DefaultTexture.dds\nYour install may be corrupt");
    v32 = (int *)operator new(0x118u);
    v38 = 2;
    if ( v32 )
    {
      v30 = (int)v3;
      v29 = 1;
      v28 = 9;
      v31 = (int)&v21;
      std::string::string(&v21, "tDiffuse0");
      v7 = ShaderVar::ShaderVar(v21, v22, v23, v24, v25, v26, v27, v28, v29, v30);
    }
    else
    {
      v7 = 0;
    }
    v8 = *this;
    v31 = v7;
    v38 = -1;
    sub_10012320((_DWORD *)v8 + 69, &v31);
    v9 = (Texture *)operator new(0x9Cu);
    v32 = (int *)v9;
    v38 = 3;
    if ( v9 )
      v10 = Texture::Texture(v9);
    else
      v10 = 0;
    v30 = 0;
    *(float *)&v29 = 0.0;
    v38 = -1;
    *(float *)&v28 = 1.0;
    *(float *)&v27 = 1.0;
    *(float *)&v26 = 0.0;
    *(float *)&v25 = 0.0;
    v24 = 2;
    v32 = (int *)&v17;
    std::string::string(&v17, "DefaultNormal.dds");
    if ( !(unsigned __int8)Texture::Load(
                             v17,
                             v18,
                             v19,
                             v20,
                             v21,
                             v22,
                             v23,
                             v24,
                             *(float *)&v25,
                             *(float *)&v26,
                             *(float *)&v27,
                             *(float *)&v28,
                             *(float *)&v29,
                             v30) )
      Error("Couldn't find/load DefaultNormal.dds\nYour install may be corrupt");
    v32 = (int *)operator new(0x118u);
    v38 = 4;
    if ( v32 )
    {
      v30 = (int)v10;
      v29 = 1;
      v28 = 9;
      v31 = (int)&v21;
      std::string::string(&v21, "tBump0");
      v11 = ShaderVar::ShaderVar(v21, v22, v23, v24, v25, v26, v27, v28, v29, v30);
    }
    else
    {
      v11 = 0;
    }
    v30 = (int)&v31;
    v12 = (_DWORD *)((char *)*this + 276);
    v38 = -1;
    v31 = v11;
    sub_10012320(v12, &v31);
    v13 = (float *)operator new(0x10u);
    v33[0] = 1.0;
    v33[1] = 1.0;
    v33[2] = 1.0;
    v34 = 1.0;
    *v13 = 1.0;
    v14 = v34;
    v13[1] = 1.0;
    v13[2] = 1.0;
    v29 = 280;
    v13[3] = v14;
    v32 = (int *)operator new(v29);
    v38 = 5;
    if ( v32 )
    {
      v30 = (int)v13;
      v29 = 1;
      v28 = 6;
      v31 = (int)&v21;
      std::string::string(&v21, "MatEmissive");
      v15 = ShaderVar::ShaderVar(v21, v22, v23, v24, v25, v26, v27, v28, v29, v30);
    }
    else
    {
      v15 = 0;
    }
    v16 = *this;
    v31 = v15;
    v38 = -1;
    sub_10012320((_DWORD *)v16 + 69, &v31);
    Material::Initialize(*this, "Diffuse.fx", "Diffuse", 0);
    std::string::string(v33, "water");
    v38 = 6;
    sub_100116A0(this + 10, v33);
    v38 = -1;
    std::string::~string(v33);
    std::string::string(v33, "metal");
    v38 = 7;
    sub_100116A0(this + 10, v33);
    v38 = -1;
    std::string::~string(v33);
    std::string::string(v33, "wood");
    v38 = 8;
    sub_100116A0(this + 10, v33);
    v38 = -1;
    std::string::~string(v33);
    std::string::string(v33, "marble");
    v38 = 9;
    sub_100116A0(this + 10, v33);
    v38 = -1;
    std::string::~string(v33);
    std::string::string(v33, "gravel");
    v38 = 10;
    sub_100116A0(this + 10, v33);
    v38 = -1;
    std::string::~string(v33);
    std::string::string(v33, "grass");
    v38 = 11;
    sub_100116A0(this + 10, v33);
    v38 = -1;
    std::string::~string(v33);
    std::string::string(v33, "mud");
    v38 = 12;
    sub_100116A0(this + 10, v33);
    v38 = -1;
    std::string::~string(v33);
    std::string::string(v33, "earth");
    v38 = 13;
    sub_100116A0(this + 10, v33);
    v38 = -1;
    std::string::~string(v33);
    std::string::string(v33, "stone");
    v38 = 14;
    sub_100116A0(this + 10, v33);
    v38 = -1;
    std::string::~string(v33);
    std::string::string(v33, "glass");
    v38 = 15;
    sub_100116A0(this + 10, v33);
    v38 = -1;
    std::string::~string(v33);
    std::string::string(v33, "snow");
    v38 = 16;
    sub_100116A0(this + 10, v33);
    v38 = -1;
    std::string::~string(v33);
    std::string::string(v33, "skin");
    v38 = 17;
    sub_100116A0(this + 10, v33);
    v38 = -1;
    std::string::~string(v33);
    std::string::string(v35, "carpet");
    v38 = 18;
    sub_100116A0(this + 10, v35);
    v38 = -1;
    std::string::~string(v35);
  }
}
