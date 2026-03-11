/*
 * func-name: sub_1029D5E0
 * func-address: 0x1029d5e0
 * callers: 0x100119a5
 * callees: 0x10002e19, 0x1000bf50, 0x1000e0ac, 0x1000f1c3, 0x102c8d6c, 0x102c9d50, 0x102c9ea8
 */

void __thiscall sub_1029D5E0(CREDialog *this)
{
  unsigned int v1; // ebp
  struct CREControl *Control; // eax
  CREStatic *v3; // edi
  char *v4; // ebx
  const char *v5; // eax
  const wchar_t *v6; // eax
  unsigned int v7; // ebp
  char *v8; // edi
  struct CREControl *v9; // eax
  CREStatic *v10; // edi
  char *v11; // ebx
  const char *v12; // eax
  const wchar_t *v13; // eax
  char *v14; // ebp
  int v15; // [esp-10h] [ebp-144h]
  int v16; // [esp-10h] [ebp-144h]
  int v17; // [esp-10h] [ebp-144h]
  int v18; // [esp-10h] [ebp-144h]
  int v19; // [esp-10h] [ebp-144h]
  int v20; // [esp-10h] [ebp-144h]
  int v21; // [esp-10h] [ebp-144h]
  int v22; // [esp-10h] [ebp-144h]
  int v23; // [esp-10h] [ebp-144h]
  int v24; // [esp-10h] [ebp-144h]
  int v25; // [esp-10h] [ebp-144h]
  int v26; // [esp-10h] [ebp-144h]
  int v27; // [esp-10h] [ebp-144h]
  int v28; // [esp-10h] [ebp-144h]
  int v29; // [esp-10h] [ebp-144h]
  int v30; // [esp-10h] [ebp-144h]
  int v31; // [esp-10h] [ebp-144h]
  int v32; // [esp-10h] [ebp-144h]
  int v33; // [esp-10h] [ebp-144h]
  int v34; // [esp-10h] [ebp-144h]
  int v35; // [esp-10h] [ebp-144h]
  int v36; // [esp-10h] [ebp-144h]
  int v37; // [esp-10h] [ebp-144h]
  int v38; // [esp-10h] [ebp-144h]
  int v39; // [esp-10h] [ebp-144h]
  int v40; // [esp-10h] [ebp-144h]
  int v41; // [esp-10h] [ebp-144h]
  int v42; // [esp-10h] [ebp-144h]
  int v43; // [esp-10h] [ebp-144h]
  int v44; // [esp-10h] [ebp-144h]
  int v45; // [esp-10h] [ebp-144h]
  int v46; // [esp-10h] [ebp-144h]
  int v47; // [esp-10h] [ebp-144h]
  int v48; // [esp-10h] [ebp-144h]
  int v49; // [esp-10h] [ebp-144h]
  int v50; // [esp-10h] [ebp-144h]
  int v51; // [esp-Ch] [ebp-140h]
  int v52; // [esp-Ch] [ebp-140h]
  int v53; // [esp-Ch] [ebp-140h]
  int v54; // [esp-Ch] [ebp-140h]
  int v55; // [esp-Ch] [ebp-140h]
  int v56; // [esp-Ch] [ebp-140h]
  int v57; // [esp-Ch] [ebp-140h]
  int v58; // [esp-Ch] [ebp-140h]
  int v59; // [esp-Ch] [ebp-140h]
  int v60; // [esp-Ch] [ebp-140h]
  int v61; // [esp-Ch] [ebp-140h]
  int v62; // [esp-Ch] [ebp-140h]
  int v63; // [esp-Ch] [ebp-140h]
  int v64; // [esp-Ch] [ebp-140h]
  int v65; // [esp-Ch] [ebp-140h]
  int v66; // [esp-Ch] [ebp-140h]
  int v67; // [esp-Ch] [ebp-140h]
  int v68; // [esp-Ch] [ebp-140h]
  int v69; // [esp-Ch] [ebp-140h]
  int v70; // [esp-Ch] [ebp-140h]
  int v71; // [esp-Ch] [ebp-140h]
  int v72; // [esp-Ch] [ebp-140h]
  int v73; // [esp-Ch] [ebp-140h]
  int v74; // [esp-Ch] [ebp-140h]
  int v75; // [esp-Ch] [ebp-140h]
  int v76; // [esp-Ch] [ebp-140h]
  int v77; // [esp-Ch] [ebp-140h]
  int v78; // [esp-Ch] [ebp-140h]
  int v79; // [esp-Ch] [ebp-140h]
  int v80; // [esp-Ch] [ebp-140h]
  int v81; // [esp-Ch] [ebp-140h]
  int v82; // [esp-Ch] [ebp-140h]
  int v83; // [esp-Ch] [ebp-140h]
  int v84; // [esp-Ch] [ebp-140h]
  int v85; // [esp-Ch] [ebp-140h]
  int v86; // [esp-Ch] [ebp-140h]
  int v87; // [esp-8h] [ebp-13Ch]
  int v88; // [esp-8h] [ebp-13Ch]
  int v89; // [esp-4h] [ebp-138h]
  int v90; // [esp-4h] [ebp-138h]
  int v91; // [esp+0h] [ebp-134h]
  int v92; // [esp+0h] [ebp-134h]
  int v93; // [esp+0h] [ebp-134h]
  int v94; // [esp+4h] [ebp-130h]
  int v95; // [esp+4h] [ebp-130h]
  int v96; // [esp+4h] [ebp-130h]
  int v97; // [esp+8h] [ebp-12Ch]
  int v98; // [esp+Ch] [ebp-128h]
  int v99; // [esp+10h] [ebp-124h]
  int v100[2]; // [esp+14h] [ebp-120h] BYREF
  char v101; // [esp+1Ch] [ebp-118h]
  _BYTE v102[28]; // [esp+30h] [ebp-104h] BYREF
  int i; // [esp+4Ch] [ebp-E8h]
  CREDialog *v104; // [esp+50h] [ebp-E4h]
  int v105; // [esp+54h] [ebp-E0h] BYREF
  void *v106; // [esp+58h] [ebp-DCh]
  char *v107; // [esp+5Ch] [ebp-D8h]
  int v108; // [esp+60h] [ebp-D4h]
  _BYTE v109[28]; // [esp+64h] [ebp-D0h] BYREF
  _BYTE v110[28]; // [esp+80h] [ebp-B4h] BYREF
  _BYTE v111[28]; // [esp+9Ch] [ebp-98h] BYREF
  _BYTE v112[28]; // [esp+B8h] [ebp-7Ch] BYREF
  _BYTE v113[28]; // [esp+D4h] [ebp-60h] BYREF
  _BYTE v114[28]; // [esp+F0h] [ebp-44h] BYREF
  _BYTE v115[28]; // [esp+10Ch] [ebp-28h] BYREF
  int v116; // [esp+130h] [ebp-4h]

  v104 = this;
  v1 = 0;
  if ( !*(_DWORD *)(sub_1000E0AC(v91, v94) + 12) )
  {
    std::string::string(v100, "walk_forwards");
    v116 = 0;
    std::string::string(v102, &unk_10323C04);
    LOBYTE(v116) = 1;
    sub_1000E0AC((int)v102, (int)v100);
    sub_10002E19(v15, v51, 1, 409);
    LOBYTE(v116) = 0;
    std::string::~string(v102);
    v116 = -1;
    std::string::~string(v100);
    std::string::string(v102, "walk_backwards");
    v116 = 2;
    std::string::string(v100, &unk_10323C1C);
    LOBYTE(v116) = 3;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v16, v52, 1, 411);
    LOBYTE(v116) = 2;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "strafe_left");
    v116 = 4;
    std::string::string(v100, &unk_10323C30);
    LOBYTE(v116) = 5;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v17, v53, 1, 413);
    LOBYTE(v116) = 4;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "strafe_right");
    v116 = 6;
    std::string::string(v100, &unk_10323C48);
    LOBYTE(v116) = 7;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v18, v54, 1, 415);
    LOBYTE(v116) = 6;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "jump");
    v116 = 8;
    std::string::string(v100, &unk_10323C58);
    LOBYTE(v116) = 9;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v19, v55, 1, 417);
    LOBYTE(v116) = 8;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "squat");
    v116 = 10;
    std::string::string(v100, &unk_10323C68);
    LOBYTE(v116) = 11;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v20, v56, 1, 419);
    LOBYTE(v116) = 10;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "auto_walk");
    v116 = 12;
    std::string::string(v100, &unk_10323C7C);
    LOBYTE(v116) = 13;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v21, v57, 1, 421);
    LOBYTE(v116) = 12;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "accelerate");
    v116 = 14;
    std::string::string(v100, &unk_10323C94);
    LOBYTE(v116) = 15;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v22, v58, 1, 423);
    LOBYTE(v116) = 14;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "armorSkill");
    v116 = 16;
    std::string::string(v100, &unk_10323CAC);
    LOBYTE(v116) = 17;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v23, v59, 1, 425);
    LOBYTE(v116) = 16;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "fire");
    v116 = 18;
    std::string::string(v100, &unk_10323CC0);
    LOBYTE(v116) = 19;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v24, v60, 1, 427);
    LOBYTE(v116) = 18;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "altfire");
    v116 = 20;
    std::string::string(v100, &unk_10323CD4);
    LOBYTE(v116) = 21;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v25, v61, 1, 429);
    LOBYTE(v116) = 20;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "QuickSwitch");
    v116 = 22;
    std::string::string(v100, &unk_10323CEC);
    LOBYTE(v116) = 23;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v26, v62, 1, 431);
    LOBYTE(v116) = 22;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "TakeOff");
    v116 = 24;
    std::string::string(v100, &unk_10323D00);
    LOBYTE(v116) = 25;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v27, v63, 1, 433);
    LOBYTE(v116) = 24;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "changeview");
    v116 = 26;
    std::string::string(v100, &unk_10323D18);
    LOBYTE(v116) = 27;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v28, v64, 1, 435);
    LOBYTE(v116) = 26;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "Stadia");
    v116 = 28;
    std::string::string(v100, &unk_10323D2C);
    LOBYTE(v116) = 29;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v29, v65, 1, 437);
    LOBYTE(v116) = 28;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "BigMap");
    v116 = 30;
    std::string::string(v100, &unk_10323D40);
    LOBYTE(v116) = 31;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v30, v66, 1, 439);
    LOBYTE(v116) = 30;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "decreaseradar");
    v116 = 32;
    std::string::string(v100, &unk_10323D5C);
    LOBYTE(v116) = 33;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v31, v67, 1, 441);
    LOBYTE(v116) = 32;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "increaseradar");
    v116 = 34;
    std::string::string(v100, &unk_10323D78);
    LOBYTE(v116) = 35;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v32, v68, 1, 443);
    LOBYTE(v116) = 34;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, &unk_10323D84);
    v116 = 36;
    std::string::string(v100, &unk_10323D88);
    LOBYTE(v116) = 37;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v33, v69, 1, 445);
    LOBYTE(v116) = 36;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "doVehicle");
    v116 = 38;
    std::string::string(v100, &unk_10323DA0);
    LOBYTE(v116) = 39;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v34, v70, 1, 447);
    LOBYTE(v116) = 38;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "Transform");
    v116 = 40;
    std::string::string(v100, &unk_10323DB8);
    LOBYTE(v116) = 41;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v35, v71, 3, 449);
    LOBYTE(v116) = 40;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "useestabskill");
    v116 = 42;
    std::string::string(v100, &unk_10323DD4);
    LOBYTE(v116) = 43;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v36, v72, 3, 451);
    LOBYTE(v116) = 42;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "driverseat");
    v116 = 44;
    std::string::string(v100, &unk_10323DF0);
    LOBYTE(v116) = 45;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v37, v73, 3, 453);
    LOBYTE(v116) = 44;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "prevseat");
    v116 = 46;
    std::string::string(v100, &unk_10323E0C);
    LOBYTE(v116) = 47;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v38, v74, 3, 457);
    LOBYTE(v116) = 46;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "nextseat");
    v116 = 48;
    std::string::string(v100, &unk_10323E28);
    LOBYTE(v116) = 49;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v39, v75, 3, 455);
    LOBYTE(v116) = 48;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "drive_forward");
    v116 = 50;
    std::string::string(v100, &unk_10323E48);
    LOBYTE(v116) = 51;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v40, v76, 3, 459);
    LOBYTE(v116) = 50;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "drive_backward");
    v116 = 52;
    std::string::string(v100, &unk_10323E64);
    LOBYTE(v116) = 53;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v41, v77, 3, 461);
    LOBYTE(v116) = 52;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "steer_left");
    v116 = 54;
    std::string::string(v100, &unk_10323E7C);
    LOBYTE(v116) = 55;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v42, v78, 3, 463);
    LOBYTE(v116) = 54;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v102, "steer_right");
    v116 = 56;
    std::string::string(v100, &unk_10323E94);
    LOBYTE(v116) = 57;
    sub_1000E0AC((int)v100, (int)v102);
    sub_10002E19(v43, v79, 3, 465);
    LOBYTE(v116) = 56;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v102);
    std::string::string(v109, &unk_10323EA0);
    v116 = 58;
    std::string::string(v100, &unk_10323EA4);
    LOBYTE(v116) = 59;
    sub_1000E0AC((int)v100, (int)v109);
    sub_10002E19(v44, v80, 3, 467);
    LOBYTE(v116) = 58;
    std::string::~string(v100);
    v116 = -1;
    std::string::~string(v109);
    std::string::string(v114, "down");
    v116 = 60;
    std::string::string(v109, &unk_10323EB8);
    LOBYTE(v116) = 61;
    sub_1000E0AC((int)v109, (int)v114);
    sub_10002E19(v45, v81, 3, 469);
    LOBYTE(v116) = 60;
    std::string::~string(v109);
    v116 = -1;
    std::string::~string(v114);
    std::string::string(v112, "handbrake");
    v116 = 62;
    std::string::string(v114, &unk_10323ED0);
    LOBYTE(v116) = 63;
    sub_1000E0AC((int)v114, (int)v112);
    sub_10002E19(v46, v82, 3, 471);
    LOBYTE(v116) = 62;
    std::string::~string(v114);
    v116 = -1;
    std::string::~string(v112);
    std::string::string(v110, "openchat");
    v116 = 64;
    std::string::string(v112, &unk_10323EE8);
    LOBYTE(v116) = 65;
    sub_1000E0AC((int)v112, (int)v110);
    sub_10002E19(v47, v83, 1, 473);
    LOBYTE(v116) = 64;
    std::string::~string(v112);
    v116 = -1;
    std::string::~string(v110);
    std::string::string(v111, "infomation");
    v116 = 66;
    std::string::string(v110, &unk_10323F00);
    LOBYTE(v116) = 67;
    sub_1000E0AC((int)v110, (int)v111);
    sub_10002E19(v48, v84, 1, 475);
    LOBYTE(v116) = 66;
    std::string::~string(v110);
    v116 = -1;
    std::string::~string(v111);
    std::string::string(v113, "InvitePlayer");
    v116 = 68;
    std::string::string(v111, &unk_10323F1C);
    LOBYTE(v116) = 69;
    sub_1000E0AC((int)v111, (int)v113);
    sub_10002E19(v49, v85, 1, 477);
    LOBYTE(v116) = 68;
    std::string::~string(v111);
    v116 = -1;
    std::string::~string(v113);
    std::string::string(v115, "GroupQuickCall");
    v116 = 70;
    std::string::string(v113, &unk_10323F38);
    LOBYTE(v116) = 71;
    sub_1000E0AC((int)v113, (int)v115);
    sub_10002E19(v50, v86, 1, 479);
    LOBYTE(v116) = 70;
    std::string::~string(v113);
    v116 = -1;
    std::string::~string(v115);
  }
  sub_1000E0AC(v92, v95);
  sub_1000BF50(v93, v96, v97, v98, v99, v100[0], v100[1], v101);
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v116 = 72;
  sub_1000E0AC(1, (int)&v105);
  sub_1000F1C3(v87, v89);
  i = 0;
  while ( v106 && v1 < (v107 - (_BYTE *)v106) / 92 )
  {
    Control = CREDialog::GetControl(v104, *(_DWORD *)((char *)v106 + i + 4));
    v3 = (CREStatic *)_RTDynamicCast(Control, 0, &CREControl `RTTI Type Descriptor', &CREButton `RTTI Type Descriptor');
    if ( v3 )
    {
      v4 = (char *)v106;
      if ( !v106 || v1 >= (v107 - (_BYTE *)v106) / 92 )
      {
        _invalid_parameter_noinfo();
        v4 = (char *)v106;
      }
      v5 = (const char *)std::string::c_str(&v4[i + 64]);
      v6 = atow(v5);
      CREStatic::SetText(v3, v6);
    }
    ++v1;
    i += 92;
  }
  sub_1000E0AC(3, (int)&v105);
  sub_1000F1C3(v88, v90);
  v7 = 0;
  for ( i = 0; ; i += 92 )
  {
    v8 = (char *)v106;
    if ( !v106 || v7 >= (v107 - (_BYTE *)v106) / 92 )
      break;
    v9 = CREDialog::GetControl(v104, *(_DWORD *)((char *)v106 + i + 4));
    v10 = (CREStatic *)_RTDynamicCast(v9, 0, &CREControl `RTTI Type Descriptor', &CREButton `RTTI Type Descriptor');
    if ( v10 )
    {
      v11 = (char *)v106;
      if ( !v106 || v7 >= (v107 - (_BYTE *)v106) / 92 )
      {
        _invalid_parameter_noinfo();
        v11 = (char *)v106;
      }
      v12 = (const char *)std::string::c_str(&v11[i + 64]);
      v13 = atow(v12);
      CREStatic::SetText(v10, v13);
    }
    ++v7;
  }
  v116 = -1;
  if ( v106 )
  {
    v14 = v107;
    v104 = (CREDialog *)v106;
    if ( v106 != v107 )
    {
      do
      {
        v116 = 74;
        std::string::~string(v8 + 64);
        LOBYTE(v116) = 73;
        std::string::~string(v8 + 36);
        v116 = -1;
        std::string::~string(v8 + 8);
        v8 += 92;
        v104 = (CREDialog *)v8;
      }
      while ( v8 != v14 );
      v8 = (char *)v106;
    }
    operator delete(v8);
  }
}
