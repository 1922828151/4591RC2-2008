/*
 * func-name: ??0Terrain@@QAE@PAVWorld@@@Z
 * func-address: 0x10162f00
 * callers: 0x10168040, 0x1016bb10
 * callees: 0x10009330, 0x10009450, 0x10012c20, 0x10017220, 0x10017310, 0x10017400, 0x100177c0, 0x10051b50, 0x1007ec70, 0x10090fd0, 0x100dad30, 0x100db530, 0x10136290, 0x10136530, 0x10161f10, 0x1016b8e0, 0x101a2534
 */

Terrain *__thiscall Terrain::Terrain(Terrain *this, struct World *a2)
{
  int v3; // eax
  float v4; // edx
  float v5; // edx
  float v6; // eax
  float v7; // ecx
  Texture *v8; // eax
  Texture *v9; // eax
  int v10; // ecx
  Texture *v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  struct Input *v15; // eax
  int ControlHandle; // eax
  struct Input *v17; // eax
  int v18; // eax
  struct Input *v19; // eax
  int v20; // eax
  struct Input *v21; // eax
  int v22; // eax
  struct Input *v23; // eax
  int v24; // eax
  struct Input *v25; // eax
  int v26; // eax
  struct Input *v27; // eax
  int v28; // eax
  struct Input *v29; // eax
  int v30; // eax
  struct Input *v31; // eax
  int v32; // eax
  struct Input *v33; // eax
  int v34; // eax
  struct Input *v35; // eax
  int v36; // eax
  struct Input *v37; // eax
  int v38; // eax
  struct Input *v39; // eax
  int v40; // eax
  struct Input *v41; // eax
  struct EditorVar *v42; // eax
  struct EditorVar *v43; // eax
  struct EditorVar *v44; // eax
  struct EditorVar *v45; // eax
  struct EditorVar *v46; // eax
  struct EditorVar *v47; // eax
  struct EditorVar *v48; // eax
  struct EditorVar *v49; // eax
  struct EditorVar *v50; // eax
  struct EditorVar *v51; // eax
  struct EditorVar *v52; // eax
  struct EditorVar *v53; // eax
  struct EditorVar *v54; // eax
  struct EditorVar *v55; // eax
  struct EditorVar *v56; // eax
  struct EditorVar *v57; // eax
  struct EditorVar *v58; // eax
  Texture *v59; // eax
  Texture *v60; // eax
  struct EditorVar *v61; // eax
  struct EditorVar *v62; // eax
  struct EditorVar *v63; // eax
  struct EditorVar *v64; // eax
  int v65; // eax
  struct EditorVar *v66; // eax
  int v67; // ecx
  struct EditorVar *v68; // eax
  int v69; // ecx
  struct EditorVar *v70; // eax
  int v71; // ecx
  struct EditorVar *v72; // eax
  struct EditorVar *v73; // eax
  struct EditorVar *v74; // eax
  struct EditorVar *v75; // eax
  char v77; // [esp-48h] [ebp-F8h] BYREF
  int v78; // [esp-44h] [ebp-F4h]
  int v79; // [esp-40h] [ebp-F0h]
  int v80; // [esp-3Ch] [ebp-ECh]
  int v81; // [esp-38h] [ebp-E8h]
  int v82; // [esp-34h] [ebp-E4h]
  int v83; // [esp-30h] [ebp-E0h]
  int v84; // [esp-2Ch] [ebp-DCh]
  char v85; // [esp-28h] [ebp-D8h] BYREF
  int v86; // [esp-24h] [ebp-D4h]
  int v87; // [esp-20h] [ebp-D0h] BYREF
  int v88; // [esp-1Ch] [ebp-CCh]
  int v89; // [esp-18h] [ebp-C8h]
  int v90; // [esp-14h] [ebp-C4h]
  int v91; // [esp-10h] [ebp-C0h]
  int v92; // [esp-Ch] [ebp-BCh] BYREF
  const char *v93; // [esp-8h] [ebp-B8h]
  int v94; // [esp-4h] [ebp-B4h] BYREF
  int v95; // [esp+0h] [ebp-B0h]
  int v96; // [esp+4h] [ebp-ACh]
  int v97; // [esp+8h] [ebp-A8h]
  int v98; // [esp+Ch] [ebp-A4h]
  int v99; // [esp+10h] [ebp-A0h]
  int v100; // [esp+14h] [ebp-9Ch]
  unsigned int i; // [esp+28h] [ebp-88h]
  int v102[2]; // [esp+2Ch] [ebp-84h] BYREF
  int *v103; // [esp+34h] [ebp-7Ch]
  float v104; // [esp+38h] [ebp-78h]
  float v105; // [esp+3Ch] [ebp-74h]
  float v106; // [esp+40h] [ebp-70h]
  int v107; // [esp+44h] [ebp-6Ch] BYREF
  _BYTE v108[28]; // [esp+48h] [ebp-68h] BYREF
  _BYTE v109[28]; // [esp+64h] [ebp-4Ch] BYREF
  _BYTE v110[36]; // [esp+80h] [ebp-30h] BYREF
  int v111; // [esp+ACh] [ebp-4h]

  v102[1] = (int)this;
  Prefab::Prefab(this, a2);
  *(_DWORD *)this = &Terrain::`vftable';
  v111 = 0;
  *((_DWORD *)this + 295) = 0;
  *((_DWORD *)this + 296) = 0;
  *((_DWORD *)this + 297) = 0;
  *((_DWORD *)this + 299) = 0;
  *((_DWORD *)this + 300) = 0;
  *((_DWORD *)this + 301) = 0;
  *((_DWORD *)this + 307) = 0;
  *((_DWORD *)this + 308) = 0;
  *((_DWORD *)this + 309) = 0;
  std::string::string((char *)this + 1240);
  std::string::string((char *)this + 1268);
  *((float *)this + 328) = 0.0;
  *((float *)this + 329) = 0.0;
  *((float *)this + 330) = 0.0;
  *((float *)this + 331) = 0.0;
  *((float *)this + 332) = 0.0;
  *((float *)this + 333) = 0.0;
  *((float *)this + 335) = 0.0;
  *((float *)this + 336) = 0.0;
  *((float *)this + 337) = 0.0;
  *((_DWORD *)this + 338) = 0;
  *((_DWORD *)this + 339) = 0;
  *((_DWORD *)this + 340) = 0;
  *((_DWORD *)this + 341) = 0;
  *((_DWORD *)this + 342) = 0;
  *((_DWORD *)this + 343) = 0;
  *((_DWORD *)this + 344) = 0;
  *((_DWORD *)this + 345) = 0;
  *((_DWORD *)this + 347) = 0;
  *((_DWORD *)this + 348) = 0;
  *((_DWORD *)this + 349) = 0;
  std::string::string((char *)this + 1400);
  std::string::string((char *)this + 1480);
  std::string::string((char *)this + 1592);
  std::string::string((char *)this + 1620);
  std::string::string((char *)this + 1648);
  std::string::string((char *)this + 1676);
  *((_DWORD *)this + 427) = 0;
  *((_DWORD *)this + 428) = 0;
  *((_DWORD *)this + 429) = 0;
  LOBYTE(v111) = 14;
  v102[0] = (int)this;
  sub_10090FD0(&Terrain::s_vecTerrain, v102);
  v104 = 0.0;
  v100 = (int)&unk_101CDACF;
  v105 = 0.0;
  v106 = 0.0;
  *((float *)this + 214) = 0.0;
  *((float *)this + 215) = 0.0;
  *((float *)this + 216) = 0.0;
  *((_DWORD *)this + 266) = 3;
  *((_BYTE *)this + 724) = 1;
  *((_DWORD *)this + 182) = 2;
  v3 = std::string::operator=((char *)this + 1268, v100);
  std::string::operator=((char *)this + 1240, v3);
  std::string::operator=((char *)this + 1240, &unk_101CDB00);
  *((float *)this + 68) = 5000.0;
  v100 = 156;
  *((_BYTE *)this + 1448) = 1;
  v104 = 0.0;
  *((_BYTE *)this + 1464) = 0;
  v4 = v104;
  v104 = 0.0;
  *((float *)this + 328) = v4;
  v105 = 0.0;
  v5 = v104;
  v106 = 0.0;
  *((float *)this + 329) = 0.0;
  v6 = v105;
  *((float *)this + 330) = 0.0;
  v7 = v106;
  *((float *)this + 331) = v5;
  *((float *)this + 332) = v6;
  *((float *)this + 333) = v7;
  *((_DWORD *)this + 367) = 1;
  *((_DWORD *)this + 368) = 2;
  *((_BYTE *)this + 1476) = 0;
  *((_DWORD *)this + 334) = 0;
  v8 = (Texture *)operator new(v100);
  v102[0] = (int)v8;
  LOBYTE(v111) = 15;
  if ( v8 )
    v9 = Texture::Texture(v8);
  else
    v9 = 0;
  v100 = (int)&unk_101CDB01;
  *((float *)this + 361) = 5.0;
  LOBYTE(v111) = 14;
  *((_DWORD *)this + 397) = v9;
  *((_DWORD *)this + 324) = 0;
  *((_DWORD *)this + 325) = 0;
  *((_DWORD *)this + 326) = 0;
  *((_DWORD *)this + 327) = 0;
  *((_DWORD *)this + 293) = 0;
  std::string::operator=((char *)this + 1480, v100);
  *((float *)this + 378) = 5.0;
  *((_DWORD *)this + 305) = -1;
  *((_DWORD *)this + 304) = -1;
  *((float *)this + 379) = 1.0;
  *((float *)this + 430) = 1.0;
  v100 = 0;
  v99 = 4;
  *((_DWORD *)this + 377) = 0;
  *((_DWORD *)this + 303) = 0x7FFFFFFF;
  *((_DWORD *)this + 302) = 0x7FFFFFFF;
  *((_DWORD *)this + 380) = 6;
  *((_DWORD *)this + 381) = 0;
  *((_DWORD *)this + 431) = 4;
  *((_DWORD *)this + 432) = 15;
  *((_BYTE *)this + 1528) = 0;
  sub_1016B8E0((int)this + 1704, v99, v100);
  for ( i = 0; ; ++i )
  {
    v10 = *((_DWORD *)this + 427);
    if ( !v10 || i >= (*((_DWORD *)this + 428) - v10) >> 2 )
      break;
    v11 = (Texture *)operator new(0x9Cu);
    v102[0] = (int)v11;
    LOBYTE(v111) = 16;
    if ( v11 )
      v102[0] = (int)Texture::Texture(v11);
    else
      v102[0] = 0;
    v12 = *((_DWORD *)this + 427);
    LOBYTE(v111) = 14;
    if ( !v12 || i >= (*((_DWORD *)this + 428) - v12) >> 2 )
      invalid_parameter_noinfo();
    v13 = *((_DWORD *)this + 427);
    v100 = 0;
    *(float *)&v99 = 0.0;
    *(float *)&v98 = 1.0;
    *(_DWORD *)(4 * i + v13) = v102[0];
    *(float *)&v97 = 1.0;
    *(float *)&v96 = 0.0;
    *(float *)&v95 = 0.0;
    v94 = 0;
    v102[0] = (int)&v87;
    std::string::string(&v87, "DefaultTexture.dds");
    v14 = *((_DWORD *)this + 427);
    if ( !v14 || i >= (*((_DWORD *)this + 428) - v14) >> 2 )
      invalid_parameter_noinfo();
    Texture::Load(
      *(_DWORD *)(4 * i + *((_DWORD *)this + 427)),
      v87,
      v88,
      v89,
      v90,
      v91,
      v92,
      (int)v93,
      v94,
      *(float *)&v95,
      *(float *)&v96,
      *(float *)&v97,
      *(float *)&v98,
      *(float *)&v99,
      v100);
  }
  if ( *((_BYTE *)Editor::Instance() + 2056) )
  {
    v102[0] = (int)&v94;
    std::string::string(&v94, "GUIClick");
    LOBYTE(v111) = 17;
    v15 = Input::Instance();
    LOBYTE(v111) = 14;
    ControlHandle = Input::GetControlHandle(v15, v94, v95, v96, v97, v98, v99, v100);
    v102[0] = (int)&v94;
    v93 = "movealongplane";
    *((_DWORD *)this + 383) = ControlHandle;
    std::string::string(&v94, v93);
    LOBYTE(v111) = 18;
    v17 = Input::Instance();
    LOBYTE(v111) = 14;
    v18 = Input::GetControlHandle(v17, v94, v95, v96, v97, v98, v99, v100);
    v102[0] = (int)&v94;
    v93 = "multiselect";
    *((_DWORD *)this + 386) = v18;
    std::string::string(&v94, v93);
    LOBYTE(v111) = 19;
    v19 = Input::Instance();
    LOBYTE(v111) = 14;
    v20 = Input::GetControlHandle(v19, v94, v95, v96, v97, v98, v99, v100);
    v102[0] = (int)&v94;
    v93 = "clonedrag";
    *((_DWORD *)this + 385) = v20;
    std::string::string(&v94, v93);
    LOBYTE(v111) = 20;
    v21 = Input::Instance();
    LOBYTE(v111) = 14;
    v22 = Input::GetControlHandle(v21, v94, v95, v96, v97, v98, v99, v100);
    v102[0] = (int)&v94;
    v93 = "AddSize";
    *((_DWORD *)this + 384) = v22;
    std::string::string(&v94, v93);
    LOBYTE(v111) = 21;
    v23 = Input::Instance();
    LOBYTE(v111) = 14;
    v24 = Input::GetControlHandle(v23, v94, v95, v96, v97, v98, v99, v100);
    v102[0] = (int)&v94;
    v93 = "SubSize";
    *((_DWORD *)this + 387) = v24;
    std::string::string(&v94, v93);
    LOBYTE(v111) = 22;
    v25 = Input::Instance();
    LOBYTE(v111) = 14;
    v26 = Input::GetControlHandle(v25, v94, v95, v96, v97, v98, v99, v100);
    v102[0] = (int)&v94;
    v93 = "AddIntensity";
    *((_DWORD *)this + 388) = v26;
    std::string::string(&v94, v93);
    LOBYTE(v111) = 23;
    v27 = Input::Instance();
    LOBYTE(v111) = 14;
    v28 = Input::GetControlHandle(v27, v94, v95, v96, v97, v98, v99, v100);
    v102[0] = (int)&v94;
    v93 = "SubIntensity";
    *((_DWORD *)this + 389) = v28;
    std::string::string(&v94, v93);
    LOBYTE(v111) = 24;
    v29 = Input::Instance();
    LOBYTE(v111) = 14;
    v30 = Input::GetControlHandle(v29, v94, v95, v96, v97, v98, v99, v100);
    v102[0] = (int)&v94;
    v93 = "Channel_R";
    *((_DWORD *)this + 390) = v30;
    std::string::string(&v94, v93);
    LOBYTE(v111) = 25;
    v31 = Input::Instance();
    LOBYTE(v111) = 14;
    v32 = Input::GetControlHandle(v31, v94, v95, v96, v97, v98, v99, v100);
    v102[0] = (int)&v94;
    v93 = "Channel_G";
    *((_DWORD *)this + 391) = v32;
    std::string::string(&v94, v93);
    LOBYTE(v111) = 26;
    v33 = Input::Instance();
    LOBYTE(v111) = 14;
    v34 = Input::GetControlHandle(v33, v94, v95, v96, v97, v98, v99, v100);
    v102[0] = (int)&v94;
    v93 = "Channel_B";
    *((_DWORD *)this + 392) = v34;
    std::string::string(&v94, v93);
    LOBYTE(v111) = 27;
    v35 = Input::Instance();
    LOBYTE(v111) = 14;
    v36 = Input::GetControlHandle(v35, v94, v95, v96, v97, v98, v99, v100);
    v102[0] = (int)&v94;
    v93 = "Channel_A";
    *((_DWORD *)this + 393) = v36;
    std::string::string(&v94, v93);
    LOBYTE(v111) = 28;
    v37 = Input::Instance();
    LOBYTE(v111) = 14;
    v38 = Input::GetControlHandle(v37, v94, v95, v96, v97, v98, v99, v100);
    v102[0] = (int)&v94;
    v93 = "Dark";
    *((_DWORD *)this + 394) = v38;
    std::string::string(&v94, v93);
    LOBYTE(v111) = 29;
    v39 = Input::Instance();
    LOBYTE(v111) = 14;
    v40 = Input::GetControlHandle(v39, v94, v95, v96, v97, v98, v99, v100);
    v102[0] = (int)&v94;
    v93 = "Bright";
    *((_DWORD *)this + 395) = v40;
    std::string::string(&v94, v93);
    LOBYTE(v111) = 30;
    v41 = Input::Instance();
    LOBYTE(v111) = 14;
    *((_DWORD *)this + 396) = Input::GetControlHandle(v41, v94, v95, v96, v97, v98, v99, v100);
  }
  v100 = 0;
  v99 = 1;
  v102[0] = (int)&v92;
  std::string::string(&v92, &unk_101CDBBC);
  i = (unsigned int)&v85;
  LOBYTE(v111) = 31;
  std::string::string(&v85, "Model");
  v84 = (int)this + 1240;
  v103 = (int *)&v77;
  LOBYTE(v111) = 32;
  std::string::string(&v77, "HeightMap");
  LOBYTE(v111) = 14;
  v42 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 33;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v42);
  LOBYTE(v111) = 35;
  std::string::~string(v110);
  LOBYTE(v111) = 34;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  v99 = 1;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDBE0);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 36;
  std::string::string(&v85, "Model");
  v84 = (int)this + 1468;
  i = (unsigned int)&v77;
  LOBYTE(v111) = 37;
  std::string::string(&v77, "LevelComplete");
  LOBYTE(v111) = 14;
  v43 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 38;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v43);
  LOBYTE(v111) = 40;
  std::string::~string(v110);
  LOBYTE(v111) = 39;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  v99 = 1;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDC04);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 41;
  std::string::string(&v85, "Model");
  v84 = (int)this + 1472;
  i = (unsigned int)&v77;
  LOBYTE(v111) = 42;
  std::string::string(&v77, "LevelReduce");
  LOBYTE(v111) = 14;
  v44 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 43;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v44);
  LOBYTE(v111) = 45;
  std::string::~string(v110);
  LOBYTE(v111) = 44;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  v99 = 1;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDC28);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 46;
  std::string::string(&v85, "Model");
  v84 = (int)this + 1448;
  i = (unsigned int)&v77;
  LOBYTE(v111) = 47;
  std::string::string(&v77, "EnableLOD");
  LOBYTE(v111) = 14;
  v45 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 48;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v45);
  LOBYTE(v111) = 50;
  std::string::~string(v110);
  LOBYTE(v111) = 49;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  v99 = 1;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDC48);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 51;
  std::string::string(&v85, "Model");
  v84 = (int)this + 1464;
  i = (unsigned int)&v77;
  LOBYTE(v111) = 52;
  std::string::string(&v77, "WireFrame");
  LOBYTE(v111) = 14;
  v46 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 53;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v46);
  LOBYTE(v111) = 55;
  std::string::~string(v110);
  LOBYTE(v111) = 54;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  v99 = 1;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDC70);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 56;
  std::string::string(&v85, "Model");
  v84 = *((_DWORD *)this + 397);
  i = (unsigned int)&v77;
  LOBYTE(v111) = 57;
  std::string::string(&v77, "DistMap");
  LOBYTE(v111) = 14;
  v47 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 58;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v47);
  LOBYTE(v111) = 60;
  std::string::~string(v110);
  LOBYTE(v111) = 59;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  v99 = 1;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDC8C);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 61;
  std::string::string(&v85, "Model");
  v84 = (int)this + 1592;
  i = (unsigned int)&v77;
  LOBYTE(v111) = 62;
  std::string::string(&v77, "MatR");
  LOBYTE(v111) = 14;
  v48 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 63;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v48);
  LOBYTE(v111) = 65;
  std::string::~string(v110);
  LOBYTE(v111) = 64;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  v99 = 1;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDCAC);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 66;
  std::string::string(&v85, "Model");
  v84 = (int)this + 1620;
  i = (unsigned int)&v77;
  LOBYTE(v111) = 67;
  std::string::string(&v77, "MatG");
  LOBYTE(v111) = 14;
  v49 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 68;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v49);
  LOBYTE(v111) = 70;
  std::string::~string(v110);
  LOBYTE(v111) = 69;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  v99 = 1;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDCCC);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 71;
  std::string::string(&v85, "Model");
  v84 = (int)this + 1648;
  i = (unsigned int)&v77;
  LOBYTE(v111) = 72;
  std::string::string(&v77, "MatB");
  LOBYTE(v111) = 14;
  v50 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 73;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v50);
  LOBYTE(v111) = 75;
  std::string::~string(v110);
  LOBYTE(v111) = 74;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  v99 = 1;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDCEC);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 76;
  std::string::string(&v85, "Model");
  v84 = (int)this + 1676;
  i = (unsigned int)&v77;
  LOBYTE(v111) = 77;
  std::string::string(&v77, "MatA");
  LOBYTE(v111) = 14;
  v51 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 78;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v51);
  LOBYTE(v111) = 80;
  std::string::~string(v110);
  LOBYTE(v111) = 79;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  v99 = 1;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDD0C);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 81;
  std::string::string(&v85, "Model");
  v84 = (int)this + 1476;
  i = (unsigned int)&v77;
  LOBYTE(v111) = 82;
  std::string::string(&v77, "ForceComplete");
  LOBYTE(v111) = 14;
  v52 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 83;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v52);
  LOBYTE(v111) = 85;
  std::string::~string(v110);
  LOBYTE(v111) = 84;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  v99 = 1;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDD40);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 86;
  std::string::string(&v85, "Export");
  v84 = (int)this + 1340;
  i = (unsigned int)&v77;
  LOBYTE(v111) = 87;
  std::string::string(&v77, "MapSize");
  LOBYTE(v111) = 14;
  v53 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 88;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v53);
  LOBYTE(v111) = 90;
  std::string::~string(v110);
  LOBYTE(v111) = 89;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  *(float *)&v99 = 0.0;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDD5C);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 91;
  std::string::string(&v85, "Export");
  v84 = (int)this + 1296;
  i = (unsigned int)&v77;
  LOBYTE(v111) = 92;
  std::string::string(&v77, "StagsX");
  LOBYTE(v111) = 14;
  v54 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 93;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v54);
  LOBYTE(v111) = 95;
  std::string::~string(v110);
  LOBYTE(v111) = 94;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  *(float *)&v99 = 0.0;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDD74);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 96;
  std::string::string(&v85, "Export");
  v84 = (int)this + 1300;
  LOBYTE(v111) = 97;
  i = (unsigned int)&v77;
  std::string::string(&v77, "StagsZ");
  LOBYTE(v111) = 14;
  v55 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 98;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v55);
  LOBYTE(v111) = 100;
  std::string::~string(v110);
  LOBYTE(v111) = 99;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  v99 = 1;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDD8C);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 101;
  std::string::string(&v85, "Export");
  v84 = (int)this + 1304;
  i = (unsigned int)&v77;
  LOBYTE(v111) = 102;
  std::string::string(&v77, "PosCodeX");
  LOBYTE(v111) = 14;
  v56 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 103;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v56);
  LOBYTE(v111) = 105;
  std::string::~string(v110);
  LOBYTE(v111) = 104;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  v99 = 1;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDDAC);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 106;
  std::string::string(&v85, "Export");
  LOBYTE(v111) = 107;
  v84 = (int)this + 1308;
  i = (unsigned int)&v77;
  std::string::string(&v77, "PosCodeZ");
  LOBYTE(v111) = 14;
  v57 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 108;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v57);
  LOBYTE(v111) = 110;
  std::string::~string(v110);
  LOBYTE(v111) = 109;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  v100 = 0;
  v99 = 1;
  v103 = &v92;
  std::string::string(&v92, &unk_101CDDCC);
  v102[0] = (int)&v85;
  LOBYTE(v111) = 111;
  std::string::string(&v85, "Edit");
  v84 = (int)this + 1444;
  i = (unsigned int)&v77;
  LOBYTE(v111) = 112;
  std::string::string(&v77, "MeshWidth");
  LOBYTE(v111) = 14;
  v58 = (struct EditorVar *)EditorVar::EditorVar(
                              &v107,
                              v77,
                              v78,
                              v79,
                              v80,
                              v81,
                              v82,
                              v83,
                              v84,
                              v85,
                              v86,
                              v87,
                              v88,
                              v89,
                              v90,
                              v91,
                              v92,
                              (int)v93,
                              v94,
                              v95,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100);
  LOBYTE(v111) = 113;
  std::vector<EditorVar>::push_back((_DWORD *)this + 106, v58);
  LOBYTE(v111) = 115;
  std::string::~string(v110);
  LOBYTE(v111) = 114;
  std::string::~string(v109);
  LOBYTE(v111) = 14;
  std::string::~string(v108);
  if ( *((_BYTE *)Editor::Instance() + 2056) )
  {
    v59 = (Texture *)operator new(0x9Cu);
    v103 = (int *)v59;
    LOBYTE(v111) = 116;
    if ( v59 )
      v60 = Texture::Texture(v59);
    else
      v60 = 0;
    v100 = 0;
    *(float *)&v99 = 0.0;
    LOBYTE(v111) = 14;
    *(float *)&v98 = 1.0;
    *((_DWORD *)this + 377) = v60;
    *(float *)&v97 = 1.0;
    *(float *)&v96 = 0.0;
    *(float *)&v95 = 0.0;
    v94 = 0;
    v103 = &v87;
    std::string::string(&v87, "DotA.bmp");
    Texture::Load(
      *((_DWORD *)this + 377),
      v87,
      v88,
      v89,
      v90,
      v91,
      v92,
      (int)v93,
      v94,
      *(float *)&v95,
      *(float *)&v96,
      *(float *)&v97,
      *(float *)&v98,
      *(float *)&v99,
      v100);
    v100 = 0;
    v99 = 1;
    v103 = &v92;
    std::string::string(&v92, &unk_101CDDF8);
    v102[0] = (int)&v85;
    LOBYTE(v111) = 117;
    std::string::string(&v85, "Edit");
    v84 = *((_DWORD *)this + 377);
    i = (unsigned int)&v77;
    LOBYTE(v111) = 118;
    std::string::string(&v77, "BrushFile");
    LOBYTE(v111) = 14;
    v61 = (struct EditorVar *)EditorVar::EditorVar(
                                &v107,
                                v77,
                                v78,
                                v79,
                                v80,
                                v81,
                                v82,
                                v83,
                                v84,
                                v85,
                                v86,
                                v87,
                                v88,
                                v89,
                                v90,
                                v91,
                                v92,
                                (int)v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98,
                                v99,
                                v100);
    LOBYTE(v111) = 119;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v61);
    LOBYTE(v111) = 121;
    std::string::~string(v110);
    LOBYTE(v111) = 120;
    std::string::~string(v109);
    LOBYTE(v111) = 14;
    std::string::~string(v108);
    v100 = 0;
    v99 = 1;
    v103 = &v92;
    std::string::string(&v92, &unk_101CDE18);
    v102[0] = (int)&v85;
    LOBYTE(v111) = 122;
    std::string::string(&v85, "Edit");
    v84 = (int)this + 1512;
    LOBYTE(v111) = 123;
    i = (unsigned int)&v77;
    std::string::string(&v77, "BrushSize");
    LOBYTE(v111) = 14;
    v62 = (struct EditorVar *)EditorVar::EditorVar(
                                &v107,
                                v77,
                                v78,
                                v79,
                                v80,
                                v81,
                                v82,
                                v83,
                                v84,
                                v85,
                                v86,
                                v87,
                                v88,
                                v89,
                                v90,
                                v91,
                                v92,
                                (int)v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98,
                                v99,
                                v100);
    LOBYTE(v111) = 124;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v62);
    LOBYTE(v111) = 126;
    std::string::~string(v110);
    LOBYTE(v111) = 125;
    std::string::~string(v109);
    LOBYTE(v111) = 14;
    std::string::~string(v108);
    v100 = 0;
    v99 = 1;
    v103 = &v92;
    std::string::string(&v92, &unk_101CDE38);
    v102[0] = (int)&v85;
    LOBYTE(v111) = 127;
    std::string::string(&v85, "Edit");
    v84 = (int)this + 1516;
    i = (unsigned int)&v77;
    LOBYTE(v111) = 0x80;
    std::string::string(&v77, "BrushStress");
    LOBYTE(v111) = 14;
    v63 = (struct EditorVar *)EditorVar::EditorVar(
                                &v107,
                                v77,
                                v78,
                                v79,
                                v80,
                                v81,
                                v82,
                                v83,
                                v84,
                                v85,
                                v86,
                                v87,
                                v88,
                                v89,
                                v90,
                                v91,
                                v92,
                                (int)v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98,
                                v99,
                                v100);
    LOBYTE(v111) = -127;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v63);
    LOBYTE(v111) = -125;
    std::string::~string(v110);
    LOBYTE(v111) = -126;
    std::string::~string(v109);
    LOBYTE(v111) = 14;
    std::string::~string(v108);
    v100 = 0;
    v99 = 1;
    v103 = &v92;
    std::string::string(&v92, &unk_101CDE58);
    v102[0] = (int)&v85;
    LOBYTE(v111) = -124;
    std::string::string(&v85, "Edit");
    LOBYTE(v111) = -123;
    v84 = (int)this + 1520;
    i = (unsigned int)&v77;
    std::string::string(&v77, "BrushFillMode");
    LOBYTE(v111) = 14;
    v64 = (struct EditorVar *)EditorVar::EditorVar(
                                &v107,
                                v77,
                                v78,
                                v79,
                                v80,
                                v81,
                                v82,
                                v83,
                                v84,
                                v85,
                                v86,
                                v87,
                                v88,
                                v89,
                                v90,
                                v91,
                                v92,
                                (int)v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98,
                                v99,
                                v100);
    LOBYTE(v111) = -122;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v64);
    LOBYTE(v111) = -120;
    std::string::~string(v110);
    LOBYTE(v111) = -121;
    std::string::~string(v109);
    LOBYTE(v111) = 14;
    std::string::~string(v108);
    v100 = 0;
    v99 = 1;
    v103 = &v92;
    std::string::string(&v92, &unk_101CDEBC);
    v102[0] = (int)&v85;
    LOBYTE(v111) = -119;
    std::string::string(&v85, "Plant");
    v65 = *((_DWORD *)this + 427);
    LOBYTE(v111) = -118;
    if ( !v65 || !((*((_DWORD *)this + 428) - v65) >> 2) )
      invalid_parameter_noinfo();
    v84 = **((_DWORD **)this + 427);
    i = (unsigned int)&v77;
    std::string::string(&v77, "Glass01");
    LOBYTE(v111) = 14;
    v66 = (struct EditorVar *)EditorVar::EditorVar(
                                &v107,
                                v77,
                                v78,
                                v79,
                                v80,
                                v81,
                                v82,
                                v83,
                                v84,
                                v85,
                                v86,
                                v87,
                                v88,
                                v89,
                                v90,
                                v91,
                                v92,
                                (int)v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98,
                                v99,
                                v100);
    LOBYTE(v111) = -117;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v66);
    LOBYTE(v111) = -115;
    std::string::~string(v110);
    LOBYTE(v111) = -116;
    std::string::~string(v109);
    LOBYTE(v111) = 14;
    std::string::~string(v108);
    v100 = 0;
    v99 = 1;
    v103 = &v92;
    std::string::string(&v92, &unk_101CDED8);
    v102[0] = (int)&v85;
    LOBYTE(v111) = -114;
    std::string::string(&v85, "Plant");
    v67 = *((_DWORD *)this + 427);
    LOBYTE(v111) = -113;
    if ( !v67 || (unsigned int)((*((_DWORD *)this + 428) - v67) >> 2) <= 1 )
      invalid_parameter_noinfo();
    v84 = *(_DWORD *)(*((_DWORD *)this + 427) + 4);
    i = (unsigned int)&v77;
    std::string::string(&v77, "Glass02");
    LOBYTE(v111) = 14;
    v68 = (struct EditorVar *)EditorVar::EditorVar(
                                &v107,
                                v77,
                                v78,
                                v79,
                                v80,
                                v81,
                                v82,
                                v83,
                                v84,
                                v85,
                                v86,
                                v87,
                                v88,
                                v89,
                                v90,
                                v91,
                                v92,
                                (int)v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98,
                                v99,
                                v100);
    LOBYTE(v111) = -112;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v68);
    LOBYTE(v111) = -110;
    std::string::~string(v110);
    LOBYTE(v111) = -111;
    std::string::~string(v109);
    LOBYTE(v111) = 14;
    std::string::~string(v108);
    v100 = 0;
    v99 = 1;
    v103 = &v92;
    std::string::string(&v92, &unk_101CDEF4);
    v102[0] = (int)&v85;
    LOBYTE(v111) = -109;
    std::string::string(&v85, "Plant");
    v69 = *((_DWORD *)this + 427);
    LOBYTE(v111) = -108;
    if ( !v69 || (unsigned int)((*((_DWORD *)this + 428) - v69) >> 2) <= 2 )
      invalid_parameter_noinfo();
    v84 = *(_DWORD *)(*((_DWORD *)this + 427) + 8);
    i = (unsigned int)&v77;
    std::string::string(&v77, "Glass03");
    LOBYTE(v111) = 14;
    v70 = (struct EditorVar *)EditorVar::EditorVar(
                                &v107,
                                v77,
                                v78,
                                v79,
                                v80,
                                v81,
                                v82,
                                v83,
                                v84,
                                v85,
                                v86,
                                v87,
                                v88,
                                v89,
                                v90,
                                v91,
                                v92,
                                (int)v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98,
                                v99,
                                v100);
    LOBYTE(v111) = -107;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v70);
    LOBYTE(v111) = -105;
    std::string::~string(v110);
    LOBYTE(v111) = -106;
    std::string::~string(v109);
    LOBYTE(v111) = 14;
    std::string::~string(v108);
    v100 = 0;
    v99 = 1;
    v103 = &v92;
    std::string::string(&v92, &unk_101CDF10);
    v102[0] = (int)&v85;
    LOBYTE(v111) = -104;
    std::string::string(&v85, "Plant");
    v71 = *((_DWORD *)this + 427);
    LOBYTE(v111) = -103;
    if ( !v71 || (unsigned int)((*((_DWORD *)this + 428) - v71) >> 2) <= 3 )
      invalid_parameter_noinfo();
    v84 = *(_DWORD *)(*((_DWORD *)this + 427) + 12);
    i = (unsigned int)&v77;
    std::string::string(&v77, "Glass04");
    LOBYTE(v111) = 14;
    v72 = (struct EditorVar *)EditorVar::EditorVar(
                                &v107,
                                v77,
                                v78,
                                v79,
                                v80,
                                v81,
                                v82,
                                v83,
                                v84,
                                v85,
                                v86,
                                v87,
                                v88,
                                v89,
                                v90,
                                v91,
                                v92,
                                (int)v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98,
                                v99,
                                v100);
    LOBYTE(v111) = -102;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v72);
    LOBYTE(v111) = -100;
    std::string::~string(v110);
    LOBYTE(v111) = -101;
    std::string::~string(v109);
    LOBYTE(v111) = 14;
    std::string::~string(v108);
    v100 = 0;
    v99 = 1;
    v103 = &v92;
    std::string::string(&v92, &unk_101CDF2C);
    v102[0] = (int)&v85;
    LOBYTE(v111) = -99;
    std::string::string(&v85, "Plant");
    v84 = (int)this + 1720;
    i = (unsigned int)&v77;
    LOBYTE(v111) = -98;
    std::string::string(&v77, "GlassSize");
    LOBYTE(v111) = 14;
    v73 = (struct EditorVar *)EditorVar::EditorVar(
                                &v107,
                                v77,
                                v78,
                                v79,
                                v80,
                                v81,
                                v82,
                                v83,
                                v84,
                                v85,
                                v86,
                                v87,
                                v88,
                                v89,
                                v90,
                                v91,
                                v92,
                                (int)v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98,
                                v99,
                                v100);
    LOBYTE(v111) = -97;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v73);
    LOBYTE(v111) = -95;
    std::string::~string(v110);
    LOBYTE(v111) = -96;
    std::string::~string(v109);
    LOBYTE(v111) = 14;
    std::string::~string(v108);
    v100 = 0;
    v99 = 1;
    v103 = &v92;
    std::string::string(&v92, &unk_101CDF4C);
    LOBYTE(v111) = -94;
    v102[0] = (int)&v85;
    std::string::string(&v85, "Plant");
    v84 = (int)this + 1724;
    i = (unsigned int)&v77;
    LOBYTE(v111) = -93;
    std::string::string(&v77, "GlassTypeCount");
    LOBYTE(v111) = 14;
    v74 = (struct EditorVar *)EditorVar::EditorVar(
                                &v107,
                                v77,
                                v78,
                                v79,
                                v80,
                                v81,
                                v82,
                                v83,
                                v84,
                                v85,
                                v86,
                                v87,
                                v88,
                                v89,
                                v90,
                                v91,
                                v92,
                                (int)v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98,
                                v99,
                                v100);
    LOBYTE(v111) = -92;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v74);
    LOBYTE(v111) = -90;
    std::string::~string(v110);
    LOBYTE(v111) = -91;
    std::string::~string(v109);
    LOBYTE(v111) = 14;
    std::string::~string(v108);
    v100 = 0;
    v99 = 1;
    v103 = &v92;
    std::string::string(&v92, &unk_101CDF6C);
    v102[0] = (int)&v85;
    LOBYTE(v111) = -89;
    std::string::string(&v85, "Plant");
    v84 = (int)this + 1728;
    i = (unsigned int)&v77;
    LOBYTE(v111) = -88;
    std::string::string(&v77, "GlassTypeMask");
    LOBYTE(v111) = 14;
    v75 = (struct EditorVar *)EditorVar::EditorVar(
                                &v107,
                                v77,
                                v78,
                                v79,
                                v80,
                                v81,
                                v82,
                                v83,
                                v84,
                                v85,
                                v86,
                                v87,
                                v88,
                                v89,
                                v90,
                                v91,
                                v92,
                                (int)v93,
                                v94,
                                v95,
                                v96,
                                v97,
                                v98,
                                v99,
                                v100);
    LOBYTE(v111) = -87;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v75);
    LOBYTE(v111) = -85;
    std::string::~string(v110);
    LOBYTE(v111) = -86;
    std::string::~string(v109);
    LOBYTE(v111) = 14;
    std::string::~string(v108);
  }
  Terrain::LoadPatterns(this);
  return this;
}
