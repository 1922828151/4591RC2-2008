/*
 * func-name: ??0Effect_LightDizzy@@QAE@PAVWorld@@@Z_0
 * func-address: 0x10089b60
 * callers: 0x10009c2d
 * callees: none
 */

Effect_LightDizzy *__thiscall Effect_LightDizzy::Effect_LightDizzy(Effect_LightDizzy *this, struct World *a2)
{
  float v3; // ecx
  float v4; // ecx
  World *v5; // ecx
  Editor *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v18; // [esp+2F4h] [ebp-100h] BYREF
  int v19; // [esp+2F8h] [ebp-FCh]
  int v20; // [esp+2FCh] [ebp-F8h]
  int v21; // [esp+300h] [ebp-F4h]
  int v22; // [esp+304h] [ebp-F0h]
  int v23; // [esp+308h] [ebp-ECh]
  int v24; // [esp+30Ch] [ebp-E8h]
  char *v25; // [esp+310h] [ebp-E4h]
  int v26; // [esp+314h] [ebp-E0h] BYREF
  int v27; // [esp+318h] [ebp-DCh]
  int v28; // [esp+31Ch] [ebp-D8h]
  int v29; // [esp+320h] [ebp-D4h]
  int v30; // [esp+324h] [ebp-D0h]
  int v31; // [esp+328h] [ebp-CCh]
  void *v32; // [esp+32Ch] [ebp-C8h]
  int v33; // [esp+330h] [ebp-C4h] BYREF
  int v34; // [esp+334h] [ebp-C0h]
  int v35; // [esp+338h] [ebp-BCh]
  int v36; // [esp+33Ch] [ebp-B8h]
  int v37; // [esp+340h] [ebp-B4h]
  int v38; // [esp+344h] [ebp-B0h]
  int v39; // [esp+348h] [ebp-ACh]
  int v40; // [esp+34Ch] [ebp-A8h]
  void *v41; // [esp+350h] [ebp-A4h]
  Effect_LightDizzy *v42; // [esp+368h] [ebp-8Ch]
  int *v43; // [esp+36Ch] [ebp-88h]
  int *v44; // [esp+370h] [ebp-84h]
  int *v45; // [esp+374h] [ebp-80h]
  float v46; // [esp+378h] [ebp-7Ch]
  float v47; // [esp+37Ch] [ebp-78h]
  float v48; // [esp+380h] [ebp-74h]
  float v49; // [esp+384h] [ebp-70h]
  _BYTE v50[96]; // [esp+388h] [ebp-6Ch] BYREF
  int v51; // [esp+3F0h] [ebp-4h]

  v42 = this;
  Actor::Actor(this, a2);
  v51 = 0;
  *(_DWORD *)this = &Effect_LightDizzy::`vftable';
  std::string::string((char *)this + 1052);
  std::string::string((char *)this + 1080);
  *((float *)this + 283) = 0.0;
  *((float *)this + 284) = 0.0;
  *((float *)this + 285) = 0.0;
  v41 = &unk_1030C3F2;
  *((float *)this + 286) = 0.0;
  *((_DWORD *)this + 179) = 0;
  *((float *)this + 282) = 2.0;
  LOBYTE(v51) = 2;
  *((float *)this + 278) = 1.0;
  *((float *)this + 277) = 1.0;
  *((float *)this + 279) = 200.0;
  *((float *)this + 280) = 10.0;
  std::string::operator=((char *)this + 1052, v41);
  std::string::operator=((char *)this + 1080, &unk_1030C3F3);
  *((float *)this + 290) = 0.0;
  *((_DWORD *)this + 281) = 0;
  *((float *)this + 291) = 0.0;
  *((_DWORD *)this + 287) = 2;
  *((_DWORD *)this + 288) = 2;
  v46 = 1.0;
  *((_BYTE *)this + 724) = 1;
  v47 = 1.0;
  v3 = v46;
  v48 = 1.0;
  v49 = 1.0;
  *((float *)this + 292) = 1.0;
  *((float *)this + 283) = v3;
  *((float *)this + 289) = 1.0;
  v4 = v49;
  *((float *)this + 284) = 1.0;
  *((float *)this + 285) = 1.0;
  *((float *)this + 286) = v4;
  v5 = (World *)*((_DWORD *)this + 178);
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(), Editor::GetEditorMode(v6)) )
  {
    v41 = 0;
    v40 = 1;
    v43 = &v33;
    std::string::string(&v33, &unk_1030C3F4);
    v44 = &v26;
    LOBYTE(v51) = 3;
    std::string::string(&v26, &unk_1030C400);
    v25 = (char *)this + 1128;
    v45 = &v18;
    LOBYTE(v51) = 4;
    std::string::string(&v18, "TexSize");
    LOBYTE(v51) = 2;
    v7 = EditorVar::EditorVar(
           v50,
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
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41);
    LOBYTE(v51) = 5;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v51) = 2;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030C414);
    v44 = &v26;
    LOBYTE(v51) = 6;
    std::string::string(&v26, &unk_1030C424);
    v25 = (char *)this + 1120;
    v43 = &v18;
    LOBYTE(v51) = 7;
    std::string::string(&v18, "AttenBias");
    LOBYTE(v51) = 2;
    v8 = EditorVar::EditorVar(
           v50,
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
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41);
    LOBYTE(v51) = 8;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v51) = 2;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030C43C);
    v44 = &v26;
    LOBYTE(v51) = 9;
    std::string::string(&v26, &unk_1030C458);
    v25 = (char *)this + 1112;
    v43 = &v18;
    LOBYTE(v51) = 10;
    std::string::string(&v18, "FadeoutTime");
    LOBYTE(v51) = 2;
    v9 = EditorVar::EditorVar(
           v50,
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
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41);
    LOBYTE(v51) = 11;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v51) = 2;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030C470);
    v44 = &v26;
    LOBYTE(v51) = 12;
    std::string::string(&v26, &unk_1030C48C);
    v25 = (char *)this + 1108;
    v43 = &v18;
    LOBYTE(v51) = 13;
    std::string::string(&v18, "FadeinTime");
    LOBYTE(v51) = 2;
    v10 = EditorVar::EditorVar(
            v50,
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
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
    LOBYTE(v51) = 14;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v51) = 2;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030C4A4);
    v44 = &v26;
    LOBYTE(v51) = 15;
    std::string::string(&v26, &unk_1030C4C0);
    v25 = (char *)this + 1116;
    v43 = &v18;
    LOBYTE(v51) = 16;
    std::string::string(&v18, "AttenDist");
    LOBYTE(v51) = 2;
    v11 = EditorVar::EditorVar(
            v50,
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
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
    LOBYTE(v51) = 17;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v51) = 2;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030C4D8);
    v44 = &v26;
    LOBYTE(v51) = 18;
    std::string::string(&v26, &unk_1030C4E4);
    v25 = (char *)this + 1052;
    v43 = &v18;
    LOBYTE(v51) = 19;
    std::string::string(&v18, "Texturename");
    LOBYTE(v51) = 2;
    v12 = EditorVar::EditorVar(
            v50,
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
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
    LOBYTE(v51) = 20;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v51) = 2;
    EditorVar::~EditorVar((EditorVar *)v50);
    v13 = (_DWORD *)std::vector<EditorVar>::back((char *)this + 424);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    v32 = &unk_1030C4FC;
    *v13 = 8;
    std::string::string(&v33, v32);
    v44 = &v26;
    LOBYTE(v51) = 21;
    std::string::string(&v26, &unk_1030C504);
    v25 = (char *)this + 1132;
    v43 = &v18;
    LOBYTE(v51) = 22;
    std::string::string(&v18, "BlendColor");
    LOBYTE(v51) = 2;
    v14 = EditorVar::EditorVar(
            v50,
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
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
    LOBYTE(v51) = 23;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v51) = 2;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030C51C);
    v44 = &v26;
    LOBYTE(v51) = 24;
    std::string::string(&v26, &unk_1030C528);
    v25 = (char *)this + 1148;
    v43 = &v18;
    LOBYTE(v51) = 25;
    std::string::string(&v18, "BlendModeSrc");
    LOBYTE(v51) = 2;
    v15 = EditorVar::EditorVar(
            v50,
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
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
    LOBYTE(v51) = 26;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v51) = 2;
    EditorVar::~EditorVar((EditorVar *)v50);
    v41 = 0;
    v40 = 1;
    v45 = &v33;
    std::string::string(&v33, &unk_1030C544);
    v44 = &v26;
    LOBYTE(v51) = 27;
    std::string::string(&v26, &unk_1030C550);
    v25 = (char *)this + 1152;
    v43 = &v18;
    LOBYTE(v51) = 28;
    std::string::string(&v18, "BlendModeDest");
    LOBYTE(v51) = 2;
    v16 = EditorVar::EditorVar(
            v50,
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
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41);
    LOBYTE(v51) = 29;
    std::vector<EditorVar>::push_back((char *)this + 424, v16);
    LOBYTE(v51) = 2;
    EditorVar::~EditorVar((EditorVar *)v50);
  }
  return this;
}
