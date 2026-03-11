/*
 * func-name: ?OnResetDevice@ShadowEngine@@MAEJXZ
 * func-address: 0x10128810
 * callers: none
 * callees: 0x100971c0, 0x101189f0, 0x1012b950, 0x10136530, 0x1017c0d0, 0x1017c260, 0x1017eaef, 0x101a2534
 */

int __thiscall ShadowEngine::OnResetDevice(ShadowEngine *this)
{
  ShadowEngine *v1; // edi
  char v2; // al
  char v3; // al
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // edi
  float *v9; // eax
  int v10; // esi
  struct RenderDevice *v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  int *v17; // eax
  void *v18; // esi
  _DWORD *v19; // edi
  float *v20; // eax
  int v21; // esi
  struct RenderDevice *v22; // eax
  int v23; // eax
  int v24; // ebp
  int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // ecx
  int *v28; // eax
  void *v29; // esi
  char v31[4]; // [esp+28h] [ebp-70h] BYREF
  int v32; // [esp+2Ch] [ebp-6Ch]
  int v33; // [esp+30h] [ebp-68h]
  int v34; // [esp+34h] [ebp-64h]
  int v35; // [esp+38h] [ebp-60h]
  int v36; // [esp+3Ch] [ebp-5Ch]
  void *v37; // [esp+40h] [ebp-58h]
  int v38; // [esp+44h] [ebp-54h] BYREF
  float v39; // [esp+48h] [ebp-50h]
  float v40; // [esp+4Ch] [ebp-4Ch]
  float v41; // [esp+50h] [ebp-48h]
  float v42; // [esp+54h] [ebp-44h]
  float v43; // [esp+58h] [ebp-40h]
  int v44; // [esp+5Ch] [ebp-3Ch]
  int v45; // [esp+70h] [ebp-28h] BYREF
  ShadowEngine *v46; // [esp+74h] [ebp-24h]
  int v47[2]; // [esp+78h] [ebp-20h] BYREF
  int v48[3]; // [esp+80h] [ebp-18h] BYREF
  int v49; // [esp+94h] [ebp-4h]

  v1 = this;
  v47[0] = (int)&v38;
  v46 = this;
  std::string::string(&v38, &unk_101CA68E);
  v45 = (int)v31;
  v49 = 0;
  std::string::string(v31, "DropShadows");
  LOBYTE(v49) = 1;
  Engine::Instance();
  v49 = -1;
  v2 = sub_1017C0D0(
         v31[0],
         v32,
         v33,
         v34,
         v35,
         v36,
         v37,
         v38,
         LODWORD(v39),
         LODWORD(v40),
         LODWORD(v41),
         LODWORD(v42),
         LODWORD(v43),
         v44);
  v47[0] = (int)&v38;
  v37 = &unk_101CA68F;
  *((_BYTE *)v1 + 181) = v2;
  std::string::string(&v38, v37);
  v45 = (int)v31;
  v49 = 2;
  std::string::string(v31, "FilterShadows");
  LOBYTE(v49) = 3;
  Engine::Instance();
  v49 = -1;
  v3 = sub_1017C0D0(
         v31[0],
         v32,
         v33,
         v34,
         v35,
         v36,
         v37,
         v38,
         LODWORD(v39),
         LODWORD(v40),
         LODWORD(v41),
         LODWORD(v42),
         LODWORD(v43),
         v44);
  v47[0] = (int)&v38;
  v37 = &unk_101CA6DF;
  *((_BYTE *)v1 + 180) = v3;
  std::string::string(&v38, v37);
  v45 = (int)v31;
  v49 = 4;
  std::string::string(v31, "DropShadowLowRezTextureSize");
  LOBYTE(v49) = 5;
  Engine::Instance();
  v49 = -1;
  v4 = sub_1017C260(
         v31[0],
         v32,
         v33,
         v34,
         v35,
         v36,
         v37,
         v38,
         LODWORD(v39),
         LODWORD(v40),
         LODWORD(v41),
         LODWORD(v42),
         LODWORD(v43),
         v44);
  v47[0] = (int)&v38;
  dword_10282B24 = v4;
  std::string::string(&v38, &unk_101CA721);
  v45 = (int)v31;
  v49 = 6;
  std::string::string(v31, "DropShadowHighRezTextureSize");
  LOBYTE(v49) = 7;
  Engine::Instance();
  v49 = -1;
  v5 = sub_1017C260(
         v31[0],
         v32,
         v33,
         v34,
         v35,
         v36,
         v37,
         v38,
         LODWORD(v39),
         LODWORD(v40),
         LODWORD(v41),
         LODWORD(v42),
         LODWORD(v43),
         v44);
  v47[0] = (int)&v38;
  dword_10282B28 = v5;
  std::string::string(&v38, &unk_101CA722);
  v45 = (int)v31;
  v49 = 8;
  std::string::string(v31, "MaxLowRezDropShadows");
  LOBYTE(v49) = 9;
  Engine::Instance();
  v49 = -1;
  v6 = sub_1017C260(
         v31[0],
         v32,
         v33,
         v34,
         v35,
         v36,
         v37,
         v38,
         LODWORD(v39),
         LODWORD(v40),
         LODWORD(v41),
         LODWORD(v42),
         LODWORD(v43),
         v44);
  v47[0] = (int)&v38;
  dword_112418D4 = v6;
  std::string::string(&v38, &unk_101CA723);
  v45 = (int)v31;
  v49 = 10;
  std::string::string(v31, "MaxHighRezDropShadows");
  LOBYTE(v49) = 11;
  Engine::Instance();
  v49 = -1;
  dword_112418D8 = sub_1017C260(
                     v31[0],
                     v32,
                     v33,
                     v34,
                     v35,
                     v36,
                     v37,
                     v38,
                     LODWORD(v39),
                     LODWORD(v40),
                     LODWORD(v41),
                     LODWORD(v42),
                     LODWORD(v43),
                     v44);
  *((_DWORD *)v1 + 46) = dword_112418D4 + dword_112418D8;
  v7 = 0;
  if ( dword_112418D4 > 0 )
  {
    v8 = (_DWORD *)((char *)v1 + 8);
    do
    {
      v9 = (float *)operator new(0x10u);
      if ( v9 )
      {
        *((_BYTE *)v9 + 12) = 0;
        v9[2] = -1.0;
        *v9 = 0.0;
        v9[1] = 0.0;
        v10 = (int)v9;
      }
      else
      {
        v10 = 0;
      }
      v45 = v10;
      v11 = RenderDevice::Instance();
      v12 = (*(int (__stdcall **)(_DWORD, int, int, int, int, int, _DWORD, int, _DWORD))(**((_DWORD **)v11 + 427) + 92))(
              *((_DWORD *)v11 + 427),
              dword_10282B24,
              dword_10282B24,
              1,
              1,
              21,
              0,
              v10,
              0);
      if ( v12 < 0 )
      {
        v13 = *(_DWORD *)dword_11249F38;
        v14 = sub_1017EAEF(v12);
        (*(void (**)(void *, const char *, ...))(v13 + 4))(
          dword_11249F38,
          " Error: %s, in: RenderDevice::Instance()->dev->CreateTexture( lowRezShadowSize, lowRezShadowSize, 1, D3DUSAGE_"
          "RENDERTARGET, D3DFMT_A8R8G8B8, D3DPOOL_DEFAULT, &target->map, NULL )",
          v14);
      }
      v15 = v8[1];
      if ( v15 )
        v16 = (int)(v8[2] - v15) >> 2;
      else
        v16 = 0;
      if ( v15 && v16 < (int)(v8[3] - v15) >> 2 )
      {
        v17 = (int *)v8[2];
        *v17 = v10;
        v8[2] = v17 + 1;
      }
      else
      {
        v18 = (void *)v8[2];
        if ( v15 > (unsigned int)v18 )
          invalid_parameter_noinfo();
        sub_1012B950((int)v47, (int)v8, v18, (int)&v45);
      }
      ++v7;
    }
    while ( v7 < dword_112418D4 );
    v1 = v46;
  }
  v45 = 0;
  if ( dword_112418D8 > 0 )
  {
    v19 = (_DWORD *)((char *)v1 + 8);
    do
    {
      v20 = (float *)operator new(0x10u);
      if ( v20 )
      {
        *((_BYTE *)v20 + 12) = 0;
        v20[2] = -1.0;
        *v20 = 0.0;
        v20[1] = 0.0;
        v21 = (int)v20;
      }
      else
      {
        v21 = 0;
      }
      v47[0] = v21;
      *(_BYTE *)(v21 + 12) = 1;
      v22 = RenderDevice::Instance();
      v23 = (*(int (__stdcall **)(_DWORD, int, int, int, int, int, _DWORD, int, _DWORD))(**((_DWORD **)v22 + 427) + 92))(
              *((_DWORD *)v22 + 427),
              dword_10282B28,
              dword_10282B28,
              1,
              1,
              21,
              0,
              v21,
              0);
      if ( v23 < 0 )
      {
        v24 = *(_DWORD *)dword_11249F38;
        v25 = sub_1017EAEF(v23);
        (*(void (**)(void *, const char *, ...))(v24 + 4))(
          dword_11249F38,
          " Error: %s, in: RenderDevice::Instance()->dev->CreateTexture( hiRezShadowSize,hiRezShadowSize, 1, D3DUSAGE_REN"
          "DERTARGET, D3DFMT_A8R8G8B8, D3DPOOL_DEFAULT, &target->map, NULL )",
          v25);
      }
      v26 = v19[1];
      if ( v26 )
        v27 = (int)(v19[2] - v26) >> 2;
      else
        v27 = 0;
      if ( v26 && v27 < (int)(v19[3] - v26) >> 2 )
      {
        v28 = (int *)v19[2];
        *v28 = v21;
        v19[2] = v28 + 1;
      }
      else
      {
        v29 = (void *)v19[2];
        if ( v26 > (unsigned int)v29 )
          invalid_parameter_noinfo();
        sub_1012B950((int)v48, (int)v19, v29, (int)v47);
      }
      ++v45;
    }
    while ( v45 < dword_112418D8 );
    v1 = v46;
  }
  v44 = 0;
  *((float *)v1 + 1) = GSeconds;
  v43 = 0.0;
  v42 = 1.0;
  v41 = 1.0;
  v40 = 0.0;
  v39 = 0.0;
  v38 = 0;
  v47[0] = (int)v31;
  std::string::string(v31, "ShadowBlob.dds");
  Texture::Load(v31[0], v32, v33, v34, v35, v36, (int)v37, v38, v39, v40, v41, v42, v43, v44);
  return 0;
}
