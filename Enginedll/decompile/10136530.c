/*
 * func-name: ?Load@Texture@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4TextureType@@MMMMM_N@Z
 * func-address: 0x10136530
 * callers: 0x10003130, 0x10003a50, 0x10006780, 0x10036a40, 0x10038ca0, 0x1003a4c0, 0x1003d0f0, 0x1003ef60, 0x10040990, 0x10041980, 0x10045740, 0x1007c450, 0x1007d280, 0x1007ef60, 0x1008b740, 0x1009d640, 0x100a67a0, 0x100de040, 0x100e3ae0, 0x100e4db0, 0x100e6600, 0x100e6ae0, 0x100e6db0, 0x100e7390, 0x100e79a0, 0x100e7ab0, 0x10109980, 0x1010b910, 0x1010bf60, 0x10117840, 0x10128810, 0x1012ffd0, 0x10136530, 0x10162f00, 0x10164ad0
 * callees: 0x1001c240, 0x1007bd80, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x1007ec70, 0x100971c0, 0x10097220, 0x10097800, 0x100e26b0, 0x100e3ef0, 0x10116f70, 0x101189f0, 0x10136360, 0x101364b0, 0x10136530, 0x10137000, 0x1017a2d0, 0x1017a310, 0x1017a670, 0x1017c0d0
 */

char __thiscall Texture::Load(
        int this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        int a15)
{
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  _BYTE *v24; // ecx
  int v25; // eax
  char v26; // bl
  int v27; // eax
  int v28; // ebx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  LARGE_INTEGER *v33; // eax
  struct TextureManager *v34; // eax
  char v35; // bl
  int v36; // eax
  float *v37; // esi
  CRETimer *v38; // eax
  MaterialManager *v39; // eax
  int v40; // eax
  char Media; // bl
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  struct TextureManager *v47; // eax
  const char *v48; // eax
  const char *v49; // eax
  float *v50; // esi
  CRETimer *v51; // eax
  double v52; // st7
  struct TextureManager *v53; // eax
  int v54; // eax
  float *v55; // esi
  CRETimer *v56; // eax
  char v57; // [esp-20h] [ebp-120h] BYREF
  int v58; // [esp-1Ch] [ebp-11Ch]
  int v59; // [esp-18h] [ebp-118h]
  int v60; // [esp-14h] [ebp-114h]
  int v61; // [esp-10h] [ebp-110h]
  int v62; // [esp-Ch] [ebp-10Ch]
  int v63; // [esp-8h] [ebp-108h]
  int v64; // [esp-4h] [ebp-104h] BYREF
  float v65; // [esp+0h] [ebp-100h]
  float v66; // [esp+4h] [ebp-FCh]
  float v67; // [esp+8h] [ebp-F8h]
  float v68; // [esp+Ch] [ebp-F4h]
  float v69; // [esp+10h] [ebp-F0h]
  int v70; // [esp+14h] [ebp-ECh]
  char *v71; // [esp+28h] [ebp-D8h]
  _BYTE v72[28]; // [esp+2Ch] [ebp-D4h] BYREF
  _BYTE v73[28]; // [esp+48h] [ebp-B8h] BYREF
  int *v74; // [esp+64h] [ebp-9Ch]
  _BYTE v75[28]; // [esp+68h] [ebp-98h] BYREF
  _BYTE v76[28]; // [esp+84h] [ebp-7Ch] BYREF
  _BYTE v77[28]; // [esp+A0h] [ebp-60h] BYREF
  _BYTE v78[28]; // [esp+BCh] [ebp-44h] BYREF
  _BYTE v79[28]; // [esp+D8h] [ebp-28h] BYREF
  int v80; // [esp+FCh] [ebp-4h]

  v80 = 0;
  if ( byte_11241AA0 )
  {
    v80 = -1;
    std::string::~string(&a2);
    return 1;
  }
  if ( !std::string::length(&a2)
    || (unsigned __int8)std::operator==<char>(&a2, "NONE")
    || (unsigned __int8)std::operator==<char>(&a2, "UNLOADED") )
  {
    goto LABEL_15;
  }
  std::string::operator=(this + 100, &a2);
  v17 = sub_1017A310(v78, this + 100);
  LOBYTE(v80) = 1;
  sub_1017A670(v73, v17);
  LOBYTE(v80) = 3;
  std::string::~string(v78);
  v18 = sub_1017A2D0(v77, v73);
  LOBYTE(v80) = 4;
  std::string::operator=(this + 128, v18);
  LOBYTE(v80) = 3;
  std::string::~string(v77);
  v19 = a9;
  if ( a9 )
  {
    Texture::Destroy((Texture *)this);
    std::string::operator=(this + 100, &a2);
    v30 = sub_1017A310(v76, this + 100);
    LOBYTE(v80) = 17;
    v31 = sub_1017A670(v72, v30);
    LOBYTE(v80) = 18;
    std::string::operator=(v73, v31);
    LOBYTE(v80) = 17;
    std::string::~string(v72);
    LOBYTE(v80) = 3;
    std::string::~string(v76);
    v32 = sub_1017A2D0(v72, v73);
    LOBYTE(v80) = 19;
    std::string::operator=(this + 128, v32);
    LOBYTE(v80) = 3;
    std::string::~string(v72);
    *(_BYTE *)(this + 22) = 1;
    Engine::Instance();
    v33 = (LARGE_INTEGER *)REGetGlobalTimer();
    CRETimer::StartMiniTimer(v33);
    *(float *)(this + 76) = a14;
    *(_DWORD *)(this + 96) = v19;
    *(float *)(this + 60) = a10;
    *(float *)(this + 64) = a11;
    *(float *)(this + 68) = a12;
    *(float *)(this + 72) = a13;
    v34 = TextureManager::Instance();
    v35 = a15;
    v36 = (*(int (__thiscall **)(struct TextureManager *, int, int, int))(*(_DWORD *)v34 + 4))(
            v34,
            this + 128,
            this,
            a15);
    if ( v36 != -1 )
    {
      Texture::SetID((Texture *)this, v36);
      v37 = (float *)((char *)Profiler::Get() + 144);
      v38 = REGetGlobalTimer();
      *v37 = CRETimer::StopMiniTimer(v38) / 1000.0 + *v37;
      if ( v35 )
      {
        v39 = MaterialManager::Instance();
        MaterialManager::RefreshMaterials(v39);
      }
      goto LABEL_25;
    }
    if ( *((_BYTE *)Editor::Instance() + 2056) )
      goto LABEL_30;
    v40 = sub_1017A2D0(v72, this + 100);
    LOBYTE(v80) = 20;
    std::operator+<char>(v75, v40, ".dds");
    LOBYTE(v80) = 22;
    std::string::~string(v72);
    Media = FindMedia((int)v75, (int)"Cache", 0, 0);
    LOBYTE(v71) = Media;
    if ( Media )
      std::string::operator=(this + 100, v75);
    LOBYTE(v80) = 3;
    std::string::~string(v75);
    if ( !Media )
    {
LABEL_30:
      Media = FindMedia(this + 100, (int)"Textures", 0, 0);
      LOBYTE(v71) = Media;
    }
    if ( *(_BYTE *)(this + 56) )
    {
      if ( Media )
      {
LABEL_41:
        v47 = TextureManager::Instance();
        if ( !(*(unsigned __int8 (__thiscall **)(struct TextureManager *, int, int, char *))(*(_DWORD *)v47 + 8))(
                v47,
                this + 100,
                this,
                v71)
          && !Media )
        {
          if ( !*((_DWORD *)RenderDevice::Instance() + 427) )
            goto LABEL_46;
          v74 = &v64;
          std::string::string(&v64, &unk_101CB05F);
          v71 = &v57;
          LOBYTE(v80) = 28;
          std::string::string(&v57, "WarnOnMissingFiles");
          LOBYTE(v80) = 29;
          Engine::Instance();
          LOBYTE(v80) = 3;
          if ( (unsigned __int8)sub_1017C0D0(
                                  v57,
                                  v58,
                                  v59,
                                  v60,
                                  v61,
                                  v62,
                                  v63,
                                  v64,
                                  LODWORD(v65),
                                  LODWORD(v66),
                                  LODWORD(v67),
                                  LODWORD(v68),
                                  LODWORD(v69),
                                  v70) )
          {
            v48 = (const char *)std::string::c_str(this + 100);
            Warning("Couldn't find texture: %s", v48);
          }
          else
          {
LABEL_46:
            v49 = (const char *)std::string::c_str(this + 100);
            LogPrintf(2, "Couldn't find texture: %s", v49);
          }
          *(_DWORD *)(this + 24) = -1;
          v50 = (float *)((char *)Profiler::Get() + 144);
          v51 = REGetGlobalTimer();
          v52 = CRETimer::StopMiniTimer(v51);
          LOBYTE(v80) = 0;
          *v50 = v52 / 1000.0 + *v50;
          std::string::~string(v73);
          v80 = -1;
          goto LABEL_16;
        }
        v53 = TextureManager::Instance();
        v54 = (*(int (__thiscall **)(struct TextureManager *, int))(*(_DWORD *)v53 + 12))(v53, this);
        Texture::SetID((Texture *)this, v54);
        std::string::operator=(this + 28, this + 100);
        std::string::operator=(this + 100, &a2);
        v55 = (float *)((char *)Profiler::Get() + 144);
        v56 = REGetGlobalTimer();
        *v55 = CRETimer::StopMiniTimer(v56) / 1000.0 + *v55;
        goto LABEL_25;
      }
      v42 = std::string::c_str(this + 100);
      v74 = &v64;
      std::string::string(&v64, v42);
      Media = sub_1007BD80(v64);
      LOBYTE(v71) = Media;
    }
    if ( !Media )
    {
      std::string::string(v77, this + 100);
      LOBYTE(v80) = 23;
      v43 = std::operator+<char>(v72, this + 128, ".dds");
      LOBYTE(v80) = 24;
      std::string::operator=(this + 100, v43);
      LOBYTE(v80) = 23;
      std::string::~string(v72);
      Media = FindMedia(this + 100, (int)"Textures", 0, 0);
      LOBYTE(v71) = Media;
      if ( !Media )
      {
        v44 = std::operator+<char>(v72, this + 128, ".png");
        LOBYTE(v80) = 25;
        std::string::operator=(this + 100, v44);
        LOBYTE(v80) = 23;
        std::string::~string(v72);
        Media = FindMedia(this + 100, (int)"Textures", 0, 0);
        LOBYTE(v71) = Media;
        if ( !Media )
        {
          v45 = std::operator+<char>(v72, this + 128, ".tga");
          LOBYTE(v80) = 26;
          std::string::operator=(this + 100, v45);
          LOBYTE(v80) = 23;
          std::string::~string(v72);
          Media = FindMedia(this + 100, (int)"Textures", 0, 0);
          LOBYTE(v71) = Media;
          if ( !Media )
          {
            v46 = std::operator+<char>(v79, this + 128, ".jpg");
            LOBYTE(v80) = 27;
            std::string::operator=(this + 100, v46);
            LOBYTE(v80) = 23;
            std::string::~string(v79);
            Media = FindMedia(this + 100, (int)"Textures", 0, 0);
            LOBYTE(v71) = Media;
            if ( !Media )
              std::string::operator=(this + 100, v77);
          }
        }
      }
      LOBYTE(v80) = 3;
      std::string::~string(v77);
    }
    goto LABEL_41;
  }
  if ( std::string::find(v73, "bump", 0) != -1
    || std::string::find(v73, "normal", 0) != -1
    || std::string::find(v73, "_nm", 0) != -1
    || std::string::find(v73, "_n.", 0) != -1 )
  {
    v28 = a15;
    v70 = a15;
    v69 = a14;
    v68 = a13;
    v67 = a12;
    v66 = a11;
    v65 = a10;
    v64 = 2;
    v71 = &v57;
    std::string::string(&v57, &a2);
    if ( (unsigned __int8)Texture::Load(v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70) )
      goto LABEL_25;
    v70 = v28;
    v69 = a14;
    v68 = a13;
    v67 = a12;
    v66 = a11;
    v65 = a10;
    v64 = 2;
    v71 = &v57;
    std::string::string(&v57, "DefaultNormal.dds");
    Texture::Load(v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70);
    std::string::operator=(this + 100, &a2);
    v29 = sub_1017A310(v72, this + 100);
    LOBYTE(v80) = 5;
    sub_1017A670(v75, v29);
    v26 = 7;
    LOBYTE(v80) = 7;
    std::string::~string(v72);
    v27 = sub_1017A2D0(v76, v75);
    LOBYTE(v80) = 8;
    goto LABEL_19;
  }
  v20 = std::string::find(v73, "env", 0);
  v21 = a15;
  v70 = a15;
  v69 = a14;
  v68 = a13;
  v67 = a12;
  v66 = a11;
  v65 = a10;
  if ( v20 == -1 )
  {
    v64 = 1;
    v71 = &v57;
    std::string::string(&v57, &a2);
    if ( (unsigned __int8)Texture::Load(v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70) )
      goto LABEL_25;
    v70 = v21;
    v69 = a14;
    v68 = a13;
    v67 = a12;
    v66 = a11;
    v65 = a10;
    v64 = 1;
    v71 = &v57;
    std::string::string(&v57, "DefaultTexture.dds");
    Texture::Load(v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70);
    std::string::operator=(this + 100, &a2);
    v25 = sub_1017A310(v72, this + 100);
    LOBYTE(v80) = 13;
    sub_1017A670(v75, v25);
    v26 = 15;
    LOBYTE(v80) = 15;
    std::string::~string(v72);
    v27 = sub_1017A2D0(v76, v75);
    LOBYTE(v80) = 16;
LABEL_19:
    std::string::operator=(this + 128, v27);
    LOBYTE(v80) = v26;
    v24 = v76;
    goto LABEL_14;
  }
  v64 = 4;
  v71 = &v57;
  std::string::string(&v57, &a2);
  if ( !(unsigned __int8)Texture::Load(v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70) )
  {
    v70 = v21;
    v69 = a14;
    v68 = a13;
    v67 = a12;
    v66 = a11;
    v65 = a10;
    v64 = 4;
    v71 = &v57;
    std::string::string(&v57, "DefaultEnvironment.dds");
    Texture::Load(v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70);
    std::string::operator=(this + 100, &a2);
    v22 = sub_1017A310(v76, this + 100);
    LOBYTE(v80) = 9;
    sub_1017A670(v75, v22);
    LOBYTE(v80) = 11;
    std::string::~string(v76);
    v23 = sub_1017A2D0(v72, v75);
    LOBYTE(v80) = 12;
    std::string::operator=(this + 128, v23);
    LOBYTE(v80) = 11;
    v24 = v72;
LABEL_14:
    std::string::~string(v24);
    LOBYTE(v80) = 3;
    std::string::~string(v75);
    LOBYTE(v80) = 0;
    std::string::~string(v73);
LABEL_15:
    v80 = -1;
LABEL_16:
    std::string::~string(&a2);
    return 0;
  }
LABEL_25:
  LOBYTE(v80) = 0;
  std::string::~string(v73);
  v80 = -1;
  std::string::~string(&a2);
  return 1;
}
