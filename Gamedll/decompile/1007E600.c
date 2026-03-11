/*
 * func-name: ??0Effect_Base@@QAE@PAVWorld@@@Z_0
 * func-address: 0x1007e600
 * callers: 0x1001aa87
 * callees: none
 */

Effect_Base *__thiscall Effect_Base::Effect_Base(Effect_Base *this, struct World *a2)
{
  float v3; // ecx
  float v4; // edx
  float v5; // ecx
  float v6; // edx
  float v7; // ecx
  float v8; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // eax
  World *v12; // ecx
  Editor *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // [esp+164h] [ebp-100h] BYREF
  int v21; // [esp+168h] [ebp-FCh]
  int v22; // [esp+16Ch] [ebp-F8h]
  int v23; // [esp+170h] [ebp-F4h]
  int v24; // [esp+174h] [ebp-F0h]
  int v25; // [esp+178h] [ebp-ECh]
  int v26; // [esp+17Ch] [ebp-E8h]
  char *v27; // [esp+180h] [ebp-E4h]
  int v28; // [esp+184h] [ebp-E0h] BYREF
  int v29; // [esp+188h] [ebp-DCh]
  int v30; // [esp+18Ch] [ebp-D8h]
  int v31; // [esp+190h] [ebp-D4h]
  int v32; // [esp+194h] [ebp-D0h]
  int v33; // [esp+198h] [ebp-CCh]
  int v34; // [esp+19Ch] [ebp-C8h]
  int v35; // [esp+1A0h] [ebp-C4h] BYREF
  int v36; // [esp+1A4h] [ebp-C0h]
  int v37; // [esp+1A8h] [ebp-BCh]
  int v38; // [esp+1ACh] [ebp-B8h]
  int v39; // [esp+1B0h] [ebp-B4h]
  int v40; // [esp+1B4h] [ebp-B0h]
  int v41; // [esp+1B8h] [ebp-ACh]
  int v42; // [esp+1BCh] [ebp-A8h]
  int v43; // [esp+1C0h] [ebp-A4h]
  Effect_Base *v44; // [esp+1D8h] [ebp-8Ch]
  int *v45; // [esp+1DCh] [ebp-88h]
  int *v46; // [esp+1E0h] [ebp-84h]
  int *v47; // [esp+1E4h] [ebp-80h]
  float v48; // [esp+1E8h] [ebp-7Ch]
  float v49; // [esp+1ECh] [ebp-78h]
  float v50; // [esp+1F0h] [ebp-74h]
  float v51; // [esp+1F4h] [ebp-70h]
  _BYTE v52[96]; // [esp+1F8h] [ebp-6Ch] BYREF
  int v53; // [esp+260h] [ebp-4h]

  v44 = this;
  Actor::Actor(this, a2);
  *(_DWORD *)this = &Effect_Base::`vftable';
  *((float *)this + 267) = 0.0;
  *((float *)this + 268) = 0.0;
  *((float *)this + 269) = 0.0;
  *((float *)this + 270) = 0.0;
  *((float *)this + 271) = 0.0;
  v53 = 0;
  *((float *)this + 272) = 0.0;
  *((float *)this + 274) = 0.0;
  *((float *)this + 275) = 0.0;
  *((float *)this + 276) = 0.0;
  *((float *)this + 277) = 0.0;
  *((_BYTE *)this + 724) = 1;
  *((float *)this + 264) = 1.0;
  *((_DWORD *)this + 263) = 0;
  *((float *)this + 265) = 1.0;
  *((_BYTE *)this + 1064) = 1;
  *((_DWORD *)this + 273) = 2;
  v48 = 0.0;
  *((_BYTE *)this + 1132) = 0;
  v49 = 0.0;
  *((_BYTE *)this + 1133) = 1;
  v3 = v48;
  v50 = 0.0;
  v4 = v49;
  v48 = 0.0;
  v49 = 0.0;
  *((float *)this + 267) = v3;
  v5 = v48;
  v48 = 1.0;
  *((float *)this + 268) = v4;
  v6 = v49;
  v49 = 1.0;
  *((float *)this + 270) = v5;
  v7 = v48;
  *((float *)this + 269) = 0.0;
  v8 = v50;
  v50 = 1.0;
  v51 = 1.0;
  *((float *)this + 274) = v7;
  v9 = v51;
  *((float *)this + 278) = 1.0;
  *((float *)this + 271) = v6;
  v10 = v49;
  *((float *)this + 279) = 0.0;
  *((float *)this + 272) = v8;
  *((float *)this + 280) = 0.0;
  v11 = v50;
  *((float *)this + 281) = 0.0;
  *((float *)this + 275) = v10;
  *((float *)this + 276) = v11;
  *((float *)this + 282) = -1.0;
  *((float *)this + 277) = v9;
  v12 = (World *)*((_DWORD *)this + 178);
  if ( v12 && World::IsLoading(v12) || (v13 = (Editor *)Editor::Instance(), Editor::GetEditorMode(v13)) )
  {
    v43 = 0;
    v42 = 1;
    v45 = &v35;
    std::string::string(&v35, &unk_1030B060);
    v46 = &v28;
    LOBYTE(v53) = 1;
    std::string::string(&v28, &unk_1030B06C);
    v27 = (char *)this + 1128;
    v47 = &v20;
    LOBYTE(v53) = 2;
    std::string::string(&v20, "WholeTime");
    LOBYTE(v53) = 0;
    v14 = EditorVar::EditorVar(
            v52,
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
    LOBYTE(v53) = 3;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v53) = 0;
    EditorVar::~EditorVar((EditorVar *)v52);
    v43 = 0;
    v42 = 1;
    v47 = &v35;
    std::string::string(&v35, &unk_1030B080);
    v46 = &v28;
    LOBYTE(v53) = 4;
    std::string::string(&v28, &unk_1030B08C);
    v27 = (char *)this + 1116;
    v45 = &v20;
    LOBYTE(v53) = 5;
    std::string::string(&v20, "FadeinTime");
    LOBYTE(v53) = 0;
    v15 = EditorVar::EditorVar(
            v52,
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
    LOBYTE(v53) = 6;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v53) = 0;
    EditorVar::~EditorVar((EditorVar *)v52);
    v43 = 0;
    v42 = 1;
    v47 = &v35;
    std::string::string(&v35, &unk_1030B0A0);
    v46 = &v28;
    LOBYTE(v53) = 7;
    std::string::string(&v28, &unk_1030B0AC);
    v27 = (char *)this + 1120;
    v45 = &v20;
    LOBYTE(v53) = 8;
    std::string::string(&v20, "FadeoutTime");
    LOBYTE(v53) = 0;
    v16 = EditorVar::EditorVar(
            v52,
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
    LOBYTE(v53) = 9;
    std::vector<EditorVar>::push_back((char *)this + 424, v16);
    LOBYTE(v53) = 0;
    EditorVar::~EditorVar((EditorVar *)v52);
    v43 = 0;
    v42 = 1;
    v47 = &v35;
    std::string::string(&v35, &unk_1030B0C0);
    v46 = &v28;
    LOBYTE(v53) = 10;
    std::string::string(&v28, &unk_1030B0CC);
    v27 = (char *)this + 1092;
    v45 = &v20;
    LOBYTE(v53) = 11;
    std::string::string(&v20, "BlendMode");
    LOBYTE(v53) = 0;
    v17 = EditorVar::EditorVar(
            v52,
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
    LOBYTE(v53) = 12;
    std::vector<EditorVar>::push_back((char *)this + 424, v17);
    LOBYTE(v53) = 0;
    EditorVar::~EditorVar((EditorVar *)v52);
    v43 = 0;
    v42 = 1;
    v47 = &v35;
    std::string::string(&v35, &unk_1030B0E0);
    v46 = &v28;
    LOBYTE(v53) = 13;
    std::string::string(&v28, &unk_1030B0E8);
    v27 = (char *)this + 1096;
    v45 = &v20;
    LOBYTE(v53) = 14;
    std::string::string(&v20, "Color");
    LOBYTE(v53) = 0;
    v18 = EditorVar::EditorVar(
            v52,
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
    LOBYTE(v53) = 15;
    std::vector<EditorVar>::push_back((char *)this + 424, v18);
    LOBYTE(v53) = 0;
    EditorVar::~EditorVar((EditorVar *)v52);
  }
  return this;
}
