/*
 * func-name: ?Initialize@Actor@@AAEXPAVWorld@@_N@Z
 * func-address: 0x1004f700
 * callers: 0x10050b80, 0x10050e70
 * callees: 0x10009330, 0x10009450, 0x10009550, 0x10012c20, 0x10017220, 0x10017310, 0x10017400, 0x100174f0, 0x1007ec70, 0x101189f0, 0x1013a940
 */

void __thiscall Actor::Initialize(GUID *this, struct World *a2, bool a3)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  struct RenderDevice *v5; // eax
  float v6; // edx
  World *v7; // ecx
  int v8; // eax
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
  struct EditorVar *v20; // eax
  struct EditorVar *v21; // eax
  struct EditorVar *v22; // eax
  struct EditorVar *v23; // eax
  struct EditorVar *v24; // eax
  struct EditorVar *v25; // eax
  struct EditorVar *v26; // eax
  struct EditorVar *v27; // eax
  struct EditorVar *v28; // eax
  struct EditorVar *v29; // eax
  struct EditorVar *v30; // eax
  struct EditorVar *v31; // eax
  char v32; // [esp-70h] [ebp-154h] BYREF
  int v33; // [esp-6Ch] [ebp-150h]
  int v34; // [esp-68h] [ebp-14Ch]
  int v35; // [esp-64h] [ebp-148h]
  int v36; // [esp-60h] [ebp-144h]
  int v37; // [esp-5Ch] [ebp-140h]
  int v38; // [esp-58h] [ebp-13Ch]
  GUID *v39; // [esp-54h] [ebp-138h]
  char v40; // [esp-50h] [ebp-134h] BYREF
  int v41; // [esp-4Ch] [ebp-130h]
  int v42; // [esp-48h] [ebp-12Ch]
  int v43; // [esp-44h] [ebp-128h]
  int v44; // [esp-40h] [ebp-124h]
  int v45; // [esp-3Ch] [ebp-120h]
  int v46; // [esp-38h] [ebp-11Ch]
  char v47; // [esp-34h] [ebp-118h] BYREF
  int v48; // [esp-30h] [ebp-114h]
  int v49; // [esp-2Ch] [ebp-110h]
  int v50; // [esp-28h] [ebp-10Ch]
  int v51; // [esp-24h] [ebp-108h]
  int v52; // [esp-20h] [ebp-104h]
  int v53; // [esp-1Ch] [ebp-100h]
  int v54; // [esp-18h] [ebp-FCh]
  void *v55; // [esp-14h] [ebp-F8h]
  char *v56; // [esp+0h] [ebp-E4h]
  char *v57; // [esp+4h] [ebp-E0h]
  char *v58; // [esp+8h] [ebp-DCh]
  float v59; // [esp+Ch] [ebp-D8h]
  unsigned int v60; // [esp+10h] [ebp-D4h]
  float v61; // [esp+14h] [ebp-D0h]
  _DWORD v62[24]; // [esp+18h] [ebp-CCh] BYREF
  _DWORD v63[26]; // [esp+78h] [ebp-6Ch] BYREF
  int v64; // [esp+E0h] [ebp-4h]

  v64 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v63[25] = &loc_101A8F58;
  v63[24] = ExceptionList;
  if ( RenderDevice::Instance() )
  {
    v5 = RenderDevice::Instance();
    *(_DWORD *)this[22].Data4 = (**(int (__thiscall ***)(struct RenderDevice *))v5)(v5);
  }
  if ( *((_BYTE *)Editor::Instance() + 2056) )
  {
    CoCreateGuid(this + 16);
  }
  else
  {
    this[16].Data1 = 0;
    *(_DWORD *)&this[16].Data2 = 0;
    *(_DWORD *)this[16].Data4 = 0;
    *(_DWORD *)&this[16].Data4[4] = 0;
  }
  *(float *)&this[23].Data1 = 0.0;
  *(_DWORD *)this[44].Data4 = a2;
  *(float *)&this[23].Data2 = 0.0;
  *(float *)this[23].Data4 = 0.2;
  *(_DWORD *)&this[44].Data4[4] = 0;
  HIBYTE(this[45].Data3) = 0;
  *(float *)&this[51].Data2 = -1.0;
  *(_DWORD *)&this->Data2 = 0;
  this[27].Data4[1] = 0;
  *(float *)this[50].Data4 = 0.5;
  this[27].Data4[2] = 1;
  LOBYTE(this[22].Data1) = 0;
  *(float *)&this[51].Data4[4] = 1.0;
  this[20].Data4[4] = 1;
  this[27].Data4[0] = 0;
  *(float *)&this[50].Data4[4] = 10.0;
  *(_DWORD *)&this[39].Data2 = -1;
  HIBYTE(this[45].Data2) = 0;
  *(float *)&this[52].Data2 = 0.0;
  LOBYTE(this[45].Data3) = 0;
  LOBYTE(this[45].Data2) = 0;
  *(float *)this[63].Data4 = 1.0;
  *(_DWORD *)&this[47].Data4[4] = 0;
  *(_DWORD *)&this[46].Data4[4] = 0;
  *(float *)&this[12].Data1 = -1.0e10;
  this[22].Data4[4] = 0;
  *(_DWORD *)&this[23].Data4[4] = 0;
  this[15].Data4[4] = 0;
  LOBYTE(this[13].Data2) = 1;
  *(float *)&this[49].Data1 = 0.0;
  v59 = 0.0;
  *(float *)&v60 = 0.0;
  *(float *)&this[49].Data2 = 0.0;
  v61 = 0.0;
  *(_DWORD *)&this[44].Data2 = 0;
  this[44].Data1 = 0;
  *(_DWORD *)&this[45].Data4[4] = 129;
  *(_DWORD *)this[45].Data4 = 2;
  this[46].Data1 = 1;
  *(_DWORD *)&this[46].Data2 = 0;
  *(_DWORD *)this[46].Data4 = 0;
  this[43].Data4[0] = 0;
  LOBYTE(this[51].Data1) = 0;
  BYTE1(this[51].Data1) = 0;
  this[51].Data4[0] = 0;
  this[45].Data1 = 0;
  *(_DWORD *)&this[6].Data2 = 0;
  *(_DWORD *)&this[38].Data4[4] = 0;
  this[52].Data1 = 0;
  this[52].Data4[0] = 0;
  this[52].Data4[1] = 0;
  this[52].Data4[2] = 0;
  HIBYTE(this[26].Data2) = 1;
  LOBYTE(this[26].Data3) = 1;
  BYTE1(this[22].Data1) = 0;
  BYTE2(this[63].Data1) = 1;
  LOBYTE(this[63].Data1) = 1;
  HIBYTE(this[63].Data1) = 1;
  BYTE1(this[63].Data1) = 0;
  *(_DWORD *)&this[22].Data2 = 0;
  *(float *)this[49].Data4 = 0.0;
  *(float *)&this[49].Data4[4] = 0.0;
  v6 = v61;
  this[50].Data1 = v60;
  *(float *)&this[50].Data2 = v6;
  *(_DWORD *)&this[6].Data4[4] = *(_DWORD *)&this[48].Data2;
  this[7].Data1 = *(_DWORD *)this[48].Data4;
  *(_DWORD *)&this[7].Data2 = *(_DWORD *)&this[48].Data4[4];
  *(_DWORD *)this[7].Data4 = this[49].Data1;
  *(_DWORD *)&this[7].Data4[4] = *(_DWORD *)&this[49].Data2;
  this[8].Data1 = *(_DWORD *)this[49].Data4;
  *(_DWORD *)&this[8].Data2 = *(_DWORD *)&this[49].Data4[4];
  *(_DWORD *)this[8].Data4 = this[50].Data1;
  *(_DWORD *)&this[8].Data4[4] = *(_DWORD *)&this[50].Data2;
  *(float *)&this[17].Data1 = 500.0;
  v55 = &unk_101BFF76;
  *(float *)&this[17].Data2 = 0.0;
  this[13].Data1 = 0;
  *(_DWORD *)this[15].Data4 = 0;
  LOBYTE(this[26].Data2) = 0;
  LOBYTE(this[63].Data2) = 0;
  this[63].Data4[4] = 1;
  std::string::operator=(&this[64], v55);
  v7 = *(World **)this[44].Data4;
  *(float *)this[20].Data4 = 1.0;
  LOBYTE(this[19].Data2) = 0;
  HIBYTE(this[13].Data2) = 0;
  *(_DWORD *)this[13].Data4 = -1;
  if ( v7 )
    World::AddActor(v7, (struct Actor *)this);
  HIBYTE(this[13].Data2) = a3;
  v8 = *(_DWORD *)this[44].Data4;
  if ( v8 && *(_BYTE *)(v8 + 80) || *((_BYTE *)Editor::Instance() + 2056) )
  {
    v55 = 0;
    v54 = 1;
    v58 = &v47;
    std::string::string(&v47, &unk_101BFF77);
    v57 = &v40;
    v64 = 0;
    std::string::string(&v40, "General");
    v39 = (GUID *)((char *)this + 444);
    v56 = &v32;
    LOBYTE(v64) = 1;
    std::string::string(&v32, " Name");
    v64 = -1;
    v9 = (struct EditorVar *)EditorVar::EditorVar(
                               v62,
                               v32,
                               v33,
                               v34,
                               v35,
                               v36,
                               v37,
                               v38,
                               (int)v39,
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
                               (char)v55);
    v64 = 2;
    std::vector<EditorVar>::push_back(this[26].Data4, v9);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, "Shadow casting type. 0 = None, 1 = Blob, 2 = Drop, 3 = ShadowMap");
    v57 = &v40;
    v64 = 3;
    std::string::string(&v40, "General");
    v39 = (GUID *)((char *)this + 248);
    v58 = &v32;
    LOBYTE(v64) = 4;
    std::string::string(&v32, "ShadowType");
    v64 = -1;
    v10 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 5;
    std::vector<EditorVar>::push_back(this[26].Data4, v10);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(
      &v47,
      "Distance ratio to no longer render prefab. Multiplied by 'VisibleRange' to get distance in meters");
    v64 = 6;
    v57 = &v40;
    std::string::string(&v40, "Visibility");
    v39 = this + 17;
    v58 = &v32;
    LOBYTE(v64) = 7;
    std::string::string(&v32, "VisibleDistanceRatio");
    v64 = -1;
    v11 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 8;
    std::vector<EditorVar>::push_back(this[26].Data4, v11);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, "For first LOD switching. Multiplied by config 'LODRange' to get distance in meters");
    v57 = &v40;
    v64 = 9;
    std::string::string(&v40, "Visibility");
    v39 = (GUID *)((char *)this + 276);
    v58 = &v32;
    LOBYTE(v64) = 10;
    std::string::string(&v32, "LODRatio");
    v64 = -1;
    v12 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 11;
    std::vector<EditorVar>::push_back(this[26].Data4, v12);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, "Is object visible");
    v57 = &v40;
    v64 = 12;
    std::string::string(&v40, "Visibility");
    v39 = this + 51;
    v58 = &v32;
    LOBYTE(v64) = 13;
    std::string::string(&v32, "IsHidden");
    v64 = -1;
    v13 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 14;
    std::vector<EditorVar>::push_back(this[26].Data4, v13);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(
      &v47,
      "Has inside flag for lighting, etc. Outside lights cast on outside meshes, and vice versa. An actor can be both inside/outside.");
    v57 = &v40;
    v64 = 15;
    std::string::string(&v40, "Lighting");
    v39 = (GUID *)((char *)this + 421);
    v58 = &v32;
    LOBYTE(v64) = 16;
    std::string::string(&v32, "Inside");
    v64 = -1;
    v14 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 17;
    std::vector<EditorVar>::push_back(this[26].Data4, v14);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(
      &v47,
      "Has outside flag for lighting, etc. Outside lights cast on outside meshes, and vice versa.  An actor can be both inside/outside.");
    v57 = &v40;
    v64 = 18;
    std::string::string(&v40, "Lighting");
    v39 = (GUID *)((char *)this + 422);
    v58 = &v32;
    LOBYTE(v64) = 19;
    std::string::string(&v32, "Outside");
    v64 = -1;
    v15 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 20;
    std::vector<EditorVar>::push_back(this[26].Data4, v15);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, "Is object colliable");
    v57 = &v40;
    v64 = 21;
    std::string::string(&v40, "Collision");
    v39 = (GUID *)((char *)this + 724);
    v58 = &v32;
    LOBYTE(v64) = 22;
    std::string::string(&v32, "GhostObject");
    v64 = -1;
    v16 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 23;
    std::vector<EditorVar>::push_back(this[26].Data4, v16);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(
      &v47,
      "Whether this Actor collides standard raytests for things like gunshots passing through fences and water volumes.");
    v57 = &v40;
    v64 = 24;
    std::string::string(&v40, "Collision");
    v39 = (GUID *)((char *)this + 1010);
    v58 = &v32;
    LOBYTE(v64) = 25;
    std::string::string(&v32, "CollidesRays");
    v64 = -1;
    v17 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 26;
    std::vector<EditorVar>::push_back(this[26].Data4, v17);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(
      &v47,
      "User-definable collision flag, so that you can get other Actors or Raychecks to ignore this Actor on a custom basis.");
    v57 = &v40;
    v64 = 27;
    std::string::string(&v40, "Collision");
    LOBYTE(v64) = 28;
    v39 = this + 44;
    v58 = &v32;
    std::string::string(&v32, "User Collision Flag");
    v64 = -1;
    v18 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 29;
    std::vector<EditorVar>::push_back(this[26].Data4, v18);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, "Whether this Actor is Occlusion Tested.");
    v57 = &v40;
    v64 = 30;
    std::string::string(&v40, "Occlusion");
    v39 = (GUID *)((char *)this + 1012);
    v58 = &v32;
    LOBYTE(v64) = 31;
    std::string::string(&v32, "AllowOcclusionTest");
    v64 = -1;
    v19 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 32;
    std::vector<EditorVar>::push_back(this[26].Data4, v19);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, "Whether this Actor Model will be used to test occlusion or its boundingbox");
    v57 = &v40;
    v64 = 33;
    std::string::string(&v40, "Occlusion");
    v39 = (GUID *)((char *)this + 420);
    v58 = &v32;
    LOBYTE(v64) = 34;
    std::string::string(&v32, "Use 'MyModel' For Occlusion");
    v64 = -1;
    v20 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 35;
    std::vector<EditorVar>::push_back(this[26].Data4, v20);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, &unk_101C04DC);
    v57 = &v40;
    v64 = 36;
    std::string::string(&v40, &unk_101C04EC);
    v39 = (GUID *)((char *)this + 308);
    v58 = &v32;
    LOBYTE(v64) = 37;
    std::string::string(&v32, "IsInWater");
    v64 = -1;
    v21 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 38;
    std::vector<EditorVar>::push_back(this[26].Data4, v21);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, &unk_101C0500);
    v57 = &v40;
    v64 = 39;
    std::string::string(&v40, &unk_101C0510);
    v39 = (GUID *)((char *)this + 312);
    v58 = &v32;
    LOBYTE(v64) = 40;
    std::string::string(&v32, "WaterColor");
    v64 = -1;
    v22 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 41;
    std::vector<EditorVar>::push_back(this[26].Data4, v22);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, &unk_101C0524);
    v64 = 42;
    v57 = &v40;
    std::string::string(&v40, &unk_101C0538);
    v39 = (GUID *)((char *)this + 328);
    v58 = &v32;
    LOBYTE(v64) = 43;
    std::string::string(&v32, "WaterEffectBias");
    v64 = -1;
    v23 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 44;
    std::vector<EditorVar>::push_back(this[26].Data4, v23);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 0;
    v56 = &v47;
    std::string::string(&v47, "the min value of CollisionBox's length");
    v57 = &v40;
    v64 = 45;
    std::string::string(&v40, "Collision");
    v39 = this + 49;
    v58 = &v32;
    LOBYTE(v64) = 46;
    std::string::string(&v32, "minBBox");
    v64 = -1;
    v24 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 47;
    std::vector<EditorVar>::push_back(this[26].Data4, v24);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 0;
    v56 = &v47;
    std::string::string(&v47, "the min value of CollisionBox's length");
    v57 = &v40;
    v64 = 48;
    std::string::string(&v40, "Collision");
    v39 = (GUID *)((char *)this + 796);
    v58 = &v32;
    LOBYTE(v64) = 49;
    std::string::string(&v32, "maxBBox");
    v64 = -1;
    v25 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 50;
    std::vector<EditorVar>::push_back(this[26].Data4, v25);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, "the min value of CollisionBox's length");
    v57 = &v40;
    v64 = 51;
    std::string::string(&v40, "Collision");
    v39 = this + 49;
    v58 = &v32;
    LOBYTE(v64) = 52;
    std::string::string(&v32, "minBBoxX");
    v64 = -1;
    v26 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 53;
    std::vector<EditorVar>::push_back(this[26].Data4, v26);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, "the min value of CollisionBox's height");
    v57 = &v40;
    v64 = 54;
    std::string::string(&v40, "Collision");
    v39 = (GUID *)((char *)this + 788);
    v58 = &v32;
    LOBYTE(v64) = 55;
    std::string::string(&v32, "minBBoxY");
    v64 = -1;
    v27 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 56;
    std::vector<EditorVar>::push_back(this[26].Data4, v27);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, "the min value of CollisionBox's width");
    v57 = &v40;
    v64 = 57;
    std::string::string(&v40, "Collision");
    v39 = (GUID *)((char *)this + 792);
    v58 = &v32;
    LOBYTE(v64) = 58;
    std::string::string(&v32, "minBBoxZ");
    v64 = -1;
    v28 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 59;
    std::vector<EditorVar>::push_back(this[26].Data4, v28);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, "the max value of CollisionBox's length");
    v57 = &v40;
    v64 = 60;
    std::string::string(&v40, "Collision");
    v39 = (GUID *)((char *)this + 796);
    v58 = &v32;
    LOBYTE(v64) = 61;
    std::string::string(&v32, "maxBBoxX");
    v64 = -1;
    v29 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 62;
    std::vector<EditorVar>::push_back(this[26].Data4, v29);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, "the max value of CollisionBox's height");
    v57 = &v40;
    v64 = 63;
    std::string::string(&v40, "Collision");
    v39 = this + 50;
    v58 = &v32;
    LOBYTE(v64) = 64;
    std::string::string(&v32, "maxBBoxY");
    v64 = -1;
    v30 = (struct EditorVar *)EditorVar::EditorVar(
                                v62,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 65;
    std::vector<EditorVar>::push_back(this[26].Data4, v30);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v62);
    v55 = 0;
    v54 = 1;
    v56 = &v47;
    std::string::string(&v47, "the max value of CollisionBox's width");
    v57 = &v40;
    v64 = 66;
    std::string::string(&v40, "Collision");
    v39 = (GUID *)((char *)this + 804);
    v58 = &v32;
    LOBYTE(v64) = 67;
    std::string::string(&v32, "maxBBoxZ");
    v64 = -1;
    v31 = (struct EditorVar *)EditorVar::EditorVar(
                                v63,
                                v32,
                                v33,
                                v34,
                                v35,
                                v36,
                                v37,
                                v38,
                                (int)v39,
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
                                (char)v55);
    v64 = 68;
    std::vector<EditorVar>::push_back(this[26].Data4, v31);
    v64 = -1;
    EditorVar::~EditorVar((EditorVar *)v63);
  }
}
