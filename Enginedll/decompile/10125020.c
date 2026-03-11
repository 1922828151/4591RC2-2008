/*
 * func-name: ?CompileShader@Shader@@SA_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NAAKAAV23@@Z
 * func-address: 0x10125020
 * callers: 0x10125860, 0x10125a30
 * callees: 0x101189f0, 0x10124400, 0x101264c0, 0x10126540, 0x10126680, 0x10126bc0, 0x10127910, 0x101a2500
 */

char __cdecl Shader::CompileShader(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        _DWORD *a9,
        int a10)
{
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  char v14; // al
  int v15; // esi
  void *v16; // eax
  void *v17; // eax
  void *v18; // eax
  unsigned int v19; // ebp
  int v20; // ebx
  void *v21; // esi
  char *v22; // esi
  _BYTE *v23; // esi
  int v24; // eax
  int v25; // eax
  unsigned __int8 *v26; // ecx
  int v27; // esi
  char *v28; // esi
  int v29; // ecx
  char v30; // bl
  char v32; // [esp-68h] [ebp-144h] BYREF
  int v33; // [esp-64h] [ebp-140h]
  int v34; // [esp-60h] [ebp-13Ch]
  int v35; // [esp-5Ch] [ebp-138h]
  int v36; // [esp-58h] [ebp-134h]
  int v37; // [esp-54h] [ebp-130h]
  int v38; // [esp-50h] [ebp-12Ch]
  char v39; // [esp-4Ch] [ebp-128h] BYREF
  int v40; // [esp-48h] [ebp-124h]
  int v41; // [esp-44h] [ebp-120h]
  int v42; // [esp-40h] [ebp-11Ch] BYREF
  int v43; // [esp-3Ch] [ebp-118h]
  int v44; // [esp-38h] [ebp-114h]
  int v45; // [esp-34h] [ebp-110h]
  int v46; // [esp-30h] [ebp-10Ch] BYREF
  int v47; // [esp-2Ch] [ebp-108h]
  int v48; // [esp-28h] [ebp-104h]
  int v49; // [esp-24h] [ebp-100h] BYREF
  int v50; // [esp-20h] [ebp-FCh]
  int v51; // [esp-1Ch] [ebp-F8h]
  int v52; // [esp-18h] [ebp-F4h]
  const CHAR *v53; // [esp-14h] [ebp-F0h]
  const CHAR *v54; // [esp-10h] [ebp-ECh]
  UINT v55; // [esp-Ch] [ebp-E8h]
  int v56; // [esp-8h] [ebp-E4h]
  int v57; // [esp-4h] [ebp-E0h]
  int v58; // [esp+0h] [ebp-DCh]
  char v59; // [esp+15h] [ebp-C7h]
  char v60; // [esp+16h] [ebp-C6h]
  char v61; // [esp+17h] [ebp-C5h]
  int v62; // [esp+18h] [ebp-C4h] BYREF
  void *v63; // [esp+1Ch] [ebp-C0h]
  int v64; // [esp+20h] [ebp-BCh]
  int v65; // [esp+24h] [ebp-B8h]
  int *v66; // [esp+28h] [ebp-B4h]
  int *v67; // [esp+2Ch] [ebp-B0h] BYREF
  const CHAR *v68; // [esp+30h] [ebp-ACh]
  char *v69; // [esp+34h] [ebp-A8h]
  const CHAR *v70; // [esp+38h] [ebp-A4h]
  char *v71; // [esp+3Ch] [ebp-A0h]
  _BYTE v72[28]; // [esp+40h] [ebp-9Ch] BYREF
  _BYTE v73[28]; // [esp+5Ch] [ebp-80h] BYREF
  _BYTE v74[28]; // [esp+78h] [ebp-64h] BYREF
  _BYTE v75[60]; // [esp+94h] [ebp-48h] BYREF
  int v76; // [esp+D8h] [ebp-4h]

  v76 = 0;
  v10 = RenderDevice::Instance();
  std::string::string(v72, (char *)v10 + 1652);
  LOBYTE(v76) = 1;
  v11 = RenderDevice::Instance();
  std::string::string(v73, (char *)v11 + 1680);
  LOBYTE(v76) = 2;
  if ( std::string::find(v72, "1_", 0) != -1 )
    std::string::operator=(v72, "ps_2_0");
  if ( (unsigned __int8)std::operator!=<char>(v72, "ps_2_0")
    && (unsigned __int8)std::operator!=<char>(v72, "ps_2_a")
    && (unsigned __int8)std::operator!=<char>(v72, "ps_2_b")
    && (unsigned __int8)std::operator!=<char>(v72, "ps_3_0") )
  {
    std::string::operator=(v72, "ps_3_0");
  }
  v12 = RenderDevice::Instance();
  LOBYTE(v68) = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v12 + 132))(v12);
  v13 = RenderDevice::Instance();
  v14 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v13 + 244))(v13);
  v15 = a10;
  LOBYTE(v70) = v14;
  v59 = std::operator!=<char>(a10, &unk_101C9D9E);
  if ( !a8 )
  {
    v58 = 0;
    v57 = v15;
    v56 = (int)a9;
    v55 = 0;
    v54 = v70;
    v53 = v68;
    v69 = (char *)&v46;
    std::string::string(&v46, v73);
    v71 = &v39;
    LOBYTE(v76) = 17;
    std::string::string(&v39, v72);
    v66 = (int *)&v32;
    LOBYTE(v76) = 18;
    std::string::string(&v32, &a1);
    LOBYTE(v76) = 2;
    v30 = Shader::CompileEffect(
            v32,
            v33,
            v34,
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
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            (_DWORD *)v56,
            v57,
            v58);
LABEL_50:
    LOBYTE(v76) = 1;
    std::string::~string(v73);
    LOBYTE(v76) = 0;
    std::string::~string(v72);
    v76 = -1;
    std::string::~string(&a1);
    return v30;
  }
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v58 = 0;
  v57 = 1;
  v56 = 0;
  v67 = &v49;
  LOBYTE(v76) = 3;
  std::string::string(&v49, "vs_2_0");
  v66 = &v42;
  LOBYTE(v76) = 4;
  std::string::string(&v42, "ps_2_0");
  LOBYTE(v76) = 3;
  v16 = (void *)sub_10126680(v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58);
  LOBYTE(v76) = 5;
  sub_10127910((int)&v62, v16);
  LOBYTE(v76) = 3;
  sub_101264C0(v75);
  v58 = 0;
  v57 = 1;
  v56 = 1;
  v66 = &v49;
  std::string::string(&v49, "vs_3_0");
  v67 = &v42;
  LOBYTE(v76) = 6;
  std::string::string(&v42, "ps_3_0");
  LOBYTE(v76) = 3;
  v17 = (void *)sub_10126680(v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58);
  LOBYTE(v76) = 7;
  sub_10127910((int)&v62, v17);
  LOBYTE(v76) = 3;
  sub_101264C0(v75);
  v58 = 0;
  v57 = 1;
  v56 = 0;
  v66 = &v49;
  std::string::string(&v49, "vs_3_0");
  v67 = &v42;
  LOBYTE(v76) = 8;
  std::string::string(&v42, "ps_3_0");
  LOBYTE(v76) = 3;
  v18 = (void *)sub_10126680(v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58);
  LOBYTE(v76) = 9;
  sub_10127910((int)&v62, v18);
  LOBYTE(v76) = 3;
  sub_101264C0(v75);
  v19 = 0;
  v61 = 0;
  v60 = 0;
  v20 = 0;
  while ( 1 )
  {
    v21 = v63;
    if ( !v63 || v19 >= (v64 - (int)v63) / 60 )
      break;
    if ( !(unsigned __int8)std::operator==<char>(v72, (char *)v63 + v20) )
      goto LABEL_24;
    v22 = (char *)v63;
    if ( !v63 || v19 >= (v64 - (int)v63) / 60 )
    {
      invalid_parameter_noinfo();
      v22 = (char *)v63;
    }
    if ( !(unsigned __int8)std::operator==<char>(v73, &v22[v20 + 28]) )
      goto LABEL_24;
    v23 = v63;
    if ( !v63 || v19 >= (v64 - (int)v63) / 60 )
    {
      invalid_parameter_noinfo();
      v23 = v63;
    }
    if ( (_BYTE)v68 == v23[v20 + 56]
      && (v24 = sub_10126540(v19), (_BYTE)v70 == *(_BYTE *)(v24 + 57))
      && (v25 = sub_10126540(v19), !*(_BYTE *)(v25 + 58)) )
    {
      LOBYTE(v25) = v59 == 0;
      v58 = v25;
      v57 = a10;
      v56 = (int)a9;
      v55 = 0;
      v54 = v70;
      v53 = v68;
      v66 = &v46;
      std::string::string(&v46, v73);
      v67 = (int *)&v39;
      LOBYTE(v76) = 10;
      std::string::string(&v39, v72);
      v71 = &v32;
      LOBYTE(v76) = 11;
      std::string::string(&v32, &a1);
      LOBYTE(v76) = 3;
      ++v19;
      v20 += 60;
      v60 = Shader::CompileEffect(
              v32,
              v33,
              v34,
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
              v48,
              v49,
              v50,
              v51,
              v52,
              v53,
              v54,
              v55,
              (_DWORD *)v56,
              v57,
              v58);
      v61 = 1;
    }
    else
    {
LABEL_24:
      std::string::string(v74, &unk_101C9D9F);
      v58 = 1;
      v57 = (int)v74;
      v56 = (int)&v67;
      v26 = (unsigned __int8 *)v63;
      LOBYTE(v76) = 12;
      v67 = 0;
      if ( !v63 || (v27 = v64, v19 >= (v64 - (int)v63) / 60) )
      {
        invalid_parameter_noinfo();
        v27 = v64;
        v26 = (unsigned __int8 *)v63;
      }
      v55 = v26[v20 + 58];
      if ( !v26 || v19 >= (v27 - (int)v26) / 60 )
      {
        invalid_parameter_noinfo();
        v27 = v64;
        v26 = (unsigned __int8 *)v63;
      }
      v54 = (const CHAR *)v26[v20 + 57];
      if ( !v26 || v19 >= (v27 - (int)v26) / 60 )
      {
        invalid_parameter_noinfo();
        v27 = v64;
        v26 = (unsigned __int8 *)v63;
      }
      v53 = (const CHAR *)v26[v20 + 56];
      if ( !v26 || v19 >= (v27 - (int)v26) / 60 )
      {
        invalid_parameter_noinfo();
        v26 = (unsigned __int8 *)v63;
      }
      v71 = (char *)&v46;
      std::string::string(&v46, &v26[v20 + 28]);
      v28 = (char *)v63;
      LOBYTE(v76) = 13;
      if ( !v63 || v19 >= (v64 - (int)v63) / 60 )
      {
        invalid_parameter_noinfo();
        v28 = (char *)v63;
      }
      v66 = (int *)&v39;
      std::string::string(&v39, &v28[v20]);
      v69 = &v32;
      LOBYTE(v76) = 14;
      std::string::string(&v32, &a1);
      LOBYTE(v76) = 12;
      Shader::CompileEffect(
        v32,
        v33,
        v34,
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
        v48,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55,
        (_DWORD *)v56,
        v57,
        v58);
      LOBYTE(v76) = 3;
      std::string::~string(v74);
      ++v19;
      v20 += 60;
    }
  }
  if ( !v61 )
  {
    if ( (unsigned __int8)std::operator!=<char>(v72, &unk_101C9DB6) )
    {
      LOBYTE(v29) = v59 == 0;
      v58 = v29;
      v57 = a10;
      v56 = (int)a9;
      v55 = 0;
      v54 = v70;
      v53 = v68;
      v69 = (char *)&v46;
      std::string::string(&v46, v73);
      v71 = &v39;
      LOBYTE(v76) = 15;
      std::string::string(&v39, v72);
      v66 = (int *)&v32;
      LOBYTE(v76) = 16;
      std::string::string(&v32, &a1);
      LOBYTE(v76) = 3;
      v30 = Shader::CompileEffect(
              v32,
              v33,
              v34,
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
              v48,
              v49,
              v50,
              v51,
              v52,
              v53,
              v54,
              v55,
              (_DWORD *)v56,
              v57,
              v58);
      LOBYTE(v76) = 2;
      if ( v63 )
      {
        v58 = (int)v69;
        v57 = (int)&v62;
        sub_10126BC0(v63, v64);
        operator delete(v63);
      }
      v63 = 0;
      v64 = 0;
      v65 = 0;
      goto LABEL_50;
    }
    v21 = v63;
  }
  LOBYTE(v76) = 2;
  if ( v21 )
  {
    v58 = (int)v69;
    v57 = (int)&v62;
    sub_10126BC0(v21, v64);
    operator delete(v63);
  }
  v63 = 0;
  v64 = 0;
  v65 = 0;
  LOBYTE(v76) = 1;
  std::string::~string(v73);
  LOBYTE(v76) = 0;
  std::string::~string(v72);
  v76 = -1;
  std::string::~string(&a1);
  return v60;
}
