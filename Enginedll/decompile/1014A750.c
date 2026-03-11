/*
 * func-name: ?CreateOldControl@CDlgMgr@@IAEPAVCREControl@@PAVCTYDialog@@PAVDOMElement@xercesc_2_5@@@Z
 * func-address: 0x1014a750
 * callers: 0x1014cfa0
 * callees: 0x100492d0, 0x100493a0, 0x100497b0, 0x10049860, 0x10049910, 0x10049c70, 0x10049e00, 0x1006a240, 0x1006a2f0, 0x1006a3a0, 0x1006a3d0, 0x1006a470, 0x1006a490, 0x100a32c0, 0x100a3bc0, 0x100a64f0, 0x100a73c0, 0x100a8d80, 0x100a8d90, 0x100aac90, 0x100ab130, 0x100ab4e0, 0x100ac3a0, 0x100ae180, 0x100b07b0, 0x100b0a20, 0x100b13f0, 0x100b1d20, 0x100b1e40, 0x100b1f60, 0x100b3480, 0x100bb130, 0x100bf690, 0x100c3910, 0x100c68a0, 0x100c6b30, 0x100c7520, 0x100c7850, 0x100c7b00, 0x100c7bc0, 0x100c7c80, 0x100c7df0, 0x100c84a0, 0x100c86a0, 0x100c87e0, 0x100c8c60, 0x100ca030, 0x100caa50, 0x100cb5e0, 0x100cbc90, 0x100cbcc0, 0x100cc940, 0x100ccf60, 0x1014a540, 0x1014fff0, 0x10150190, 0x101502f0, 0x101503c0, 0x10150500, 0x101509f0, 0x10150a30, 0x10156da0, 0x101a2534, 0x101a26c0
 */

struct CREControl *__thiscall CDlgMgr::CreateOldControl(
        CDlgMgr *this,
        struct CTYDialog *a2,
        struct xercesc_2_5::DOMElement *a3)
{
  struct CREControl *result; // eax
  XMLSystem *v4; // edi
  struct xercesc_2_5::DOMNode *v5; // eax
  struct xercesc_2_5::DOMNode *v6; // eax
  CRETabPages *v7; // ebx
  CDlgMgr *v8; // eax
  int (__thiscall *v9)(struct xercesc_2_5::DOMElement *, const wchar_t *); // eax
  int *v10; // eax
  int *v11; // eax
  int *v12; // eax
  void *StringW; // eax
  int *v14; // eax
  int *v15; // eax
  void *v16; // eax
  int *v17; // eax
  int *v18; // eax
  void *v19; // eax
  int *v20; // eax
  int *v21; // eax
  void *v22; // eax
  int *v23; // eax
  int *v24; // eax
  char *v25; // eax
  bool v26; // cf
  const wchar_t *v27; // eax
  CDlgMgr *v28; // eax
  int (__thiscall *v29)(struct xercesc_2_5::DOMElement *, const wchar_t *); // edx
  int *v30; // eax
  char *v31; // eax
  const wchar_t *v32; // eax
  int v33; // edx
  struct xercesc_2_5::DOMNode *v34; // eax
  int *v35; // eax
  struct xercesc_2_5::DOMNode *v36; // eax
  struct xercesc_2_5::DOMNode *v37; // eax
  struct xercesc_2_5::DOMNode *v38; // eax
  int v39; // eax
  int v40; // edx
  CDlgMgr *v41; // eax
  CPicCheckBox *v42; // ebp
  int (__thiscall *v43)(struct xercesc_2_5::DOMElement *, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v44; // eax
  int v45; // eax
  int *v46; // eax
  char *v47; // eax
  const wchar_t *v48; // eax
  struct xercesc_2_5::DOMNode *v49; // eax
  char Bool; // al
  int *v51; // eax
  int v52; // ebx
  int *v53; // eax
  float *Vector2; // eax
  int v55; // ebx
  int *v56; // eax
  int (__thiscall *v57)(struct xercesc_2_5::DOMElement *, const wchar_t *); // eax
  int *v58; // eax
  int String; // eax
  int *v60; // eax
  float *Vector4; // eax
  float v62; // ecx
  float v63; // edx
  int *v64; // eax
  int v65; // eax
  int *v66; // eax
  float *v67; // eax
  float v68; // ecx
  float v69; // edx
  int *v70; // eax
  int v71; // eax
  int *v72; // eax
  float *v73; // eax
  float v74; // ecx
  float v75; // edx
  CDlgMgr *v76; // eax
  int (__thiscall *v77)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD); // eax
  struct xercesc_2_5::DOMNode *v78; // eax
  int v79; // eax
  int (__thiscall *v80)(struct xercesc_2_5::DOMElement *); // eax
  struct xercesc_2_5::DOMNode *v81; // eax
  CDlgMgr *v82; // eax
  int (__thiscall *v83)(struct xercesc_2_5::DOMElement *); // eax
  int v84; // ebp
  int (__thiscall *v85)(int); // eax
  int v86; // ebx
  int *v87; // eax
  wchar_t *v88; // eax
  int (__thiscall *v89)(int); // eax
  CDlgMgr *v90; // eax
  int (__thiscall *v91)(struct xercesc_2_5::DOMElement *, const wchar_t *); // eax
  int *v92; // eax
  struct xercesc_2_5::DOMNode *v93; // eax
  int v94; // eax
  struct xercesc_2_5::DOMNode *v95; // eax
  CDlgMgr *v96; // eax
  CPasswordEB *v97; // eax
  CDlgMgr *v98; // eax
  int (__thiscall *v99)(struct xercesc_2_5::DOMElement *, const wchar_t *); // edx
  int *v100; // eax
  char *v101; // eax
  wchar_t *v102; // eax
  CDlgMgr *v103; // eax
  int (__thiscall *v104)(struct xercesc_2_5::DOMElement *, const wchar_t *); // eax
  int *v105; // eax
  char *v106; // eax
  wchar_t *v107; // eax
  CDlgMgr *v108; // eax
  int (__thiscall *v109)(struct xercesc_2_5::DOMElement *, const wchar_t *); // edx
  struct xercesc_2_5::DOMNode *v110; // eax
  int v111; // eax
  CDlgMgr *v112; // eax
  int (__thiscall *v113)(struct xercesc_2_5::DOMElement *); // eax
  int v114; // ebx
  int (__thiscall *v115)(int); // eax
  int v116; // ebp
  int *v117; // eax
  const WCHAR *v118; // eax
  int (__thiscall *v119)(int); // eax
  struct xercesc_2_5::DOMNode *v120; // eax
  char v121; // al
  CDlgMgr *v122; // eax
  int (__thiscall *v123)(struct xercesc_2_5::DOMElement *, const wchar_t *); // eax
  int *v124; // eax
  struct xercesc_2_5::DOMNode *v125; // eax
  int v126; // eax
  struct xercesc_2_5::DOMNode *v127; // eax
  int v128; // eax
  CDlgMgr *v129; // eax
  int (__thiscall *v130)(struct xercesc_2_5::DOMElement *, const wchar_t *); // eax
  int *v131; // eax
  struct xercesc_2_5::DOMNode *v132; // eax
  int v133; // eax
  struct xercesc_2_5::DOMNode *v134; // eax
  int v135; // eax
  CRETabPages *v136; // eax
  int (__thiscall *v137)(struct xercesc_2_5::DOMElement *, const wchar_t *); // eax
  _DWORD *v138; // eax
  int v139; // edx
  _DWORD *v140; // ecx
  int (__thiscall *v141)(_DWORD *); // eax
  int v142; // ebp
  int *v143; // eax
  _DWORD *v144; // eax
  void (__thiscall **v145)(int, _DWORD); // ebx
  struct xercesc_2_5::DOMNode *v146; // eax
  char *v147; // eax
  void (__thiscall *v148)(int, _DWORD); // edx
  int v149; // ebp
  int (__thiscall *v150)(int); // edx
  struct xercesc_2_5::DOMElement *v151; // ebx
  struct CREControl *Control; // eax
  int (__thiscall *v153)(int); // eax
  int (__thiscall *v154)(_DWORD); // eax
  CDlgMgr *v155; // eax
  CProgressBar *v156; // ebp
  int (__thiscall *v157)(struct xercesc_2_5::DOMElement *, const wchar_t *); // eax
  int *v158; // eax
  int *v159; // eax
  float *v160; // eax
  float v161; // ecx
  float v162; // edx
  int *v163; // eax
  int v164; // eax
  int *v165; // eax
  float *v166; // eax
  float v167; // ecx
  float v168; // edx
  int *v169; // eax
  float *v170; // eax
  float v171; // ecx
  float v172; // edx
  float v173; // eax
  double v174; // st4
  double v175; // st5
  struct xercesc_2_5::DOMNode *v176; // eax
  struct xercesc_2_5::DOMNode *v177; // eax
  int *v178; // eax
  int v179; // ebx
  struct xercesc_2_5::DOMNode *v180; // eax
  double Float; // st7
  void (__thiscall *v182)(CProgressBar *); // edx
  struct xercesc_2_5::DOMNode *v183; // eax
  struct xercesc_2_5::DOMNode *v184; // eax
  int *v185; // eax
  int v186; // eax
  struct xercesc_2_5::DOMNode *v187; // eax
  struct xercesc_2_5::DOMNode *v188; // eax
  CDlgMgr *v189; // eax
  int (__thiscall *v190)(struct xercesc_2_5::DOMElement *, const wchar_t *); // eax
  int *v191; // eax
  int v192; // eax
  struct xercesc_2_5::DOMNode *v193; // eax
  struct xercesc_2_5::DOMNode *v194; // eax
  struct xercesc_2_5::DOMNode *v195; // eax
  int v196; // eax
  CDlgMgr *v197; // eax
  int (__thiscall *v198)(struct xercesc_2_5::DOMElement *, const wchar_t *); // eax
  int *v199; // eax
  int v200; // eax
  int *v201; // eax
  int *v202; // eax
  char *v203; // eax
  const wchar_t *v204; // eax
  CDlgMgr *v205; // eax
  int (__thiscall *v206)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD); // edx
  int *v207; // eax
  int v208; // eax
  int (__thiscall *v209)(struct xercesc_2_5::DOMElement *); // eax
  CDlgMgr *v210; // ebx
  int (__thiscall *v211)(CDlgMgr *); // eax
  int v212; // ebp
  int *v213; // eax
  struct xercesc_2_5::DOMNode *v214; // eax
  int v215; // eax
  int v216; // edx
  int v217; // ebx
  int *v218; // eax
  int v219; // eax
  int (__thiscall *v220)(CDlgMgr *); // eax
  CDlgMgr *v221; // ebx
  int (__thiscall *v222)(CDlgMgr *); // eax
  int v223; // ebp
  int *v224; // eax
  struct xercesc_2_5::DOMNode *v225; // eax
  int v226; // eax
  int v227; // edx
  int v228; // ebx
  int *v229; // eax
  int v230; // eax
  int (__thiscall *v231)(CDlgMgr *); // edx
  CDlgMgr *v232; // eax
  int (__thiscall *v233)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD); // edx
  int *v234; // eax
  int (__thiscall *v235)(struct xercesc_2_5::DOMElement *); // edx
  int *v236; // eax
  CDlgMgr *v237; // eax
  CSeperateLine *v238; // eax
  int *v239; // eax
  int v240; // ebp
  int *v241; // eax
  float *v242; // eax
  int v243; // ebp
  void (__thiscall **v244)(CRETabPages *); // ebp
  struct xercesc_2_5::DOMNode *v245; // eax
  char *v246; // eax
  void (__thiscall *v247)(CRETabPages *); // edx
  void (__thiscall **v248)(CRETabPages *, int); // ebp
  struct xercesc_2_5::DOMNode *v249; // eax
  int v250; // eax
  char v251[8]; // [esp+18h] [ebp-3C0h] BYREF
  _DWORD *v252; // [esp+20h] [ebp-3B8h]
  int v253; // [esp+24h] [ebp-3B4h]
  int v254; // [esp+28h] [ebp-3B0h]
  int v255; // [esp+2Ch] [ebp-3ACh]
  const wchar_t *v256; // [esp+30h] [ebp-3A8h]
  int v257; // [esp+34h] [ebp-3A4h]
  char *v258; // [esp+38h] [ebp-3A0h]
  CDlgMgr *left; // [esp+48h] [ebp-390h] BYREF
  void *v260; // [esp+4Ch] [ebp-38Ch]
  CRETabPages *v261; // [esp+50h] [ebp-388h]
  int v262; // [esp+54h] [ebp-384h] BYREF
  float v263; // [esp+58h] [ebp-380h] BYREF
  float v264; // [esp+5Ch] [ebp-37Ch] BYREF
  float v265; // [esp+60h] [ebp-378h]
  float v266; // [esp+64h] [ebp-374h]
  unsigned int v267; // [esp+68h] [ebp-370h] BYREF
  float v268; // [esp+6Ch] [ebp-36Ch]
  float v269; // [esp+70h] [ebp-368h] BYREF
  float v270; // [esp+74h] [ebp-364h]
  float v271; // [esp+78h] [ebp-360h]
  float v272; // [esp+7Ch] [ebp-35Ch]
  int v273[2]; // [esp+80h] [ebp-358h] BYREF
  struct tagRECT rc; // [esp+88h] [ebp-350h] BYREF
  float v275; // [esp+98h] [ebp-340h] BYREF
  void (__thiscall **v276)(CRETabPages *); // [esp+9Ch] [ebp-33Ch]
  _DWORD v277[5]; // [esp+A0h] [ebp-338h] BYREF
  float v278; // [esp+B4h] [ebp-324h]
  int v279; // [esp+BCh] [ebp-31Ch] BYREF
  wchar_t *Source[4]; // [esp+C0h] [ebp-318h] BYREF
  int v281; // [esp+D0h] [ebp-308h]
  unsigned int v282; // [esp+D4h] [ebp-304h]
  struct tagRECT v283; // [esp+D8h] [ebp-300h] BYREF
  int Int; // [esp+E8h] [ebp-2F0h]
  float v285[4]; // [esp+ECh] [ebp-2ECh] BYREF
  float v286[2]; // [esp+FCh] [ebp-2DCh] BYREF
  _BYTE v287[28]; // [esp+104h] [ebp-2D4h] BYREF
  _BYTE v288[28]; // [esp+120h] [ebp-2B8h] BYREF
  _BYTE v289[28]; // [esp+13Ch] [ebp-29Ch] BYREF
  _BYTE v290[28]; // [esp+158h] [ebp-280h] BYREF
  _BYTE v291[28]; // [esp+174h] [ebp-264h] BYREF
  _BYTE v292[28]; // [esp+190h] [ebp-248h] BYREF
  _BYTE v293[28]; // [esp+1ACh] [ebp-22Ch] BYREF
  _BYTE v294[28]; // [esp+1C8h] [ebp-210h] BYREF
  _BYTE v295[28]; // [esp+1E4h] [ebp-1F4h] BYREF
  _BYTE v296[28]; // [esp+200h] [ebp-1D8h] BYREF
  _BYTE v297[28]; // [esp+21Ch] [ebp-1BCh] BYREF
  _BYTE v298[28]; // [esp+238h] [ebp-1A0h] BYREF
  _BYTE v299[28]; // [esp+254h] [ebp-184h] BYREF
  _BYTE v300[28]; // [esp+270h] [ebp-168h] BYREF
  _BYTE v301[28]; // [esp+28Ch] [ebp-14Ch] BYREF
  _BYTE v302[28]; // [esp+2A8h] [ebp-130h] BYREF
  _BYTE v303[28]; // [esp+2C4h] [ebp-114h] BYREF
  _BYTE v304[28]; // [esp+2E0h] [ebp-F8h] BYREF
  _BYTE v305[4]; // [esp+2FCh] [ebp-DCh] BYREF
  _BYTE v306[28]; // [esp+300h] [ebp-D8h] BYREF
  _BYTE v307[24]; // [esp+31Ch] [ebp-BCh] BYREF
  _BYTE v308[28]; // [esp+334h] [ebp-A4h] BYREF
  _BYTE v309[28]; // [esp+350h] [ebp-88h] BYREF
  float v310[4]; // [esp+36Ch] [ebp-6Ch] BYREF
  float v311[4]; // [esp+37Ch] [ebp-5Ch] BYREF
  float v312[4]; // [esp+38Ch] [ebp-4Ch] BYREF
  float v313[4]; // [esp+39Ch] [ebp-3Ch] BYREF
  float v314[4]; // [esp+3ACh] [ebp-2Ch] BYREF
  float v315[4]; // [esp+3BCh] [ebp-1Ch] BYREF
  int v316; // [esp+3D4h] [ebp-4h]
  int retaddr; // [esp+3D8h] [ebp+0h]

  left = this;
  if ( !a3 )
    return 0;
  v4 = (CDlgMgr *)((char *)this + 36);
  v5 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                        a3,
                                        L"ControlID");
  Int = XMLSystem::GetInt(v4, v5, 0);
  v6 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                        a3,
                                        L"Type");
  v7 = 0;
  switch ( XMLSystem::GetInt(v4, v6, 0) )
  {
    case 1:
      v8 = (CDlgMgr *)operator new(0x330u);
      left = v8;
      v316 = 0;
      if ( v8 )
        v7 = CREButton::CREButton(v8, a2);
      else
        v7 = 0;
      v9 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164);
      v316 = -1;
      v10 = (int *)v9(a3, L"NormalPic");
      XMLSystem::GetStringW(v277, v10, 0);
      v316 = 1;
      if ( LODWORD(v278) )
      {
        v11 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                       a3,
                       L"NormalPicPos");
        XMLSystem::GetVector4(&v263, v11, 0);
        SetRect(&rc, (int)v263, (int)v264, (int)v265, (int)v266);
        CREControl::SetCustomPic((int)v7, (int)v277, &rc.left, 0);
      }
      v12 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                     a3,
                     L"HoverPic");
      StringW = XMLSystem::GetStringW(v287, v12, 0);
      LOBYTE(v316) = 2;
      std::wstring::operator=(v277, StringW);
      LOBYTE(v316) = 1;
      std::wstring::~wstring(v287);
      if ( LODWORD(v278) )
      {
        v14 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                       a3,
                       L"HoverPicPos");
        XMLSystem::GetVector4(&v263, v14, 0);
        SetRect(&rc, (int)v263, (int)v264, (int)v265, (int)v266);
        CREControl::SetCustomPic((int)v7, (int)v277, &rc.left, 4u);
      }
      v15 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                     a3,
                     L"ClickedPic");
      v16 = XMLSystem::GetStringW(v291, v15, 0);
      LOBYTE(v316) = 3;
      std::wstring::operator=(v277, v16);
      LOBYTE(v316) = 1;
      std::wstring::~wstring(v291);
      if ( LODWORD(v278) )
      {
        v17 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                       a3,
                       L"ClickedPicPos");
        XMLSystem::GetVector4(&v263, v17, 0);
        SetRect(&rc, (int)v263, (int)v264, (int)v265, (int)v266);
        CREControl::SetCustomPic((int)v7, (int)v277, &rc.left, 5u);
      }
      v18 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                     a3,
                     L"DisablePic");
      v19 = XMLSystem::GetStringW(v308, v18, 0);
      LOBYTE(v316) = 4;
      std::wstring::operator=(v277, v19);
      LOBYTE(v316) = 1;
      std::wstring::~wstring(v308);
      if ( LODWORD(v278) )
      {
        v20 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                       a3,
                       L"DisablePicPos");
        XMLSystem::GetVector4(&v263, v20, 0);
        SetRect(&rc, (int)v263, (int)v264, (int)v265, (int)v266);
        CREControl::SetCustomPic((int)v7, (int)v277, &rc.left, 1u);
      }
      v21 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                     a3,
                     L"FocusPic");
      v22 = XMLSystem::GetStringW(v293, v21, 0);
      LOBYTE(v316) = 5;
      std::wstring::operator=(v277, v22);
      LOBYTE(v316) = 1;
      std::wstring::~wstring(v293);
      if ( LODWORD(v278) )
      {
        v23 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                       a3,
                       L"FocusPicPos");
        XMLSystem::GetVector4(&v263, v23, 0);
        SetRect(&rc, (int)v263, (int)v264, (int)v265, (int)v266);
        CREControl::SetCustomPic((int)v7, (int)v277, &rc.left, 3u);
      }
      v24 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                     a3,
                     L"Text");
      v25 = (char *)XMLSystem::GetStringW(v301, v24, 0);
      v26 = *((_DWORD *)v25 + 6) < 8u;
      LOBYTE(v316) = 6;
      if ( v26 )
        v27 = (const wchar_t *)(v25 + 4);
      else
        v27 = (const wchar_t *)*((_DWORD *)v25 + 1);
      CREStatic::SetText(v7, v27);
      LOBYTE(v316) = 1;
      std::wstring::~wstring(v301);
      v316 = -1;
      std::wstring::~wstring(v277);
      goto LABEL_152;
    case 2:
      v28 = (CDlgMgr *)operator new(0x2B8u);
      left = v28;
      v316 = 7;
      if ( v28 )
        v7 = CREStatic::CREStatic(v28, a2);
      else
        v7 = 0;
      v29 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164);
      v316 = -1;
      v30 = (int *)v29(a3, L"Text");
      v31 = (char *)XMLSystem::GetStringW(v295, v30, 0);
      v26 = *((_DWORD *)v31 + 6) < 8u;
      v316 = 8;
      if ( v26 )
        v32 = (const wchar_t *)(v31 + 4);
      else
        v32 = (const wchar_t *)*((_DWORD *)v31 + 1);
      CREStatic::SetText(v7, v32);
      v316 = -1;
      std::wstring::~wstring(v295);
      v33 = *(_DWORD *)a3;
      LODWORD(v275) = *(_DWORD *)v7 + 188;
      v34 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD))(v33 + 164))(
                                             a3,
                                             L"Style",
                                             0);
      v258 = (char *)XMLSystem::GetInt(v4, v34, v258);
      (*v276)(v7);
      v35 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD))(*(_DWORD *)a3 + 164))(
                     a3,
                     L"Font",
                     0);
      XMLSystem::GetStringW(v306, v35, (char)v258);
      retaddr = 9;
      v36 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                             a3,
                                             L"Weight");
      XMLSystem::GetInt(v4, v36, 0);
      v37 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                             a3,
                                             L"Bold");
      XMLSystem::GetBool(v4, v37, 0);
      v38 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                             a3,
                                             L"Color");
      v39 = XMLSystem::GetInt(v4, v38, 0);
      v40 = *(_DWORD *)v7;
      v258 = 0;
      (*(void (__thiscall **)(CRETabPages *, _DWORD, int))(v40 + 180))(v7, 0, v39);
      v316 = -1;
      std::wstring::~wstring(v305);
      goto LABEL_152;
    case 3:
      v41 = (CDlgMgr *)operator new(0x374u);
      left = v41;
      v316 = 10;
      if ( v41 )
        v42 = CPicCheckBox::CPicCheckBox(v41, a2);
      else
        v42 = 0;
      v43 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164);
      v7 = v42;
      v316 = -1;
      v275 = *(float *)&v42;
      v44 = (struct xercesc_2_5::DOMNode *)v43(a3, L"Checked");
      LOBYTE(v45) = XMLSystem::GetBool(v4, v44, 0);
      CRECheckBox::SetChecked(v42, v45);
      v46 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                     a3,
                     L"Text");
      v47 = (char *)XMLSystem::GetStringW(v297, v46, 0);
      v26 = *((_DWORD *)v47 + 6) < 8u;
      v316 = 11;
      if ( v26 )
        v48 = (const wchar_t *)(v47 + 4);
      else
        v48 = (const wchar_t *)*((_DWORD *)v47 + 1);
      CREStatic::SetText(v42, v48);
      v316 = -1;
      std::wstring::~wstring(v297);
      v49 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                             a3,
                                             L"UseCustomPic");
      Bool = XMLSystem::GetBool(v4, v49, 0);
      *((_BYTE *)v42 + 880) = Bool;
      if ( Bool )
      {
        v51 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                       a3,
                       L"Size");
        XMLSystem::GetVector2((float *)&left, v51, 0);
        v52 = *(_DWORD *)v42;
        v257 = (int)*(float *)&v260;
        (*(void (__thiscall **)(CPicCheckBox *, int))(v52 + 160))(v42, (int)*(float *)&left);
        v53 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD))(*(_DWORD *)a3 + 164))(
                       a3,
                       L"Location",
                       0);
        Vector2 = XMLSystem::GetVector2(v286, v53, (char *)v257);
        v55 = *(_DWORD *)v42;
        left = *(CDlgMgr **)Vector2;
        v260 = *((void **)Vector2 + 1);
        v257 = (int)*(float *)&v260;
        (*(void (__thiscall **)(CPicCheckBox *, int))(v55 + 156))(v42, (int)*(float *)&left);
        v56 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD))(*(_DWORD *)a3 + 164))(
                       a3,
                       L"PicSize",
                       0);
        XMLSystem::GetVector2((float *)&v267, v56, (char *)v257);
        CPicCheckBox::setPicSize(v42, (int)*(float *)&v267, (int)v268);
        std::string::string(v277);
        v57 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164);
        v316 = 12;
        v58 = (int *)v57(a3, L"NormalPic");
        String = XMLSystem::GetString((int)v288, v58, 0);
        LOBYTE(v316) = 13;
        std::string::operator=(v277, String);
        LOBYTE(v316) = 12;
        std::string::~string(v288);
        v60 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                       a3,
                       L"NormalPicRect");
        Vector4 = XMLSystem::GetVector4(v315, v60, 0);
        v62 = Vector4[1];
        v269 = *Vector4;
        v63 = Vector4[2];
        v272 = Vector4[3];
        v270 = v62;
        v271 = v63;
        SetRect(&v283, (int)v269, (int)v62, (int)v63, (int)v272);
        CPicCheckBox::setOriginPic((int)v42, (int)v277, &v283);
        v64 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                       a3,
                       L"HoverPic");
        v65 = XMLSystem::GetString((int)v303, v64, 0);
        LOBYTE(v316) = 14;
        std::string::operator=(v277, v65);
        LOBYTE(v316) = 12;
        std::string::~string(v303);
        v66 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                       a3,
                       L"HoverPicRect");
        v67 = XMLSystem::GetVector4(v312, v66, 0);
        v68 = v67[1];
        v269 = *v67;
        v69 = v67[2];
        v272 = v67[3];
        v270 = v68;
        v271 = v69;
        SetRect(&v283, (int)v269, (int)v68, (int)v69, (int)v272);
        CPicCheckBox::setMouseOverPic((int)v42, (int)v277, &v283);
        v70 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                       a3,
                       L"CheckedPic");
        v71 = XMLSystem::GetString((int)v289, v70, 0);
        LOBYTE(v316) = 15;
        std::string::operator=(v277, v71);
        LOBYTE(v316) = 12;
        std::string::~string(v289);
        v72 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                       a3,
                       L"CheckedPicRect");
        v73 = XMLSystem::GetVector4(v311, v72, 0);
        v74 = v73[1];
        v269 = *v73;
        v75 = v73[2];
        v272 = v73[3];
        v270 = v74;
        v271 = v75;
        SetRect(&v283, (int)v269, (int)v74, (int)v75, (int)v272);
        CPicCheckBox::setCheckPic((int)v42, (int)v277, &v283);
        v316 = -1;
        std::string::~string(v277);
        v7 = (CRETabPages *)LODWORD(v275);
      }
      goto LABEL_152;
    case 4:
      v76 = (CDlgMgr *)operator new(0x358u);
      left = v76;
      v316 = 16;
      if ( v76 )
        v7 = CRERadioButton::CRERadioButton(v76, a2);
      else
        v7 = 0;
      v77 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD))(*(_DWORD *)a3 + 164);
      v316 = -1;
      v78 = (struct xercesc_2_5::DOMNode *)v77(a3, L"Checked", 0);
      LOBYTE(v79) = XMLSystem::GetBool(v4, v78, (char *)1);
      CRERadioButton::SetChecked(v7, v79, (int)v258);
      v80 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *))(*(_DWORD *)a3 + 164);
      v258 = 0;
      v81 = (struct xercesc_2_5::DOMNode *)v80(a3);
      *((_DWORD *)v7 + 213) = XMLSystem::GetInt(v4, v81, (char *)L"GroupID");
      goto LABEL_152;
    case 5:
      v82 = (CDlgMgr *)operator new(0x6A4u);
      left = v82;
      v316 = 17;
      if ( v82 )
        v261 = CREComboBox::CREComboBox(v82, a2);
      else
        v261 = 0;
      v83 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *))(*(_DWORD *)a3 + 20);
      v316 = -1;
      v84 = v83(a3);
      v85 = *(int (__thiscall **)(int))(*(_DWORD *)v84 + 8);
      v273[0] = 0;
      if ( v85(v84) )
      {
        do
        {
          v86 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v84 + 4))(v84, v273[0]);
          if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v86 + 12))(v86) == 1 )
          {
            v87 = (int *)(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v86 + 164))(v86, L"Text");
            XMLSystem::GetStringW(&v279, v87, 0);
            v88 = Source[0];
            v316 = 18;
            if ( v282 < 8 )
              v88 = (wchar_t *)Source;
            CREComboBox::AddItem(v261, v88, 0);
            v316 = -1;
            std::wstring::~wstring(&v279);
          }
          v89 = *(int (__thiscall **)(int))(*(_DWORD *)v84 + 8);
          ++v273[0];
        }
        while ( v273[0] < (unsigned int)v89(v84) );
      }
      v7 = v261;
      CREDialog::InitControl(a2, v261);
      goto LABEL_152;
    case 6:
      v90 = (CDlgMgr *)operator new(0x27Cu);
      left = v90;
      v316 = 19;
      if ( v90 )
        v7 = CRESlider::CRESlider(v90, a2);
      else
        v7 = 0;
      v91 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164);
      v316 = -1;
      v92 = (int *)v91(a3, L"Range");
      XMLSystem::GetVector2(&v275, v92, 0);
      CRESlider::SetRange(v7, (int)v275, (int)*(float *)&v276);
      v93 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                             a3,
                                             L"Value");
      v94 = XMLSystem::GetInt(v4, v93, 0);
      CRESlider::SetValueInternal(v7, v94, 0);
      goto LABEL_152;
    case 7:
      v95 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                             a3,
                                             L"Password");
      if ( XMLSystem::GetBool(v4, v95, 0) )
      {
        v96 = (CDlgMgr *)operator new(0x338u);
        left = v96;
        v316 = 20;
        if ( v96 )
        {
          v97 = CPasswordEB::CPasswordEB(v96, a2);
          goto LABEL_60;
        }
      }
      else
      {
        v98 = (CDlgMgr *)operator new(0x318u);
        left = v98;
        v316 = 21;
        if ( v98 )
        {
          v97 = CREEditBox::CREEditBox(v98, a2);
          goto LABEL_60;
        }
      }
      v97 = 0;
LABEL_60:
      v7 = v97;
      v99 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164);
      v316 = -1;
      v100 = (int *)v99(a3, L"Text");
      v101 = (char *)XMLSystem::GetStringW(v290, v100, 0);
      v26 = *((_DWORD *)v101 + 6) < 8u;
      v316 = 22;
      if ( v26 )
        v102 = (wchar_t *)(v101 + 4);
      else
        v102 = (wchar_t *)*((_DWORD *)v101 + 1);
      CREEditBox::SetText(v7, v102, 0);
      v316 = -1;
      std::wstring::~wstring(v290);
      goto LABEL_152;
    case 8:
      v103 = (CDlgMgr *)operator new(0x370u);
      left = v103;
      v316 = 23;
      if ( v103 )
        v7 = CREIMEEditBox::CREIMEEditBox(v103, a2);
      else
        v7 = 0;
      v104 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164);
      v316 = -1;
      v105 = (int *)v104(a3, L"Text");
      v106 = (char *)XMLSystem::GetStringW(v292, v105, 0);
      v26 = *((_DWORD *)v106 + 6) < 8u;
      v316 = 24;
      if ( v26 )
        v107 = (wchar_t *)(v106 + 4);
      else
        v107 = (wchar_t *)*((_DWORD *)v106 + 1);
      CREEditBox::SetText(v7, v107, 0);
      v316 = -1;
      std::wstring::~wstring(v292);
      goto LABEL_152;
    case 11:
      v112 = (CDlgMgr *)operator new(0x4E0u);
      left = v112;
      v316 = 26;
      if ( v112 )
        v261 = CREListBox::CREListBox(v112, a2);
      else
        v261 = 0;
      v113 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *))(*(_DWORD *)a3 + 20);
      v316 = -1;
      v114 = v113(a3);
      v115 = *(int (__thiscall **)(int))(*(_DWORD *)v114 + 8);
      v273[0] = 0;
      if ( v115(v114) )
      {
        do
        {
          v116 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v114 + 4))(v114, v273[0]);
          if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v116 + 12))(v116) == 1 )
          {
            v117 = (int *)(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v116 + 164))(v116, L"Text");
            XMLSystem::GetStringW(&v279, v117, 0);
            v118 = Source[0];
            v316 = 27;
            if ( v282 < 8 )
              v118 = (const WCHAR *)Source;
            CREListBox::AddItem(v261, v118, 0);
            v316 = -1;
            std::wstring::~wstring(&v279);
          }
          v119 = *(int (__thiscall **)(int))(*(_DWORD *)v114 + 8);
          ++v273[0];
        }
        while ( v273[0] < (unsigned int)v119(v114) );
      }
      v7 = v261;
      goto LABEL_152;
    case 12:
      v120 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                              a3,
                                              L"Horizontal");
      v121 = XMLSystem::GetBool(v4, v120, 0);
      v257 = 616;
      if ( v121 )
      {
        v122 = (CDlgMgr *)operator new(v257);
        left = v122;
        v316 = 28;
        if ( v122 )
          v7 = CREHScrollBar::CREHScrollBar(v122, a2);
        else
          v7 = 0;
        v123 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164);
        v316 = -1;
        v124 = (int *)v123(a3, L"TrackRange");
        XMLSystem::GetVector2((float *)&v267, v124, 0);
        CREHScrollBar::SetTrackRange(v7, (int)*(float *)&v267, (int)v268);
        v125 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                                a3,
                                                L"CurPos");
        v126 = XMLSystem::GetInt(v4, v125, 0);
        CREHScrollBar::SetTrackPos(v7, v126);
        v127 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                                a3,
                                                L"PageSize");
        v128 = XMLSystem::GetInt(v4, v127, 0);
        CREHScrollBar::SetPageSize(v7, v128);
      }
      else
      {
        v129 = (CDlgMgr *)operator new(v257);
        left = v129;
        v316 = 29;
        if ( v129 )
          v7 = CREScrollBar::CREScrollBar(v129, a2);
        else
          v7 = 0;
        v130 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164);
        v316 = -1;
        v131 = (int *)v130(a3, L"TrackRange");
        XMLSystem::GetVector2((float *)v273, v131, 0);
        CREScrollBar::SetTrackRange(v7, (int)*(float *)v273, (int)*(float *)&v273[1]);
        v132 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                                a3,
                                                L"CurPos");
        v133 = XMLSystem::GetInt(v4, v132, 0);
        CREScrollBar::SetTrackPos(v7, v133);
        v134 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                                a3,
                                                L"PageSize");
        v135 = XMLSystem::GetInt(v4, v134, 0);
        CREScrollBar::SetPageSize(v7, v135);
      }
      goto LABEL_152;
    case 14:
      v136 = (CRETabPages *)operator new(0x22Cu);
      v275 = *(float *)&v136;
      v316 = 30;
      if ( v136 )
        v261 = CRETabPages::CRETabPages(v136, a2);
      else
        v261 = 0;
      v137 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 168);
      v316 = -1;
      v138 = (_DWORD *)v137(a3, L"TabPage");
      v139 = *v138;
      v275 = *(float *)&v138;
      v140 = v138;
      v141 = *(int (__thiscall **)(_DWORD *))(v139 + 8);
      v273[0] = 0;
      if ( v141(v140) )
      {
        do
        {
          v142 = (*(int (__thiscall **)(float, int))(*(_DWORD *)LODWORD(v275) + 4))(
                   COERCE_FLOAT(LODWORD(v275)),
                   v273[0]);
          if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v142 + 12))(v142) == 1 )
          {
            v143 = (int *)(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v142 + 164))(v142, L"Text");
            v144 = XMLSystem::GetStringW(v294, v143, 0);
            v26 = v144[6] < 8u;
            v316 = 31;
            if ( v26 )
              v267 = (unsigned int)(v144 + 1);
            else
              v267 = v144[1];
            v145 = (void (__thiscall **)(int, _DWORD))(*(_DWORD *)v261 + 172);
            v146 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v142 + 164))(
                                                    v142,
                                                    L"Width",
                                                    0);
            v147 = (char *)XMLSystem::GetInt(v4, v146, v258);
            v148 = *v145;
            v258 = v147;
            v148(v262, LODWORD(v268));
            v316 = -1;
            std::wstring::~wstring(v294);
            v149 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v142 + 168))(v142, L"TabPageControl");
            v150 = *(int (__thiscall **)(int))(*(_DWORD *)v149 + 8);
            *(float *)&v267 = 0.0;
            if ( v150(v149) )
            {
              do
              {
                v151 = (struct xercesc_2_5::DOMElement *)(*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v149 + 4))(
                                                           v149,
                                                           v267);
                if ( (*(unsigned __int16 (__thiscall **)(struct xercesc_2_5::DOMElement *))(*(_DWORD *)v151 + 12))(v151) == 1 )
                {
                  Control = CDlgMgr::CreateControl(left, a2, v151);
                  if ( Control )
                    CRETabPages::AddControlToTabPage(v261, v273[0], Control);
                }
                v153 = *(int (__thiscall **)(int))(*(_DWORD *)v149 + 8);
                ++v267;
              }
              while ( v267 < v153(v149) );
            }
          }
          v154 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v275) + 8);
          ++v273[0];
        }
        while ( v273[0] < (unsigned int)v154(LODWORD(v275)) );
      }
      v7 = v261;
      (*(void (__thiscall **)(CRETabPages *))(*(_DWORD *)v261 + 188))(v261);
      goto LABEL_152;
    case 17:
      v155 = (CDlgMgr *)operator new(0x300u);
      left = v155;
      v316 = 32;
      if ( v155 )
        v156 = CProgressBar::CProgressBar(v155, a2);
      else
        v156 = 0;
      v157 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164);
      v316 = -1;
      v158 = (int *)v157(a3, L"BackGroundPic");
      XMLSystem::GetString((int)&v279, v158, 0);
      v316 = 33;
      if ( v281 )
      {
        v159 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                        a3,
                        L"BackGroundPicRect");
        v160 = XMLSystem::GetVector4(v310, v159, 0);
        v161 = v160[1];
        v263 = *v160;
        v162 = v160[2];
        v266 = v160[3];
        v264 = v161;
        v265 = v162;
        SetRect(&rc, (int)v263, (int)v161, (int)v162, (int)v266);
        CProgressBar::SetBackGround((int)&v279, &rc);
      }
      v163 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                      a3,
                      L"ProgressPic");
      v164 = XMLSystem::GetString((int)v296, v163, 0);
      LOBYTE(v316) = 34;
      std::string::operator=(&v279, v164);
      LOBYTE(v316) = 33;
      std::string::~string(v296);
      if ( v281 )
      {
        v165 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                        a3,
                        L"ProgressPicRect");
        v166 = XMLSystem::GetVector4(v314, v165, 0);
        v167 = v166[1];
        v263 = *v166;
        v168 = v166[2];
        v266 = v166[3];
        v264 = v167;
        v265 = v168;
        SetRect(&rc, (int)v263, (int)v167, (int)v168, (int)v266);
        CProgressBar::SetProgressPic((int)&v279, &rc);
      }
      v169 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                      a3,
                      L"ProgressRect");
      v170 = XMLSystem::GetVector4(v313, v169, 0);
      v171 = v170[1];
      v263 = *v170;
      v172 = v170[2];
      v173 = v170[3];
      v265 = v172;
      v266 = v173;
      v264 = v171;
      *(float *)&left = v172 - v263;
      *(float *)&left = fabs(*(float *)&left);
      v174 = v173;
      if ( *(float *)&left > 0.0 )
      {
        v175 = v171;
      }
      else
      {
        *(float *)&left = v171 - v174;
        *(float *)&left = fabs(*(float *)&left);
        v175 = v171;
        if ( *(float *)&left <= 0.0 )
          goto LABEL_118;
      }
      SetRect(&rc, (int)v263, (int)v175, (int)v172, (int)v174);
      CProgressBar::SetProgressBarRect(v156, &rc);
LABEL_118:
      v176 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                              a3,
                                              L"ProgressBarColor");
      *((_DWORD *)v156 + 190) = XMLSystem::GetInt(v4, v176, 0);
      v177 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                              a3,
                                              L"BackGroundColor");
      *((_DWORD *)v156 + 191) = XMLSystem::GetInt(v4, v177, 0);
      v178 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                      a3,
                      L"Range");
      XMLSystem::GetVector2((float *)&v283.left, v178, 0);
      v179 = *(_DWORD *)v156;
      left = (CDlgMgr *)v283.left;
      *(float *)&v257 = 0.0;
      *((float *)v156 + 177) = *(float *)&v283.top;
      v256 = L"CurProgress";
      *((float *)v156 + 178) = *(float *)&left;
      v180 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                              a3,
                                              v256);
      Float = XMLSystem::GetFloat(v4, v180, (char *)v257);
      v182 = *(void (__thiscall **)(CProgressBar *))(v179 + 200);
      *(float *)&v257 = Float;
      v182(v156);
      v183 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD))(*(_DWORD *)a3 + 164))(
                                              a3,
                                              L"IncreaseType",
                                              0);
      *((_DWORD *)v156 + 188) = XMLSystem::GetInt(v4, v183, (char *)v257);
      v184 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                              a3,
                                              L"PasteDist");
      *((_DWORD *)v156 + 189) = XMLSystem::GetInt(v4, v184, 0);
      v185 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                      a3,
                      L"Sound");
      v186 = XMLSystem::GetString((int)v298, v185, 0);
      LOBYTE(v316) = 35;
      CProgressBar::SetSound(v186);
      LOBYTE(v316) = 33;
      std::string::~string(v298);
      v187 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                              a3,
                                              L"Volume");
      *(float *)&left = XMLSystem::GetFloat(v4, v187, 0);
      *(float *)&v257 = 0.0;
      *((float *)v156 + 184) = *(float *)&left;
      v188 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                              a3,
                                              L"Vertical");
      *((_BYTE *)v156 + 744) = XMLSystem::GetBool(v4, v188, (char *)v257);
      v7 = v156;
      v316 = -1;
      std::string::~string(&v279);
LABEL_152:
      if ( v7 )
      {
        *((_DWORD *)v7 + 34) = Int;
        v239 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD))(*(_DWORD *)a3 + 164))(
                        a3,
                        L"Size",
                        0);
        XMLSystem::GetVector2((float *)&v262, v239, v258);
        v240 = *(_DWORD *)v7;
        v258 = (char *)(int)v263;
        (*(void (__thiscall **)(CRETabPages *, int))(v240 + 160))(v7, (int)*(float *)&v262);
        v241 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD))(*(_DWORD *)a3 + 164))(
                        a3,
                        L"Location",
                        0);
        v242 = XMLSystem::GetVector2(&v264, v241, v258);
        v243 = *(_DWORD *)v7;
        v262 = *(int *)v242;
        v263 = v242[1];
        v258 = (char *)(int)v263;
        (*(void (__thiscall **)(CRETabPages *, int))(v243 + 156))(v7, (int)*(float *)&v262);
        v244 = (void (__thiscall **)(CRETabPages *))(*(_DWORD *)v7 + 136);
        v245 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD))(*(_DWORD *)a3 + 164))(
                                                a3,
                                                L"Visible",
                                                0);
        LOBYTE(v246) = XMLSystem::GetBool(v4, v245, v258);
        v247 = *v244;
        v258 = v246;
        v247(v7);
        v248 = (void (__thiscall **)(CRETabPages *, int))(*(_DWORD *)v7 + 128);
        v249 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD))(*(_DWORD *)a3 + 164))(
                                                a3,
                                                L"Enable",
                                                0);
        LOBYTE(v250) = XMLSystem::GetBool(v4, v249, v258);
        (*v248)(v7, v250);
      }
LABEL_154:
      result = v7;
      break;
    case 18:
      v189 = (CDlgMgr *)operator new(0x324u);
      left = v189;
      v316 = 36;
      if ( v189 )
        v7 = CMultiLineStatic::CMultiLineStatic(v189, a2, 0);
      else
        v7 = 0;
      v190 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164);
      v316 = -1;
      v191 = (int *)v190(a3, L"BackGroundPic");
      v192 = XMLSystem::GetString((int)v300, v191, 0);
      v316 = 37;
      CMultiLineStatic::SetBackGround((int)v7, v192);
      v316 = -1;
      std::string::~string(v300);
      v193 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                              a3,
                                              L"DisplayTime");
      *((float *)v7 + 183) = XMLSystem::GetFloat(v4, v193, 0);
      v194 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                              a3,
                                              L"DisappearTime");
      *((float *)v7 + 184) = XMLSystem::GetFloat(v4, v194, 0);
      v195 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                              a3,
                                              L"MaxLine");
      v196 = XMLSystem::GetInt(v4, v195, 0);
      CMultiLineStatic::SetMaxLine(v7, v196);
      goto LABEL_152;
    case 19:
      v197 = (CDlgMgr *)operator new(0x350u);
      left = v197;
      v316 = 38;
      if ( v197 )
        v7 = CProgressBTN::CProgressBTN(v197, a2);
      else
        v7 = 0;
      v198 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164);
      v316 = -1;
      v199 = (int *)v198(a3, L"ProgressPic");
      v200 = XMLSystem::GetString((int)v302, v199, 0);
      v316 = 39;
      CProgressBTN::SetProgressPic(v200, 0);
      v316 = -1;
      std::string::~string(v302);
      v201 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                      a3,
                      L"Range");
      XMLSystem::GetVector2(&v269, v201, 0);
      *(float *)&left = v269;
      *(float *)&v257 = 0.0;
      v256 = L"Text";
      *((float *)v7 + 206) = v270;
      *((float *)v7 + 207) = *(float *)&left;
      v202 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                      a3,
                      v256);
      v203 = (char *)XMLSystem::GetStringW(v304, v202, v257);
      v26 = *((_DWORD *)v203 + 6) < 8u;
      v316 = 40;
      if ( v26 )
        v204 = (const wchar_t *)(v203 + 4);
      else
        v204 = (const wchar_t *)*((_DWORD *)v203 + 1);
      CREStatic::SetText(v7, v204);
      v316 = -1;
      std::wstring::~wstring(v304);
      goto LABEL_152;
    case 20:
      v205 = (CDlgMgr *)operator new(0x27Cu);
      left = v205;
      v316 = 41;
      if ( v205 )
        v261 = CHotZonePic::CHotZonePic(v205, a2);
      else
        v261 = 0;
      v206 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD))(*(_DWORD *)a3 + 164);
      v316 = -1;
      v207 = (int *)v206(a3, L"Pic", 0);
      v208 = XMLSystem::GetString((int)v307, v207, v258);
      CHotZonePic::SetPic(v262, v208, 0);
      retaddr = -1;
      std::string::~string(v307);
      v209 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *))(*(_DWORD *)a3 + 168);
      v258 = (char *)L"HotZone";
      v210 = (CDlgMgr *)v209(a3);
      v211 = *(int (__thiscall **)(CDlgMgr *))(*(_DWORD *)v210 + 8);
      left = v210;
      *(float *)&v267 = 0.0;
      if ( v211(v210) )
      {
        do
        {
          v212 = (*(int (__thiscall **)(CDlgMgr *, unsigned int))(*(_DWORD *)v210 + 4))(v210, v267);
          if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v212 + 12))(v212) == 1 )
          {
            v213 = (int *)(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v212 + 164))(v212, L"Rect");
            XMLSystem::GetVector4(&v269, v213, 0);
            SetRect(&rc, (int)v269, (int)v270, (int)v271, (int)v272);
            v214 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v212 + 164))(
                                                    v212,
                                                    L"Data");
            v215 = XMLSystem::GetInt(v4, v214, 0);
            v216 = *(_DWORD *)v212;
            *(float *)&v257 = 0.0;
            v217 = v215;
            v218 = (int *)(*(int (__thiscall **)(int, const wchar_t *))(v216 + 164))(v212, L"Pic");
            v219 = XMLSystem::GetString((int)v309, v218, 0);
            v316 = 43;
            CHotZonePic::AddHotZone((int)v261, &rc, v219, 0, v217 != 0, 0);
            v316 = -1;
            std::string::~string(v309);
            v210 = left;
          }
          v220 = *(int (__thiscall **)(CDlgMgr *))(*(_DWORD *)v210 + 8);
          ++v267;
        }
        while ( v267 < v220(v210) );
      }
      v221 = (CDlgMgr *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 168))(
                          a3,
                          L"HoverPic");
      v222 = *(int (__thiscall **)(CDlgMgr *))(*(_DWORD *)v221 + 8);
      left = v221;
      *(float *)&v267 = 0.0;
      if ( v222(v221) )
      {
        do
        {
          v223 = (*(int (__thiscall **)(CDlgMgr *, unsigned int))(*(_DWORD *)v221 + 4))(v221, v267);
          if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v223 + 12))(v223) == 1 )
          {
            v224 = (int *)(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v223 + 164))(v223, L"Rect");
            XMLSystem::GetVector4(&v269, v224, 0);
            SetRect(&rc, (int)v269, (int)v270, (int)v271, (int)v272);
            v225 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v223 + 164))(
                                                    v223,
                                                    L"Type");
            v226 = XMLSystem::GetInt(v4, v225, 0);
            v227 = *(_DWORD *)v223;
            *(float *)&v257 = 0.0;
            v228 = v226;
            v229 = (int *)(*(int (__thiscall **)(int, const wchar_t *))(v227 + 164))(v223, L"Pic");
            v230 = XMLSystem::GetString((int)v299, v229, 0);
            v316 = 44;
            CHotZonePic::InsertHoverPic((int)v261, v228, v230, &rc.left, 0, 0, 0, NAN, 0.0);
            v316 = -1;
            std::string::~string(v299);
            v221 = left;
          }
          v231 = *(int (__thiscall **)(CDlgMgr *))(*(_DWORD *)v221 + 8);
          ++v267;
        }
        while ( v267 < v231(v221) );
      }
      v7 = v261;
      goto LABEL_152;
    case 22:
      v232 = (CDlgMgr *)operator new(0x40Cu);
      left = v232;
      v316 = 45;
      if ( v232 )
        v7 = CPictureLabel::CPictureLabel(v232, a2, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
      else
        v7 = 0;
      v233 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *, _DWORD))(*(_DWORD *)a3 + 164);
      *(float *)&v257 = 0.0;
      v316 = -1;
      *(float *)&left = COERCE_FLOAT(v251);
      v234 = (int *)v233(a3, L"Texture", 0);
      XMLSystem::GetStringW(v260, v234, v251[0]);
      CPictureLabel::ChangeTexture((int)v7, v251[4], v252, v253, v254, v255, (int)v256, v257, v258);
      v235 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *))(*(_DWORD *)a3 + 164);
      v258 = 0;
      *(float *)&v257 = COERCE_FLOAT(L"Rect");
      v236 = (int *)v235(a3);
      XMLSystem::GetVector4(v285, v236, (char *)v257);
      SetRect(&rc, (int)v285[0], (int)v285[1], (int)v285[2], (int)v285[3]);
      CPictureLabel::SetTextureRect(v7, rc);
      goto LABEL_152;
    case 24:
      v108 = (CDlgMgr *)operator new(0x3E8u);
      left = v108;
      v316 = 25;
      if ( v108 )
        v7 = CMLIMEEditBox::CMLIMEEditBox(v108, a2);
      else
        v7 = 0;
      v109 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164);
      v316 = -1;
      v110 = (struct xercesc_2_5::DOMNode *)v109(a3, L"ScrollWidth");
      v111 = XMLSystem::GetInt(v4, v110, 0);
      CMultiLineEB::setScrollBarSize(v7, v111, 0);
      goto LABEL_152;
    case 26:
      v237 = (CDlgMgr *)operator new(0x220u);
      left = v237;
      v316 = 46;
      if ( v237 )
        v238 = CSeperateLine::CSeperateLine(v237, a2);
      else
        v238 = 0;
      v316 = -1;
      v7 = v238;
      goto LABEL_152;
    default:
      goto LABEL_154;
  }
  return result;
}
