/*
 * func-name: ??0AnimationModal@@QAE@PAVWorld@@@Z_0
 * func-address: 0x100db090
 * callers: 0x10017869
 * callees: 0x1001a974, 0x1001aa87
 */

AnimationModal *__thiscall AnimationModal::AnimationModal(AnimationModal *this, struct World *a2)
{
  int v3; // eax
  World *v4; // ecx
  Editor *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+110h] [ebp-ECh] BYREF
  int v12; // [esp+114h] [ebp-E8h]
  int v13; // [esp+118h] [ebp-E4h]
  int v14; // [esp+11Ch] [ebp-E0h]
  int v15; // [esp+120h] [ebp-DCh]
  int v16; // [esp+124h] [ebp-D8h]
  int v17; // [esp+128h] [ebp-D4h]
  char *v18; // [esp+12Ch] [ebp-D0h]
  int v19; // [esp+130h] [ebp-CCh] BYREF
  int v20; // [esp+134h] [ebp-C8h]
  int v21; // [esp+138h] [ebp-C4h]
  int v22; // [esp+13Ch] [ebp-C0h]
  int v23; // [esp+140h] [ebp-BCh]
  int v24; // [esp+144h] [ebp-B8h]
  int v25; // [esp+148h] [ebp-B4h]
  int v26; // [esp+14Ch] [ebp-B0h] BYREF
  int v27; // [esp+150h] [ebp-ACh]
  int v28; // [esp+154h] [ebp-A8h]
  int v29; // [esp+158h] [ebp-A4h]
  int v30; // [esp+15Ch] [ebp-A0h]
  int v31; // [esp+160h] [ebp-9Ch]
  int v32; // [esp+164h] [ebp-98h]
  int v33; // [esp+168h] [ebp-94h]
  void *v34; // [esp+16Ch] [ebp-90h]
  int v35; // [esp+170h] [ebp-8Ch]
  int v36; // [esp+174h] [ebp-88h]
  AnimationModal *v37; // [esp+184h] [ebp-78h]
  int *v38; // [esp+188h] [ebp-74h]
  int *v39; // [esp+18Ch] [ebp-70h]
  _BYTE v40[96]; // [esp+190h] [ebp-6Ch] BYREF
  int v41; // [esp+1F8h] [ebp-4h]

  v37 = this;
  Effect_Base::Effect_Base(this, a2);
  v41 = 0;
  *(_DWORD *)this = &AnimationModal::`vftable';
  sub_1001A974(v35, v36);
  std::string::string((char *)this + 1236);
  std::string::string((char *)this + 1284);
  std::string::string((char *)this + 1312);
  std::string::string((char *)this + 1340);
  std::string::string((char *)this + 1368);
  *((_DWORD *)this + 350) = 0;
  *((_DWORD *)this + 351) = 0;
  *((_DWORD *)this + 352) = 0;
  v34 = &unk_103100F9;
  LOBYTE(v41) = 7;
  *((_DWORD *)this + 183) = 2;
  *((_BYTE *)this + 727) = 1;
  std::string::operator=((char *)this + 1284, v34);
  std::string::operator=((char *)this + 1312, &unk_103100FA);
  v34 = &unk_103100FB;
  *((float *)this + 316) = 1.0;
  *((_DWORD *)this + 308) = -1;
  std::string::operator=((char *)this + 1236, v34);
  v3 = std::string::operator=((char *)this + 1368, &unk_10310105);
  std::string::operator=((char *)this + 1340, v3);
  v4 = (World *)*((_DWORD *)this + 178);
  if ( v4 && World::IsLoading(v4) || (v5 = (Editor *)Editor::Instance(v35, v36), Editor::GetEditorMode(v5)) )
  {
    v34 = 0;
    v33 = 1;
    std::string::string(&v26, &unk_10310134);
    v38 = &v19;
    LOBYTE(v41) = 8;
    std::string::string(&v19, &unk_10310144);
    v18 = (char *)this + 1136;
    v39 = &v11;
    LOBYTE(v41) = 9;
    std::string::string(&v11, "ModalFilename");
    LOBYTE(v41) = 7;
    v6 = EditorVar::EditorVar(
           v40,
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
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34);
    LOBYTE(v41) = 10;
    std::vector<EditorVar>::push_back((char *)this + 424, v6);
    LOBYTE(v41) = 7;
    EditorVar::~EditorVar((EditorVar *)v40);
    v34 = 0;
    v33 = 1;
    std::string::string(&v26, &unk_1031015C);
    v39 = &v19;
    LOBYTE(v41) = 11;
    std::string::string(&v19, &unk_10310174);
    v18 = (char *)this + 1236;
    v38 = &v11;
    LOBYTE(v41) = 12;
    std::string::string(&v11, "IdleAnim");
    LOBYTE(v41) = 7;
    v7 = EditorVar::EditorVar(
           v40,
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
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34);
    LOBYTE(v41) = 13;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v41) = 7;
    EditorVar::~EditorVar((EditorVar *)v40);
    v34 = 0;
    v33 = 1;
    std::string::string(&v26, &unk_10310188);
    v39 = &v19;
    LOBYTE(v41) = 14;
    std::string::string(&v19, &unk_1031019C);
    v18 = (char *)this + 1284;
    v38 = &v11;
    LOBYTE(v41) = 15;
    std::string::string(&v11, "IgnoreObject");
    LOBYTE(v41) = 7;
    v8 = EditorVar::EditorVar(
           v40,
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
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34);
    LOBYTE(v41) = 16;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v41) = 7;
    EditorVar::~EditorVar((EditorVar *)v40);
    v34 = 0;
    v33 = 1;
    std::string::string(&v26, &unk_103101B4);
    v39 = &v19;
    LOBYTE(v41) = 17;
    std::string::string(&v19, &unk_103101DC);
    v18 = (char *)this + 1340;
    v38 = &v11;
    LOBYTE(v41) = 18;
    std::string::string(&v11, "FXBind");
    LOBYTE(v41) = 7;
    v9 = EditorVar::EditorVar(
           v40,
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
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34);
    LOBYTE(v41) = 19;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v41) = 7;
    EditorVar::~EditorVar((EditorVar *)v40);
  }
  return this;
}
