/*
 * func-name: ?Update@Editor@@QAEXPAVWorld@@@Z
 * func-address: 0x1008ce00
 * callers: none
 * callees: 0x10001040, 0x10001330, 0x10001440, 0x1000ac40, 0x1000bc40, 0x1000f2e0, 0x10019470, 0x1001cb70, 0x1004c3d0, 0x10052490, 0x1007bcc0, 0x1007bd30, 0x1007dd80, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x1007eed0, 0x1007f840, 0x10080c60, 0x10085820, 0x1008bd00, 0x1008c3e0, 0x100913d0, 0x10091b60, 0x10094190, 0x100958f0, 0x100971c0, 0x1009dd90, 0x1009ee50, 0x100db0e0, 0x100ee930, 0x10116f70, 0x101372f0, 0x10178680, 0x10178c20, 0x10179050, 0x10179840, 0x1017a0b0, 0x101a2500, 0x101a2516, 0x101a26a0, 0x101a26c0
 */

void __userpurge Editor::Update(Editor *this@<ecx>, int a2@<ebx>, struct World *a3)
{
  LARGE_INTEGER *v4; // eax
  float *v5; // eax
  float *v6; // eax
  struct Engine *v7; // eax
  bool v8; // c0
  bool v9; // c3
  char v10; // al
  int v11; // ecx
  char v12; // bl
  unsigned int i; // esi
  int v14; // ecx
  float *v15; // eax
  int v16; // ecx
  bool v17; // zf
  float v18; // esi
  float v19; // edi
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // eax
  float v27; // edx
  float v28; // eax
  float v29; // ecx
  float *v30; // eax
  float *v31; // eax
  float v32; // edx
  float *Rotation; // eax
  float *v34; // esi
  float *v35; // eax
  float *v36; // eax
  float v37; // ecx
  void *Scaling; // eax
  int v39; // eax
  int v40; // edx
  float *WorldBBox; // eax
  float v42; // eax
  float v43; // ecx
  double v44; // st7
  struct Editor::Undo *v45; // eax
  unsigned int v46; // edx
  int v47; // ecx
  unsigned int v48; // edi
  int v49; // ebx
  int v50; // eax
  bool v51; // al
  int v52; // ecx
  float v53; // edx
  float v54; // eax
  float *v55; // eax
  float *v56; // eax
  float *v57; // eax
  const void *v58; // eax
  float v59; // edx
  const void *v60; // esi
  float v61; // eax
  float v62; // ecx
  bool v63; // al
  int v64; // ebx
  unsigned int v65; // esi
  struct Mesh *Mesh; // eax
  float *v67; // esi
  CRETimer *v68; // eax
  Engine *v69; // eax
  char *v70; // [esp+4h] [ebp-330h]
  int v71; // [esp+8h] [ebp-32Ch]
  bool v72; // [esp+1Fh] [ebp-315h]
  float v73; // [esp+20h] [ebp-314h]
  float v74; // [esp+20h] [ebp-314h]
  float v75; // [esp+20h] [ebp-314h]
  float v76; // [esp+20h] [ebp-314h]
  float v77; // [esp+20h] [ebp-314h]
  float v78; // [esp+20h] [ebp-314h]
  float v79; // [esp+20h] [ebp-314h]
  float v80; // [esp+20h] [ebp-314h]
  char v81; // [esp+24h] [ebp-310h]
  float v82; // [esp+28h] [ebp-30Ch]
  float v83; // [esp+28h] [ebp-30Ch]
  float v84; // [esp+28h] [ebp-30Ch]
  float v85; // [esp+28h] [ebp-30Ch]
  float v86; // [esp+28h] [ebp-30Ch]
  float v87; // [esp+28h] [ebp-30Ch]
  float v88; // [esp+2Ch] [ebp-308h]
  float v89; // [esp+30h] [ebp-304h]
  unsigned int v90; // [esp+30h] [ebp-304h]
  float v91; // [esp+30h] [ebp-304h]
  float v92; // [esp+30h] [ebp-304h]
  float v93; // [esp+34h] [ebp-300h] BYREF
  float v94; // [esp+38h] [ebp-2FCh]
  float v95; // [esp+3Ch] [ebp-2F8h] BYREF
  float v96; // [esp+40h] [ebp-2F4h]
  float v97; // [esp+44h] [ebp-2F0h]
  float v98; // [esp+48h] [ebp-2ECh] BYREF
  float v99; // [esp+4Ch] [ebp-2E8h]
  float v100; // [esp+50h] [ebp-2E4h]
  float v101; // [esp+54h] [ebp-2E0h]
  float v102; // [esp+58h] [ebp-2DCh]
  float v103; // [esp+5Ch] [ebp-2D8h]
  float v104; // [esp+60h] [ebp-2D4h]
  float v105; // [esp+64h] [ebp-2D0h]
  float v106; // [esp+68h] [ebp-2CCh] BYREF
  float v107; // [esp+6Ch] [ebp-2C8h]
  float v108; // [esp+70h] [ebp-2C4h]
  _BYTE v109[4]; // [esp+74h] [ebp-2C0h] BYREF
  void *v110; // [esp+78h] [ebp-2BCh]
  int v111; // [esp+7Ch] [ebp-2B8h]
  int v112; // [esp+80h] [ebp-2B4h]
  float v113[4]; // [esp+84h] [ebp-2B0h] BYREF
  float v114; // [esp+94h] [ebp-2A0h]
  float v115; // [esp+98h] [ebp-29Ch]
  float v116; // [esp+9Ch] [ebp-298h]
  float v117; // [esp+A0h] [ebp-294h]
  float v118; // [esp+A4h] [ebp-290h]
  float v119; // [esp+A8h] [ebp-28Ch]
  float v120[16]; // [esp+ACh] [ebp-288h] BYREF
  float v121[16]; // [esp+ECh] [ebp-248h] BYREF
  struct tagRECT Rect; // [esp+12Ch] [ebp-208h] BYREF
  int v123[16]; // [esp+13Ch] [ebp-1F8h] BYREF
  int v124[16]; // [esp+17Ch] [ebp-1B8h] BYREF
  float v125[16]; // [esp+1BCh] [ebp-178h] BYREF
  float v126[16]; // [esp+1FCh] [ebp-138h] BYREF
  float v127[27]; // [esp+23Ch] [ebp-F8h] BYREF
  float v128[16]; // [esp+2A8h] [ebp-8Ch] BYREF
  float v129[16]; // [esp+2E8h] [ebp-4Ch] BYREF
  int v130; // [esp+330h] [ebp-4h]

  if ( !*((_BYTE *)this + 2056) )
    return;
  v4 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v4);
  *((_DWORD *)this + 512) = a3;
  v5 = sub_1007EED0(&v93);
  v89 = *((float *)this + 516) - *v5;
  v73 = *((float *)this + 517) - v5[1];
  v6 = sub_1007EED0(&v93);
  *((float *)this + 516) = *v6;
  *((float *)this + 517) = v6[1];
  v7 = Engine::Instance();
  GetClientRect(*((HWND *)v7 + 35), &Rect);
  v8 = *((float *)this + 516) > 0.0;
  v9 = 0.0 == *((float *)this + 516);
  *((_BYTE *)this + 2072) = 1;
  if ( !v8 && !v9
    || (double)Rect.right < *((float *)this + 516)
    || *((float *)this + 517) < 0.0
    || (double)Rect.bottom < *((float *)this + 517) )
  {
    *((_BYTE *)this + 2072) = 0;
  }
  if ( *((_BYTE *)this + 2058) )
    goto LABEL_113;
  Editor::UpdateCamera(this, a2, (int)this, 0, (int)a3);
  v10 = *((_BYTE *)this + 2096);
  if ( !v10 )
  {
    v11 = *((_DWORD *)this + 517);
    *((_DWORD *)this + 534) = *((_DWORD *)this + 516);
    *((_DWORD *)this + 535) = v11;
    *((_BYTE *)this + 2059) = 0;
    *((_BYTE *)this + 2073) = 0;
  }
  if ( !*((_DWORD *)this + 509) && v10 )
    Editor::HandleSelections(this);
  if ( Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 9), 0)
    && (*((_BYTE *)this + 2072) || *((_BYTE *)this + 2059)) )
  {
    v12 = 1;
    v81 = 1;
  }
  else
  {
    v81 = 0;
    v12 = 0;
  }
  if ( byte_102857BC && !v12 )
    World::RegenerateOcclusionTree(a3);
  sub_1000BC40(v121);
  if ( (dword_102857B8 & 1) == 0 )
  {
    dword_102857B8 |= 1u;
    dword_102857AC = 0;
    dword_102857B0 = 0;
    dword_102857B4 = 0;
    atexit(sub_101B8BF0);
    v130 = -1;
  }
  if ( !v12 || !byte_102857BC )
    sub_10052490(&dword_102857A8);
  for ( i = 0; ; ++i )
  {
    v14 = *((_DWORD *)this + 562);
    if ( !v14 || i >= (*((_DWORD *)this + 563) - v14) >> 2 )
      break;
    v15 = (float *)(*(_DWORD *)(*((_DWORD *)this + 562) + 4 * i) + 856);
    LODWORD(v93) = (*((_DWORD *)this + 563) - v14) >> 2;
    v82 = 1.0 / (double)LODWORD(v93);
    v95 = v82 * *v15;
    v96 = v15[1] * v82;
    v97 = v82 * v15[2];
    v121[12] = v121[12] + v95;
    v121[13] = v121[13] + v96;
    v121[14] = v97 + v121[14];
    if ( v81 && !byte_102857BC )
    {
      v16 = *((_DWORD *)this + 562);
      if ( !v16 || i >= (*((_DWORD *)this + 563) - v16) >> 2 )
        invalid_parameter_noinfo();
      sub_100913D0((int)&dword_102857A8, (void *)(*(_DWORD *)(*((_DWORD *)this + 562) + 4 * i) + 856));
    }
  }
  v17 = *((_BYTE *)this + 60) == 0;
  v18 = *((float *)this + 516);
  v19 = *((float *)this + 517);
  v103 = v121[12];
  v104 = v121[13];
  v105 = v121[14];
  v83 = v18;
  v88 = v19;
  if ( v17 )
  {
    v93 = 0.0;
    v18 = 0.0;
    v94 = 0.0;
    v19 = 0.0;
    v83 = 0.0;
    v88 = 0.0;
  }
  sub_10001440(v113);
  v20 = *((_DWORD *)this + 562);
  v130 = 1;
  if ( v20 )
  {
    if ( (*((_DWORD *)this + 563) - v20) >> 2 )
    {
      v21 = *((_DWORD *)this + 562);
      if ( *(_DWORD *)(*(_DWORD *)v21 + 716) )
      {
        if ( !v21 || !((*((_DWORD *)this + 563) - v21) >> 2) )
          invalid_parameter_noinfo();
        if ( *(_DWORD *)(*(_DWORD *)(**((_DWORD **)this + 562) + 716) + 308) )
        {
          v22 = *((_DWORD *)this + 526);
          if ( v22 )
          {
            qmemcpy(v121, (const void *)(v22 + 164), sizeof(v121));
            *((float *)this + 491) = 1.0;
            v23 = std::vector<Model *>::operator[]((_DWORD *)this + 561, 0);
            v24 = sub_1007F840(*((_DWORD *)this + 526), 0, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v23 + 716) + 308));
            v25 = std::vector<Model *>::operator[]((_DWORD *)this + 561, 0);
            sub_10001330((float *)v124, (const void *)(*(_DWORD *)(*(_DWORD *)v25 + 716) + 224));
            if ( v24 )
              qmemcpy(v124, (const void *)(v24 + 164), sizeof(v124));
            sub_10178C20(v124);
            v26 = *((_DWORD *)this + 510);
            if ( v26 )
            {
              if ( v26 == 1 )
              {
                sub_1000BC40(v120);
                v31 = (float *)*((_DWORD *)this + 526);
                v32 = v31[53];
                v31 += 53;
                v120[12] = v32;
                v120[13] = v31[1];
                v120[14] = v31[2];
                Gizmo::OnUpdate((char *)this + 1104, v81, LODWORD(v83), LODWORD(v88), (char *)this + 252, v120);
                v71 = *((_DWORD *)this + 526) + 100;
                Rotation = Gizmo::GetRotation((int)this + 1104, v126);
                v34 = sub_1001CB70(Rotation, v125, v71);
                v35 = (float *)*((_DWORD *)this + 526);
                qmemcpy(v120, v34, sizeof(v120));
                v120[12] = v35[37];
                v120[13] = v35[38];
                v120[14] = v35[39];
                qmemcpy(v35 + 25, v120, 0x40u);
              }
              else
              {
                sub_1000BC40(v120);
                v36 = (float *)*((_DWORD *)this + 526);
                v37 = v36[53];
                v36 += 53;
                v120[12] = v37;
                v120[13] = v36[1];
                v120[14] = v36[2];
                Gizmo::OnUpdate((char *)this + 1104, v81, LODWORD(v83), LODWORD(v88), (char *)this + 252, v120);
                Scaling = Gizmo::GetScaling(v126);
                qmemcpy(
                  (void *)(*((_DWORD *)this + 526) + 100),
                  sub_1001CB70((void *)(*((_DWORD *)this + 526) + 100), v125, (int)Scaling),
                  0x40u);
              }
            }
            else
            {
              Gizmo::OnUpdate((char *)this + 1104, v81, LODWORD(v83), LODWORD(v88), (char *)this + 252, v121);
              v27 = *((float *)this + 476);
              v98 = 0.0;
              v28 = *((float *)this + 477);
              v99 = 0.0;
              v29 = *((float *)this + 478);
              v100 = 0.0;
              v106 = v27;
              v107 = v28;
              v108 = v29;
              sub_10179050(&v106, &v98);
              v30 = (float *)(*((_DWORD *)this + 526) + 148);
              *v30 = v98;
              v30[1] = v99;
              v30[2] = v100;
            }
            goto LABEL_112;
          }
        }
      }
    }
  }
  v39 = *((_DWORD *)this + 562);
  if ( v39 )
  {
    if ( (*((_DWORD *)this + 563) - v39) >> 2 )
    {
      v40 = *((_DWORD *)this + 562);
      if ( *(_DWORD *)(*(_DWORD *)v40 + 716) )
      {
        if ( !v40 || !((*((_DWORD *)this + 563) - v40) >> 2) )
          invalid_parameter_noinfo();
        WorldBBox = (float *)StaticModel::GetWorldBBox(*(_DWORD *)(**((_DWORD **)this + 562) + 716), v120);
        v113[1] = WorldBBox[1];
        v113[2] = WorldBBox[2];
        v113[3] = WorldBBox[3];
        v114 = WorldBBox[4];
        v115 = WorldBBox[5];
        v116 = WorldBBox[6];
        v117 = WorldBBox[7];
        v118 = WorldBBox[8];
        v119 = WorldBBox[9];
        sub_1017A0B0(v120);
      }
    }
  }
  v101 = v117 - v114;
  v84 = v118 - v115;
  v102 = v119 - v116;
  v85 = v84 * v84 + v101 * v101 + v102 * v102;
  v86 = sqrt(v85);
  v17 = *((_BYTE *)this + 2118) == 0;
  *((float *)this + 491) = v86 * 0.5;
  v70 = (char *)this + 252;
  if ( v17 )
  {
    v93 = -10.0;
    v94 = -10.0;
    Gizmo::OnUpdate((char *)this + 1104, 0, -10.0, -10.0, v70, v121);
  }
  else
  {
    Gizmo::OnUpdate((char *)this + 1104, v81, LODWORD(v18), LODWORD(v19), v70, v121);
  }
  v42 = *((float *)this + 477);
  v43 = *((float *)this + 478);
  v95 = *((float *)this + 476);
  v102 = v95 - v103;
  qmemcpy(v123, (char *)this + 1856, sizeof(v123));
  v101 = v42 - v104;
  v87 = v43 - v105;
  v98 = v102;
  v99 = v101;
  v100 = v87;
  v95 = 0.0;
  v96 = 0.0;
  v97 = 0.0;
  *(float *)&v123[12] = 0.0;
  *(float *)&v123[13] = 0.0;
  *(float *)&v123[14] = 0.0;
  if ( (dword_102857B8 & 2) == 0 )
  {
    dword_102857B8 |= 2u;
    flt_1028579C = 0.0;
    flt_102857A0 = 0.0;
    flt_102857A4 = 0.0;
  }
  if ( byte_102857BC && v81 )
  {
    v44 = 0.0;
    flt_1028579C = v102 + flt_1028579C;
    flt_102857A0 = v101 + flt_102857A0;
    flt_102857A4 = v87 + flt_102857A4;
  }
  else
  {
    v44 = 0.0;
    flt_1028579C = v98;
    flt_102857A0 = v99;
    flt_102857A4 = v100;
  }
  if ( !*((_BYTE *)this + 2059) && (v44 != v89 || v44 != v73) )
  {
    if ( v81 )
    {
      *((_BYTE *)this + 2059) = 1;
      v45 = (struct Editor::Undo *)sub_10091B60((char *)this + 2244, 0);
      LOBYTE(v130) = 2;
      Editor::PushUndo(this, v45);
      LOBYTE(v130) = 1;
      sub_1000F2E0((int)v127);
      if ( *((_DWORD *)this + 510) != 2
        && *((_BYTE *)this + 2072)
        && Input::ControlDown(*((Input **)this + 1), *((_DWORD *)this + 11), 0) )
      {
        Editor::CloneSelected(this);
      }
    }
  }
  v46 = 0;
  v90 = 0;
  while ( 1 )
  {
    v47 = *((_DWORD *)this + 562);
    if ( !v47 || v46 >= (*((_DWORD *)this + 563) - v47) >> 2 )
      break;
    v48 = v90;
    v49 = *(_DWORD *)(*((_DWORD *)this + 562) + 4 * v90);
    v72 = 0;
    if ( v81 && *((_DWORD *)this + 509) )
    {
      v50 = *((_DWORD *)this + 510);
      if ( v50 )
      {
        if ( v50 == 1 )
        {
          v51 = sub_1007BCC0((float *)v123, 0.001);
          v52 = *((_DWORD *)this + 562);
          v72 = !v51;
          if ( !v52 || (unsigned int)((*((_DWORD *)this + 563) - v52) >> 2) <= 1 )
            goto LABEL_98;
          sub_1000BC40((float *)v124);
          sub_10178680(v103, v104, v105);
          sub_1000BC40(v125);
          sub_10178680(*(float *)(v49 + 856), *(float *)(v49 + 860), *(float *)(v49 + 864));
          v53 = *(float *)(v49 + 860);
          v54 = *(float *)(v49 + 864);
          qmemcpy(v120, (const void *)(v49 + 868), sizeof(v120));
          v120[12] = *(float *)(v49 + 856);
          v120[13] = v53;
          v120[14] = v54;
          v55 = sub_1007BD30(v124, v128);
          v56 = sub_1001CB70(v55, v129, (int)v123);
          v57 = sub_1001CB70(v56, v126, (int)v124);
          qmemcpy(v120, sub_1001CB70(v120, v127, (int)v57), sizeof(v120));
          v58 = (const void *)sub_10179840(v127);
          v59 = v120[12];
          v60 = v58;
          v61 = v120[13];
          qmemcpy((void *)(v49 + 868), v60, 0x40u);
          v62 = v120[14];
          v48 = v90;
          *(float *)(v49 + 856) = v59;
          *(float *)(v49 + 860) = v61;
          *(float *)(v49 + 864) = v62;
        }
        else if ( v50 == 2 )
        {
          v63 = sub_1007BCC0((float *)v123, 0.001);
          v79 = *(float *)(v49 + 856) - v103;
          v72 = !v63;
          v91 = *(float *)(v49 + 860) - v104;
          v93 = *(float *)(v49 + 864) - v105;
          v95 = v79;
          v96 = v91;
          v97 = v93;
          v98 = 0.0;
          v99 = 0.0;
          v100 = 0.0;
          sub_10179050(&v95, &v98);
          v95 = v98;
          v93 = v98 + v103;
          v96 = v99;
          v97 = v100;
          v80 = v99 + v104;
          v92 = v100 + v105;
          v106 = v93;
          *(float *)(v49 + 856) = v93;
          v107 = v80;
          *(float *)(v49 + 860) = v80;
          v108 = v92;
          *(float *)(v49 + 864) = v92;
LABEL_98:
          sub_1007DD80((float *)(v49 + 868), (int)v123);
        }
      }
      else if ( *((_BYTE *)this + 2084) && *((float *)this + 522) > 0.0000099999997 )
      {
        v74 = fabs(flt_1028579C);
        if ( *((float *)this + 522) * 0.5 < v74 )
        {
          v72 = 1;
          *(float *)(v49 + 856) = (double)(int)((*(float *)sub_1004C3D0(&dword_102857A8, v90) + flt_1028579C)
                                              / *((float *)this + 522))
                                * *((float *)this + 522);
        }
        v75 = fabs(flt_102857A0);
        if ( *((float *)this + 522) * 0.5 < v75 )
        {
          v72 = 1;
          *(float *)(v49 + 860) = (double)(int)((*(float *)(sub_1004C3D0(&dword_102857A8, v90) + 4) + flt_102857A0)
                                              / *((float *)this + 522))
                                * *((float *)this + 522);
        }
        v76 = fabs(flt_102857A4);
        if ( *((float *)this + 522) * 0.5 < v76 )
        {
          v72 = 1;
          *(float *)(v49 + 864) = (double)(int)((*(float *)(sub_1004C3D0(&dword_102857A8, v90) + 8) + flt_102857A4)
                                              / *((float *)this + 522))
                                * *((float *)this + 522);
        }
      }
      else
      {
        v77 = v102 * v102 + v101 * v101 + v87 * v87;
        v78 = sqrt(v77);
        v72 = v78 > 0.0099999998;
        *(float *)(v49 + 856) = *(float *)(v49 + 856) + v102;
        *(float *)(v49 + 860) = v101 + *(float *)(v49 + 860);
        *(float *)(v49 + 864) = v87 + *(float *)(v49 + 864);
      }
    }
    v64 = *(_DWORD *)(v49 + 716);
    if ( v64 && *(_DWORD *)(v64 + 308) && v72 )
    {
      v65 = 0;
      v110 = 0;
      v111 = 0;
      v112 = 0;
      LOBYTE(v130) = 3;
      ModelFrame::EnumerateMeshes(v109);
      while ( v110 && v65 < (v111 - (int)v110) >> 2 )
      {
        Mesh = ModelFrame::GetMesh(*((ModelFrame **)v110 + v65), 0);
        GetSystemTime((LPSYSTEMTIME)((char *)Mesh + 88));
        ++v65;
      }
      LOBYTE(v130) = 1;
      if ( v110 )
        operator delete(v110);
      v110 = 0;
      v111 = 0;
      v112 = 0;
    }
    v90 = v48 + 1;
    v46 = v48 + 1;
  }
  byte_102857BC = v81;
  if ( !v81 )
    *((_BYTE *)this + 2059) = 0;
LABEL_112:
  v130 = -1;
  sub_1017A0B0(v113);
LABEL_113:
  v67 = (float *)((char *)Profiler::Get() + 72);
  v68 = REGetGlobalTimer();
  *v67 = CRETimer::StopMiniTimer(v68) + *v67;
  v69 = Engine::Instance();
  Engine::Update(v69, (Editor *)((char *)this + 252));
}
