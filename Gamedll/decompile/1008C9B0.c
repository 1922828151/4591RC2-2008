/*
 * func-name: ?Tick@Effect_MultiTexParticles@@UAEXXZ_0
 * func-address: 0x1008c9b0
 * callers: 0x1000e31d
 * callees: 0x10009200, 0x10013908, 0x10018f9d, 0x102c0ed0, 0x102c9d50, 0x102c9d62, 0x102c9d98
 */

void __thiscall Effect_MultiTexParticles::Tick(Effect_MultiTexParticles *this)
{
  unsigned int i; // ebx
  int v3; // ecx
  int v4; // eax
  char *v5; // ebx
  char *v6; // edx
  bool v7; // cc
  int v8; // eax
  Editor *v9; // eax
  void *v10; // eax
  Texture *v11; // ebx
  const char *v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // edx
  Texture **v15; // eax
  void *v16; // ebx
  void *v17; // ebx
  const char *v18; // edx
  double v19; // st7
  int v20; // eax
  RandomTextureParticles *v21; // esi
  int v22; // ecx
  int v23; // eax
  unsigned int j; // ebx
  int v25; // ecx
  int v26; // eax
  void (__thiscall ***v27)(_DWORD, int); // ecx
  char *v28; // ebx
  int v29; // eax
  void *v30; // eax
  Texture *v31; // ebx
  const char *v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // edx
  Texture **v35; // eax
  void *v36; // ebx
  void *v37; // ebx
  const char *v38; // edx
  double v39; // st7
  int v40; // eax
  RandomTextureParticles *v41; // esi
  int v42; // [esp+80h] [ebp-1A4h] BYREF
  int v43; // [esp+84h] [ebp-1A0h]
  int *v44; // [esp+88h] [ebp-19Ch]
  float v45; // [esp+8Ch] [ebp-198h]
  float v46; // [esp+90h] [ebp-194h]
  float v47; // [esp+94h] [ebp-190h]
  float v48; // [esp+98h] [ebp-18Ch]
  float v49; // [esp+9Ch] [ebp-188h]
  float v50; // [esp+A0h] [ebp-184h]
  float v51; // [esp+A4h] [ebp-180h]
  float v52; // [esp+A8h] [ebp-17Ch]
  float v53; // [esp+ACh] [ebp-178h]
  int v54; // [esp+B0h] [ebp-174h]
  const char *v55; // [esp+B4h] [ebp-170h]
  void *Destination; // [esp+C8h] [ebp-15Ch]
  void *v57; // [esp+CCh] [ebp-158h] BYREF
  void *v58; // [esp+D0h] [ebp-154h]
  int v59[3]; // [esp+D4h] [ebp-150h] BYREF
  int v60[3]; // [esp+E0h] [ebp-144h] BYREF
  _BYTE v61[12]; // [esp+ECh] [ebp-138h] BYREF
  _BYTE v62[12]; // [esp+F8h] [ebp-12Ch] BYREF
  char Buffer[268]; // [esp+104h] [ebp-120h] BYREF
  int v64; // [esp+220h] [ebp-4h]

  if ( !*((_DWORD *)this + 315) )
  {
    for ( i = 0; ; ++i )
    {
      v3 = *((_DWORD *)this + 310);
      if ( !v3 || i >= (*((_DWORD *)this + 311) - v3) >> 2 )
        break;
      v4 = *((_DWORD *)this + 310);
      if ( *(_DWORD *)(v4 + 4 * i) )
      {
        if ( !v4 || i >= (*((_DWORD *)this + 311) - v4) >> 2 )
          _invalid_parameter_noinfo();
        Destination = *(void **)(*((_DWORD *)this + 310) + 4 * i);
        if ( *(float *)&Destination != 0.0 )
        {
          Texture::~Texture((Texture *)Destination);
          operator delete(Destination);
        }
      }
    }
    sub_10009200((char *)this + 1236, 0, 0);
    v5 = (char *)*((_DWORD *)this + 311);
    if ( *((_DWORD *)this + 310) > (unsigned int)v5 )
      _invalid_parameter_noinfo();
    v6 = (char *)*((_DWORD *)this + 310);
    v7 = (unsigned int)v6 <= *((_DWORD *)this + 311);
    Destination = v6;
    if ( !v7 )
    {
      _invalid_parameter_noinfo();
      v6 = (char *)Destination;
    }
    if ( v6 != v5 )
    {
      v8 = (*((_DWORD *)this + 311) - (int)v5) >> 2;
      v57 = &v6[4 * v8];
      if ( v8 > 0 )
        memmove_s(Destination, 4 * v8, v5, 4 * v8);
      *((float *)this + 311) = *(float *)&v57;
    }
    v9 = (Editor *)Editor::Instance();
    if ( !Editor::GetEditorMode(v9) )
      *((float *)this + 205) = *((float *)this + 308);
    v7 = *((_DWORD *)this + 286) <= 0;
    *(float *)&Destination = 0.0;
    if ( !v7 )
    {
      do
      {
        v10 = operator new(0x9Cu);
        v57 = v10;
        v11 = 0;
        v64 = 0;
        if ( v10 )
          v11 = Texture::Texture((Texture *)v10);
        v55 = ".dds";
        v54 = (int)Destination;
        v64 = -1;
        v57 = v11;
        v12 = (const char *)std::string::c_str((char *)this + 1148);
        sprintf(Buffer, "%s%d%s", v12, v54, v55);
        v55 = 0;
        *(float *)&v54 = 0.0;
        v53 = 1.0;
        v52 = 1.0;
        v51 = 0.0;
        v50 = 0.0;
        v49 = 0.0;
        v58 = &v42;
        std::string::string(&v42, Buffer);
        Texture::Load(
          v11,
          v42,
          v43,
          v44,
          LODWORD(v45),
          LODWORD(v46),
          LODWORD(v47),
          LODWORD(v48),
          LODWORD(v49),
          LODWORD(v50),
          LODWORD(v51),
          LODWORD(v52),
          LODWORD(v53),
          v54,
          v55);
        v13 = *((_DWORD *)this + 310);
        if ( v13 )
          v14 = (int)(*((_DWORD *)this + 311) - v13) >> 2;
        else
          v14 = 0;
        if ( v13 && v14 < (int)(*((_DWORD *)this + 312) - v13) >> 2 )
        {
          v15 = (Texture **)*((_DWORD *)this + 311);
          *v15 = v11;
          *((_DWORD *)this + 311) = v15 + 1;
        }
        else
        {
          v16 = (void *)*((_DWORD *)this + 311);
          if ( v13 > (unsigned int)v16 )
            _invalid_parameter_noinfo();
          sub_10018F9D((int)v59, (int)this + 1236, v16, (int)&v57);
        }
        v7 = (int)Destination + 1 < *((_DWORD *)this + 286);
        Destination = (char *)Destination + 1;
      }
      while ( v7 );
    }
    v17 = operator new(0x19Cu);
    v58 = v17;
    v64 = 1;
    if ( v17 )
    {
      v18 = (const char *)*((_DWORD *)this + 263);
      Destination = *((void **)this + 278);
      v55 = v18;
      v19 = *((float *)this + 277);
      v54 = (int)this + 1236;
      *(float *)&v57 = v19;
      v53 = 0.0;
      v59[0] = *((int *)this + 276);
      v59[1] = (int)v57;
      v59[2] = (int)Destination;
      v52 = *((float *)this + 275);
      v51 = *((float *)this + 274);
      v50 = *((float *)this + 273);
      v49 = *((float *)this + 272);
      v48 = *((float *)this + 271);
      v47 = *((float *)this + 270);
      v46 = *((float *)this + 268);
      v45 = *((float *)this + 269);
      v44 = v59;
      v20 = sub_102C0ED0(v61);
      v21 = RandomTextureParticles::RandomTextureParticles(
              (RandomTextureParticles *)v17,
              *((_DWORD *)this + 178),
              -1,
              10.0,
              0,
              0,
              (int)this + 856,
              v20,
              (int)v44,
              v45,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51,
              v52,
              SLODWORD(v53),
              v54,
              (int)v55);
    }
    else
    {
      v21 = 0;
    }
    v64 = -1;
    FXSystem::RegisterWithHash(v21);
    *((_DWORD *)this + 313) = *((_DWORD *)v21 + 30);
    v55 = (char *)this + 1148;
    *((_DWORD *)this + 315) = v21;
    std::string::operator=((char *)this + 1176, v55);
    *((_BYTE *)this + 1256) = 1;
  }
  if ( (unsigned __int8)std::operator!=<char>((char *)this + 1176, (char *)this + 1148)
    || ((v22 = *((_DWORD *)this + 310)) != 0 ? (v23 = (*((_DWORD *)this + 311) - v22) >> 2) : (v23 = 0),
        v23 != *((_DWORD *)this + 286)) )
  {
    for ( j = 0; ; ++j )
    {
      v25 = *((_DWORD *)this + 310);
      if ( !v25 || j >= (*((_DWORD *)this + 311) - v25) >> 2 )
        break;
      v26 = *((_DWORD *)this + 310);
      if ( *(_DWORD *)(v26 + 4 * j) )
      {
        if ( !v26 || j >= (*((_DWORD *)this + 311) - v26) >> 2 )
          _invalid_parameter_noinfo();
        v57 = *(void **)(*((_DWORD *)this + 310) + 4 * j);
        if ( *(float *)&v57 != 0.0 )
        {
          Texture::~Texture((Texture *)v57);
          operator delete(v57);
        }
      }
    }
    sub_10009200((char *)this + 1236, 0, 0);
    v27 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 315);
    if ( v27 )
    {
      (**v27)(v27, 1);
      *((_DWORD *)this + 315) = 0;
    }
    v7 = *((_DWORD *)this + 310) <= *((_DWORD *)this + 311);
    Destination = *((void **)this + 311);
    if ( !v7 )
      _invalid_parameter_noinfo();
    v28 = (char *)*((_DWORD *)this + 310);
    if ( (unsigned int)v28 > *((_DWORD *)this + 311) )
      _invalid_parameter_noinfo();
    if ( v28 != Destination )
    {
      v29 = (*((_DWORD *)this + 311) - (int)Destination) >> 2;
      v57 = &v28[4 * v29];
      if ( v29 > 0 )
        memmove_s(v28, 4 * v29, Destination, 4 * v29);
      *((float *)this + 311) = *(float *)&v57;
    }
    v7 = *((_DWORD *)this + 286) <= 0;
    *(float *)&Destination = 0.0;
    if ( !v7 )
    {
      do
      {
        v30 = operator new(0x9Cu);
        v58 = v30;
        v64 = 2;
        if ( v30 )
          v31 = Texture::Texture((Texture *)v30);
        else
          v31 = 0;
        v55 = ".dds";
        v54 = (int)Destination;
        v64 = -1;
        v57 = v31;
        v32 = (const char *)std::string::c_str((char *)this + 1148);
        sprintf(Buffer, "%s%d%s", v32, v54, v55);
        v55 = 0;
        *(float *)&v54 = 0.0;
        v53 = 1.0;
        v52 = 1.0;
        v51 = 0.0;
        v50 = 0.0;
        v49 = 0.0;
        v58 = &v42;
        std::string::string(&v42, Buffer);
        Texture::Load(
          v31,
          v42,
          v43,
          v44,
          LODWORD(v45),
          LODWORD(v46),
          LODWORD(v47),
          LODWORD(v48),
          LODWORD(v49),
          LODWORD(v50),
          LODWORD(v51),
          LODWORD(v52),
          LODWORD(v53),
          v54,
          v55);
        v33 = *((_DWORD *)this + 310);
        if ( v33 )
          v34 = (int)(*((_DWORD *)this + 311) - v33) >> 2;
        else
          v34 = 0;
        if ( v33 && v34 < (int)(*((_DWORD *)this + 312) - v33) >> 2 )
        {
          v35 = (Texture **)*((_DWORD *)this + 311);
          *v35 = v31;
          *((_DWORD *)this + 311) = v35 + 1;
        }
        else
        {
          v36 = (void *)*((_DWORD *)this + 311);
          if ( v33 > (unsigned int)v36 )
            _invalid_parameter_noinfo();
          sub_10018F9D((int)v59, (int)this + 1236, v36, (int)&v57);
        }
        v7 = (int)Destination + 1 < *((_DWORD *)this + 286);
        Destination = (char *)Destination + 1;
      }
      while ( v7 );
    }
    v37 = operator new(0x19Cu);
    v58 = v37;
    v64 = 3;
    if ( v37 )
    {
      v38 = (const char *)*((_DWORD *)this + 263);
      Destination = *((void **)this + 278);
      v55 = v38;
      v39 = *((float *)this + 277);
      v54 = (int)this + 1236;
      *(float *)&v57 = v39;
      v53 = 0.0;
      v60[0] = *((int *)this + 276);
      v60[1] = (int)v57;
      v60[2] = (int)Destination;
      v52 = *((float *)this + 275);
      v51 = *((float *)this + 274);
      v50 = *((float *)this + 273);
      v49 = *((float *)this + 272);
      v48 = *((float *)this + 271);
      v47 = *((float *)this + 270);
      v46 = *((float *)this + 268);
      v45 = *((float *)this + 269);
      v44 = v60;
      v40 = sub_102C0ED0(v62);
      v41 = RandomTextureParticles::RandomTextureParticles(
              (RandomTextureParticles *)v37,
              *((_DWORD *)this + 178),
              -1,
              10.0,
              0,
              0,
              (int)this + 856,
              v40,
              (int)v44,
              v45,
              v46,
              v47,
              v48,
              v49,
              v50,
              v51,
              v52,
              SLODWORD(v53),
              v54,
              (int)v55);
    }
    else
    {
      v41 = 0;
    }
    v64 = -1;
    FXSystem::RegisterWithHash(v41);
    *((_DWORD *)this + 313) = *((_DWORD *)v41 + 30);
    v55 = (char *)this + 1148;
    *((_DWORD *)this + 315) = v41;
    std::string::operator=((char *)this + 1176, v55);
  }
  Actor::Tick(this);
}
