/*
 * func-name: ??0Effect_TraceLineSystem@@QAE@PAVWorld@@@Z_0
 * func-address: 0x1009a0f0
 * callers: 0x10003634
 * callees: 0x10016e28, 0x102c0ed0, 0x102c9d98
 */

Effect_TraceLineSystem *__thiscall Effect_TraceLineSystem::Effect_TraceLineSystem(
        Effect_TraceLineSystem *this,
        struct World *a2)
{
  Editor *v3; // eax
  Texture *v4; // eax
  Texture *v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  float v9; // ecx
  double v10; // st7
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  double v14; // st7
  int v15; // ecx
  int v16; // ecx
  FXSystem *v17; // eax
  World *v18; // ecx
  Editor *v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v55; // [esp+CF0h] [ebp-100h] BYREF
  int v56; // [esp+CF4h] [ebp-FCh]
  int v57; // [esp+CF8h] [ebp-F8h]
  int v58; // [esp+CFCh] [ebp-F4h]
  int v59; // [esp+D00h] [ebp-F0h]
  int v60; // [esp+D04h] [ebp-ECh]
  int v61; // [esp+D08h] [ebp-E8h]
  int v62; // [esp+D0Ch] [ebp-E4h]
  int v63; // [esp+D10h] [ebp-E0h] BYREF
  int v64; // [esp+D14h] [ebp-DCh]
  char *v65; // [esp+D18h] [ebp-D8h] BYREF
  int v66; // [esp+D1Ch] [ebp-D4h]
  int v67; // [esp+D20h] [ebp-D0h]
  int v68; // [esp+D24h] [ebp-CCh]
  int v69; // [esp+D28h] [ebp-C8h] BYREF
  int v70; // [esp+D2Ch] [ebp-C4h] BYREF
  int v71; // [esp+D30h] [ebp-C0h]
  float v72; // [esp+D34h] [ebp-BCh]
  int v73; // [esp+D38h] [ebp-B8h]
  int v74; // [esp+D3Ch] [ebp-B4h]
  int v75; // [esp+D40h] [ebp-B0h]
  int v76; // [esp+D44h] [ebp-ACh]
  int v77; // [esp+D48h] [ebp-A8h]
  unsigned int v78; // [esp+D4Ch] [ebp-A4h]
  int *v79; // [esp+D64h] [ebp-8Ch]
  int *v80; // [esp+D68h] [ebp-88h]
  Effect_TraceLineSystem *v81; // [esp+D6Ch] [ebp-84h]
  int *v82; // [esp+D70h] [ebp-80h]
  float v83; // [esp+D74h] [ebp-7Ch] BYREF
  float v84; // [esp+D78h] [ebp-78h]
  float v85; // [esp+D7Ch] [ebp-74h]
  float v86; // [esp+D80h] [ebp-70h]
  _BYTE v87[96]; // [esp+D84h] [ebp-6Ch] BYREF
  int v88; // [esp+DECh] [ebp-4h]

  v81 = this;
  Actor::Actor(this, a2);
  v88 = 0;
  *(_DWORD *)this = &Effect_TraceLineSystem::`vftable';
  std::string::string((char *)this + 1052);
  *((float *)this + 272) = 0.0;
  *((float *)this + 273) = 0.0;
  *((float *)this + 274) = 0.0;
  *((float *)this + 275) = 0.0;
  LOBYTE(v88) = 1;
  *((float *)this + 290) = 0.0;
  *((float *)this + 291) = 0.0;
  *((float *)this + 292) = 0.0;
  *((float *)this + 293) = 0.0;
  *((float *)this + 294) = 0.0;
  *((float *)this + 295) = 0.0;
  *((float *)this + 303) = 0.0;
  *((float *)this + 304) = 0.0;
  *((float *)this + 305) = 0.0;
  v3 = (Editor *)Editor::Instance();
  if ( Editor::GetEditorMode(v3) )
  {
    v78 = 1;
    *(float *)&v77 = 0.0;
    *(float *)&v76 = 0.0;
    v80 = &v69;
    std::string::string(&v69, "ArrowTiny.reb");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
  }
  else
  {
    *((_DWORD *)this + 179) = 0;
  }
  v78 = 156;
  *((_BYTE *)this + 724) = 1;
  v4 = (Texture *)operator new(v78);
  v80 = (int *)v4;
  LOBYTE(v88) = 2;
  if ( v4 )
    v5 = Texture::Texture(v4);
  else
    v5 = 0;
  v78 = 0;
  *(float *)&v77 = 0.0;
  LOBYTE(v88) = 1;
  *(float *)&v76 = 1.0;
  *((_DWORD *)this + 297) = v5;
  *(float *)&v75 = 1.0;
  *(float *)&v74 = 0.0;
  *(float *)&v73 = 0.0;
  v72 = 0.0;
  v80 = (int *)&v65;
  std::string::string(&v65, "Default.dds");
  Texture::Load(*((_DWORD *)this + 297), v65, v66, v67, v68, v69, v70, v71, LODWORD(v72), v73, v74, v75, v76, v77, v78);
  *((float *)this + 271) = -1.0;
  *((_BYTE *)this + 1104) = 0;
  *((_DWORD *)this + 277) = 2;
  v83 = 1.0;
  *((_DWORD *)this + 278) = 10;
  v86 = 1.0;
  *((float *)this + 272) = v83;
  *((float *)this + 282) = 0.5;
  v6 = v86;
  *((float *)this + 273) = 1.0;
  *((float *)this + 283) = 10.0;
  *((float *)this + 274) = 1.0;
  *((float *)this + 275) = v6;
  *((float *)this + 284) = 5.0;
  *((_DWORD *)this + 279) = 100;
  *((_DWORD *)this + 280) = 0;
  *((float *)this + 285) = 1000.0;
  *((_BYTE *)this + 1124) = 0;
  *((_DWORD *)this + 296) = -1;
  *((float *)this + 286) = 500.0;
  *((_BYTE *)this + 1192) = 0;
  *((_DWORD *)this + 299) = 0;
  *((float *)this + 287) = 200.0;
  *((_BYTE *)this + 1204) = 0;
  *((_BYTE *)this + 1205) = 0;
  *((float *)this + 288) = 1.0;
  *((float *)this + 289) = 0.0;
  v83 = 0.0;
  v84 = 0.0;
  *((float *)this + 290) = 0.0;
  v7 = v83;
  v85 = 0.0;
  *((float *)this + 291) = 0.0;
  v8 = v84;
  *((float *)this + 300) = 2.0;
  *((float *)this + 292) = 0.0;
  v9 = v85;
  *((float *)this + 293) = v7;
  *((float *)this + 294) = v8;
  *((float *)this + 295) = v9;
  *((float *)this + 302) = 1.0;
  v78 = 352;
  *((_DWORD *)this + 307) = 1;
  v83 = 0.0;
  v84 = 0.0;
  v85 = 0.0;
  *((float *)this + 303) = 0.0;
  *((float *)this + 306) = 0.0;
  *((float *)this + 304) = 0.0;
  *((float *)this + 305) = 0.0;
  v80 = (int *)operator new(v78);
  LOBYTE(v88) = 3;
  if ( v80 )
  {
    v10 = *((float *)this + 289);
    v11 = *((int *)this + 297);
    v12 = *((_DWORD *)this + 278);
    v78 = *((_DWORD *)this + 277);
    v77 = v11;
    v76 = 1;
    *(float *)&v75 = v10;
    v79 = (int *)v12;
    v74 = *((int *)this + 288);
    v73 = *((int *)this + 287);
    v72 = *((float *)this + 286);
    v71 = *((int *)this + 285);
    v70 = *((int *)this + 284);
    v69 = *((int *)this + 282);
    v68 = *((int *)this + 283);
    v67 = (int)this + 1160;
    v13 = sub_102C0ED0(&v83);
    v14 = (double)*((int *)this + 279);
    v66 = v13;
    v65 = (char *)this + 856;
    v64 = (int)v79;
    v63 = (int)v79;
    v62 = v15;
    v16 = *((_DWORD *)this + 296);
    *(float *)&v62 = v14;
    v17 = (FXSystem *)TraceLineSystem::TraceLineSystem(
                        (int)a2,
                        v16,
                        v62,
                        (int)v79,
                        (int)v79,
                        (int)this + 856,
                        v13,
                        v67,
                        v68,
                        v69,
                        v70,
                        v71,
                        SLODWORD(v72),
                        v73,
                        v74,
                        v75,
                        v76,
                        v77,
                        v78);
  }
  else
  {
    v17 = 0;
  }
  LOBYTE(v88) = 1;
  *((_DWORD *)this + 270) = v17;
  FXSystem::RegisterWithHash(v17);
  v18 = (World *)*((_DWORD *)this + 178);
  if ( v18 && World::IsLoading(v18) || (v19 = (Editor *)Editor::Instance(), Editor::GetEditorMode(v19)) )
  {
    v78 = 0;
    v77 = 1;
    v80 = &v70;
    std::string::string(&v70, &unk_1030E55F);
    v79 = &v63;
    LOBYTE(v88) = 4;
    std::string::string(&v63, &unk_1030E577);
    v62 = (int)this + 1084;
    v82 = &v55;
    LOBYTE(v88) = 5;
    std::string::string(&v55, &unk_1030E594);
    LOBYTE(v88) = 1;
    v20 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 6;
    std::vector<EditorVar>::push_back((char *)this + 424, v20);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E586);
    v80 = &v63;
    LOBYTE(v88) = 7;
    std::string::string(&v63, &unk_1030E587);
    v62 = (int)this + 1108;
    v79 = &v55;
    LOBYTE(v88) = 8;
    std::string::string(&v55, &unk_1030E5A0);
    LOBYTE(v88) = 1;
    v21 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 9;
    std::vector<EditorVar>::push_back((char *)this + 424, v21);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E59D);
    LOBYTE(v88) = 10;
    v80 = &v63;
    std::string::string(&v63, &unk_1030E59E);
    v62 = (int)this + 1112;
    v79 = &v55;
    LOBYTE(v88) = 11;
    std::string::string(&v55, &unk_1030E5AC);
    LOBYTE(v88) = 1;
    v22 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 12;
    std::vector<EditorVar>::push_back((char *)this + 424, v22);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E59F);
    v80 = &v63;
    LOBYTE(v88) = 13;
    std::string::string(&v63, &unk_1030E5A9);
    v62 = (int)this + 1116;
    v79 = &v55;
    LOBYTE(v88) = 14;
    std::string::string(&v55, &unk_1030E5B8);
    LOBYTE(v88) = 1;
    v23 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 15;
    std::vector<EditorVar>::push_back((char *)this + 424, v23);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E5AA);
    v80 = &v63;
    LOBYTE(v88) = 16;
    std::string::string(&v63, &unk_1030E5AB);
    v62 = (int)this + 1120;
    v79 = &v55;
    LOBYTE(v88) = 17;
    std::string::string(&v55, &unk_1030E5C4);
    LOBYTE(v88) = 1;
    v24 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 18;
    std::vector<EditorVar>::push_back((char *)this + 424, v24);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E5B7);
    v80 = &v63;
    LOBYTE(v88) = 19;
    std::string::string(&v63, &unk_1030E5C1);
    v62 = (int)this + 1124;
    v79 = &v55;
    LOBYTE(v88) = 20;
    std::string::string(&v55, &unk_1030E5D0);
    LOBYTE(v88) = 1;
    v25 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 21;
    std::vector<EditorVar>::push_back((char *)this + 424, v25);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E5C2);
    v80 = &v63;
    LOBYTE(v88) = 22;
    std::string::string(&v63, &unk_1030E5C3);
    v62 = (int)this + 1128;
    v79 = &v55;
    LOBYTE(v88) = 23;
    std::string::string(&v55, &unk_1030E5E0);
    LOBYTE(v88) = 1;
    v26 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 24;
    std::vector<EditorVar>::push_back((char *)this + 424, v26);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E5CD);
    v80 = &v63;
    LOBYTE(v88) = 25;
    std::string::string(&v63, &unk_1030E5CE);
    v62 = (int)this + 1132;
    v79 = &v55;
    LOBYTE(v88) = 26;
    std::string::string(&v55, &unk_1030E5EC);
    LOBYTE(v88) = 1;
    v27 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 27;
    std::vector<EditorVar>::push_back((char *)this + 424, v27);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E5CF);
    v80 = &v63;
    LOBYTE(v88) = 28;
    std::string::string(&v63, &unk_1030E5DF);
    v62 = (int)this + 1136;
    v79 = &v55;
    LOBYTE(v88) = 29;
    std::string::string(&v55, &unk_1030E5F8);
    LOBYTE(v88) = 1;
    v28 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 30;
    std::vector<EditorVar>::push_back((char *)this + 424, v28);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E5EB);
    v80 = &v63;
    LOBYTE(v88) = 31;
    std::string::string(&v63, &unk_1030E5F5);
    LOBYTE(v88) = 32;
    v62 = (int)this + 1140;
    v79 = &v55;
    std::string::string(&v55, &unk_1030E608);
    LOBYTE(v88) = 1;
    v29 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 33;
    std::vector<EditorVar>::push_back((char *)this + 424, v29);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E5F6);
    v80 = &v63;
    LOBYTE(v88) = 34;
    std::string::string(&v63, &unk_1030E5F7);
    v62 = (int)this + 1144;
    v79 = &v55;
    LOBYTE(v88) = 35;
    std::string::string(&v55, &unk_1030E614);
    LOBYTE(v88) = 1;
    v30 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 36;
    std::vector<EditorVar>::push_back((char *)this + 424, v30);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E607);
    v80 = &v63;
    LOBYTE(v88) = 37;
    std::string::string(&v63, &unk_1030E611);
    v62 = (int)this + 1148;
    v79 = &v55;
    LOBYTE(v88) = 38;
    std::string::string(&v55, &unk_1030E624);
    LOBYTE(v88) = 1;
    v31 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 39;
    std::vector<EditorVar>::push_back((char *)this + 424, v31);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E612);
    v80 = &v63;
    LOBYTE(v88) = 40;
    std::string::string(&v63, &unk_1030E613);
    v62 = (int)this + 1152;
    v79 = &v55;
    LOBYTE(v88) = 41;
    std::string::string(&v55, &unk_1030E630);
    LOBYTE(v88) = 1;
    v32 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 42;
    std::vector<EditorVar>::push_back((char *)this + 424, v32);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E623);
    v80 = &v63;
    LOBYTE(v88) = 43;
    std::string::string(&v63, &unk_1030E62D);
    v62 = (int)this + 1156;
    v79 = &v55;
    LOBYTE(v88) = 44;
    std::string::string(&v55, &unk_1030E63C);
    LOBYTE(v88) = 1;
    v33 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 45;
    std::vector<EditorVar>::push_back((char *)this + 424, v33);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E62E);
    LOBYTE(v88) = 46;
    v80 = &v63;
    std::string::string(&v63, &unk_1030E62F);
    v62 = (int)this + 1160;
    v79 = &v55;
    LOBYTE(v88) = 47;
    std::string::string(&v55, &unk_1030E64C);
    LOBYTE(v88) = 1;
    v34 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 48;
    std::vector<EditorVar>::push_back((char *)this + 424, v34);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E639);
    v80 = &v63;
    LOBYTE(v88) = 49;
    std::string::string(&v63, &unk_1030E63A);
    v62 = (int)this + 1164;
    v79 = &v55;
    LOBYTE(v88) = 50;
    std::string::string(&v55, &unk_1030E654);
    LOBYTE(v88) = 1;
    v35 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 51;
    std::vector<EditorVar>::push_back((char *)this + 424, v35);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E63B);
    v80 = &v63;
    LOBYTE(v88) = 52;
    std::string::string(&v63, &unk_1030E64B);
    v62 = (int)this + 1168;
    v79 = &v55;
    LOBYTE(v88) = 53;
    std::string::string(&v55, &unk_1030E65C);
    LOBYTE(v88) = 1;
    v36 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 54;
    std::vector<EditorVar>::push_back((char *)this + 424, v36);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E664);
    v80 = &v63;
    LOBYTE(v88) = 55;
    std::string::string(&v63, &unk_1030E665);
    v62 = (int)this + 1172;
    v79 = &v55;
    LOBYTE(v88) = 56;
    std::string::string(&v55, &unk_1030E668);
    LOBYTE(v88) = 1;
    v37 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 57;
    std::vector<EditorVar>::push_back((char *)this + 424, v37);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E666);
    v80 = &v63;
    LOBYTE(v88) = 58;
    std::string::string(&v63, &unk_1030E667);
    v62 = (int)this + 1176;
    v79 = &v55;
    LOBYTE(v88) = 59;
    std::string::string(&v55, &unk_1030E678);
    LOBYTE(v88) = 1;
    v38 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 60;
    std::vector<EditorVar>::push_back((char *)this + 424, v38);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E688);
    v80 = &v63;
    LOBYTE(v88) = 61;
    std::string::string(&v63, &unk_1030E689);
    v62 = (int)this + 1180;
    v79 = &v55;
    LOBYTE(v88) = 62;
    std::string::string(&v55, &unk_1030E68C);
    LOBYTE(v88) = 1;
    v39 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 63;
    std::vector<EditorVar>::push_back((char *)this + 424, v39);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E68A);
    v80 = &v63;
    LOBYTE(v88) = 64;
    std::string::string(&v63, &unk_1030E68B);
    v62 = (int)this + 1088;
    v79 = &v55;
    LOBYTE(v88) = 65;
    std::string::string(&v55, &unk_1030E69C);
    LOBYTE(v88) = 1;
    v40 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 66;
    std::vector<EditorVar>::push_back((char *)this + 424, v40);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E6A3);
    v80 = &v63;
    LOBYTE(v88) = 67;
    std::string::string(&v63, &unk_1030E6A4);
    v62 = *((int *)this + 297);
    v79 = &v55;
    LOBYTE(v88) = 68;
    std::string::string(&v55, &unk_1030E6A8);
    LOBYTE(v88) = 1;
    v41 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 69;
    std::vector<EditorVar>::push_back((char *)this + 424, v41);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E6A5);
    v80 = &v63;
    LOBYTE(v88) = 70;
    std::string::string(&v63, &unk_1030E6A6);
    v62 = (int)this + 1192;
    v79 = &v55;
    LOBYTE(v88) = 71;
    std::string::string(&v55, &unk_1030E6B0);
    LOBYTE(v88) = 1;
    v42 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 72;
    std::vector<EditorVar>::push_back((char *)this + 424, v42);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E6A7);
    v80 = &v63;
    LOBYTE(v88) = 73;
    std::string::string(&v63, &unk_1030E6AD);
    v62 = (int)this + 1196;
    v79 = &v55;
    LOBYTE(v88) = 74;
    std::string::string(&v55, &unk_1030E6BC);
    LOBYTE(v88) = 1;
    v43 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 75;
    std::vector<EditorVar>::push_back((char *)this + 424, v43);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E6AE);
    v80 = &v63;
    LOBYTE(v88) = 76;
    std::string::string(&v63, &unk_1030E6AF);
    v62 = (int)this + 1200;
    v79 = &v55;
    LOBYTE(v88) = 77;
    std::string::string(&v55, &unk_1030E6C4);
    LOBYTE(v88) = 1;
    v44 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 78;
    std::vector<EditorVar>::push_back((char *)this + 424, v44);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E6B9);
    v80 = &v63;
    LOBYTE(v88) = 79;
    std::string::string(&v63, &unk_1030E6BA);
    v62 = (int)this + 1204;
    v79 = &v55;
    LOBYTE(v88) = 80;
    std::string::string(&v55, &unk_1030E6D0);
    LOBYTE(v88) = 1;
    v45 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 81;
    std::vector<EditorVar>::push_back((char *)this + 424, v45);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E6BB);
    v80 = &v63;
    LOBYTE(v88) = 82;
    std::string::string(&v63, &unk_1030E6C3);
    v62 = (int)this + 1205;
    v79 = &v55;
    LOBYTE(v88) = 83;
    std::string::string(&v55, &unk_1030E6D8);
    LOBYTE(v88) = 1;
    v46 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 84;
    std::vector<EditorVar>::push_back((char *)this + 424, v46);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E6CD);
    v80 = &v63;
    LOBYTE(v88) = 85;
    std::string::string(&v63, &unk_1030E6CE);
    v62 = (int)this + 1208;
    v79 = &v55;
    LOBYTE(v88) = 86;
    std::string::string(&v55, &unk_1030E6E0);
    LOBYTE(v88) = 1;
    v47 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 87;
    std::vector<EditorVar>::push_back((char *)this + 424, v47);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E6CF);
    v80 = &v63;
    LOBYTE(v88) = 88;
    std::string::string(&v63, &unk_1030E6D7);
    v62 = (int)this + 1212;
    LOBYTE(v88) = 89;
    v79 = &v55;
    std::string::string(&v55, &unk_1030E6E8);
    LOBYTE(v88) = 1;
    v48 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 90;
    std::vector<EditorVar>::push_back((char *)this + 424, v48);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E6DD);
    v80 = &v63;
    LOBYTE(v88) = 91;
    std::string::string(&v63, &unk_1030E6DE);
    v62 = (int)this + 1216;
    v79 = &v55;
    LOBYTE(v88) = 92;
    std::string::string(&v55, &unk_1030E6F4);
    LOBYTE(v88) = 1;
    v49 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 93;
    std::vector<EditorVar>::push_back((char *)this + 424, v49);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E6DF);
    v80 = &v63;
    LOBYTE(v88) = 94;
    std::string::string(&v63, &unk_1030E6E7);
    v62 = (int)this + 1220;
    v79 = &v55;
    LOBYTE(v88) = 95;
    std::string::string(&v55, &unk_1030E700);
    LOBYTE(v88) = 1;
    v50 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 96;
    std::vector<EditorVar>::push_back((char *)this + 424, v50);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E6F2);
    v80 = &v63;
    LOBYTE(v88) = 97;
    std::string::string(&v63, &unk_1030E6F3);
    v62 = (int)this + 1224;
    v79 = &v55;
    LOBYTE(v88) = 98;
    std::string::string(&v55, &unk_1030E70C);
    LOBYTE(v88) = 1;
    v51 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 99;
    std::vector<EditorVar>::push_back((char *)this + 424, v51);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, "1:CCW 2:CW 3:RAND");
    v80 = &v63;
    LOBYTE(v88) = 100;
    std::string::string(&v63, &unk_1030E6FE);
    v62 = (int)this + 1228;
    v79 = &v55;
    LOBYTE(v88) = 101;
    std::string::string(&v55, &unk_1030E72C);
    LOBYTE(v88) = 1;
    v52 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 102;
    std::vector<EditorVar>::push_back((char *)this + 424, v52);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
    v78 = 0;
    v77 = 1;
    v82 = &v70;
    std::string::string(&v70, &unk_1030E6FF);
    LOBYTE(v88) = 103;
    v80 = &v63;
    std::string::string(&v63, &unk_1030E70A);
    v62 = (int)this + 1104;
    v79 = &v55;
    LOBYTE(v88) = 104;
    std::string::string(&v55, &unk_1030E738);
    LOBYTE(v88) = 1;
    v53 = EditorVar::EditorVar(
            v87,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70,
            v71,
            LODWORD(v72),
            v73,
            v74,
            v75,
            v76,
            v77,
            v78);
    LOBYTE(v88) = 105;
    std::vector<EditorVar>::push_back((char *)this + 424, v53);
    LOBYTE(v88) = 1;
    EditorVar::~EditorVar((EditorVar *)v87);
  }
  return this;
}
