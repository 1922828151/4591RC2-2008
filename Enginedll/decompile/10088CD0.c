/*
 * func-name: ?Render@Editor@@QAEXPAVWorld@@@Z
 * func-address: 0x10088cd0
 * callers: none
 * callees: 0x10001370, 0x1000b570, 0x1000bc40, 0x10019470, 0x10064610, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x1007f3a0, 0x10080700, 0x10081f40, 0x100820f0, 0x10082b00, 0x10085cc0, 0x1008fdf0, 0x10091500, 0x100935b0, 0x10093cc0, 0x10094d10, 0x100971c0, 0x1009eed0, 0x100a01c0, 0x100db0e0, 0x100ee930, 0x10116f70, 0x101189f0, 0x101396e0, 0x10139890, 0x10140b00, 0x10140b10, 0x10143fd0, 0x101445d0, 0x101786e0, 0x1017a0b0, 0x1017eaef, 0x101a2500, 0x101a2516, 0x101a251c, 0x101a281a, 0x101a2820
 */

void __thiscall Editor::Render(Editor *this, struct World *a2)
{
  struct RenderDevice *v3; // eax
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // esi
  float *v9; // edi
  int (__thiscall *v10)(struct RenderDevice *, _DWORD, _DWORD); // edx
  int v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax
  struct RenderDevice *v15; // eax
  struct RenderDevice *v16; // eax
  struct RenderDevice *v17; // eax
  struct RenderDevice *v18; // eax
  struct RenderDevice *v19; // eax
  struct RenderDevice *v20; // eax
  struct RenderDevice *v21; // eax
  struct RenderDevice *v22; // eax
  struct RenderDevice *v23; // eax
  struct RenderDevice *v24; // eax
  struct RenderDevice *v25; // eax
  struct World *v26; // esi
  unsigned int v27; // edi
  int v28; // ecx
  struct RenderDevice *v29; // eax
  float *v30; // ecx
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  struct RenderDevice *v34; // eax
  struct RenderDevice *v35; // eax
  struct RenderDevice *v36; // eax
  struct RenderDevice *v37; // edi
  struct RenderDevice *v38; // eax
  struct RenderDevice *v39; // esi
  float *v40; // edi
  int (__thiscall *v41)(struct RenderDevice *, _DWORD, _DWORD); // edx
  int v42; // eax
  struct RenderDevice *v43; // eax
  struct RenderDevice *v44; // eax
  struct RenderDevice *v45; // eax
  struct RenderDevice *v46; // eax
  struct RenderDevice *v47; // eax
  struct RenderDevice *v48; // eax
  struct RenderDevice *v49; // eax
  struct RenderDevice *v50; // eax
  struct RenderDevice *v51; // eax
  struct RenderDevice *v52; // eax
  struct RenderDevice *v53; // eax
  struct RenderDevice *v54; // eax
  struct RenderDevice *v55; // eax
  struct RenderDevice *v56; // eax
  _DWORD *v57; // edi
  int v58; // ecx
  int v59; // eax
  struct RenderDevice *v60; // eax
  int v61; // eax
  int v62; // ecx
  int v63; // eax
  struct RenderDevice *v64; // eax
  struct RenderDevice *v65; // eax
  struct RenderDevice *v66; // eax
  struct RenderDevice *v67; // eax
  struct RenderDevice *v68; // eax
  int v69; // edi
  float *v70; // eax
  struct RenderDevice *v71; // eax
  struct RenderDevice *v72; // eax
  struct RenderDevice *v73; // eax
  struct RenderDevice *v74; // eax
  struct RenderDevice *v75; // eax
  struct RenderDevice *v76; // eax
  struct RenderDevice *v77; // eax
  struct RenderDevice *v78; // eax
  struct RenderDevice *v79; // eax
  struct RenderDevice *v80; // eax
  struct RenderDevice *v81; // eax
  struct RenderDevice *v82; // eax
  struct RenderDevice *v83; // eax
  struct FXManager *v84; // eax
  struct RenderDevice *v85; // eax
  struct RenderDevice *v86; // eax
  struct RenderDevice *v87; // eax
  struct RenderDevice *v88; // eax
  struct RenderDevice *v89; // eax
  int v90; // edi
  float *v91; // eax
  struct RenderDevice *v92; // eax
  struct RenderDevice *v93; // eax
  struct RenderDevice *v94; // eax
  struct RenderDevice *v95; // eax
  struct RenderDevice *v96; // eax
  struct RenderDevice *v97; // eax
  struct RenderDevice *v98; // eax
  struct RenderDevice *v99; // eax
  struct RenderDevice *v100; // eax
  struct RenderDevice *v101; // eax
  struct RenderDevice *v102; // eax
  struct RenderDevice *v103; // eax
  struct RenderDevice *v104; // eax
  LARGE_INTEGER *v105; // eax
  struct RenderDevice *v106; // eax
  struct RenderDevice *v107; // eax
  struct RenderDevice *v108; // eax
  struct RenderDevice *v109; // eax
  struct RenderDevice *v110; // eax
  struct RenderDevice *v111; // eax
  unsigned int i; // edi
  int v113; // ecx
  unsigned int j; // edi
  int v115; // ecx
  int v116; // ecx
  int v117; // eax
  int v118; // ecx
  int v119; // ecx
  struct RenderDevice *v120; // eax
  struct RenderDevice *v121; // eax
  struct RenderDevice *v122; // eax
  struct RenderDevice *v123; // eax
  float v124; // ecx
  int v125; // edx
  float v126; // eax
  int v127; // ecx
  float v128; // edx
  float v129; // ecx
  float v130; // edx
  float v131; // eax
  float v132; // eax
  float v133; // ecx
  float v134; // eax
  float v135; // ecx
  float v136; // edx
  float v137; // eax
  float v138; // ecx
  float v139; // edx
  struct ID3DXMesh *v140; // edx
  float v141; // eax
  int v142; // edx
  float v143; // eax
  int v144; // ecx
  float v145; // edx
  float v146; // ecx
  float v147; // eax
  float v148; // edx
  LONG left; // ecx
  float v150; // eax
  LONG top; // edx
  LONG bottom; // ecx
  LONG right; // eax
  struct RenderDevice *v154; // eax
  struct RenderDevice *v155; // eax
  struct RenderDevice *v156; // eax
  struct RenderDevice *v157; // eax
  void (__cdecl *v158)(); // edi
  unsigned int v159; // esi
  int v160; // ecx
  int v161; // eax
  struct RenderDevice *v162; // eax
  struct RenderDevice *v163; // eax
  struct RenderDevice *v164; // eax
  struct RenderDevice *v165; // eax
  struct RenderDevice *v166; // eax
  struct RenderDevice *v167; // eax
  struct RenderDevice *v168; // eax
  struct RenderDevice *v169; // eax
  int v170; // ecx
  int v171; // ecx
  int v172; // ecx
  void *v173; // ecx
  int v174; // eax
  int v175; // edx
  int v176; // edx
  int v177; // edx
  _DWORD *v178; // esi
  unsigned int v179; // edi
  double v180; // st7
  double v181; // st6
  double v182; // st5
  _DWORD *v183; // ecx
  _DWORD *v184; // ecx
  int v185; // edx
  struct RenderDevice *v186; // eax
  struct RenderDevice *v187; // eax
  struct RenderDevice *v188; // eax
  struct RenderDevice *v189; // eax
  struct RenderDevice *v190; // eax
  struct RenderDevice *v191; // eax
  struct RenderDevice *v192; // eax
  struct RenderDevice *v193; // eax
  int v194; // eax
  int v195; // ecx
  int v196; // ecx
  struct RenderDevice *v197; // eax
  int v198; // ecx
  float *v199; // eax
  float v200; // ecx
  float v201; // edx
  float *v202; // eax
  void (__thiscall *v203)(_DWORD *, float *, float *, int); // eax
  int v204; // eax
  float v205; // edi
  float v206; // esi
  struct Canvas *v207; // eax
  void *v208; // ecx
  struct Canvas *v209; // edi
  float v210; // esi
  int v211; // eax
  struct Canvas *v212; // eax
  LONG v213; // edi
  struct Canvas *v214; // esi
  void *v215; // eax
  struct Canvas *v216; // eax
  void *v217; // edi
  int v218; // eax
  int v219; // ecx
  float *v220; // eax
  int v221; // ecx
  int v222; // eax
  unsigned int v223; // edx
  float *v224; // eax
  float v225; // ecx
  int v226; // ecx
  void (__thiscall *v227)(_DWORD *, float *, float *, int); // edx
  struct RenderDevice *v228; // eax
  int v229; // esi
  int v230; // eax
  int v231; // edi
  int v232; // eax
  double v233; // st7
  double v234; // st7
  double v235; // st7
  double v236; // st7
  double v237; // st7
  double v238; // st7
  double v239; // st7
  float v240; // eax
  int v241; // eax
  NxPhysics *v242; // eax
  NxPhysics *v243; // eax
  NxPhysics *v244; // eax
  HWND v245; // esi
  bool v246; // zf
  int v247; // eax
  int v248; // ecx
  struct Actor *UnderMouse; // esi
  struct Canvas *v250; // eax
  struct Canvas *v251; // edi
  int v252; // ebx
  void (__cdecl *v253)(struct Canvas *, _DWORD, int, _DWORD, LONG, int); // eax
  struct Canvas *v254; // edi
  int v255; // ebx
  int v256; // eax
  void (__cdecl *v257)(struct Canvas *, _DWORD, int, _DWORD, LONG, int); // ecx
  struct Canvas *v258; // edi
  int v259; // ebx
  int v260; // eax
  void (__cdecl *v261)(struct Canvas *, _DWORD, int, _DWORD, LONG, int); // ecx
  int v262; // edi
  float *v263; // eax
  int (__thiscall *v264)(struct Actor *); // edx
  float *v265; // ebx
  void (__cdecl *v266)(float *, _DWORD, int, _DWORD, LONG, int); // eax
  float *v267; // esi
  CRETimer *v268; // eax
  float *v269; // [esp+ECh] [ebp-3C4h]
  int v270; // [esp+F4h] [ebp-3BCh]
  int v271; // [esp+F4h] [ebp-3BCh]
  int v272; // [esp+F8h] [ebp-3B8h]
  int v273; // [esp+FCh] [ebp-3B4h]
  int v274; // [esp+100h] [ebp-3B0h]
  struct tagPOINT Point; // [esp+108h] [ebp-3A8h] BYREF
  unsigned int v276; // [esp+110h] [ebp-3A0h]
  float x; // [esp+114h] [ebp-39Ch]
  float y; // [esp+118h] [ebp-398h]
  float v279; // [esp+11Ch] [ebp-394h]
  double v280; // [esp+120h] [ebp-390h]
  float v281; // [esp+12Ch] [ebp-384h]
  float v282; // [esp+130h] [ebp-380h]
  float v283; // [esp+134h] [ebp-37Ch]
  float v284; // [esp+138h] [ebp-378h] BYREF
  float v285; // [esp+13Ch] [ebp-374h]
  float v286; // [esp+140h] [ebp-370h]
  int k; // [esp+144h] [ebp-36Ch]
  double v288; // [esp+148h] [ebp-368h]
  float v289; // [esp+154h] [ebp-35Ch] BYREF
  float v290; // [esp+158h] [ebp-358h]
  float v291; // [esp+15Ch] [ebp-354h]
  int v292; // [esp+160h] [ebp-350h]
  float v293; // [esp+164h] [ebp-34Ch]
  float v294; // [esp+168h] [ebp-348h]
  float v295; // [esp+16Ch] [ebp-344h]
  float v296; // [esp+170h] [ebp-340h]
  double v297; // [esp+174h] [ebp-33Ch]
  struct tagRECT Rect; // [esp+17Ch] [ebp-334h] BYREF
  float v299; // [esp+18Ch] [ebp-324h]
  float v300; // [esp+190h] [ebp-320h]
  float v301; // [esp+194h] [ebp-31Ch]
  float v302; // [esp+198h] [ebp-318h] BYREF
  float v303; // [esp+19Ch] [ebp-314h]
  float v304; // [esp+1A0h] [ebp-310h]
  float v305; // [esp+1A4h] [ebp-30Ch]
  float v306; // [esp+1A8h] [ebp-308h]
  float v307; // [esp+1ACh] [ebp-304h]
  _DWORD *v308; // [esp+1B0h] [ebp-300h]
  float v309; // [esp+1B4h] [ebp-2FCh] BYREF
  void *v310; // [esp+1B8h] [ebp-2F8h]
  int v311; // [esp+1BCh] [ebp-2F4h]
  int v312; // [esp+1C0h] [ebp-2F0h]
  int v313; // [esp+1C4h] [ebp-2ECh] BYREF
  void *v314; // [esp+1C8h] [ebp-2E8h]
  float v315; // [esp+1CCh] [ebp-2E4h]
  float v316; // [esp+1D0h] [ebp-2E0h]
  int v317; // [esp+1D4h] [ebp-2DCh]
  float v318; // [esp+1D8h] [ebp-2D8h]
  float v319; // [esp+1DCh] [ebp-2D4h]
  float v320; // [esp+1E0h] [ebp-2D0h]
  int v321; // [esp+1E4h] [ebp-2CCh]
  float v322; // [esp+1E8h] [ebp-2C8h]
  int v323; // [esp+1ECh] [ebp-2C4h] BYREF
  int v324; // [esp+1F0h] [ebp-2C0h] BYREF
  void *v325; // [esp+1F4h] [ebp-2BCh]
  float v326; // [esp+1F8h] [ebp-2B8h]
  float v327; // [esp+1FCh] [ebp-2B4h]
  float v328; // [esp+200h] [ebp-2B0h]
  float v329; // [esp+204h] [ebp-2ACh]
  float v330; // [esp+208h] [ebp-2A8h]
  float v331; // [esp+20Ch] [ebp-2A4h]
  float v332; // [esp+210h] [ebp-2A0h]
  float v333; // [esp+214h] [ebp-29Ch]
  double v334; // [esp+218h] [ebp-298h]
  float v335; // [esp+220h] [ebp-290h]
  float v336; // [esp+224h] [ebp-28Ch]
  float v337; // [esp+228h] [ebp-288h]
  float v338[3]; // [esp+22Ch] [ebp-284h] BYREF
  double v339; // [esp+238h] [ebp-278h]
  float v340; // [esp+244h] [ebp-26Ch]
  float v341; // [esp+248h] [ebp-268h]
  float v342; // [esp+24Ch] [ebp-264h]
  float v343[17]; // [esp+250h] [ebp-260h] BYREF
  float v344[3]; // [esp+294h] [ebp-21Ch] BYREF
  double v345; // [esp+2A0h] [ebp-210h]
  float v346[3]; // [esp+2A8h] [ebp-208h] BYREF
  float v347[3]; // [esp+2B4h] [ebp-1FCh] BYREF
  float v348[18]; // [esp+2C0h] [ebp-1F0h] BYREF
  long double v349; // [esp+308h] [ebp-1A8h]
  float v350[16]; // [esp+310h] [ebp-1A0h] BYREF
  float v351[18]; // [esp+350h] [ebp-160h] BYREF
  float v352[18]; // [esp+398h] [ebp-118h] BYREF
  float v353[16]; // [esp+3E0h] [ebp-D0h] BYREF
  float v354[16]; // [esp+420h] [ebp-90h] BYREF
  float v355[17]; // [esp+460h] [ebp-50h] BYREF
  int v356; // [esp+4ACh] [ebp-4h]

  v3 = RenderDevice::Instance();
  v4 = (_DWORD *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v3 + 392))(v3);
  v5 = *v4;
  v308 = v4;
  (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v5 + 32))(v4, 1.0, 1.0);
  v6 = *((_DWORD *)this + 57);
  if ( v6 == 2 || v6 == 3 )
  {
    v26 = a2;
    Editor::RenderPerformanceView(this, a2);
  }
  else
  {
    if ( v6 )
    {
      if ( v6 != 4 )
      {
        v26 = a2;
        World::Render(a2, (Editor *)((char *)this + 252));
        if ( !*((_BYTE *)a2 + 764) )
        {
          v84 = FXManager::Instance();
          (**(void (__thiscall ***)(struct FXManager *, struct World *, char *))v84)(v84, a2, (char *)this + 252);
        }
        v85 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v85 + 388))(v85);
        v86 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v86 + 364))(v86);
        v87 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v87 + 464))(v87, (char *)this + 472);
        v88 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v88 + 476))(v88, (char *)this + 408);
        *(float *)&v89 = COERCE_FLOAT(RenderDevice::Instance());
        v90 = *(_DWORD *)v89;
        x = *(float *)&v89;
        v91 = sub_1000BC40(v351);
        (*(void (__thiscall **)(float, float *))(v90 + 456))(COERCE_FLOAT(LODWORD(x)), v91);
        v92 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v92 + 432))(v92, 14, 0);
        v93 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v93 + 432))(v93, 27, 1);
        v94 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v94 + 432))(v94, 137, 0);
        v95 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v95 + 432))(v95, 28, 0);
        v96 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v96 + 448))(v96, 0, 7, 2);
        v97 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v97 + 448))(v97, 0, 5, 2);
        v98 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v98 + 448))(v98, 0, 6, 2);
        v99 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v99 + 440))(v99, 0, 4, 4);
        v100 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v100 + 440))(v100, 0, 5, 2);
        v101 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v101 + 440))(v101, 0, 6, 0);
        v102 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v102 + 440))(v102, 0, 1, 4);
        v103 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v103 + 440))(v103, 0, 2, 2);
        v104 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v104 + 440))(v104, 0, 3, 0);
        World::PostRender(a2, (Editor *)((char *)this + 252));
        goto LABEL_49;
      }
      v38 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v38 + 388))(v38);
      v39 = RenderDevice::Instance();
      v40 = (float *)*((_DWORD *)RenderDevice::Instance() + 427);
      v41 = *(int (__thiscall **)(struct RenderDevice *, _DWORD, _DWORD))(*(_DWORD *)v39 + 212);
      x = *v40;
      v42 = v41(v39, 1.0, 0);
      (*(void (__stdcall **)(float *, _DWORD, _DWORD, int, int))(LODWORD(v279) + 172))(v40, 0, 0, 3, v42);
      sub_1000BC40(v353);
      sub_1000B570(v353);
      v43 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v43 + 456))(v43, v353);
      v44 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v44 + 496))(v44);
      v45 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v45 + 432))(v45, 137, 1);
      v46 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v46 + 432))(v46, 28, 0);
      v47 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v47 + 432))(v47, 8, 2);
      v48 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v48 + 432))(v48, 176, 0);
      v49 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v49 + 432))(v49, 27, 0);
      v50 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v50 + 432))(v50, 19, 5);
      v51 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v51 + 432))(v51, 20, 6);
      v52 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v52 + 440))(v52, 0, 2, 0);
      v53 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v53 + 440))(v53, 0, 1, 2);
      v54 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v54 + 440))(v54, 0, 4, 1);
      v55 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v55 + 464))(v55, (char *)this + 472);
      v56 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v56 + 476))(v56, (char *)this + 408);
      memset(v348, 0, 0x44u);
      memset(v352, 0, 0x44u);
      v26 = a2;
      v348[0] = 1.0;
      v348[12] = 1.0;
      v276 = 0;
      v348[1] = 0.0;
      v348[13] = 0.0;
      v348[2] = 0.0;
      v348[14] = 0.0;
      v348[3] = 1.0;
      v348[15] = 1.0;
      v352[0] = 0.69999999;
      v352[12] = 0.69999999;
      v352[1] = 0.69999999;
      v352[13] = 0.69999999;
      v352[2] = 0.69999999;
      v352[14] = 0.69999999;
      v352[3] = 1.0;
      v352[15] = 1.0;
      v57 = (_DWORD *)((char *)a2 + 3220);
      while ( 1 )
      {
        v58 = *((_DWORD *)a2 + 806);
        if ( !v58 || v276 >= (*((_DWORD *)a2 + 807) - v58) >> 2 )
          break;
        v59 = *((_DWORD *)a2 + 806);
        if ( !*(_DWORD *)(*(_DWORD *)(v59 + 4 * v276) + 716) )
          goto LABEL_35;
        if ( !v59 || v276 >= (*((_DWORD *)a2 + 807) - v59) >> 2 )
          invalid_parameter_noinfo();
        if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)a2 + 806) + 4 * v276) + 716) + 144)
          && !*(_BYTE *)(*(_DWORD *)std::vector<Model *>::operator[](v57, v276) + 816) )
        {
          v60 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v60 + 488))(v60, v348);
          v61 = std::vector<Model *>::operator[](v57, v276);
          Editor::DrawModel(
            this,
            *(struct ModelFrame ****)(*(_DWORD *)(*(_DWORD *)v61 + 716) + 144),
            (Editor *)((char *)this + 252));
          ++v276;
        }
        else
        {
LABEL_35:
          v62 = *((_DWORD *)a2 + 806);
          if ( !v62 || v276 >= (*((_DWORD *)a2 + 807) - v62) >> 2 )
            invalid_parameter_noinfo();
          if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a2 + 806) + 4 * v276) + 716)
            && *(_DWORD *)(*(_DWORD *)std::vector<Model *>::operator[](v57, v276) + 716)
            && !*(_BYTE *)(*(_DWORD *)std::vector<Model *>::operator[](v57, v276) + 816) )
          {
            v63 = std::vector<Model *>::operator[](v57, v276);
            Editor::DrawModel(this, *(struct ModelFrame ****)(*(_DWORD *)v63 + 716), (Editor *)((char *)this + 252));
            v64 = RenderDevice::Instance();
            (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v64 + 488))(v64, v352);
          }
          ++v276;
        }
      }
      v65 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v65 + 364))(v65);
      v66 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v66 + 464))(v66, (char *)this + 472);
      v67 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v67 + 476))(v67, (char *)this + 408);
      *(float *)&v68 = COERCE_FLOAT(RenderDevice::Instance());
      v69 = *(_DWORD *)v68;
      x = *(float *)&v68;
      v70 = sub_1000BC40(v351);
      (*(void (__thiscall **)(float, float *))(v69 + 456))(COERCE_FLOAT(LODWORD(x)), v70);
    }
    else
    {
      v7 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v7 + 388))(v7);
      v8 = RenderDevice::Instance();
      v9 = (float *)*((_DWORD *)RenderDevice::Instance() + 427);
      v10 = *(int (__thiscall **)(struct RenderDevice *, _DWORD, _DWORD))(*(_DWORD *)v8 + 212);
      x = *v9;
      v11 = v10(v8, 1.0, 0);
      (*(void (__stdcall **)(float *, _DWORD, _DWORD, int, int))(LODWORD(v279) + 172))(v9, 0, 0, 3, v11);
      sub_1000BC40(v343);
      memset(v343, 0, 0x40u);
      sub_101786E0(1.0);
      v343[15] = 1.0;
      v12 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v12 + 456))(v12, v343);
      v13 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v13 + 496))(v13);
      v14 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v14 + 432))(v14, 137, 1);
      v15 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v15 + 432))(v15, 28, 0);
      v16 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v16 + 432))(v16, 8, 2);
      v17 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v17 + 432))(v17, 176, 0);
      v18 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v18 + 432))(v18, 27, 0);
      v19 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v19 + 432))(v19, 19, 5);
      v20 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v20 + 432))(v20, 20, 6);
      v21 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v21 + 440))(v21, 0, 2, 0);
      v22 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v22 + 440))(v22, 0, 1, 2);
      v23 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v23 + 440))(v23, 0, 4, 1);
      v24 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v24 + 464))(v24, (char *)this + 472);
      v25 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v25 + 476))(v25, (char *)this + 408);
      memset(v351, 0, 0x44u);
      memset(v348, 0, 0x44u);
      v351[0] = 1.0;
      v351[12] = 1.0;
      v351[1] = 0.0;
      v351[13] = 0.0;
      v351[2] = 0.0;
      v351[14] = 0.0;
      v351[3] = 1.0;
      v351[15] = 1.0;
      v26 = a2;
      v348[0] = 0.69999999;
      v348[12] = 0.69999999;
      v27 = 0;
      v348[1] = 0.69999999;
      v348[13] = 0.69999999;
      v348[2] = 0.69999999;
      v348[14] = 0.69999999;
      v348[3] = 1.0;
      v348[15] = 1.0;
      while ( 1 )
      {
        v28 = *((_DWORD *)a2 + 806);
        if ( !v28 || v27 >= (*((_DWORD *)a2 + 807) - v28) >> 2 )
          break;
        if ( *(_BYTE *)(*(_DWORD *)(*((_DWORD *)a2 + 806) + 4 * v27) + 441) )
        {
          v29 = RenderDevice::Instance();
          v30 = v351;
        }
        else
        {
          v29 = RenderDevice::Instance();
          v30 = v348;
        }
        (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v29 + 488))(v29, v30);
        v31 = *((_DWORD *)a2 + 806);
        if ( !v31 || v27 >= (*((_DWORD *)a2 + 807) - v31) >> 2 )
          invalid_parameter_noinfo();
        v32 = *((_DWORD *)a2 + 806);
        if ( *(_DWORD *)(*(_DWORD *)(v32 + 4 * v27) + 716) )
        {
          if ( !v32 || v27 >= (*((_DWORD *)a2 + 807) - v32) >> 2 )
            invalid_parameter_noinfo();
          v33 = *((_DWORD *)a2 + 806);
          if ( !*(_BYTE *)(*(_DWORD *)(v33 + 4 * v27) + 816) )
          {
            if ( !v33 || v27 >= (*((_DWORD *)a2 + 807) - v33) >> 2 )
              invalid_parameter_noinfo();
            Editor::DrawModel(
              this,
              *(struct ModelFrame ****)(*(_DWORD *)(*((_DWORD *)a2 + 806) + 4 * v27) + 716),
              (Editor *)((char *)this + 252));
          }
        }
        ++v27;
      }
      v34 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v34 + 364))(v34);
      v35 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v35 + 464))(v35, (char *)this + 472);
      v36 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v36 + 476))(v36, (char *)this + 408);
      v37 = RenderDevice::Instance();
      memset(v350, 0, sizeof(v350));
      sub_101786E0(1.0);
      v350[15] = 1.0;
      (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v37 + 456))(v37, v350);
    }
    v71 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v71 + 432))(v71, 14, 0);
    v72 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v72 + 432))(v72, 27, 1);
    v73 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v73 + 432))(v73, 137, 0);
    v74 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v74 + 432))(v74, 28, 0);
    v75 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v75 + 448))(v75, 0, 7, 2);
    v76 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v76 + 448))(v76, 0, 5, 2);
    v77 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v77 + 448))(v77, 0, 6, 2);
    v78 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v78 + 440))(v78, 0, 4, 4);
    v79 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v79 + 440))(v79, 0, 5, 2);
    v80 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v80 + 440))(v80, 0, 6, 0);
    v81 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v81 + 440))(v81, 0, 1, 4);
    v82 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v82 + 440))(v82, 0, 2, 2);
    v83 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v83 + 440))(v83, 0, 3, 0);
    World::PostRender(v26, (Editor *)((char *)this + 252));
  }
LABEL_49:
  if ( !*((_BYTE *)this + 2075) )
    return;
  v105 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v105);
  v106 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, int, int *))(**((_DWORD **)v106 + 427) + 236))(*((_DWORD *)v106 + 427), 1, &v323);
  v107 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v107 + 364))(v107);
  v108 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v108 + 464))(v108, (char *)this + 472);
  v109 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v109 + 476))(v109, (char *)this + 408);
  v110 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v110 + 432))(v110, 137, 1);
  v111 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v111 + 432))(v111, 28, 0);
  for ( i = 0; ; ++i )
  {
    v113 = *((_DWORD *)v26 + 810);
    if ( !v113 || i >= (*((_DWORD *)v26 + 811) - v113) >> 2 )
      break;
    Editor::DrawLight(this, *(struct Light **)(*((_DWORD *)v26 + 810) + 4 * i));
  }
  for ( j = 0; ; ++j )
  {
    v115 = *((_DWORD *)v26 + 806);
    if ( !v115 || j >= (*((_DWORD *)v26 + 807) - v115) >> 2 )
      break;
    if ( std::string::length(*(_DWORD *)(4 * j + *((_DWORD *)v26 + 806)) + 472) )
    {
      v116 = *((_DWORD *)v26 + 806);
      if ( !v116 || j >= (*((_DWORD *)v26 + 807) - v116) >> 2 )
        invalid_parameter_noinfo();
      v117 = *((_DWORD *)v26 + 806);
      if ( !*(_DWORD *)(*(_DWORD *)(v117 + 4 * j) + 716) )
      {
        if ( !v117 || j >= (*((_DWORD *)v26 + 807) - v117) >> 2 )
          invalid_parameter_noinfo();
        v118 = *(_DWORD *)(*((_DWORD *)v26 + 806) + 4 * j);
        if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v118 + 40))(v118) )
        {
          v119 = *((_DWORD *)v26 + 806);
          if ( !v119 || j >= (*((_DWORD *)v26 + 807) - v119) >> 2 )
            invalid_parameter_noinfo();
          Editor::DrawScript(*(struct Actor **)(*((_DWORD *)v26 + 806) + 4 * j), v272, v273, v274);
        }
      }
    }
  }
  v120 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v120 + 432))(v120, 137, 0);
  memset(v354, 0, sizeof(v354));
  sub_101786E0(1.0);
  v354[15] = 1.0;
  v121 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v121 + 456))(v121, v354);
  v122 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v122 + 432))(v122, 8, 2);
  v123 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v123 + 432))(v123, 176, 0);
  v124 = *((float *)this + 482);
  x = *((float *)this + 491);
  v125 = *((_DWORD *)this + 483);
  v126 = *((float *)this + 484);
  *((float *)this + 491) = 1.0;
  v320 = v124;
  v127 = *((_DWORD *)this + 485);
  v321 = v125;
  v128 = *((float *)this + 486);
  v317 = v127;
  v129 = *((float *)this + 488);
  v318 = v128;
  v130 = *((float *)this + 489);
  v305 = v129;
  v322 = v126;
  v131 = *((float *)this + 487);
  v306 = v130;
  v319 = v131;
  v132 = *((float *)this + 490);
  qmemcpy(v353, (char *)this + 1856, sizeof(v353));
  v133 = *((float *)this + 509);
  v307 = v132;
  v279 = v133;
  *((_DWORD *)this + 509) = 14;
  memset(v343, 0, 0x40u);
  sub_101786E0(1.0);
  v343[15] = 1.0;
  qmemcpy((char *)this + 1856, v343, 0x40u);
  v299 = 0.0;
  v301 = 0.0;
  *((float *)this + 482) = 0.5;
  v134 = v299;
  v300 = 0.5;
  *((float *)this + 483) = 0.0;
  v135 = v300;
  *((float *)this + 484) = 0.0;
  v299 = 0.0;
  v136 = v301;
  v300 = 0.0;
  *((float *)this + 485) = v134;
  v137 = v299;
  v301 = 0.5;
  *((float *)this + 486) = v135;
  v138 = v300;
  *((float *)this + 487) = v136;
  v139 = v301;
  *((float *)this + 488) = v137;
  *((float *)this + 489) = v138;
  *((float *)this + 490) = v139;
  (*(void (__thiscall **)(struct Canvas *))(*(_DWORD *)Canvas::m_Instance + 92))(Canvas::m_Instance);
  v284 = 0.5;
  v285 = 0.0;
  v286 = 0.0;
  v302 = 0.0;
  v303 = 0.0;
  v304 = 0.0;
  (*(void (__thiscall **)(struct Canvas *, float *, float *, int))(*(_DWORD *)Canvas::m_Instance + 96))(
    Canvas::m_Instance,
    &v302,
    &v284,
    24672376);
  v284 = 0.0;
  v285 = 0.5;
  v286 = 0.0;
  v302 = 0.0;
  v303 = 0.0;
  v304 = 0.0;
  (*(void (__thiscall **)(struct Canvas *, float *, float *, int))(*(_DWORD *)Canvas::m_Instance + 96))(
    Canvas::m_Instance,
    &v302,
    &v284,
    24672376);
  v284 = 0.0;
  v285 = 0.0;
  v286 = 0.5;
  v302 = 0.0;
  v303 = 0.0;
  v304 = 0.0;
  (*(void (__thiscall **)(struct Canvas *, float *, float *, int))(*(_DWORD *)Canvas::m_Instance + 96))(
    Canvas::m_Instance,
    &v302,
    &v284,
    24672376);
  (*(void (__thiscall **)(struct Canvas *))(*(_DWORD *)Canvas::m_Instance + 100))(Canvas::m_Instance);
  *(float *)&Rect.left = 0.23529412;
  *((float *)this + 460) = 0.23529412;
  *(float *)&Rect.top = 0.23529412;
  *(float *)&Rect.right = 0.23529412;
  *(float *)&Rect.bottom = 0.23529412;
  *((float *)this + 461) = 0.23529412;
  v140 = (struct ID3DXMesh *)*((_DWORD *)this + 480);
  *((float *)this + 462) = 0.23529412;
  *((float *)this + 463) = 0.23529412;
  Gizmo::DrawObjects((Editor *)((char *)this + 1104), v140);
  v141 = v279;
  *((float *)this + 491) = x;
  v142 = v321;
  *((float *)this + 509) = v141;
  *(float *)&Rect.left = 1.0;
  v143 = v322;
  *(float *)&Rect.top = 1.0;
  *(float *)&Rect.right = 0.0;
  qmemcpy((char *)this + 1856, v353, 0x40u);
  *(float *)&Rect.bottom = 1.0;
  *((float *)this + 482) = v320;
  v144 = v317;
  *((_DWORD *)this + 483) = v142;
  v145 = v318;
  *((_DWORD *)this + 485) = v144;
  v146 = v305;
  *((float *)this + 484) = v143;
  v147 = v319;
  *((float *)this + 486) = v145;
  v148 = v306;
  *((float *)this + 488) = v146;
  left = Rect.left;
  *((float *)this + 487) = v147;
  v150 = v307;
  *((float *)this + 489) = v148;
  top = Rect.top;
  *((_DWORD *)this + 460) = left;
  bottom = Rect.bottom;
  *((float *)this + 490) = v150;
  right = Rect.right;
  *((_DWORD *)this + 461) = top;
  *((_DWORD *)this + 462) = right;
  *((_DWORD *)this + 463) = bottom;
  v154 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v154 + 432))(v154, 137, 0);
  v155 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v155 + 432))(v155, 8, 2);
  v156 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v156 + 432))(v156, 176, 1);
  v157 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v157 + 456))(v157, v354);
  v158 = invalid_parameter_noinfo;
  v276 = 0;
  v159 = 0;
  while ( 1 )
  {
    v160 = *((_DWORD *)this + 562);
    if ( !v160 || v159 >= (*((_DWORD *)this + 563) - v160) >> 2 )
      break;
    v161 = *((_DWORD *)this + 562);
    if ( *(_DWORD *)(*(_DWORD *)(v161 + 4 * v159) + 716) )
    {
      if ( *((_BYTE *)this + 2057) )
      {
        if ( !v161 || v159 >= (*((_DWORD *)this + 563) - v161) >> 2 )
          v158();
        StaticModel::GetWorldBBox(*(_DWORD *)(*(_DWORD *)(4 * v276 + *((_DWORD *)this + 562)) + 716), &v289);
        v356 = 0;
        v296 = v296 + 0.1000000014901161;
        *(float *)&v297 = *(float *)&v297 + 0.1000000014901161;
        *((float *)&v297 + 1) = *((float *)&v297 + 1) + 0.1000000014901161;
        v293 = v293 - 0.1000000014901161;
        v294 = v294 - 0.1000000014901161;
        v295 = v295 - 0.1000000014901161;
        v162 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v162 + 432))(v162, 27, 1);
        v163 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v163 + 432))(v163, 19, 5);
        v164 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v164 + 432))(v164, 20, 6);
        v165 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v165 + 440))(v165, 0, 2, 0);
        v166 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v166 + 440))(v166, 0, 1, 2);
        v167 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v167 + 440))(v167, 0, 4, 2);
        v168 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v168 + 440))(v168, 0, 5, 3);
        v169 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v169 + 432))(v169, 60, 503381760);
        qmemcpy(v348, (char *)this + 1292, 0x40u);
        (*(void (__thiscall **)(_DWORD *, float *, float *, int))(*v308 + 136))(v308, &v289, v348, -16711936);
        if ( *((_BYTE *)this + 2108) )
        {
          v170 = *((_DWORD *)this + 562);
          if ( !v170 || v276 >= (*((_DWORD *)this + 563) - v170) >> 2 )
            invalid_parameter_noinfo();
          if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 562) + 4 * v276) + 716) + 308) )
          {
            v310 = 0;
            v311 = 0;
            v312 = 0;
            v171 = *((_DWORD *)this + 562);
            LOBYTE(v356) = 1;
            if ( !v171 || v276 >= (*((_DWORD *)this + 563) - v171) >> 2 )
              invalid_parameter_noinfo();
            ModelFrame::EnumerateFrames(&v309);
            v172 = *((_DWORD *)this + 562);
            if ( !v172 || v276 >= (*((_DWORD *)this + 563) - v172) >> 2 )
              invalid_parameter_noinfo();
            StaticModel::GetWorldBBox(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 562) + 4 * v276) + 716), v350);
            v173 = v310;
            v174 = v311;
            x = v350[7] - v350[4];
            LOBYTE(v356) = 2;
            x = fabs(x);
            v281 = x;
            x = v350[8] - v350[5];
            x = fabs(x);
            v283 = x;
            x = v350[9] - v350[6];
            x = fabs(x);
            v282 = x;
            if ( v310 )
              v175 = (v311 - (int)v310) >> 2;
            else
              v175 = 0;
            v281 = v281 / (double)(unsigned int)(2 * v175);
            if ( v310 )
              v176 = (v311 - (int)v310) >> 2;
            else
              v176 = 0;
            v283 = v283 / (double)(unsigned int)(2 * v176);
            if ( v310 )
              v177 = (v311 - (int)v310) >> 2;
            else
              v177 = 0;
            Point.x = 2 * v177;
            v178 = v308;
            v179 = 0;
            v282 = v282 / (double)(unsigned int)(2 * v177);
            v180 = v281;
            v181 = v283;
            v182 = v282;
            while ( v173 && v179 < (v174 - (int)v173) >> 2 )
            {
              v344[0] = -v180;
              v344[1] = -v181;
              v344[2] = -v182;
              v338[0] = v180;
              v338[1] = v181;
              v338[2] = v182;
              sub_10001370(v343, v344, v338);
              v183 = v310;
              LOBYTE(v356) = 3;
              if ( !v310 || v179 >= (v311 - (int)v310) >> 2 )
              {
                invalid_parameter_noinfo();
                v183 = v310;
              }
              (*(void (__thiscall **)(_DWORD *, int))(*v178 + 104))(v178, v183[v179] + 164);
              v184 = v310;
              if ( !v310 || v179 >= (v311 - (int)v310) >> 2 )
              {
                invalid_parameter_noinfo();
                v184 = v310;
              }
              if ( *((_DWORD *)this + 526) == v184[v179] )
              {
                memset(v355, 0, 0x40u);
                sub_101786E0(1.0);
                v355[15] = 1.0;
                (*(void (__thiscall **)(_DWORD *, float *, float *, int))(*v178 + 136))(v178, v343, v355, -16711936);
              }
              else
              {
                memset(v352, 0, 0x40u);
                sub_101786E0(1.0);
                v352[15] = 1.0;
                (*(void (__thiscall **)(_DWORD *, float *, float *, int))(*v178 + 136))(v178, v343, v352, -16711681);
              }
              memset(v353, 0, sizeof(v353));
              sub_101786E0(1.0);
              v185 = *v178;
              v353[15] = 1.0;
              (*(void (__thiscall **)(_DWORD *, float *))(v185 + 104))(v178, v353);
              LOBYTE(v356) = 2;
              sub_1017A0B0(v343);
              v181 = v283;
              v174 = v311;
              v173 = v310;
              ++v179;
              v182 = v282;
              v180 = v281;
            }
            LOBYTE(v356) = 1;
            sub_1017A0B0(v350);
            if ( v310 )
              operator delete(v310);
            v310 = 0;
            v311 = 0;
            v312 = 0;
          }
        }
        goto LABEL_115;
      }
      v186 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v186 + 432))(v186, 27, 1);
      v187 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v187 + 432))(v187, 19, 5);
      v188 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v188 + 432))(v188, 20, 6);
      v189 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v189 + 440))(v189, 0, 2, 0);
      v190 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v190 + 440))(v190, 0, 1, 2);
      v191 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v191 + 440))(v191, 0, 4, 2);
      v192 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v192 + 440))(v192, 0, 5, 3);
      v193 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v193 + 432))(v193, 60, 503381760);
      v194 = *((_DWORD *)this + 562);
      if ( !v194 || v159 >= (*((_DWORD *)this + 563) - v194) >> 2 )
        v158();
      Editor::DrawModel(
        this,
        *(struct ModelFrame ****)(*(_DWORD *)(*((_DWORD *)this + 562) + 4 * v159++) + 716),
        (Editor *)((char *)this + 252));
      v276 = v159;
    }
    else
    {
      v195 = *((_DWORD *)this + 562);
      if ( !v195 || v159 >= (*((_DWORD *)this + 563) - v195) >> 2 )
        v158();
      v196 = *(_DWORD *)(*((_DWORD *)this + 562) + 4 * v159);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v196 + 40))(v196) )
      {
        v197 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v197 + 432))(v197, 27, 0);
        v198 = *((_DWORD *)this + 562);
        if ( !v198 || v159 >= (*((_DWORD *)this + 563) - v198) >> 2 )
          v158();
        v199 = *(float **)(4 * v276 + *((_DWORD *)this + 562));
        v200 = v199[279];
        v305 = v199[278];
        v334 = v305;
        v201 = v199[280];
        v306 = v200;
        v307 = v201;
        x = v305 + 0.25;
        v280 = v200;
        v279 = v200 + 0.25;
        *(double *)&Point = v201;
        *(float *)&v288 = v201 + 0.25;
        v347[0] = x;
        v347[1] = v279;
        v347[2] = *(float *)&v288;
        x = v305 - 0.25;
        v279 = v200 - 0.25;
        *(float *)&v288 = v201 - 0.25;
        v346[0] = x;
        v346[1] = v279;
        v346[2] = *(float *)&v288;
        v202 = sub_10001370(v343, v346, v347);
        qmemcpy(v350, (char *)this + 1292, sizeof(v350));
        v269 = v202;
        v203 = *(void (__thiscall **)(_DWORD *, float *, float *, int))(*v308 + 136);
        v356 = 4;
        v203(v308, v269, v350, -16711936);
        v356 = -1;
        sub_1017A0B0(v343);
        v204 = *((_DWORD *)this + 562);
        if ( !v204 || v276 >= (*((_DWORD *)this + 563) - v204) >> 2 )
          invalid_parameter_noinfo();
        x = *(float *)(*(_DWORD *)(*((_DWORD *)this + 562) + 4 * v276) + 1136);
        v314 = 0;
        v315 = 0.0;
        v316 = 0.0;
        v356 = 7;
        memset(&Rect.top, 0, 12);
        v325 = 0;
        v326 = 0.0;
        v327 = 0.0;
        v292 = -1;
        v279 = v334 + 0.0;
        *(float *)&v288 = v279;
        v339 = x;
        x = x + v280;
        *(float *)&k = x;
        v282 = *(double *)&Point + 0.0;
        v340 = v279;
        v289 = v279;
        v341 = x;
        v342 = v282;
        v290 = x;
        v291 = v282;
        sub_10091500((int)&v313, &v289);
        v281 = v339 + v334;
        *(float *)&v288 = v281;
        v283 = v280 + 0.0;
        *(float *)&k = v283;
        v328 = v281;
        v289 = v281;
        v329 = v283;
        v290 = v283;
        v330 = v282;
        v291 = v282;
        v292 = -1;
        sub_10091500((int)&Rect, &v289);
        *(float *)&Point.x = v281;
        v292 = -1;
        *(float *)&v288 = v283;
        *(float *)&k = v282;
        v331 = v281;
        v289 = v281;
        v332 = v283;
        v333 = v282;
        v291 = v282;
        v290 = v283;
        sub_10091500((int)&v324, &v289);
        v205 = v306;
        v206 = v305;
        for ( k = 1; k < 32; ++k )
        {
          *(float *)&Point.x = (double)k * 3.141592741012573 * 0.0625;
          v349 = *(float *)&Point.x;
          *(float *)&Point.x = cos(*(float *)&Point.x);
          *(float *)&Point.x = *(float *)&Point.x * v339;
          v345 = *(float *)&Point.x;
          *(float *)&v288 = *(float *)&Point.x + v334;
          v299 = *(float *)&v288;
          *(float *)&Point.x = sin(v349);
          v289 = v206;
          *(float *)&Point.x = *(float *)&Point.x * v339;
          v292 = -1;
          v300 = v205 + *(float *)&Point.x;
          v320 = *(float *)&v288;
          v322 = v307 + *(float *)&Point.x;
          v318 = v280 + v345;
          v290 = v318;
          v319 = *(float *)&Point.x + v307;
          v291 = v319;
          sub_10091500((int)&v313, &v289);
          v289 = v320;
          v291 = v322;
          v290 = v205;
          v292 = -1;
          sub_10091500((int)&Rect, &v289);
          v289 = v299;
          v290 = v300;
          v291 = v307;
          v292 = -1;
          sub_10091500((int)&v324, &v289);
        }
        v292 = -1;
        v335 = v279;
        v289 = v279;
        v336 = x;
        v337 = v282;
        v290 = x;
        v291 = v282;
        sub_10091500((int)&v313, &v289);
        v292 = -1;
        v302 = v281;
        v289 = v281;
        v303 = v283;
        v304 = v282;
        v290 = v283;
        v291 = v282;
        sub_10091500((int)&Rect, &v289);
        *(float *)&Point.x = v281;
        v292 = -1;
        x = v283;
        v279 = v282;
        v284 = v281;
        v289 = v281;
        v285 = v283;
        v286 = v282;
        v291 = v282;
        v290 = v283;
        sub_10091500((int)&v324, &v289);
        v207 = Canvas::Instance();
        v208 = v314;
        v209 = v207;
        if ( !v314 || (v210 = v315, !((LODWORD(v315) - (int)v314) / 24)) )
        {
          invalid_parameter_noinfo();
          v210 = v315;
          v208 = v314;
        }
        if ( v208 )
          v211 = (LODWORD(v210) - (int)v208) / 24;
        else
          v211 = 0;
        (*(void (__thiscall **)(struct Canvas *, int, void *, int, int))(*(_DWORD *)v209 + 84))(v209, v211, v208, 24, 1);
        v212 = Canvas::Instance();
        v213 = Rect.top;
        v214 = v212;
        if ( !Rect.top || !((Rect.right - Rect.top) / 24) )
        {
          invalid_parameter_noinfo();
          v213 = Rect.top;
        }
        v215 = v314;
        if ( v314 )
          v215 = (void *)((LODWORD(v315) - (int)v314) / 24);
        (*(void (__thiscall **)(struct Canvas *, void *, LONG, int, int))(*(_DWORD *)v214 + 84))(
          v214,
          v215,
          v213,
          24,
          1);
        v216 = Canvas::Instance();
        v217 = v325;
        Point.x = (LONG)v216;
        if ( !v325 || !((LODWORD(v326) - (int)v325) / 24) )
        {
          invalid_parameter_noinfo();
          v217 = v325;
        }
        if ( v314 )
          v218 = (LODWORD(v315) - (int)v314) / 24;
        else
          v218 = 0;
        (*(void (__thiscall **)(LONG, int, void *, int, int))(*(_DWORD *)Point.x + 84))(Point.x, v218, v217, 24, 1);
        if ( v325 )
          operator delete(v325);
        v325 = 0;
        v326 = 0.0;
        v327 = 0.0;
        if ( Rect.top )
          operator delete((void *)Rect.top);
        memset(&Rect.top, 0, 12);
        v356 = -1;
        if ( v314 )
          operator delete(v314);
        v158 = invalid_parameter_noinfo;
        v314 = 0;
        v315 = 0.0;
        v316 = 0.0;
        v159 = ++v276;
      }
      else
      {
        v219 = *((_DWORD *)this + 562);
        if ( !v219 || v159 >= (*((_DWORD *)this + 563) - v219) >> 2 )
          v158();
        v220 = *(float **)(*((_DWORD *)this + 562) + 4 * v159);
        *(float *)&Point.x = v220[200] * v220[200] + v220[199] * v220[199] + v220[201] * v220[201];
        *(float *)&Point.x = sqrt(*(float *)&Point.x);
        if ( *(float *)&Point.x <= 0.0 )
        {
          v276 = ++v159;
        }
        else
        {
          v221 = *((_DWORD *)this + 562);
          if ( !v221 || v159 >= (*((_DWORD *)this + 563) - v221) >> 2 )
            v158();
          v222 = *((_DWORD *)this + 562);
          v223 = v276;
          qmemcpy(v343, (const void *)(*(_DWORD *)(v222 + 4 * v276) + 868), 0x40u);
          if ( !v222 || v276 >= (*((_DWORD *)this + 563) - v222) >> 2 )
          {
            invalid_parameter_noinfo();
            v223 = v276;
          }
          v224 = *(float **)(*((_DWORD *)this + 562) + 4 * v223);
          v225 = v224[214];
          v224 += 214;
          v343[12] = v225;
          v343[13] = v224[1];
          v226 = *((_DWORD *)this + 562);
          v343[14] = v224[2];
          if ( !v226 || v223 >= (*((_DWORD *)this + 563) - v226) >> 2 )
            invalid_parameter_noinfo();
          sub_1008FDF0(&v289, v343);
          v296 = v296 + 0.1000000014901161;
          qmemcpy(v351, (char *)this + 1292, 0x40u);
          *(float *)&v297 = *(float *)&v297 + 0.1000000014901161;
          *((float *)&v297 + 1) = *((float *)&v297 + 1) + 0.1000000014901161;
          v227 = *(void (__thiscall **)(_DWORD *, float *, float *, int))(*v308 + 136);
          v293 = v293 - 0.1000000014901161;
          v356 = 8;
          v294 = v294 - 0.1000000014901161;
          v295 = v295 - 0.1000000014901161;
          v227(v308, &v289, v351, -16711936);
LABEL_115:
          v356 = -1;
          sub_1017A0B0(&v289);
          v158 = invalid_parameter_noinfo;
          v159 = ++v276;
        }
      }
    }
  }
  v228 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v228 + 432))(v228, 8, 3);
  if ( !*((_DWORD *)this + 509) )
  {
    if ( *((_BYTE *)this + 2073) )
    {
      if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 9), 0) )
      {
        *(float *)&v280 = *((float *)this + 534) - *((float *)this + 516);
        *((float *)&v280 + 1) = *((float *)this + 535) - *((float *)this + 517);
        *(float *)&Point.x = *((float *)&v280 + 1) * *((float *)&v280 + 1) + *(float *)&v280 * *(float *)&v280;
        *(float *)&Point.x = sqrt(*(float *)&Point.x);
        if ( *(float *)&Point.x > 5.0 )
        {
          v229 = *((_DWORD *)Canvas::Instance() + 15);
          (*(void (__stdcall **)(int, int))(*(_DWORD *)v229 + 52))(v229, 1);
          (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v229 + 44))(v229, 1.0);
          v230 = (*(int (__stdcall **)(int))(*(_DWORD *)v229 + 16))(v229);
          if ( v230 < 0 )
          {
            v231 = *(_DWORD *)dword_11249F38;
            v232 = sub_1017EAEF(v230);
            (*(void (**)(void *, const char *, ...))(v231 + 4))(dword_11249F38, " Error: %s, in: line->Begin()", v232);
          }
          *(float *)&v280 = *((float *)this + 534);
          v233 = *((float *)this + 535);
          v289 = *(float *)&v280;
          *((float *)&v280 + 1) = v233;
          v234 = *((float *)this + 534);
          v290 = *((float *)&v280 + 1);
          *(float *)&v280 = v234;
          v235 = *((float *)this + 517);
          v291 = *(float *)&v280;
          *((float *)&v280 + 1) = v235;
          v236 = *((float *)this + 516);
          v292 = HIDWORD(v280);
          *(float *)&v280 = v236;
          v237 = *((float *)this + 517);
          v293 = *(float *)&v280;
          *((float *)&v280 + 1) = v237;
          v238 = *((float *)this + 516);
          v294 = *((float *)&v280 + 1);
          *(float *)&v280 = v238;
          v239 = *((float *)this + 535);
          v295 = *(float *)&v280;
          *((float *)&v280 + 1) = v239;
          v240 = *((float *)&v280 + 1);
          *(float *)&v280 = *((float *)this + 534);
          *((float *)&v280 + 1) = *((float *)this + 535);
          v297 = v280;
          v296 = v240;
          (*(void (__stdcall **)(int, float *, int, int))(*(_DWORD *)v229 + 20))(v229, &v289, 5, -1);
          (*(void (__stdcall **)(int))(*(_DWORD *)v229 + 68))(v229);
        }
      }
    }
  }
  v241 = *((_DWORD *)this + 562);
  if ( v241 && (*((_DWORD *)this + 563) - v241) >> 2 && *((_BYTE *)this + 2119) )
    Gizmo::OnRender((Editor *)((char *)this + 1104));
  Gizmo::DrawAxisIcon((Editor *)((char *)this + 1104), (Editor *)((char *)this + 252));
  (*(void (__stdcall **)(int))(*(_DWORD *)v323 + 20))(v323);
  if ( v323 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v323 + 8))(v323);
    v323 = 0;
  }
  LOBYTE(Point.x) = *((_BYTE *)this + 2117);
  v242 = NxPhysics::Instance();
  if ( LOBYTE(Point.x) != NxPhysics::GetGameVisualization(v242) )
  {
    v243 = NxPhysics::Instance();
    NxPhysics::SetGameVisualization(v243, Point.x);
  }
  if ( *((_BYTE *)this + 2117) )
  {
    v244 = NxPhysics::Instance();
    NxPhysics::DebugRender(v244);
  }
  if ( !Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 8), 0) )
  {
    GetCursorPos(&Point);
    v245 = (HWND)*((_DWORD *)Engine::Instance() + 35);
    GetClientRect(v245, &Rect);
    ClientToScreen(v245, (LPPOINT)&Rect);
    ClientToScreen(v245, (LPPOINT)&Rect.right);
    Point.x -= Rect.left;
    Point.y -= Rect.top;
    v246 = *((_DWORD *)this + 509) == 0;
    x = (float)Point.x;
    y = (float)Point.y;
    if ( v246 || (v247 = *((_DWORD *)this + 562)) == 0 || !((*((_DWORD *)this + 563) - v247) >> 2) )
    {
      v284 = x;
      v285 = y;
      v286 = 0.0;
      Editor::Unproject((int)this, v338, SLOBYTE(x), SLODWORD(y), COERCE_INT(0.0));
      v284 = x;
      v285 = y;
      v286 = 1.0;
      Editor::Unproject((int)this, v344, SLOBYTE(x), SLODWORD(y), COERCE_INT(1.0));
      UnderMouse = Editor::GetUnderMouse(this, a2, (struct Vector *)v338, (struct Vector *)v344, 0);
      goto LABEL_198;
    }
    v248 = *((_DWORD *)this + 562);
    if ( (*((_DWORD *)this + 563) - v247) >> 2 == 1 )
    {
      if ( !v248 || !((*((_DWORD *)this + 563) - v248) >> 2) )
        invalid_parameter_noinfo();
      UnderMouse = (struct Actor *)**((_DWORD **)this + 562);
LABEL_198:
      if ( UnderMouse )
      {
        v250 = Canvas::Instance();
        v288 = y;
        v251 = v250;
        v252 = *(_DWORD *)v250;
        v345 = x;
        x = x + 15.0;
        v270 = std::string::c_str((char *)UnderMouse + 444);
        v253 = *(void (__cdecl **)(struct Canvas *, _DWORD, int, _DWORD, LONG, int))(v252 + 44);
        *(float *)&Point.x = v288 + 18.0;
        v253(v251, 0, -16777216, LODWORD(x), Point.x, v270);
        v254 = Canvas::Instance();
        v255 = *(_DWORD *)v254;
        v279 = v345 + 14.0;
        v256 = std::string::c_str((char *)UnderMouse + 444);
        v257 = *(void (__cdecl **)(struct Canvas *, _DWORD, int, _DWORD, LONG, int))(v255 + 44);
        *(float *)&Point.x = v288 + 17.0;
        v257(v254, 0, -1, LODWORD(v279), Point.x, v256);
        v258 = Canvas::Instance();
        v259 = *(_DWORD *)v258;
        v260 = (*(int (__thiscall **)(struct Actor *))(*(_DWORD *)UnderMouse + 100))(UnderMouse);
        v261 = *(void (__cdecl **)(struct Canvas *, _DWORD, int, _DWORD, LONG, int))(v259 + 44);
        *(float *)&Point.x = v288 + 30.0;
        v261(v258, 0, -1, LODWORD(x), Point.x, v260);
        v262 = -1;
        if ( !*((_BYTE *)UnderMouse + 696) )
          v262 = (*(unsigned __int8 (__thiscall **)(struct Actor *))(*(_DWORD *)UnderMouse + 40))(UnderMouse) != 0
               ? -131210
               : -11013018;
        v263 = (float *)Canvas::Instance();
        v264 = *(int (__thiscall **)(struct Actor *))(*(_DWORD *)UnderMouse + 100);
        v265 = v263;
        x = *v263;
        v271 = v264(UnderMouse);
        v266 = *(void (__cdecl **)(float *, _DWORD, int, _DWORD, LONG, int))(LODWORD(x) + 44);
        *(float *)&Point.x = v288 + 29.0;
        v266(v265, 0, v262, LODWORD(v279), Point.x, v271);
      }
    }
  }
  v267 = (float *)((char *)Profiler::Get() + 72);
  v268 = REGetGlobalTimer();
  *v267 = CRETimer::StopMiniTimer(v268) + *v267;
}
