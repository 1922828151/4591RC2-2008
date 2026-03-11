/*
 * func-name: ?Initialize@Light@@IAEXXZ
 * func-address: 0x100de140
 * callers: 0x100de9e0, 0x100dead0, 0x100df590
 * callees: 0x10009330, 0x10009550, 0x10012c20, 0x10017220, 0x10017310, 0x100174f0, 0x100177c0, 0x10052ae0, 0x1007ec70
 */

void __thiscall Light::Initialize(Light *this)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v3; // eax
  int v4; // eax
  bool v5; // al
  int v6; // eax
  struct EditorVar *v7; // eax
  struct EditorVar *v8; // eax
  struct EditorVar *v9; // eax
  struct EditorVar *v10; // eax
  struct EditorVar *v11; // eax
  struct EditorVar *v12; // eax
  struct EditorVar *v13; // eax
  struct EditorVar *v14; // eax
  struct EditorVar *v15; // eax
  struct EditorVar *v16; // eax
  struct EditorVar *v17; // eax
  struct EditorVar *v18; // eax
  struct EditorVar *v19; // eax
  char v20; // [esp-70h] [ebp-148h] BYREF
  int v21; // [esp-6Ch] [ebp-144h]
  int v22; // [esp-68h] [ebp-140h]
  int v23; // [esp-64h] [ebp-13Ch]
  int v24; // [esp-60h] [ebp-138h]
  int v25; // [esp-5Ch] [ebp-134h]
  int v26; // [esp-58h] [ebp-130h]
  int v27; // [esp-54h] [ebp-12Ch]
  char v28; // [esp-50h] [ebp-128h] BYREF
  int v29; // [esp-4Ch] [ebp-124h]
  int v30; // [esp-48h] [ebp-120h]
  int v31; // [esp-44h] [ebp-11Ch]
  int v32; // [esp-40h] [ebp-118h]
  int v33; // [esp-3Ch] [ebp-114h]
  int v34; // [esp-38h] [ebp-110h]
  char v35; // [esp-34h] [ebp-10Ch] BYREF
  int v36; // [esp-30h] [ebp-108h]
  int v37; // [esp-2Ch] [ebp-104h]
  int v38; // [esp-28h] [ebp-100h]
  int v39; // [esp-24h] [ebp-FCh]
  int v40; // [esp-20h] [ebp-F8h]
  int v41; // [esp-1Ch] [ebp-F4h]
  int v42; // [esp-18h] [ebp-F0h]
  int v43; // [esp-14h] [ebp-ECh]
  int v44; // [esp+0h] [ebp-D8h] BYREF
  char *v45; // [esp+4h] [ebp-D4h]
  char *v46; // [esp+8h] [ebp-D0h]
  _DWORD v47[24]; // [esp+Ch] [ebp-CCh] BYREF
  _DWORD v48[26]; // [esp+6Ch] [ebp-6Ch] BYREF
  int v49; // [esp+D4h] [ebp-4h]

  v49 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v48[25] = &loc_101AEA7A;
  v48[24] = ExceptionList;
  v3 = *((_DWORD *)this + 178);
  *((_BYTE *)this + 252) = 1;
  *((_BYTE *)this + 1012) = 1;
  *((_BYTE *)this + 1052) = 1;
  if ( v3 )
  {
    v44 = (int)this;
    sub_10052AE0((_DWORD *)(v3 + 3236), &v44);
  }
  v4 = *((_DWORD *)this + 178);
  *((_DWORD *)this + 356) = 512;
  *((_BYTE *)this + 1420) = 0;
  *((_DWORD *)this + 315) = 0;
  v5 = !v4 || !*(_BYTE *)(v4 + 80) || *((_BYTE *)Editor::Instance() + 2056);
  *((_BYTE *)this + 1054) = v5;
  *((float *)this + 295) = 0.0;
  *((_DWORD *)this + 357) = 1;
  *((float *)this + 296) = 0.0;
  *((_DWORD *)this + 358) = 0;
  *((float *)this + 267) = 0.0;
  *((_BYTE *)this + 332) = 1;
  *((_BYTE *)this + 352) = 1;
  *((_BYTE *)this + 1452) = 1;
  *((_BYTE *)this + 724) = 1;
  *((_DWORD *)this + 268) = 0;
  *((_BYTE *)this + 1053) = 1;
  *((_BYTE *)this + 1189) = 0;
  *((_BYTE *)this + 1421) = 0;
  *((_BYTE *)this + 1422) = 0;
  *((float *)this + 308) = 0.0;
  *((float *)this + 309) = 1.0;
  *((float *)this + 310) = 0.0;
  *((float *)this + 278) = -1.0;
  *((float *)this + 279) = -1.0;
  *((float *)this + 280) = -1.0;
  if ( !*((_BYTE *)this + 213)
    && ((v6 = *((_DWORD *)this + 178)) != 0 && *(_BYTE *)(v6 + 80) || *((_BYTE *)Editor::Instance() + 2056)) )
  {
    v43 = 0;
    v42 = 1;
    v44 = (int)&v35;
    std::string::string(&v35, &unk_101C6830);
    v46 = &v28;
    v49 = 0;
    std::string::string(&v28, "Lighting");
    v27 = (int)this + 1076;
    v45 = &v20;
    LOBYTE(v49) = 1;
    std::string::string(&v20, "Diffuse");
    v49 = -1;
    v7 = (struct EditorVar *)EditorVar::EditorVar(
                               v47,
                               v20,
                               v21,
                               v22,
                               v23,
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
                               v37,
                               v38,
                               v39,
                               v40,
                               v41,
                               v42,
                               v43);
    v49 = 2;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v7);
    v49 = -1;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    v45 = &v35;
    std::string::string(&v35, &unk_101C6831);
    v46 = &v28;
    v49 = 3;
    std::string::string(&v28, "Lighting");
    v27 = (int)this + 1136;
    v44 = (int)&v20;
    LOBYTE(v49) = 4;
    std::string::string(&v20, "Range");
    v49 = -1;
    v8 = (struct EditorVar *)EditorVar::EditorVar(
                               v47,
                               v20,
                               v21,
                               v22,
                               v23,
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
                               v37,
                               v38,
                               v39,
                               v40,
                               v41,
                               v42,
                               v43);
    v49 = 5;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v8);
    v49 = -1;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    v45 = &v35;
    std::string::string(&v35, &unk_101C6832);
    v49 = 6;
    v46 = &v28;
    std::string::string(&v28, "Lighting");
    v27 = (int)this + 1140;
    v44 = (int)&v20;
    LOBYTE(v49) = 7;
    std::string::string(&v20, "SpotFalloff");
    v49 = -1;
    v9 = (struct EditorVar *)EditorVar::EditorVar(
                               v47,
                               v20,
                               v21,
                               v22,
                               v23,
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
                               v37,
                               v38,
                               v39,
                               v40,
                               v41,
                               v42,
                               v43);
    v49 = 8;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v9);
    v49 = -1;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    v45 = &v35;
    std::string::string(&v35, &unk_101C6833);
    v46 = &v28;
    v49 = 9;
    std::string::string(&v28, "Lighting");
    v27 = (int)this + 1144;
    v44 = (int)&v20;
    LOBYTE(v49) = 10;
    std::string::string(&v20, "SpotHotspot");
    v49 = -1;
    v10 = (struct EditorVar *)EditorVar::EditorVar(
                                v47,
                                v20,
                                v21,
                                v22,
                                v23,
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
                                v37,
                                v38,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43);
    v49 = 11;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v10);
    v49 = -1;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    v45 = &v35;
    std::string::string(&v35, &unk_101C683D);
    v46 = &v28;
    v49 = 12;
    std::string::string(&v28, "Lighting");
    v27 = (int)this + 1092;
    v44 = (int)&v20;
    LOBYTE(v49) = 13;
    std::string::string(&v20, "Intensity");
    v49 = -1;
    v11 = (struct EditorVar *)EditorVar::EditorVar(
                                v47,
                                v20,
                                v21,
                                v22,
                                v23,
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
                                v37,
                                v38,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43);
    v49 = 14;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v11);
    v49 = -1;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    v45 = &v35;
    std::string::string(&v35, "1 = Omni, 2 = Spot, 4 = Directional, 8 = Omni projector.");
    v46 = &v28;
    v49 = 15;
    std::string::string(&v28, "Lighting");
    v27 = (int)this + 1428;
    v44 = (int)&v20;
    LOBYTE(v49) = 16;
    std::string::string(&v20, "Type");
    v49 = -1;
    v12 = (struct EditorVar *)EditorVar::EditorVar(
                                v47,
                                v20,
                                v21,
                                v22,
                                v23,
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
                                v37,
                                v38,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43);
    v49 = 17;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v12);
    v49 = -1;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    v45 = &v35;
    std::string::string(&v35, "Project realtime shadows instead of light? Only valid for spotlights");
    v46 = &v28;
    v49 = 18;
    std::string::string(&v28, "Lighting");
    v27 = (int)this + 1420;
    v44 = (int)&v20;
    LOBYTE(v49) = 19;
    std::string::string(&v20, "Shadow Projector");
    v49 = -1;
    v13 = (struct EditorVar *)EditorVar::EditorVar(
                                v47,
                                v20,
                                v21,
                                v22,
                                v23,
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
                                v37,
                                v38,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43);
    v49 = 20;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v13);
    v49 = -1;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    v45 = &v35;
    std::string::string(&v35, "Size of shadow map. Bigger is less aliased, but slower and uses more memory");
    v46 = &v28;
    v49 = 21;
    std::string::string(&v28, "Lighting");
    v27 = (int)this + 1424;
    v44 = (int)&v20;
    LOBYTE(v49) = 22;
    std::string::string(&v20, "Shadow Map Size");
    v49 = -1;
    v14 = (struct EditorVar *)EditorVar::EditorVar(
                                v47,
                                v20,
                                v21,
                                v22,
                                v23,
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
                                v37,
                                v38,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43);
    v49 = 23;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v14);
    v49 = -1;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    v45 = &v35;
    std::string::string(&v35, "0 = Per Pixel, 1 = PRT. Set automatically. Only override for Per-Pixel on PRT meshes");
    v46 = &v28;
    v49 = 24;
    std::string::string(&v28, "Lighting");
    v27 = (int)this + 1432;
    v44 = (int)&v20;
    LOBYTE(v49) = 25;
    std::string::string(&v20, "Lighting Method");
    v49 = -1;
    v15 = (struct EditorVar *)EditorVar::EditorVar(
                                v47,
                                v20,
                                v21,
                                v22,
                                v23,
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
                                v37,
                                v38,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43);
    v49 = 26;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v15);
    v49 = -1;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    v45 = &v35;
    std::string::string(&v35, "Only lights Dynamic Actors (if shadow projector, will only project Dynamics)");
    v46 = &v28;
    v49 = 27;
    std::string::string(&v28, "Lighting");
    LOBYTE(v49) = 28;
    v27 = (int)this + 1421;
    v44 = (int)&v20;
    std::string::string(&v20, "Only Light Dynamics");
    v49 = -1;
    v16 = (struct EditorVar *)EditorVar::EditorVar(
                                v47,
                                v20,
                                v21,
                                v22,
                                v23,
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
                                v37,
                                v38,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43);
    v49 = 29;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v16);
    v49 = -1;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    v45 = &v35;
    std::string::string(
      &v35,
      "Only lights Static Actors (if shadow projector, will only project Dynamics onto Statics)");
    v46 = &v28;
    v49 = 30;
    std::string::string(&v28, "Lighting");
    v27 = (int)this + 1422;
    v44 = (int)&v20;
    LOBYTE(v49) = 31;
    std::string::string(&v20, "Only Light Statics");
    v49 = -1;
    v17 = (struct EditorVar *)EditorVar::EditorVar(
                                v47,
                                v20,
                                v21,
                                v22,
                                v23,
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
                                v37,
                                v38,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43);
    v49 = 32;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v17);
    v49 = -1;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    v45 = &v35;
    std::string::string(
      &v35,
      "Whether this Light allows Frustum Culling. If false, this Light will always be calculated (slow).");
    v46 = &v28;
    v49 = 33;
    std::string::string(&v28, "Lighting");
    v27 = (int)this + 1452;
    v44 = (int)&v20;
    LOBYTE(v49) = 34;
    std::string::string(&v20, "Frustum Culling");
    v49 = -1;
    v18 = (struct EditorVar *)EditorVar::EditorVar(
                                v47,
                                v20,
                                v21,
                                v22,
                                v23,
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
                                v37,
                                v38,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43);
    v49 = 35;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v18);
    v49 = -1;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    v45 = &v35;
    std::string::string(&v35, "Projection map for spotlights");
    v46 = &v28;
    v49 = 36;
    std::string::string(&v28, "Lighting");
    v27 = (int)this + 1264;
    v44 = (int)&v20;
    LOBYTE(v49) = 37;
    std::string::string(&v20, "Spot Projector Map");
    v49 = -1;
    v19 = (struct EditorVar *)EditorVar::EditorVar(
                                v48,
                                v20,
                                v21,
                                v22,
                                v23,
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
                                v37,
                                v38,
                                v39,
                                v40,
                                v41,
                                v42,
                                v43);
    v49 = 38;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v19);
    v49 = -1;
    EditorVar::~EditorVar((EditorVar *)v48);
  }
}
