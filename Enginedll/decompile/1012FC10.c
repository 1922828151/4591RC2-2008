/*
 * func-name: ??1SkyController@@UAE@XZ
 * func-address: 0x1012fc10
 * callers: 0x10054f30
 * callees: 0x10021730, 0x1002ffd0, 0x100511a0, 0x10059e70, 0x10059fc0, 0x100e6830, 0x10118c10, 0x101a2500, 0x101a259e
 */

void __thiscall SkyController::~SkyController(SkyController *this)
{
  int v2; // ecx
  Script *v3; // edi
  Material *v4; // ecx
  Material *v5; // ecx
  Material *v6; // ecx
  unsigned int i; // ebp
  int v8; // edi
  int v9; // ecx
  char *v10; // edi
  const void *v11; // ebp
  int v12; // edi
  void *v13; // edx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebp
  int v17; // [esp-Ch] [ebp-38h]
  int v18; // [esp-Ch] [ebp-38h]
  int v19; // [esp-Ch] [ebp-38h]
  int v20; // [esp-Ch] [ebp-38h]
  int v21; // [esp-Ch] [ebp-38h]
  int v22; // [esp-Ch] [ebp-38h]
  int v23; // [esp-Ch] [ebp-38h]
  int *v24; // [esp-4h] [ebp-30h]
  int *v25; // [esp-4h] [ebp-30h]
  int *v26; // [esp-4h] [ebp-30h]
  int *v27; // [esp-4h] [ebp-30h]
  int *v28; // [esp-4h] [ebp-30h]
  int *v29; // [esp-4h] [ebp-30h]
  int *v30; // [esp-4h] [ebp-30h]
  void *Destination; // [esp+10h] [ebp-1Ch]
  int v32[3]; // [esp+14h] [ebp-18h] BYREF
  int v33; // [esp+28h] [ebp-4h]

  v32[2] = (int)this;
  *(_DWORD *)this = &SkyController::`vftable';
  v2 = *((_DWORD *)this + 307);
  v33 = 10;
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 80))(v2, 1);
  SkyController::Instance = 0;
  v3 = SkyController::m_ControllerScript;
  if ( SkyController::m_ControllerScript )
  {
    Script::~Script(SkyController::m_ControllerScript);
    operator delete(v3);
  }
  SkyController::m_ControllerScript = 0;
  v4 = (Material *)*((_DWORD *)this + 890);
  if ( v4 )
  {
    Material::Release(v4);
    *((_DWORD *)this + 890) = 0;
  }
  v5 = (Material *)*((_DWORD *)this + 892);
  if ( v5 )
  {
    Material::Release(v5);
    *((_DWORD *)this + 892) = 0;
  }
  v6 = (Material *)*((_DWORD *)this + 449);
  if ( v6 )
  {
    Material::Release(v6);
    *((_DWORD *)this + 449) = 0;
  }
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 1104) + 52))(*((_DWORD *)this + 1104));
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 1105) + 52))(*((_DWORD *)this + 1105));
  for ( i = 0; ; ++i )
  {
    v8 = *((_DWORD *)this + 178);
    v9 = *(_DWORD *)(v8 + 3272);
    if ( !v9 || i >= (*(_DWORD *)(v8 + 3276) - v9) >> 2 )
      break;
    v10 = *(char **)(*(_DWORD *)(v8 + 3272) + 4 * i);
    if ( v10 )
    {
      std::string::~string(v10 + 432);
      operator delete(v10);
    }
  }
  v11 = *(const void **)(v8 + 3276);
  v12 = v8 + 3268;
  if ( *(_DWORD *)(v12 + 4) > (unsigned int)v11 )
    invalid_parameter_noinfo();
  v13 = *(void **)(v12 + 4);
  Destination = v13;
  if ( (unsigned int)v13 > *(_DWORD *)(v12 + 8) )
  {
    invalid_parameter_noinfo();
    v13 = Destination;
  }
  if ( v13 != v11 )
  {
    v14 = (*(_DWORD *)(v12 + 8) - (int)v11) >> 2;
    v32[0] = (int)v13 + 4 * v14;
    if ( v14 > 0 )
      memmove_s(Destination, 4 * v14, v11, 4 * v14);
    *(_DWORD *)(v12 + 8) = v32[0];
  }
  v15 = dword_11241A3C;
  v16 = dword_11241A38;
  v32[0] = dword_11241A3C;
  if ( dword_11241A38 > (unsigned int)dword_11241A3C )
  {
    invalid_parameter_noinfo();
    v15 = dword_11241A3C;
    v16 = dword_11241A38;
  }
  if ( v16 > v15 )
    invalid_parameter_noinfo();
  std::vector<BBox>::erase(
    &SkyController::InteriorVolumes,
    v32,
    (int)&SkyController::InteriorVolumes,
    v16,
    (int)&SkyController::InteriorVolumes,
    v32[0]);
  LOBYTE(v33) = 9;
  `eh vector destructor iterator'((char *)this + 2424, 0x118u, 4, (void (__thiscall *)(void *))ShaderVar::~ShaderVar);
  LOBYTE(v33) = 8;
  `eh vector destructor iterator'((char *)this + 1800, 0x9Cu, 4, (void (__thiscall *)(void *))Texture::~Texture);
  LOBYTE(v33) = 7;
  Model::~Model((SkyController *)((char *)this + 1332));
  v24 = (int *)*((_DWORD *)this + 330);
  v17 = *v24;
  LOBYTE(v33) = 6;
  sub_10059FC0((int)this + 1316, v32, (int)this + 1316, v17, (int)this + 1316, (int)v24);
  operator delete(*((void **)this + 330));
  *((_DWORD *)this + 330) = 0;
  *((_DWORD *)this + 331) = 0;
  v25 = (int *)*((_DWORD *)this + 327);
  v18 = *v25;
  LOBYTE(v33) = 5;
  sub_10059FC0((int)this + 1304, v32, (int)this + 1304, v18, (int)this + 1304, (int)v25);
  operator delete(*((void **)this + 327));
  *((_DWORD *)this + 327) = 0;
  *((_DWORD *)this + 328) = 0;
  v26 = (int *)*((_DWORD *)this + 324);
  v19 = *v26;
  LOBYTE(v33) = 4;
  sub_10059E70((int)this + 1292, v32, (int)this + 1292, v19, (int)this + 1292, (int)v26);
  operator delete(*((void **)this + 324));
  *((_DWORD *)this + 324) = 0;
  *((_DWORD *)this + 325) = 0;
  v27 = (int *)*((_DWORD *)this + 321);
  v20 = *v27;
  LOBYTE(v33) = 3;
  sub_10059FC0((int)this + 1280, v32, (int)this + 1280, v20, (int)this + 1280, (int)v27);
  operator delete(*((void **)this + 321));
  *((_DWORD *)this + 321) = 0;
  *((_DWORD *)this + 322) = 0;
  v28 = (int *)*((_DWORD *)this + 318);
  v21 = *v28;
  LOBYTE(v33) = 2;
  sub_10059FC0((int)this + 1268, v32, (int)this + 1268, v21, (int)this + 1268, (int)v28);
  operator delete(*((void **)this + 318));
  *((_DWORD *)this + 318) = 0;
  *((_DWORD *)this + 319) = 0;
  v29 = (int *)*((_DWORD *)this + 315);
  v22 = *v29;
  LOBYTE(v33) = 1;
  sub_10059FC0((int)this + 1256, v32, (int)this + 1256, v22, (int)this + 1256, (int)v29);
  operator delete(*((void **)this + 315));
  *((_DWORD *)this + 315) = 0;
  *((_DWORD *)this + 316) = 0;
  v30 = (int *)*((_DWORD *)this + 312);
  v23 = *v30;
  LOBYTE(v33) = 0;
  sub_10059E70((int)this + 1244, v32, (int)this + 1244, v23, (int)this + 1244, (int)v30);
  operator delete(*((void **)this + 312));
  *((_DWORD *)this + 312) = 0;
  *((_DWORD *)this + 313) = 0;
  v33 = -1;
  Actor::~Actor(this);
}
