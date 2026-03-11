/*
 * func-name: ?DrawLoadingScreen@Game@@QAEXM@Z_0
 * func-address: 0x102b5a30
 * callers: 0x100030e9
 * callees: 0x102c9fe0
 */

void __thiscall Game::DrawLoadingScreen(Game *this, float a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ebx
  int v19; // ecx
  int v20; // eax
  int v21; // ebp
  struct Texture *LoadingTexture; // eax
  int v23; // eax
  struct Texture *v24; // eax
  int v25; // eax
  int SceneName; // eax
  int v27; // ebp
  int v28; // ebp
  int v29; // edi
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // [esp+5Ch] [ebp-70h]
  int v37; // [esp+60h] [ebp-6Ch]
  int v38; // [esp+74h] [ebp-58h]
  float v39; // [esp+74h] [ebp-58h]
  struct Texture *v41; // [esp+7Ch] [ebp-50h]
  float v42; // [esp+7Ch] [ebp-50h]
  int *v43; // [esp+80h] [ebp-4Ch]
  int v44; // [esp+80h] [ebp-4Ch]
  int v45; // [esp+84h] [ebp-48h]
  int v46; // [esp+88h] [ebp-44h]
  _DWORD v47[4]; // [esp+8Ch] [ebp-40h] BYREF
  float v48; // [esp+9Ch] [ebp-30h]
  float v49; // [esp+A0h] [ebp-2Ch]
  _BYTE v50[28]; // [esp+A4h] [ebp-28h] BYREF
  int v51; // [esp+C8h] [ebp-4h]

  if ( a2 > 100.0 )
    a2 = 100.0;
  v2 = RenderDevice::Instance(this);
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 388))(v2);
  v4 = RenderDevice::Instance(v3);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 432))(v4, 28, 0);
  v45 = (int)*(float *)(RenderDevice::Instance(v5) + 1624);
  v7 = (int)*(float *)(RenderDevice::Instance(v6) + 1620);
  v48 = 0.0;
  v46 = v7;
  v49 = 0.050000001;
  v47[0] = 0;
  v47[1] = 0;
  v47[3] = *(_DWORD *)(Canvas::Instance() + 68);
  v47[2] = *(_DWORD *)(Canvas::Instance() + 64);
  v9 = RenderDevice::Instance(v8);
  (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)(v9 + 1708) + 188))(*(_DWORD *)(v9 + 1708), v47);
  v11 = RenderDevice::Instance(v10);
  (*(void (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)v11 + 448))(v11, 0, 7, 0);
  v13 = RenderDevice::Instance(v12);
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v13 + 448))(v13, 0, 5, 1);
  v15 = RenderDevice::Instance(v14);
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v15 + 448))(v15, 0, 6, 1);
  v17 = RenderDevice::Instance(v16);
  v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 296))(v17);
  v20 = RenderDevice::Instance(v19);
  v21 = (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 300))(v20);
  v38 = v21;
  if ( *((_BYTE *)this + 6) )
  {
    LoadingTexture = World::GetLoadingTexture((World *)dword_103B8134);
    if ( (unsigned __int8)std::operator==<char>((char *)LoadingTexture + 100, "UNLOADED") )
    {
      v23 = Canvas::Instance();
      (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, int, int))(*(_DWORD *)v23 + 68))(
        v23,
        -16777066,
        -2,
        -2,
        v18,
        v21,
        0,
        5,
        6);
    }
    else
    {
      v24 = World::GetLoadingTexture((World *)dword_103B8134);
      v41 = v24;
      if ( v24 )
      {
        *((float *)v24 + 17) = 1.0;
        *((float *)v24 + 18) = (double)v21 / (double)v18;
      }
      v25 = Canvas::Instance();
      (*(void (__thiscall **)(int, int, int, int, int, int, struct Texture *, int, int))(*(_DWORD *)v25 + 68))(
        v25,
        -1,
        -2,
        -2,
        v18,
        v21,
        v41,
        5,
        6);
    }
    v43 = (int *)Canvas::Instance();
    SceneName = World::GetSceneName(dword_103B8134, v50);
    v27 = *v43;
    v39 = (float)v38;
    v51 = 0;
    v42 = (float)v18;
    v36 = std::string::c_str(SceneName);
    (*(void (__cdecl **)(int *, int, int, int, int, int, int, int))(v27 + 52))(
      v43,
      2,
      -1761607681,
      (int)(v42 * 0.5),
      (int)(v39 * 0.1000000014901161),
      v18,
      50,
      v36);
    v51 = -1;
    std::string::~string(v50);
    v28 = Canvas::Instance();
    v44 = (int)(v39 * 0.9750000238418579);
    (*(void (__thiscall **)(int, int, _DWORD, int, int, int, _DWORD, int, int))(*(_DWORD *)v28 + 68))(
      v28,
      -8884616,
      0,
      v44,
      v18,
      (int)(0.02500000037252903 * v39),
      0,
      5,
      6);
    v29 = Canvas::Instance();
    (*(void (__thiscall **)(int, int, _DWORD, int, int, int, _DWORD, int, int))(*(_DWORD *)v29 + 68))(
      v29,
      -11516336,
      0,
      v44,
      (int)(v42 * 0.009999999776482582 * a2),
      (int)(0.02500000037252903 * v39),
      0,
      5,
      6);
    v31 = RenderDevice::Instance(v30);
    (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v31 + 448))(v31, 0, 7, 2);
  }
  else
  {
    v33 = Canvas::Instance();
    (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, int, int))(*(_DWORD *)v33 + 68))(
      v33,
      -16777216,
      -2,
      -2,
      1028,
      772,
      0,
      5,
      6);
  }
  v48 = (float)v45;
  v49 = (float)v46;
  v34 = RenderDevice::Instance(v32);
  (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)(v34 + 1708) + 188))(*(_DWORD *)(v34 + 1708), v47);
  v35 = GUISystem::Instance(v37);
  (*(void (__thiscall **)(int))(*(_DWORD *)v35 + 8))(v35);
}
