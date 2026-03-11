/*
 * func-name: ?Tick@Effect_Precipitation@@UAEXXZ_0
 * func-address: 0x100935c0
 * callers: 0x10018629
 * callees: 0x10003f58, 0x1000a097, 0x10017c4c, 0x102c9fe0
 */

void __thiscall Effect_Precipitation::Tick(struct World **this)
{
  CameraHandler *v2; // eax
  float *Camera; // eax
  bool v4; // zf
  float *v5; // ebx
  double v6; // st7
  double v7; // st7
  unsigned int i; // edi
  struct World *v9; // ecx
  struct World *v10; // ecx
  struct World *v11; // edx
  struct World *v12; // ecx
  int v13; // ecx
  double v14; // st7
  int v15; // eax
  int v16; // ebp
  int v17; // ebx
  struct World *v18; // ecx
  struct Vector *v19; // ebx
  void (__cdecl *v20)(); // ebp
  struct World *v21; // ecx
  struct Vector *v22; // ebx
  struct World *v23; // ecx
  _DWORD *v24; // eax
  _DWORD *v25; // ebx
  struct World *v26; // ecx
  _DWORD *v27; // eax
  struct World *v28; // ecx
  int v29; // ecx
  float v30; // [esp+14h] [ebp-B8h]
  float v31; // [esp+14h] [ebp-B8h]
  float v32; // [esp+14h] [ebp-B8h]
  float v33; // [esp+14h] [ebp-B8h]
  float v34; // [esp+14h] [ebp-B8h]
  float v35; // [esp+14h] [ebp-B8h]
  float v36; // [esp+18h] [ebp-B4h]
  float v37; // [esp+18h] [ebp-B4h]
  float v38; // [esp+18h] [ebp-B4h]
  float v39; // [esp+18h] [ebp-B4h]
  float v40; // [esp+1Ch] [ebp-B0h]
  float v41; // [esp+1Ch] [ebp-B0h]
  float v42; // [esp+1Ch] [ebp-B0h]
  float v43; // [esp+20h] [ebp-ACh]
  float v44; // [esp+20h] [ebp-ACh]
  float v45; // [esp+24h] [ebp-A8h]
  float v46; // [esp+28h] [ebp-A4h]
  float v47; // [esp+2Ch] [ebp-A0h]
  float v48; // [esp+30h] [ebp-9Ch] BYREF
  float v49; // [esp+34h] [ebp-98h]
  float v50; // [esp+38h] [ebp-94h]
  float *v51; // [esp+3Ch] [ebp-90h]
  float v52; // [esp+40h] [ebp-8Ch]
  float v53; // [esp+44h] [ebp-88h]
  float v54; // [esp+48h] [ebp-84h]
  float v55; // [esp+4Ch] [ebp-80h]
  float v56; // [esp+50h] [ebp-7Ch]
  float v57; // [esp+54h] [ebp-78h]
  _BYTE v58[20]; // [esp+58h] [ebp-74h] BYREF
  _DWORD *v59; // [esp+6Ch] [ebp-60h]
  int v60; // [esp+70h] [ebp-5Ch]
  struct Vector *v61; // [esp+7Ch] [ebp-50h]
  int v62; // [esp+80h] [ebp-4Ch]
  int v63; // [esp+C8h] [ebp-4h]

  if ( !*((_BYTE *)this + 1064) )
    Effect_ParticleSystem::Tick((Effect_ParticleSystem *)this);
  v2 = CameraHandler::Instance();
  Camera = (float *)CameraHandler::GetCamera(v2, 0);
  v4 = *((_BYTE *)this + 1356) == 0;
  v5 = Camera;
  v51 = Camera;
  if ( !v4 )
  {
    v40 = Camera[88] - *((float *)this + 345);
    v36 = Camera[89] - *((float *)this + 346);
    v6 = Camera[90] - *((float *)this + 347);
    this[214] = (struct World *)*((_DWORD *)Camera + 88);
    this[215] = (struct World *)*((_DWORD *)Camera + 89);
    v30 = v6;
    v7 = *((float *)this + 340);
    this[216] = (struct World *)*((_DWORD *)Camera + 90);
    v43 = v7 + *((float *)this + 215);
    *((float *)this + 215) = v43;
    if ( Camera[95] > 0.69999999 )
      *((float *)this + 215) = v43 + *((float *)this + 340);
    *((float *)this + 214) = *((float *)this + 214) + v40;
    *((float *)this + 215) = *((float *)this + 215) + v36;
    *((float *)this + 216) = *((float *)this + 216) + v30;
    this[345] = (struct World *)*((_DWORD *)Camera + 88);
    this[346] = (struct World *)*((_DWORD *)Camera + 89);
    this[347] = (struct World *)*((_DWORD *)Camera + 90);
  }
  for ( i = 0; ; ++i )
  {
    v9 = this[321];
    if ( !v9 || i >= (this[322] - v9) >> 3 )
      break;
    *((float *)this[321] + 2 * i + 1) = *((float *)this[321] + 2 * i + 1) - GDeltaTime;
    v10 = this[321];
    if ( !v10 || i >= (this[322] - v10) >> 3 )
      _invalid_parameter_noinfo();
    v11 = this[321];
    if ( *((float *)v11 + 2 * i + 1) < 0.0 )
    {
      if ( !v11 || i >= (this[322] - v11) >> 3 )
        _invalid_parameter_noinfo();
      *((float *)this[321] + 2 * i + 1) = 0.0;
      v12 = this[321];
      if ( !v12 || i >= (this[322] - v12) >> 3 )
        _invalid_parameter_noinfo();
      v13 = *((_DWORD *)this[321] + 2 * i);
      (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 16))(v13);
      if ( !*((_BYTE *)this + 1404) )
      {
        v48 = 0.0;
        v49 = 0.0;
        v50 = 0.0;
        v31 = (double)(rand() % 800) / 10.0 + 2.0;
        v14 = v31;
        v15 = (int)v31;
        v16 = v15;
        v32 = v5[94] * v31;
        v37 = v5[95] * v14;
        v41 = v14 * v5[96];
        v44 = v5[88] + v32;
        v33 = v5[89] + v37;
        v38 = v5[90] + v41;
        v55 = v44;
        v56 = v33;
        v46 = v33;
        v57 = v38;
        v17 = v15 / 2;
        v45 = (double)(rand() % v15 - v15 / 2) + v44;
        v47 = (double)(rand() % v16 - v17) + v38;
        v34 = *((float *)this + 340) * 16.0;
        v39 = v45 - 0.0;
        v35 = v46 - v34;
        v42 = v47 - 0.0;
        v52 = v39;
        v48 = v39;
        v53 = v35;
        v49 = v35;
        v54 = v42;
        v50 = v42;
        CollisionInfo::CollisionInfo((CollisionInfo *)v58);
        v18 = this[178];
        v63 = 0;
        if ( (unsigned __int8)World::CollisionCheckRay(v18, 0, this + 214, &v48, 12, v58, 0, 0) )
        {
          v19 = v61;
          if ( v61 && (v62 - (int)v61) / 12 )
          {
            v20 = _invalid_parameter_noinfo;
          }
          else
          {
            v20 = _invalid_parameter_noinfo;
            _invalid_parameter_noinfo();
            v19 = v61;
          }
          if ( !IndoorVolume::IsInVolumeType(this[178], v19, 1) )
          {
            v21 = this[321];
            if ( !v21 || i >= (this[322] - v21) >> 3 )
              v20();
            *((float *)this[321] + 2 * i + 1) = 1.2;
            v22 = v61;
            if ( !v61 || !((v62 - (int)v61) / 12) )
            {
              v20();
              v22 = v61;
            }
            v23 = this[321];
            if ( !v23 || i >= (this[322] - v23) >> 3 )
              v20();
            v24 = (_DWORD *)(*((_DWORD *)this[321] + 2 * i) + 20);
            *v24 = *(_DWORD *)v22;
            v24[1] = *((_DWORD *)v22 + 1);
            v24[2] = *((_DWORD *)v22 + 2);
            v25 = v59;
            if ( !v59 || !((v60 - (int)v59) / 12) )
            {
              v20();
              v25 = v59;
            }
            v26 = this[321];
            if ( !v26 || i >= (this[322] - v26) >> 3 )
              v20();
            v27 = (_DWORD *)(*((_DWORD *)this[321] + 2 * i) + 232);
            *v27 = *v25;
            v27[1] = v25[1];
            v27[2] = v25[2];
            v28 = this[321];
            if ( !v28 || i >= (this[322] - v28) >> 3 )
              v20();
            v29 = *((_DWORD *)this[321] + 2 * i);
            (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 48))(v29);
          }
        }
        v63 = -1;
        CollisionInfo::~CollisionInfo((CollisionInfo *)v58);
        v5 = v51;
      }
    }
  }
  Effect_ParticleSystem::Tick((Effect_ParticleSystem *)this);
}
