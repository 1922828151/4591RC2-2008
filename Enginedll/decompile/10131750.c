/*
 * func-name: ?IntitializeNewSky@SkyController@@SAXPAVWorld@@AAVSkySettings@@@Z
 * func-address: 0x10131750
 * callers: 0x10137180
 * callees: 0x10097220, 0x100977a0, 0x101065a0, 0x10106b20, 0x10107ff0, 0x10118c20, 0x1012de10, 0x1012ffd0, 0x101a2534
 */

void __cdecl SkyController::IntitializeNewSky(struct World *a1, struct SkySettings *a2)
{
  void (__stdcall *v2)(int); // edx
  char *v3; // esi
  const char *v4; // eax
  Script *v5; // eax
  Script *v6; // ecx
  SkyController *v7; // eax
  struct PostProcess *v8; // eax
  struct PostProcess *v9; // eax
  struct PostProcess *v10; // eax
  struct PostProcess *v11; // eax
  char v12; // [esp-38h] [ebp-78h] BYREF
  int v13; // [esp-34h] [ebp-74h]
  int v14; // [esp-30h] [ebp-70h] BYREF
  int v15; // [esp-2Ch] [ebp-6Ch]
  int v16; // [esp-28h] [ebp-68h]
  int v17; // [esp-24h] [ebp-64h]
  int v18; // [esp-20h] [ebp-60h]
  int v19; // [esp-1Ch] [ebp-5Ch] BYREF
  int v20; // [esp-18h] [ebp-58h]
  int v21; // [esp-14h] [ebp-54h] BYREF
  int v22; // [esp-10h] [ebp-50h]
  int v23; // [esp-Ch] [ebp-4Ch]
  int v24; // [esp-8h] [ebp-48h]
  int v25; // [esp-4h] [ebp-44h]
  int v26; // [esp+0h] [ebp-40h]
  int v27; // [esp+4h] [ebp-3Ch]
  char v28; // [esp+13h] [ebp-2Dh]
  float v29; // [esp+14h] [ebp-2Ch]
  _BYTE v30[28]; // [esp+18h] [ebp-28h] BYREF
  int v31; // [esp+3Ch] [ebp-4h]

  v29 = -1.0;
  v28 = 0;
  if ( SkyController::Instance )
  {
    v2 = *(void (__stdcall **)(int))(*(_DWORD *)SkyController::Instance + 80);
    v29 = *((float *)SkyController::Instance + 948);
    v2(1);
    v28 = 1;
  }
  v3 = (char *)a2 + 108;
  SkyController::mySkySettings = a2;
  if ( std::string::size((char *)a2 + 108) )
  {
    std::operator+<char>(v30, v3, &unk_101CABA0);
    v31 = 0;
    if ( !FindMedia((int)v30, (int)"Scripts", 0, 0) )
    {
      v4 = (const char *)std::string::c_str(v3);
      SeriousWarning(
        "SkyController script '%s.py' not found in your Scripts directory! Sky will not appear correctly without the script.",
        v4);
    }
    v5 = (Script *)operator new(0x8Cu);
    if ( v5 )
    {
      *((_DWORD *)v5 + 34) = -1;
      v6 = v5;
    }
    else
    {
      v6 = 0;
    }
    SkyController::m_ControllerScript = v6;
    Script::Create(v6, (int)v3, (int)v3);
    v7 = (SkyController *)operator new(0x1148u);
    LOBYTE(v31) = 1;
    if ( v7 )
      SkyController::SkyController(v7, a1);
    LOBYTE(v31) = 0;
    if ( v28 && v29 != -1.0 )
      SkyController::SetDayTime(SkyController::Instance, v29);
    std::string::string(&v21, "BlurSample_PS20");
    v29 = COERCE_FLOAT(&v14);
    LOBYTE(v31) = 2;
    std::string::string(&v14, "PostProcess.fx");
    LOBYTE(v31) = 3;
    v8 = PostProcess::Instance();
    LOBYTE(v31) = 0;
    if ( !PostProcess::FindPostProcessEffect(v8, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27) )
    {
      v27 = -1;
      v26 = 0;
      std::string::string(&v19, "BlurSample_PS20");
      v29 = COERCE_FLOAT(&v12);
      LOBYTE(v31) = 4;
      std::string::string(&v12, "PostProcess.fx");
      LOBYTE(v31) = 5;
      v9 = PostProcess::Instance();
      LOBYTE(v31) = 0;
      PostProcess::AddPostProcessEffect(
        v9,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    std::string::string(&v21, "UnderWaterPass_PS20");
    v29 = COERCE_FLOAT(&v14);
    LOBYTE(v31) = 6;
    std::string::string(&v14, "PostProcess.fx");
    LOBYTE(v31) = 7;
    v10 = PostProcess::Instance();
    LOBYTE(v31) = 0;
    if ( !PostProcess::FindPostProcessEffect(v10, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27) )
    {
      v27 = -1;
      v26 = 0;
      std::string::string(&v19, "UnderWaterPass_PS20");
      v29 = COERCE_FLOAT(&v12);
      LOBYTE(v31) = 8;
      std::string::string(&v12, "PostProcess.fx");
      LOBYTE(v31) = 9;
      v11 = PostProcess::Instance();
      LOBYTE(v31) = 0;
      PostProcess::AddPostProcessEffect(
        v11,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v31 = -1;
    std::string::~string(v30);
  }
}
