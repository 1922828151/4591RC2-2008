/*
 * func-name: sub_100DE5A0
 * func-address: 0x100de5a0
 * callers: 0x1000ae43
 * callees: none
 */

int __thiscall sub_100DE5A0(int this, struct World *a2)
{
  Editor *v3; // eax
  World *v4; // ecx
  Editor *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp+B0h] [ebp-ECh] BYREF
  int v11; // [esp+B4h] [ebp-E8h]
  int v12; // [esp+B8h] [ebp-E4h]
  int v13; // [esp+BCh] [ebp-E0h]
  int v14; // [esp+C0h] [ebp-DCh]
  int v15; // [esp+C4h] [ebp-D8h]
  int v16; // [esp+C8h] [ebp-D4h]
  int v17; // [esp+CCh] [ebp-D0h]
  int v18; // [esp+D0h] [ebp-CCh] BYREF
  int v19; // [esp+D4h] [ebp-C8h]
  int v20; // [esp+D8h] [ebp-C4h]
  int v21; // [esp+DCh] [ebp-C0h]
  int v22; // [esp+E0h] [ebp-BCh]
  int v23; // [esp+E4h] [ebp-B8h]
  int v24; // [esp+E8h] [ebp-B4h] BYREF
  int v25; // [esp+ECh] [ebp-B0h] BYREF
  int v26; // [esp+F0h] [ebp-ACh]
  int v27; // [esp+F4h] [ebp-A8h]
  int v28; // [esp+F8h] [ebp-A4h]
  int v29; // [esp+FCh] [ebp-A0h]
  int v30; // [esp+100h] [ebp-9Ch]
  int v31; // [esp+104h] [ebp-98h]
  int v32; // [esp+108h] [ebp-94h]
  int v33; // [esp+10Ch] [ebp-90h]
  int v34; // [esp+110h] [ebp-8Ch]
  int v35; // [esp+114h] [ebp-88h]
  int v36; // [esp+124h] [ebp-78h]
  int *v37; // [esp+128h] [ebp-74h]
  int *v38; // [esp+12Ch] [ebp-70h]
  _BYTE v39[96]; // [esp+130h] [ebp-6Ch] BYREF
  int v40; // [esp+198h] [ebp-4h]

  v36 = this;
  Actor::Actor((Actor *)this, a2);
  v40 = 0;
  *(_DWORD *)this = &GameMusicSource::`vftable';
  std::string::string((void *)(this + 1056));
  *(float *)(this + 1084) = 100.0;
  v33 = (int)&unk_10310348;
  *(float *)(this + 1088) = 1.0;
  LOBYTE(v40) = 1;
  *(_BYTE *)(this + 724) = 1;
  *(_BYTE *)(this + 1052) = 0;
  std::string::operator=(this + 1056, v33);
  v3 = (Editor *)Editor::Instance(v34, v35);
  if ( Editor::GetEditorMode(v3) )
  {
    v33 = 1;
    v32 = 0;
    v31 = 0;
    std::string::string(&v24, "ArrowTiny.reb");
    *(_DWORD *)(this + 716) = Precacher::CacheModel();
  }
  else
  {
    *(_DWORD *)(this + 716) = 0;
  }
  v4 = *(World **)(this + 712);
  if ( v4 && World::IsLoading(v4) || (v5 = (Editor *)Editor::Instance(v34, v35), Editor::GetEditorMode(v5)) )
  {
    v33 = 0;
    v32 = 1;
    std::string::string(&v25, &unk_10310349);
    v37 = &v18;
    LOBYTE(v40) = 2;
    std::string::string(&v18, "General");
    v17 = this + 1084;
    v38 = &v10;
    LOBYTE(v40) = 3;
    std::string::string(&v10, "Range");
    LOBYTE(v40) = 1;
    v6 = EditorVar::EditorVar(
           v39,
           v10,
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
           v33);
    LOBYTE(v40) = 4;
    std::vector<EditorVar>::push_back(this + 424, v6);
    LOBYTE(v40) = 1;
    EditorVar::~EditorVar((EditorVar *)v39);
    v33 = 0;
    v32 = 1;
    std::string::string(&v25, &unk_1031034A);
    v38 = &v18;
    LOBYTE(v40) = 5;
    std::string::string(&v18, "General");
    v17 = this + 1088;
    v37 = &v10;
    LOBYTE(v40) = 6;
    std::string::string(&v10, "Volume");
    LOBYTE(v40) = 1;
    v7 = EditorVar::EditorVar(
           v39,
           v10,
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
           v33);
    LOBYTE(v40) = 7;
    std::vector<EditorVar>::push_back(this + 424, v7);
    LOBYTE(v40) = 1;
    EditorVar::~EditorVar((EditorVar *)v39);
    v33 = 0;
    v32 = 1;
    std::string::string(&v25, &unk_1031034B);
    v38 = &v18;
    LOBYTE(v40) = 8;
    std::string::string(&v18, "General");
    v17 = this + 1056;
    v37 = &v10;
    LOBYTE(v40) = 9;
    std::string::string(&v10, "Filename");
    LOBYTE(v40) = 1;
    v8 = EditorVar::EditorVar(
           v39,
           v10,
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
           v33);
    LOBYTE(v40) = 10;
    std::vector<EditorVar>::push_back(this + 424, v8);
    LOBYTE(v40) = 1;
    EditorVar::~EditorVar((EditorVar *)v39);
  }
  return this;
}
