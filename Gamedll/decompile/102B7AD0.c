/*
 * func-name: ?Initialize@Game@@QAEXPAUHWND__@@0PAUHINSTANCE__@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x102b7ad0
 * callers: 0x1000622b
 * callees: 0x1000218a, 0x10008d28, 0x10008e72, 0x1000934a, 0x10009813, 0x1000bda7, 0x1000d6de, 0x10010e97, 0x100121f2, 0x100140d3, 0x10015df2, 0x1001739b, 0x10017fb2, 0x10019af6, 0x1001abcc, 0x102bd7e0, 0x102bdb40, 0x102bde10, 0x102bdf50, 0x102be780, 0x102bfb10, 0x102c72a0, 0x102c73b0, 0x102c7980, 0x102c9d62, 0x102c9d98
 */

void __thiscall Game::Initialize(
        Game *this,
        int a2,
        int a3,
        int a4,
        char a5,
        int a6,
        char a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // ebx
  int v13; // eax
  Editor *v14; // eax
  bool EditorMode; // al
  int v16; // eax
  struct xercesc_2_5::DOMTreeWalker *Walker; // eax
  int v18; // eax
  int v19; // edi
  int FirstNode; // eax
  int v21; // eax
  int String; // eax
  int v23; // ecx
  GUIConsole *v24; // eax
  GUIConsole *v25; // eax
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  Profiler *v31; // eax
  int v32; // ecx
  World *v33; // ecx
  HUDSystem *v34; // eax
  Editor *v35; // eax
  int v36; // eax
  char *v37; // esi
  int v38; // [esp+98h] [ebp-15Ch] BYREF
  int v39; // [esp+9Ch] [ebp-158h] BYREF
  int v40; // [esp+A0h] [ebp-154h] BYREF
  int v41; // [esp+A4h] [ebp-150h]
  int v42; // [esp+A8h] [ebp-14Ch]
  int v43; // [esp+ACh] [ebp-148h] BYREF
  int v44; // [esp+B0h] [ebp-144h]
  const char *v45; // [esp+B4h] [ebp-140h]
  int v46; // [esp+B8h] [ebp-13Ch] BYREF
  int v47; // [esp+BCh] [ebp-138h] BYREF
  int v48; // [esp+C0h] [ebp-134h]
  int v49; // [esp+C4h] [ebp-130h] BYREF
  int v50; // [esp+C8h] [ebp-12Ch]
  int v51; // [esp+CCh] [ebp-128h]
  int v52; // [esp+D0h] [ebp-124h]
  int v53; // [esp+D4h] [ebp-120h]
  int v54; // [esp+D8h] [ebp-11Ch]
  int v55; // [esp+DCh] [ebp-118h]
  int v56; // [esp+E0h] [ebp-114h]
  int v57; // [esp+E4h] [ebp-110h]
  int *v58; // [esp+E8h] [ebp-10Ch] BYREF
  float v59; // [esp+ECh] [ebp-108h]
  _DWORD v60[2]; // [esp+F0h] [ebp-104h] BYREF
  int *v61; // [esp+F8h] [ebp-FCh]
  int v62; // [esp+FCh] [ebp-F8h]
  _DWORD v63[7]; // [esp+10Ch] [ebp-E8h] BYREF
  _BYTE v64[96]; // [esp+128h] [ebp-CCh] BYREF
  _BYTE v65[92]; // [esp+188h] [ebp-6Ch] BYREF
  int v66; // [esp+1F0h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+1F4h] [ebp+0h]

  v11 = a4;
  v66 = 1;
  sub_102C72A0(&a5, v53);
  sub_102C73B0(&a5, v52);
  sub_102C7980(v53, v54);
  sub_102BE780(v53, v54);
  v58 = &v46;
  std::string::string(&v46, "Welkin4591.ini");
  v13 = sub_1001739B(v46, v47);
  v58 = &v46;
  if ( v13 )
    v45 = "Welkin4591.ini";
  else
    v45 = "..\\Welkin4591.ini";
  std::string::string(&v46, v45);
  sub_102BFB10(v46, v47, v48, v49, v50, v51, v52);
  *(_DWORD *)this = Engine::Instance(v53);
  v14 = (Editor *)Editor::Instance(v53, v54);
  EditorMode = Editor::GetEditorMode(v14);
  v58 = &v46;
  byte_103B80F1 = !EditorMode;
  std::string::string(&v46, &unk_10324DFE);
  v45 = 0;
  v59 = COERCE_FLOAT(&v38);
  LOBYTE(v66) = 2;
  std::string::string(&v38, &a5);
  LOBYTE(v66) = 1;
  Engine::Initialize(
    *(_DWORD *)this,
    v64,
    a2,
    a3,
    a4,
    "Welkin4591",
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
    v52);
  Precacher::DoPrecache(0, 0.0, 0.0);
  v61 = &v49;
  std::string::string(&v49, "Intersect.xml");
  v16 = MaterialIntersect::Instance(
          v49,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58,
          LODWORD(v59),
          v60[0],
          v60[1],
          v61,
          v62);
  a7 = 1;
  MaterialIntersect::Initalize(v16);
  *((_BYTE *)this + 32) = 0;
  initgame();
  initvectorc();
  XMLSystem::XMLSystem((XMLSystem *)v65);
  LOBYTE(v66) = 4;
  std::string::string(v63, "..\\UpdateConfig.xml");
  v59 = COERCE_FLOAT(&v46);
  LOBYTE(v66) = 5;
  std::string::string(&v46, v63);
  if ( (unsigned __int8)XMLSystem::Load(v65, v46, v47, v48, v49, v50, v51, v52) )
  {
    Walker = XMLSystem::GetWalker((XMLSystem *)v65);
    v18 = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 4))(Walker);
    v59 = COERCE_FLOAT(&v46);
    v19 = v18;
    std::string::string(&v46, "Config");
    FirstNode = XMLSystem::FindFirstNode(v65, v19, v46, v47, v48, v49, v50, v51, v52);
    if ( FirstNode )
    {
      v21 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164))(FirstNode, L"Version");
      if ( v21 )
      {
        v52 = 0;
        String = XMLSystem::GetString(v65, v60, v21);
        v23 = *(_DWORD *)this;
        v52 = String;
        LOBYTE(v66) = 6;
        Engine::SetVersion(v23);
        LOBYTE(v66) = 5;
        std::string::~string(v60);
      }
    }
  }
  v24 = (GUIConsole *)operator new(0xC0u);
  v59 = *(float *)&v24;
  LOBYTE(v66) = 7;
  if ( v24 )
    v25 = GUIConsole::GUIConsole(v24);
  else
    v25 = 0;
  LOBYTE(v66) = 5;
  *((_DWORD *)this + 26) = v25;
  GUIConsole::Initialize(v25);
  sub_1000BDA7(*((_DWORD *)this + 26));
  v26 = AudioDevice::Instance();
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v26 + 40))(v26, -1.0, -1);
  v59 = COERCE_FLOAT(&v46);
  std::string::string(&v46, &unk_10324DFF);
  v58 = &v39;
  LOBYTE(v66) = 8;
  std::string::string(&v39, "showstatsall");
  LOBYTE(v66) = 5;
  if ( (unsigned __int8)sub_102BD7E0(v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52) )
  {
    v59 = COERCE_FLOAT(&v46);
    std::string::string(&v46, &unk_10324E0E);
    v58 = &v39;
    LOBYTE(v66) = 9;
    std::string::string(&v39, "showstatsall");
    LOBYTE(v66) = 5;
    *((_BYTE *)this + 34) = sub_102BDB40(v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52);
  }
  else
  {
    *((_BYTE *)this + 34) = 0;
  }
  v59 = COERCE_FLOAT(&v46);
  std::string::string(&v46, &unk_10324E0F);
  v58 = &v39;
  LOBYTE(v66) = 10;
  std::string::string(&v39, "showinfo");
  LOBYTE(v66) = 5;
  if ( (unsigned __int8)sub_102BD7E0(v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52) )
  {
    v59 = COERCE_FLOAT(&v46);
    std::string::string(&v46, &unk_10324E1F);
    v58 = &v39;
    LOBYTE(v66) = 11;
    std::string::string(&v39, "showinfo");
    LOBYTE(v66) = 5;
    *((_BYTE *)this + 35) = sub_102BDB40(v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52);
  }
  else
  {
    *((_BYTE *)this + 35) = 0;
  }
  v28 = RenderDevice::Instance(v27);
  (*(void (__thiscall **)(int, int (*)()))(*(_DWORD *)v28 + 380))(v28, sub_10014E6B);
  if ( Engine::HasRenderSystem(*(Engine **)this) )
  {
    LOBYTE(v11) = *((_BYTE *)this + 5) != 0;
    v30 = RenderDevice::Instance(v29);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v30 + 372))(v30, v11, 0);
  }
  *((_BYTE *)this + 4) = 1;
  v31 = (Profiler *)Profiler::Get(v53);
  Profiler::Update(v31);
  v53 = -1;
  v60[0] = &v46;
  std::string::string(&v46, &unk_10324E2F);
  Game::NewMap(v46, v47, v48, v49, v50, v51, v52, v53);
  v60[0] = &v47;
  std::string::string(&v47, &unk_10324E42);
  v59 = COERCE_FLOAT(&v40);
  std::string::string(&v40, "ViewDistanceRate");
  Engine::Instance(v40);
  LOBYTE(retaddr) = 5;
  v59 = sub_102BDE10(v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52, v53);
  v53 = v32;
  v33 = (World *)*((_DWORD *)this + 25);
  v59 = 1.0 - v59;
  World::SetVisibleDistanceBias(v33, v59);
  v34 = HUDSystem::Instance();
  HUDSystem::Initialize(v34);
  byte_103B80F4 = 0;
  v35 = (Editor *)Editor::Instance(v53, v54);
  if ( !Editor::GetEditorMode(v35) )
  {
    v59 = COERCE_FLOAT(&v46);
    std::string::string(&v46, &unk_10324E43);
    v58 = &v39;
    LOBYTE(v66) = 14;
    std::string::string(&v39, "LogicModule");
    LOBYTE(v66) = 15;
    Engine::Instance(v60);
    LOBYTE(v66) = 5;
    sub_102BDF50(v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v52);
    LOBYTE(v66) = 16;
    if ( (unsigned __int8)std::operator==<char>(v60, "User") )
    {
      v59 = COERCE_FLOAT(operator new(0x2Cu));
      LOBYTE(v66) = 17;
      if ( v59 != 0.0 )
      {
LABEL_22:
        v36 = sub_1000218A();
LABEL_28:
        LOBYTE(v66) = 16;
        sub_10015DF2(v36);
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_103B665C + 4))(dword_103B665C);
        sub_10019AF6(v53, v54);
        Game::InitUI(this);
        v52 = 1;
        v51 = 0;
        v50 = 0;
        v59 = COERCE_FLOAT(&v43);
        std::string::string(&v43, "Cache_Fullbright.xml");
        v37 = (char *)this + 16;
        v58 = (int *)Precacher::CacheModel();
        std::vector<Model *>::push_back(v37, &v58);
        v52 = 1;
        v51 = 0;
        v50 = 0;
        v59 = COERCE_FLOAT(&v43);
        std::string::string(&v43, "Cache_Plants.xml");
        v58 = (int *)Precacher::CacheModel();
        std::vector<Model *>::push_back(v37, &v58);
        v52 = 1;
        v51 = 0;
        v50 = 0;
        v59 = COERCE_FLOAT(&v43);
        std::string::string(&v43, "Cache_EvnMap.xml");
        v58 = (int *)Precacher::CacheModel();
        std::vector<Model *>::push_back(v37, &v58);
        v52 = 1;
        v51 = 0;
        v50 = 0;
        v59 = COERCE_FLOAT(&v43);
        std::string::string(&v43, "Cache_EvnMapSelf.xml");
        v58 = (int *)Precacher::CacheModel();
        std::vector<Model *>::push_back(v37, &v58);
        LOBYTE(v66) = 5;
        std::string::~string(v60);
        goto LABEL_29;
      }
    }
    else if ( (unsigned __int8)std::operator==<char>(v60, "MUser") )
    {
      v59 = COERCE_FLOAT(operator new(0x18u));
      LOBYTE(v66) = 18;
      if ( v59 != 0.0 )
      {
        v36 = sub_1000934A();
        goto LABEL_28;
      }
    }
    else
    {
      v59 = COERCE_FLOAT(operator new(0x2Cu));
      LOBYTE(v66) = 19;
      if ( v59 != 0.0 )
        goto LABEL_22;
    }
    v36 = 0;
    goto LABEL_28;
  }
LABEL_29:
  LOBYTE(v66) = 4;
  std::string::~string(v63);
  LOBYTE(v66) = 1;
  XMLSystem::~XMLSystem((XMLSystem *)v65);
  LOBYTE(v66) = 0;
  sub_100121F2(v53, v54);
  v66 = -1;
  std::string::~string(&a5);
}
