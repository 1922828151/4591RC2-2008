/*
 * func-name: ?PostRender@SkyController@@UAEXPAVCamera@@@Z
 * func-address: 0x1012f5d0
 * callers: none
 * callees: 0x1003b320, 0x10064610, 0x101065a0, 0x10106b20, 0x1012d8d0, 0x1012d990, 0x1012da50, 0x1012db10, 0x1012f070, 0x1012f140, 0x1012f200, 0x1012f2c0, 0x10131f30, 0x101a26c0
 */

void __thiscall SkyController::PostRender(SkyController *this, struct Camera *a2)
{
  double v3; // st7
  double v4; // st7
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  struct Canvas *v13; // edi
  void (__cdecl **v14)(struct Canvas *, int, int, _DWORD, _DWORD, int); // esi
  int v15; // eax
  struct PostProcess *v16; // eax
  int PostProcessEffect; // eax
  int v18; // esi
  struct PostProcess *v19; // eax
  int v20; // eax
  int v21; // ecx
  float *v22; // eax
  double v23; // st7
  char v24; // [esp-2Ch] [ebp-128h] BYREF
  int v25; // [esp-28h] [ebp-124h]
  int v26; // [esp-24h] [ebp-120h]
  int v27; // [esp-20h] [ebp-11Ch]
  int v28; // [esp-1Ch] [ebp-118h]
  int v29; // [esp-18h] [ebp-114h]
  int v30; // [esp-14h] [ebp-110h] BYREF
  int v31; // [esp-10h] [ebp-10Ch] BYREF
  int v32; // [esp-Ch] [ebp-108h]
  int v33; // [esp-8h] [ebp-104h]
  int v34; // [esp-4h] [ebp-100h]
  int v35; // [esp+0h] [ebp-FCh]
  int v36; // [esp+4h] [ebp-F8h]
  float v37; // [esp+8h] [ebp-F4h]
  float v38; // [esp+18h] [ebp-E4h]
  float v39; // [esp+1Ch] [ebp-E0h]
  float v40[3]; // [esp+20h] [ebp-DCh] BYREF
  _BYTE v41[28]; // [esp+2Ch] [ebp-D0h] BYREF
  _BYTE v42[28]; // [esp+48h] [ebp-B4h] BYREF
  _BYTE v43[28]; // [esp+64h] [ebp-98h] BYREF
  _BYTE v44[28]; // [esp+80h] [ebp-7Ch] BYREF
  _BYTE v45[28]; // [esp+9Ch] [ebp-60h] BYREF
  _BYTE v46[28]; // [esp+B8h] [ebp-44h] BYREF
  _BYTE v47[28]; // [esp+D4h] [ebp-28h] BYREF
  int v48; // [esp+F8h] [ebp-4h]

  if ( *((_BYTE *)this + 1224) )
  {
    if ( *((_BYTE *)SkyController::mySkySettings + 2) )
    {
      std::string::string(v44, " AM");
      v48 = 0;
      std::string::string(v43);
      LOBYTE(v48) = 1;
      std::string::string(v42);
      v3 = *((float *)this + 948) / 60.0;
      LOBYTE(v48) = 2;
      v39 = v3;
      v4 = v39;
      if ( v39 >= 12.0 )
      {
        std::string::operator=(v44, " PM");
        v4 = v39;
        if ( v39 > 12.0 )
        {
          v39 = v4 - 12.0;
          v4 = v39;
        }
      }
      if ( v4 < 1.0 )
      {
        v39 = v4 + 12.0;
        v4 = v39;
      }
      LODWORD(v38) = (int)v4;
      v5 = sub_1003B320((int)v41, (int)v4);
      LOBYTE(v48) = 3;
      std::string::operator=(v43, v5);
      LOBYTE(v48) = 2;
      std::string::~string(v41);
      v6 = (int)((v39 - (double)(int)v4) * 60.0);
      v7 = sub_1003B320((int)v41, v6);
      LOBYTE(v48) = 4;
      std::string::operator=(v42, v7);
      LOBYTE(v48) = 2;
      std::string::~string(v41);
      if ( v6 < 10 )
      {
        v8 = sub_10131F30(v45, "0");
        LOBYTE(v48) = 5;
        v9 = std::operator+<char>(v41, v8, v42);
        LOBYTE(v48) = 6;
        std::string::operator=(v42, v9);
        LOBYTE(v48) = 5;
        std::string::~string(v41);
        LOBYTE(v48) = 2;
        std::string::~string(v45);
      }
      v10 = sub_10131F30(v47, ":");
      LOBYTE(v48) = 7;
      v11 = std::operator+<char>(v41, v43, v10);
      LOBYTE(v48) = 8;
      v12 = std::operator+<char>(v45, v11, v42);
      LOBYTE(v48) = 9;
      std::operator+<char>(v46, v12, v44);
      LOBYTE(v48) = 11;
      std::string::~string(v45);
      LOBYTE(v48) = 12;
      std::string::~string(v41);
      LOBYTE(v48) = 13;
      std::string::~string(v47);
      v13 = Canvas::Instance();
      v14 = (void (__cdecl **)(struct Canvas *, int, int, _DWORD, _DWORD, int))(*(_DWORD *)v13 + 44);
      v15 = std::string::c_str(v46);
      (*v14)(v13, 1, -1, 920.0, 746.0, v15);
      LOBYTE(v48) = 2;
      std::string::~string(v46);
      LOBYTE(v48) = 1;
      std::string::~string(v42);
      LOBYTE(v48) = 0;
      std::string::~string(v43);
      v48 = -1;
      std::string::~string(v44);
    }
    v38 = COERCE_FLOAT(&v31);
    std::string::string(&v31, "BlurSample_PS20");
    v39 = COERCE_FLOAT(&v24);
    v48 = 14;
    std::string::string(&v24, "PostProcess.fx");
    LOBYTE(v48) = 15;
    v16 = PostProcess::Instance();
    v48 = -1;
    PostProcessEffect = PostProcess::FindPostProcessEffect(
                          v16,
                          v24,
                          v25,
                          v26,
                          v27,
                          v28,
                          v29,
                          v30,
                          v31,
                          v32,
                          v33,
                          v34,
                          v35,
                          v36,
                          SLODWORD(v37));
    v38 = COERCE_FLOAT(&v31);
    v18 = PostProcessEffect;
    std::string::string(&v31, "UnderWaterPass_PS20");
    v39 = COERCE_FLOAT(&v24);
    v48 = 16;
    std::string::string(&v24, "PostProcess.fx");
    LOBYTE(v48) = 17;
    v19 = PostProcess::Instance();
    v48 = -1;
    v20 = PostProcess::FindPostProcessEffect(
            v19,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            SLODWORD(v37));
    v21 = *((_DWORD *)a2 + 104);
    if ( v21 && *(_BYTE *)(v21 + 308) )
    {
      if ( v18 )
        *(_BYTE *)(v18 + 15) = 1;
      if ( v20 )
        *(_BYTE *)(v20 + 15) = 1;
      v22 = (float *)*((_DWORD *)a2 + 104);
      v39 = v22[80];
      v37 = COERCE_FLOAT(v40);
      v38 = v22[79];
      v40[0] = v22[78];
      v23 = v38;
      v38 = COERCE_FLOAT(&v30);
      v40[1] = v23;
      v40[2] = v39;
      std::string::string(&v30, "UnderWaterBias");
      SkyController::AddBiasFogColor(
        (char *)SkyController::Instance,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        (_DWORD *)LODWORD(v37));
      v38 = 1.0 / *(float *)(*((_DWORD *)a2 + 104) + 328);
      v37 = v38;
      v38 = COERCE_FLOAT(&v30);
      std::string::string(&v30, "UnderWaterBias");
      SkyController::AddBiasFogDistance((char *)SkyController::Instance, v30, v31, v32, v33, v34, v35, v36, v37);
      v38 = 1.0 / *(float *)(*((_DWORD *)a2 + 104) + 328);
      v37 = v38;
      v38 = COERCE_FLOAT(&v30);
      std::string::string(&v30, "UnderWaterBias");
      SkyController::AddBiasFogStart((char *)SkyController::Instance, v30, v31, v32, v33, v34, v35, v36, v37);
      v37 = *(float *)(*((_DWORD *)a2 + 104) + 328);
      v38 = COERCE_FLOAT(&v30);
      std::string::string(&v30, "UnderWaterBias");
      SkyController::AddBiasFogIntensity((char *)SkyController::Instance, v30, v31, v32, v33, v34, v35, v36, v37);
    }
    else
    {
      if ( v18 )
        *(_BYTE *)(v18 + 15) = 0;
      if ( v20 )
        *(_BYTE *)(v20 + 15) = 0;
      v38 = COERCE_FLOAT(&v31);
      std::string::string(&v31, "UnderWaterBias");
      SkyController::DelBiasFogColor(SkyController::Instance, v31, v32, v33, v34, v35, v36, SLODWORD(v37));
      v38 = COERCE_FLOAT(&v31);
      std::string::string(&v31, "UnderWaterBias");
      SkyController::DelBiasFogDistance(SkyController::Instance, v31, v32, v33, v34, v35, v36, SLODWORD(v37));
      v38 = COERCE_FLOAT(&v31);
      std::string::string(&v31, "UnderWaterBias");
      SkyController::DelBiasFogStart(SkyController::Instance, v31, v32, v33, v34, v35, v36, SLODWORD(v37));
      v38 = COERCE_FLOAT(&v31);
      std::string::string(&v31, "UnderWaterBias");
      SkyController::DelBiasFogIntensity(SkyController::Instance, v31, v32, v33, v34, v35, v36, SLODWORD(v37));
    }
  }
}
