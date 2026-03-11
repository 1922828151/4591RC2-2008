/*
 * func-name: ?Load@Shader@@QAE_NPBD@Z
 * func-address: 0x10125a30
 * callers: 0x100e68a0
 * callees: 0x1007bd80, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x100956d0, 0x100971c0, 0x10097220, 0x100977a0, 0x100e2550, 0x10116f70, 0x101189f0, 0x1011fde0, 0x10121160, 0x101211e0, 0x10122da0, 0x10125020, 0x10126730, 0x101277c0, 0x101279c0, 0x101781b8, 0x1017c0d0
 */

char __thiscall Shader::Load(Shader *this, const char *a2)
{
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // eax
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  char Media; // bl
  bool v9; // al
  const CHAR *v11; // eax
  const CHAR *v12; // eax
  const CHAR *v13; // eax
  LARGE_INTEGER *v14; // eax
  float *v15; // esi
  CRETimer *v16; // eax
  const char *v17; // eax
  int v18; // edx
  struct RenderDevice *v19; // eax
  int v20; // eax
  int v21; // eax
  char *v22; // eax
  void *v23; // eax
  char *v24; // edi
  int v25; // eax
  int v26; // edi
  ShaderManager *v27; // eax
  ShaderManager *v28; // eax
  float *v29; // esi
  CRETimer *v30; // eax
  double v31; // st7
  char v32; // [esp-2Ch] [ebp-168h] BYREF
  int v33; // [esp-28h] [ebp-164h]
  int v34; // [esp-24h] [ebp-160h]
  int v35; // [esp-20h] [ebp-15Ch] BYREF
  int v36; // [esp-1Ch] [ebp-158h]
  int v37; // [esp-18h] [ebp-154h]
  int v38; // [esp-14h] [ebp-150h]
  int v39; // [esp-10h] [ebp-14Ch] BYREF
  int v40; // [esp-Ch] [ebp-148h]
  void *v41; // [esp-8h] [ebp-144h]
  int v42; // [esp-4h] [ebp-140h] BYREF
  int v43; // [esp+0h] [ebp-13Ch]
  int v44; // [esp+4h] [ebp-138h]
  int v45; // [esp+8h] [ebp-134h]
  int *v46; // [esp+Ch] [ebp-130h]
  char *v47; // [esp+10h] [ebp-12Ch]
  int *p_FileInformation; // [esp+14h] [ebp-128h]
  char v49; // [esp+27h] [ebp-115h]
  int *v50; // [esp+28h] [ebp-114h]
  int v51; // [esp+2Ch] [ebp-110h] BYREF
  char *v52; // [esp+30h] [ebp-10Ch]
  int *v53; // [esp+34h] [ebp-108h]
  _BYTE v54[28]; // [esp+38h] [ebp-104h] BYREF
  _BYTE v55[28]; // [esp+54h] [ebp-E8h] BYREF
  _BYTE v56[28]; // [esp+70h] [ebp-CCh] BYREF
  _BYTE v57[20]; // [esp+8Ch] [ebp-B0h] BYREF
  FILETIME v58; // [esp+A0h] [ebp-9Ch] BYREF
  _BYTE v59[28]; // [esp+B0h] [ebp-8Ch] BYREF
  _BYTE v60[28]; // [esp+CCh] [ebp-70h] BYREF
  char FileInformation; // [esp+E8h] [ebp-54h] BYREF
  FILETIME FileTime1; // [esp+FCh] [ebp-40h] BYREF
  int v63; // [esp+10Ch] [ebp-30h] BYREF
  FILETIME FileTime2; // [esp+120h] [ebp-1Ch] BYREF
  int v65; // [esp+138h] [ebp-4h]

  v3 = RenderDevice::Instance();
  std::string::string(v59, (char *)v3 + 1652);
  v65 = 0;
  v4 = RenderDevice::Instance();
  std::string::string(v60, (char *)v4 + 1680);
  LOBYTE(v65) = 1;
  v5 = RenderDevice::Instance();
  LOBYTE(v52) = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v5 + 244))(v5);
  v6 = RenderDevice::Instance();
  LOBYTE(v50) = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v6 + 132))(v6);
  v7 = RenderDevice::Instance();
  LOBYTE(v53) = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v7 + 120))(v7);
  std::string::string(v54, a2);
  p_FileInformation = v53;
  v47 = v52;
  v46 = v50;
  v50 = &v39;
  LOBYTE(v65) = 2;
  std::string::string(&v39, v59);
  v52 = &v32;
  LOBYTE(v65) = 3;
  std::string::string(&v32, v54);
  LOBYTE(v65) = 2;
  sub_1011FDE0(
    (int)v55,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    (int)v41,
    v42,
    v43,
    v44,
    v45,
    (char)v46,
    (char)v47,
    (char)p_FileInformation);
  LOBYTE(v65) = 4;
  v52 = (char *)ShaderManager::Instance();
  Media = FindMedia((int)v54, (int)"Shaders", 0, 0);
  v50 = &v42;
  std::string::string(&v42, v55);
  v9 = sub_1007BD80(v42);
  if ( !Media && !v9 )
  {
    SeriousWarning("Effect file '%s' or its compiled version couldn't be found.", a2);
LABEL_4:
    LOBYTE(v65) = 2;
    std::string::~string(v55);
    LOBYTE(v65) = 1;
    std::string::~string(v54);
    LOBYTE(v65) = 0;
    std::string::~string(v60);
    v65 = -1;
    std::string::~string(v59);
    return 0;
  }
  v49 = 1;
  if ( v9 )
  {
    v49 = 0;
    if ( Media )
    {
      p_FileInformation = (int *)&FileInformation;
      v47 = 0;
      v11 = (const CHAR *)std::string::c_str(v55);
      GetFileAttributesExA(v11, (GET_FILEEX_INFO_LEVELS)v47, p_FileInformation);
      std::string::string(v56, "Types.h");
      LOBYTE(v65) = 5;
      if ( FindMedia((int)v56, (int)"Shaders", 0, 0) )
      {
        p_FileInformation = &v63;
        v47 = 0;
        v12 = (const CHAR *)std::string::c_str(v56);
        GetFileAttributesExA(v12, (GET_FILEEX_INFO_LEVELS)v47, p_FileInformation);
        if ( CompareFileTime(&FileTime1, &FileTime2) == -1 )
          goto LABEL_10;
      }
      p_FileInformation = (int *)v57;
      v47 = 0;
      v13 = (const CHAR *)std::string::c_str(v54);
      GetFileAttributesExA(v13, (GET_FILEEX_INFO_LEVELS)v47, p_FileInformation);
      if ( CompareFileTime(&FileTime1, &v58) == -1 )
LABEL_10:
        v49 = 1;
      LOBYTE(v65) = 4;
      std::string::~string(v56);
    }
  }
  v14 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v14);
  if ( byte_112417B5 || v49 )
  {
    p_FileInformation = (int *)v55;
    LOBYTE(v50) = byte_112417B6;
    v47 = (char *)this + 8;
    v46 = v50;
    v50 = &v39;
    std::string::string(&v39, v54);
    if ( !Shader::CompileShader(v39, v40, (int)v41, v42, v43, v44, v45, (char)v46, v47, (int)p_FileInformation) )
    {
      v15 = (float *)((char *)Profiler::Get() + 156);
      v16 = REGetGlobalTimer();
      *v15 = CRETimer::StopMiniTimer(v16) / 1000.0 + *v15;
      goto LABEL_4;
    }
  }
  v50 = &v42;
  v41 = &unk_101C9DC3;
  *((_DWORD *)this + 2) = 32;
  std::string::string(&v42, v41);
  v53 = &v35;
  LOBYTE(v65) = 6;
  std::string::string(&v35, "ShaderPrecomputing");
  LOBYTE(v65) = 7;
  Engine::Instance();
  LOBYTE(v65) = 4;
  if ( !(unsigned __int8)sub_1017C0D0(
                           v35,
                           v36,
                           v37,
                           v38,
                           v39,
                           v40,
                           v41,
                           v42,
                           v43,
                           v44,
                           v45,
                           v46,
                           v47,
                           p_FileInformation) )
    *((_DWORD *)this + 2) &= 0x100u;
  v17 = (const char *)std::string::c_str(v55);
  LogPrintf("Runtime: Load shader %s", v17);
  v18 = *((_DWORD *)this + 2);
  p_FileInformation = &v51;
  v47 = (char *)this + 16;
  v46 = 0;
  v45 = v18;
  v44 = 0;
  v43 = 0;
  v42 = std::string::c_str(v55);
  v19 = RenderDevice::Instance();
  if ( D3DXCreateEffectFromFileA(*((_DWORD *)v19 + 427), v42, v43, v44, v45, v46, v47, p_FileInformation) < 0 )
  {
    std::string::string(v56);
    LOBYTE(v65) = 8;
    std::string::operator+=(v56, "Error loading compiled effect, ");
    v20 = std::operator+<char>(v57, v55, "\n");
    LOBYTE(v65) = 9;
    std::string::operator+=(v56, v20);
    LOBYTE(v65) = 8;
    std::string::~string(v57);
    if ( v51 )
    {
      if ( (unsigned int)(*(int (__stdcall **)(int))(*(_DWORD *)v51 + 16))(v51) > 1 )
      {
        v21 = (*(int (__stdcall **)(int))(*(_DWORD *)v51 + 12))(v51);
        std::string::operator+=(v56, v21);
        if ( v51 )
        {
          (*(void (__stdcall **)(int))(*(_DWORD *)v51 + 8))(v51);
          v51 = 0;
        }
      }
    }
    v22 = (char *)std::string::c_str(v56);
    Error(v22);
    LOBYTE(v65) = 4;
    std::string::~string(v56);
  }
  std::string::operator=((char *)this + 188, v54);
  std::string::operator=((char *)this + 216, v55);
  v23 = (void *)sub_10126730(this, v54);
  v24 = v52 + 116;
  LOBYTE(v65) = 10;
  sub_101277C0((int)(v52 + 116), v23);
  LOBYTE(v65) = 4;
  std::string::~string(v57);
  Shader::ProcessGlobals(this);
  v25 = *((_DWORD *)v24 + 1);
  if ( v25 )
    v26 = (*((_DWORD *)v24 + 2) - v25) >> 5;
  else
    v26 = 0;
  p_FileInformation = (int *)(v26 - 1);
  v27 = ShaderManager::Instance();
  ShaderManager::SetUsedTextures(v27, (unsigned int)p_FileInformation);
  v28 = ShaderManager::Instance();
  ShaderManager::UpdateRenderSettings(v28);
  v29 = (float *)((char *)Profiler::Get() + 156);
  v30 = REGetGlobalTimer();
  v31 = CRETimer::StopMiniTimer(v30);
  LOBYTE(v65) = 2;
  *v29 = v31 / 1000.0 + *v29;
  std::string::~string(v55);
  LOBYTE(v65) = 1;
  std::string::~string(v54);
  LOBYTE(v65) = 0;
  std::string::~string(v60);
  v65 = -1;
  std::string::~string(v59);
  return 1;
}
