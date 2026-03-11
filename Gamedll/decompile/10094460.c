/*
 * func-name: ?RefreshOptions@Effect_Precipitation@@UAEXXZ_0
 * func-address: 0x10094460
 * callers: 0x100030f8
 * callees: 0x10001343, 0x1000d5cb, 0x100124b8, 0x100190c9, 0x102c9d98
 */

void __thiscall Effect_Precipitation::RefreshOptions(Effect_Precipitation *this)
{
  unsigned int v2; // ecx
  int v3; // eax
  unsigned int v4; // edi
  unsigned int v5; // ebp
  unsigned int i; // ebp
  int v7; // edi
  int v8; // edi
  int v9; // edx
  int v10; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // edi
  float v16[7]; // [esp+30h] [ebp-6Ch] BYREF
  int v17; // [esp+4Ch] [ebp-50h]
  int v18; // [esp+64h] [ebp-38h] BYREF
  float v19[3]; // [esp+6Ch] [ebp-30h] BYREF
  float v20[3]; // [esp+78h] [ebp-24h] BYREF
  float v21[3]; // [esp+84h] [ebp-18h] BYREF
  int v22; // [esp+98h] [ebp-4h]

  Effect_ParticleSystem::RefreshOptions(this);
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 1300, (char *)this + 1328) )
  {
    std::string::operator=((char *)this + 1328, (char *)this + 1300);
    Precacher::PurgeSound2D((struct Sound **)this + 324);
    v17 = 1;
    v18 = (int)v16;
    std::string::string(v16, (char *)this + 1300);
    *((_DWORD *)this + 324) = Precacher::CacheSound2D();
  }
  v2 = *((_DWORD *)this + 321);
  if ( v2 )
    v3 = (int)(*((_DWORD *)this + 322) - v2) >> 3;
  else
    v3 = 0;
  if ( v3 != *((_DWORD *)this + 341) )
  {
    v4 = *((_DWORD *)this + 322);
    if ( v2 > v4 )
      _invalid_parameter_noinfo();
    v5 = *((_DWORD *)this + 321);
    if ( v5 > *((_DWORD *)this + 322) )
      _invalid_parameter_noinfo();
    sub_100124B8((int)&v18, (int)this + 1280, v5, (int)this + 1280, v4);
    sub_100190C9(*((_DWORD *)this + 341));
    for ( i = 0; (signed int)i < *((_DWORD *)this + 341); *(float *)(v15 + 4) = (double)v18 / 100.0 )
    {
      v7 = rand() % 4;
      v19[0] = 0.0;
      v8 = v7 + 13;
      v19[1] = -12.0;
      v19[2] = 0.0;
      v18 = (int)operator new(0x1A4u);
      v22 = 0;
      if ( v18 )
      {
        v9 = *((_DWORD *)this + 350);
        v20[0] = 0.0;
        v17 = 6;
        v20[1] = 0.0;
        LODWORD(v16[6]) = v9;
        v20[2] = 0.0;
        v16[5] = 0.0;
        v21[0] = 0.0;
        v16[4] = 0.0;
        v21[1] = 0.0;
        v21[2] = 0.0;
        v16[3] = 0.0060000001;
        v16[2] = 0.02;
        v16[1] = 500.0;
        v16[0] = 200.0;
        v10 = LaserParticleSystem::LaserParticleSystem(
                -1,
                COERCE_INT(0.029999999),
                *((_DWORD *)this + 178),
                COERCE_INT(0.0),
                v8,
                v8,
                (int)v21,
                (int)v20,
                (int)v19,
                COERCE_INT(*((float *)this + 353)),
                COERCE_INT(0.75),
                COERCE_INT(1.2),
                COERCE_INT(*((float *)this + 352)),
                COERCE_INT(200.0),
                COERCE_INT(500.0),
                COERCE_INT(0.02),
                COERCE_INT(0.0060000001),
                0,
                0,
                v9,
                6);
      }
      else
      {
        v10 = 0;
      }
      v11 = *((_DWORD *)this + 321);
      v22 = -1;
      if ( !v11 || i >= (*((_DWORD *)this + 322) - v11) >> 3 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(*((_DWORD *)this + 321) + 8 * i) = v10;
      v12 = *((_DWORD *)this + 321);
      if ( !v12 || i >= (*((_DWORD *)this + 322) - v12) >> 3 )
        _invalid_parameter_noinfo();
      v13 = *(_DWORD *)(*((_DWORD *)this + 321) + 8 * i);
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 16))(v13);
      v14 = *((_DWORD *)this + 321);
      if ( !v14 || i >= (*((_DWORD *)this + 322) - v14) >> 3 )
        _invalid_parameter_noinfo();
      v15 = 8 * i++ + *((_DWORD *)this + 321);
      v18 = rand() % 1200;
    }
  }
}
