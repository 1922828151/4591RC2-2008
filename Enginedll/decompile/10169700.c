/*
 * func-name: ?Tick@Terrain@@UAEXXZ
 * func-address: 0x10169700
 * callers: none
 * callees: 0x1004e070, 0x1005f1c0, 0x1007ec70, 0x10097220, 0x100977a0, 0x100dad30, 0x100db0e0, 0x100e2550, 0x1010c960, 0x101189f0, 0x1015dcb0, 0x1015dd10, 0x10169020, 0x101a2534
 */

void __usercall Terrain::Tick(Terrain *this@<ecx>, int *a2@<edi>, unsigned int i@<esi>)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // ecx
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  void (__thiscall ***v10)(_DWORD, int); // ecx
  int v11; // ecx
  double v12; // st7
  double v13; // st6
  int v14; // ecx
  int v15; // ecx
  double v16; // st7
  int v17; // ecx
  float v18; // edx
  int v19; // eax
  float v20; // ecx
  int v21; // edx
  Input *v22; // eax
  int v23; // eax
  Input *v24; // eax
  int v25; // ecx
  Input *v26; // eax
  int v27; // edx
  Input *v28; // eax
  int v29; // eax
  Input *v30; // eax
  int v31; // ecx
  Input *v32; // eax
  int v33; // edx
  Input *v34; // eax
  int v35; // eax
  Input *v36; // eax
  int v37; // ecx
  Input *v38; // eax
  int v39; // edx
  Input *v40; // eax
  void *v41; // eax
  int v42; // edx
  int v43; // esi
  double v44; // st7
  double v45; // st7
  double v46; // st7
  char v47; // [esp-2Ch] [ebp-84h] BYREF
  int v48; // [esp-28h] [ebp-80h]
  int *v49; // [esp-24h] [ebp-7Ch]
  int v50[7]; // [esp-20h] [ebp-78h] BYREF
  int v51; // [esp-4h] [ebp-5Ch] BYREF
  int v52; // [esp+Ch] [ebp-4Ch]
  float v53; // [esp+10h] [ebp-48h]
  float v54; // [esp+14h] [ebp-44h]
  float v55; // [esp+18h] [ebp-40h] BYREF
  float v56; // [esp+1Ch] [ebp-3Ch]
  float v57; // [esp+20h] [ebp-38h]
  float v58[2]; // [esp+24h] [ebp-34h] BYREF
  float v59; // [esp+2Ch] [ebp-2Ch]
  int v60[9]; // [esp+30h] [ebp-28h] BYREF
  int v61; // [esp+54h] [ebp-4h]

  v61 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v60[8] = (int)&loc_101B65E5;
  v60[7] = (int)ExceptionList;
  if ( *((_BYTE *)Editor::Instance() + 2056) )
  {
    if ( !*((_DWORD *)this + 179) )
    {
      v50[6] = 1;
      v50[5] = 0;
      v50[4] = 0;
      v52 = (int)&v47;
      std::string::string(&v47, "Arrow.xml");
      *((_DWORD *)this + 179) = Precacher::CacheModel(
                                  v47,
                                  v48,
                                  (int)v49,
                                  v50[0],
                                  v50[1],
                                  v50[2],
                                  v50[3],
                                  v50[4],
                                  v50[5],
                                  (char *)v50[6]);
    }
    if ( (unsigned __int8)std::operator!=<char>((char *)this + 1240, (char *)this + 1268) )
    {
      v5 = RenderDevice::Instance();
      a2 = (int *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v5 + 8))(v5);
      if ( a2 )
      {
        std::string::string(v60, (char *)this + 1240);
        v61 = 0;
        FindMedia((int)v60, (int)"Textures", 0, 0);
        v52 = (int)v50;
        std::string::string(v50, v60);
        if ( !Terrain::CreateChildFromHMap(this, v50[0], v50[1], v50[2], v50[3], v50[4], v50[5], v50[6]) )
          SeriousWarning("CreateMeshFromHMap failed");
        v6 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int *))(*(_DWORD *)v6 + 12))(v6, a2);
        v61 = -1;
        std::string::~string(v60);
      }
      std::string::operator=((char *)this + 1268, (char *)this + 1240);
    }
    if ( (unsigned __int8)std::operator!=<char>((char *)this + 1480, *((_DWORD *)this + 377) + 100) )
    {
      std::string::operator=((char *)this + 1480, *((_DWORD *)this + 377) + 100);
      v7 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 293);
      if ( v7 )
      {
        (**v7)(v7, 1);
        *((_DWORD *)this + 293) = 0;
      }
      std::string::string(v60, *((_DWORD *)this + 377) + 100);
      v61 = 1;
      if ( FindMedia((int)v60, (int)"Textures", 0, 0) )
      {
        v8 = operator new(0x2Cu);
        v52 = (int)v8;
        LOBYTE(v61) = 2;
        v9 = v8 ? sub_1015DCB0(v8) : 0;
        v52 = (int)v50;
        v49 = v60;
        LOBYTE(v61) = 1;
        *((_DWORD *)this + 293) = v9;
        std::string::string(v50, v49);
        if ( !sub_1015DD10(*((_DWORD **)this + 293), v50[0], (LPCSTR)v50[1], v50[2], v50[3], v50[4], v50[5], v50[6]) )
        {
          v10 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 293);
          if ( v10 )
          {
            (**v10)(v10, 1);
            *((_DWORD *)this + 293) = 0;
          }
          qmemcpy(v50, (const void *)(*((_DWORD *)this + 377) + 100), sizeof(v50));
          a2 = &v51;
          LogPrintf("Load Pattern %s Failed.");
        }
      }
      v61 = -1;
      std::string::~string(v60);
    }
    for ( i = 0; ; ++i )
    {
      v11 = *((_DWORD *)this + 299);
      if ( !v11 || i >= (*((_DWORD *)this + 300) - v11) >> 2 )
        break;
      v12 = *((float *)this + 361) * 32.0;
      v52 = (*((_DWORD *)this + 340) - 1) / 2;
      v13 = (double)v52 * *((float *)this + 361) - v12;
      v52 = (*((_DWORD *)this + 341) - 1) / 2;
      v53 = v13;
      v54 = (double)v52 * *((float *)this + 361) - v12;
      if ( i >= (*((_DWORD *)this + 300) - v11) >> 2 )
        invalid_parameter_noinfo();
      v14 = *((_DWORD *)this + 299);
      a2 = (int *)(4 * i + v14);
      if ( !v14 || i >= (*((_DWORD *)this + 300) - v14) >> 2 )
        invalid_parameter_noinfo();
      v15 = *(_DWORD *)(*a2 + 1176);
      v52 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 299) + 4 * i) + 1172) << 6;
      v16 = (double)v52;
      v52 = v15 << 6;
      v17 = *((_DWORD *)this + 299);
      v58[0] = v16 * *((float *)this + 361) - v53;
      v59 = (double)v52 * *((float *)this + 361) - v54;
      v55 = *((float *)this + 214) + v58[0];
      v56 = *((float *)this + 215) + 0.0;
      v57 = *((float *)this + 216) + v59;
      if ( !v17 || i >= (*((_DWORD *)this + 300) - v17) >> 2 )
        invalid_parameter_noinfo();
      v18 = v56;
      v19 = *(_DWORD *)(*((_DWORD *)this + 299) + 4 * i) + 856;
      *(float *)v19 = v55;
      v20 = v57;
      *(float *)(v19 + 4) = v18;
      *(float *)(v19 + 8) = v20;
    }
    v21 = *((_DWORD *)this + 387);
    v50[6] = 0;
    v50[5] = v21;
    v22 = Input::Instance();
    if ( Input::ControlDown(v22, v50[5], v50[6]) )
      *((float *)this + 378) = GDeltaTime + *((float *)this + 378);
    v23 = *((_DWORD *)this + 388);
    v50[6] = 0;
    v50[5] = v23;
    v24 = Input::Instance();
    if ( Input::ControlDown(v24, v50[5], v50[6]) )
      *((float *)this + 378) = *((float *)this + 378) - GDeltaTime;
    v25 = *((_DWORD *)this + 389);
    v50[6] = 0;
    v50[5] = v25;
    v26 = Input::Instance();
    if ( Input::ControlDown(v26, v50[5], v50[6]) )
      *((float *)this + 379) = *((float *)this + 379) + GDeltaTime;
    v27 = *((_DWORD *)this + 390);
    v50[6] = 0;
    v50[5] = v27;
    v28 = Input::Instance();
    if ( Input::ControlDown(v28, v50[5], v50[6]) )
      *((float *)this + 379) = *((float *)this + 379) - GDeltaTime;
    v29 = *((_DWORD *)this + 391);
    v50[6] = 0;
    v50[5] = v29;
    v30 = Input::Instance();
    if ( Input::ControlDown(v30, v50[5], v50[6]) )
      *((_DWORD *)this + 380) = 0;
    v31 = *((_DWORD *)this + 392);
    v50[6] = 0;
    v50[5] = v31;
    v32 = Input::Instance();
    if ( Input::ControlDown(v32, v50[5], v50[6]) )
      *((_DWORD *)this + 380) = 1;
    v33 = *((_DWORD *)this + 393);
    v50[6] = 0;
    v50[5] = v33;
    v34 = Input::Instance();
    if ( Input::ControlDown(v34, v50[5], v50[6]) )
      *((_DWORD *)this + 380) = 2;
    v35 = *((_DWORD *)this + 394);
    v50[6] = 0;
    v50[5] = v35;
    v36 = Input::Instance();
    if ( Input::ControlDown(v36, v50[5], v50[6]) )
      *((_DWORD *)this + 380) = 3;
    v37 = *((_DWORD *)this + 395);
    v50[6] = 0;
    v50[5] = v37;
    v38 = Input::Instance();
    if ( Input::ControlDown(v38, v50[5], v50[6]) )
      *((_DWORD *)this + 380) = 4;
    v39 = *((_DWORD *)this + 396);
    v50[6] = 0;
    v50[5] = v39;
    v40 = Input::Instance();
    if ( Input::ControlDown(v40, v50[5], v50[6]) )
      *((_DWORD *)this + 380) = 5;
  }
  if ( *((_DWORD *)this + 157) == -1 )
  {
    v41 = sub_1005F1C0();
    v42 = *((_DWORD *)this + 324);
    v43 = *((_DWORD *)this + 325);
    v52 = v42 << 6;
    v44 = (double)(v42 << 6) * *((float *)this + 361);
    v52 = v43 << 6;
    v58[0] = v44;
    i = -64 * v43;
    v58[1] = 99999.0;
    v45 = (double)v52;
    v52 = -64 * v42;
    v50[6] = (int)v58;
    v46 = v45 * *((float *)this + 361);
    v50[5] = (int)&v55;
    v50[4] = 1;
    v50[3] = (int)this;
    v59 = v46;
    v52 = i;
    v55 = (double)(-64 * v42) * *((float *)this + 361);
    v56 = -99999.0;
    v57 = (double)(int)i * *((float *)this + 361);
    *((_DWORD *)this + 157) = (*(unsigned __int16 (__thiscall **)(void *, Terrain *, int, float *, float *))(*(_DWORD *)v41 + 4))(
                                v41,
                                this,
                                1,
                                &v55,
                                v58);
  }
  Prefab::Tick(this, a2, (char *)i);
}
