/*
 * func-name: sub_1007AA60
 * func-address: 0x1007aa60
 * callers: none
 * callees: 0x10001370, 0x10001440, 0x1004c2c0, 0x1004d2e0, 0x10063350, 0x1007b540, 0x1007bb70, 0x1017a0b0, 0x1017b990
 */

int __cdecl sub_1007AA60(float *a1, int a2, int a3)
{
  int v3; // ebx
  float v4; // ecx
  float v5; // edx
  float v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  float v10; // ecx
  float v11; // edx
  float *v12; // eax
  float *v13; // eax
  int *v14; // edi
  float *v15; // esi
  float *v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  float *v20; // eax
  float *v21; // eax
  float v22; // esi
  float v23; // edi
  float v24; // ebx
  float *v25; // eax
  float v26; // eax
  float *v27; // eax
  float *v28; // eax
  float *v29; // eax
  float *v30; // eax
  float *v31; // eax
  float v33; // [esp+10h] [ebp-248h]
  float v34; // [esp+10h] [ebp-248h]
  float v35; // [esp+10h] [ebp-248h]
  float v36; // [esp+10h] [ebp-248h]
  float v37; // [esp+10h] [ebp-248h]
  float v38; // [esp+10h] [ebp-248h]
  float v39; // [esp+14h] [ebp-244h]
  float v40; // [esp+14h] [ebp-244h]
  float v41; // [esp+14h] [ebp-244h]
  float v42; // [esp+14h] [ebp-244h]
  float v43; // [esp+14h] [ebp-244h]
  float v44; // [esp+14h] [ebp-244h]
  char v45; // [esp+1Bh] [ebp-23Dh]
  bool v46; // [esp+1Bh] [ebp-23Dh]
  float v47; // [esp+1Ch] [ebp-23Ch]
  float v48; // [esp+1Ch] [ebp-23Ch]
  float v49; // [esp+1Ch] [ebp-23Ch]
  float v50; // [esp+1Ch] [ebp-23Ch]
  float v51; // [esp+1Ch] [ebp-23Ch]
  float v52; // [esp+1Ch] [ebp-23Ch]
  int v53; // [esp+20h] [ebp-238h]
  float v54; // [esp+20h] [ebp-238h]
  float v55; // [esp+24h] [ebp-234h]
  float v56; // [esp+28h] [ebp-230h]
  float v57; // [esp+2Ch] [ebp-22Ch] BYREF
  float v58; // [esp+30h] [ebp-228h]
  float v59; // [esp+34h] [ebp-224h]
  float v60; // [esp+38h] [ebp-220h] BYREF
  float v61; // [esp+3Ch] [ebp-21Ch]
  float v62; // [esp+40h] [ebp-218h]
  float v63; // [esp+44h] [ebp-214h]
  float v64; // [esp+48h] [ebp-210h]
  float v65; // [esp+4Ch] [ebp-20Ch]
  float v66; // [esp+50h] [ebp-208h]
  float v67; // [esp+54h] [ebp-204h]
  float v68; // [esp+58h] [ebp-200h]
  float v69; // [esp+5Ch] [ebp-1FCh]
  float v70; // [esp+60h] [ebp-1F8h]
  float v71; // [esp+64h] [ebp-1F4h]
  float v72; // [esp+68h] [ebp-1F0h]
  float v73; // [esp+6Ch] [ebp-1ECh]
  float v74; // [esp+70h] [ebp-1E8h]
  float v75; // [esp+74h] [ebp-1E4h]
  float v76; // [esp+78h] [ebp-1E0h]
  float v77; // [esp+7Ch] [ebp-1DCh]
  float v78; // [esp+80h] [ebp-1D8h]
  float v79; // [esp+84h] [ebp-1D4h]
  float v80; // [esp+88h] [ebp-1D0h]
  int v81; // [esp+8Ch] [ebp-1CCh]
  int v82; // [esp+90h] [ebp-1C8h]
  float v83; // [esp+98h] [ebp-1C0h] BYREF
  float v84; // [esp+9Ch] [ebp-1BCh]
  float v85; // [esp+A0h] [ebp-1B8h]
  float v86; // [esp+A4h] [ebp-1B4h] BYREF
  float v87; // [esp+A8h] [ebp-1B0h]
  float v88; // [esp+ACh] [ebp-1ACh]
  float v89; // [esp+B0h] [ebp-1A8h] BYREF
  float v90; // [esp+B4h] [ebp-1A4h]
  float v91; // [esp+B8h] [ebp-1A0h]
  float v92; // [esp+BCh] [ebp-19Ch] BYREF
  float v93; // [esp+C0h] [ebp-198h]
  float v94; // [esp+C4h] [ebp-194h]
  double v95; // [esp+C8h] [ebp-190h] BYREF
  float v96; // [esp+D0h] [ebp-188h]
  int *v97; // [esp+D8h] [ebp-180h]
  float v98; // [esp+DCh] [ebp-17Ch]
  float v99; // [esp+E0h] [ebp-178h]
  float v100; // [esp+E4h] [ebp-174h]
  float v101[4]; // [esp+E8h] [ebp-170h] BYREF
  float v102; // [esp+F8h] [ebp-160h]
  float v103; // [esp+FCh] [ebp-15Ch]
  float v104; // [esp+100h] [ebp-158h]
  float v105; // [esp+104h] [ebp-154h]
  float v106; // [esp+108h] [ebp-150h]
  float v107; // [esp+10Ch] [ebp-14Ch]
  double v108; // [esp+110h] [ebp-148h]
  double v109; // [esp+118h] [ebp-140h]
  double v110; // [esp+120h] [ebp-138h]
  double v111; // [esp+128h] [ebp-130h]
  double v112; // [esp+130h] [ebp-128h]
  float v113[3]; // [esp+13Ch] [ebp-11Ch] BYREF
  float v114[3]; // [esp+148h] [ebp-110h] BYREF
  float v115[3]; // [esp+154h] [ebp-104h] BYREF
  float v116[3]; // [esp+160h] [ebp-F8h] BYREF
  float v117[3]; // [esp+16Ch] [ebp-ECh] BYREF
  float v118[3]; // [esp+178h] [ebp-E0h] BYREF
  float v119[3]; // [esp+184h] [ebp-D4h] BYREF
  float v120[3]; // [esp+190h] [ebp-C8h] BYREF
  float v121[3]; // [esp+19Ch] [ebp-BCh] BYREF
  float v122[3]; // [esp+1A8h] [ebp-B0h] BYREF
  float v123[10]; // [esp+1B4h] [ebp-A4h] BYREF
  _BYTE v124[12]; // [esp+1DCh] [ebp-7Ch] BYREF
  _BYTE v125[12]; // [esp+1E8h] [ebp-70h] BYREF
  _BYTE v126[12]; // [esp+1F4h] [ebp-64h] BYREF
  _BYTE v127[12]; // [esp+200h] [ebp-58h] BYREF
  _BYTE v128[12]; // [esp+20Ch] [ebp-4Ch] BYREF
  _BYTE v129[12]; // [esp+218h] [ebp-40h] BYREF
  float v130[3]; // [esp+224h] [ebp-34h] BYREF
  _BYTE v131[12]; // [esp+230h] [ebp-28h] BYREF
  _BYTE v132[16]; // [esp+23Ch] [ebp-1Ch] BYREF
  int v133; // [esp+254h] [ebp-4h]

  v3 = a2;
  v4 = *(float *)(a2 + 776);
  v5 = *(float *)(a2 + 780);
  v101[1] = *(float *)(a2 + 772);
  v6 = *(float *)(a2 + 784);
  v101[2] = v4;
  v7 = *(float *)(a2 + 788);
  v101[3] = v5;
  v8 = *(float *)(a2 + 792);
  v102 = v6;
  v9 = *(float *)(a2 + 796);
  v103 = v7;
  v10 = *(float *)(a2 + 800);
  v104 = v8;
  v11 = *(float *)(a2 + 804);
  v97 = 0;
  LODWORD(v101[0]) = &BBox::`vftable';
  v105 = v9;
  v106 = v10;
  v107 = v11;
  v57 = 0.0;
  v58 = 0.0;
  v59 = 0.0;
  *(float *)&v95 = 0.0;
  *((float *)&v95 + 1) = 0.0;
  v96 = 0.0;
  v133 = 0;
  v12 = sub_10001370(v123, (float *)&v95, &v57);
  if ( !sub_1004D2E0(v101, v12) || (v45 = 1, !*(_DWORD *)(a2 + 716)) )
    v45 = 0;
  sub_1017A0B0(v123);
  if ( !v45 )
  {
    v57 = 0.0;
    v58 = 0.0;
    v59 = 0.0;
    *(float *)&v95 = 0.0;
    *((float *)&v95 + 1) = 0.0;
    v96 = 0.0;
    v13 = sub_10001370(v123, (float *)&v95, &v57);
    v46 = sub_1004D2E0(v101, v13);
    sub_1017A0B0(v123);
    if ( !v46 )
    {
      v102 = *(float *)(a2 + 856) + v102;
      v103 = *(float *)(a2 + 860) + v103;
      v104 = *(float *)(a2 + 864) + v104;
      v105 = v105 + *(float *)(a2 + 856);
      v106 = *(float *)(a2 + 860) + v106;
      v107 = *(float *)(a2 + 864) + v107;
      if ( sub_10063350(a1, v101) )
      {
        v14 = (int *)&unk_10283070;
        do
        {
          v15 = &v92;
          v83 = 0.0;
          v53 = 4;
          v84 = 0.0;
          v85 = 0.0;
          v86 = 0.0;
          v87 = 0.0;
          v88 = 0.0;
          v89 = 0.0;
          v90 = 0.0;
          v91 = 0.0;
          v92 = 0.0;
          v93 = 0.0;
          v94 = 0.0;
          do
          {
            v16 = sub_1004C2C0(v101, v130, *v14);
            v17 = *(_DWORD *)v16;
            v18 = *((_DWORD *)v16 + 1);
            v19 = *((_DWORD *)v16 + 2);
            *(_DWORD *)v15 = v17;
            *((_DWORD *)v15 + 1) = v18;
            *((_DWORD *)v15 + 2) = v19;
            ++v14;
            v15 -= 3;
            --v53;
          }
          while ( v53 );
          v97 = v14;
          sub_10001440(v123);
          LOBYTE(v133) = 1;
          sub_1007B540(&v83);
          sub_1007B540(&v86);
          sub_1007B540(&v89);
          sub_1007B540(&v92);
          if ( sub_10063350(a1, v123) )
          {
            v60 = 0.0;
            v82 = v3;
            v61 = 0.0;
            v81 = 0;
            v62 = 0.0;
            v63 = 0.0;
            v64 = 0.0;
            v65 = 0.0;
            v66 = 0.0;
            v67 = 0.0;
            v68 = 0.0;
            v69 = 0.0;
            v70 = 0.0;
            v71 = 0.0;
            v72 = 0.0;
            v73 = 0.0;
            v74 = 0.0;
            v75 = 0.0;
            v76 = 0.0;
            v77 = 0.0;
            v78 = 0.0;
            v79 = 0.0;
            v80 = 0.0;
            v109 = v89;
            v100 = v89 - v86;
            v108 = v90;
            v98 = v90 - v87;
            v110 = v91;
            v99 = v91 - v88;
            v121[0] = v100;
            v121[1] = v98;
            v121[2] = v99;
            v112 = v83;
            v55 = v86 - v83;
            v111 = v84;
            v56 = v87 - v84;
            v95 = v85;
            v54 = v88 - v85;
            v119[0] = v55;
            v119[1] = v56;
            v119[2] = v54;
            v20 = (float *)sub_1017B990(v126, v119, v121);
            v47 = -*v20;
            v33 = -v20[1];
            v39 = -v20[2];
            v57 = v47;
            v60 = v47;
            v58 = v33;
            v59 = v39;
            v61 = v33;
            v62 = v39;
            v48 = v109 - v112;
            v34 = v108 - v111;
            v40 = v110 - v95;
            v113[0] = v48;
            v113[1] = v34;
            v113[2] = v40;
            v122[0] = v55;
            v122[1] = v56;
            v122[2] = v54;
            v21 = (float *)sub_1017B990(v128, v122, v113);
            v22 = v83;
            v23 = v84;
            v24 = v85;
            v60 = *v21;
            v61 = v21[1];
            v62 = v21[2];
            v66 = v86;
            v67 = v87;
            v63 = v83;
            v64 = v84;
            v65 = v85;
            v68 = v88;
            v69 = v89;
            v70 = v90;
            v71 = v91;
            v117[0] = v55;
            v117[1] = v56;
            v117[2] = v54;
            v25 = (float *)sub_1017B990(v124, v117, &v60);
            v72 = *v25;
            v73 = v25[1];
            v26 = v25[2];
            v116[0] = v100;
            v74 = v26;
            v116[1] = v98;
            v116[2] = v99;
            v27 = (float *)sub_1017B990(v132, v116, &v60);
            v75 = *v27;
            v49 = v112 - v109;
            v76 = v27[1];
            v35 = v111 - v108;
            v77 = v27[2];
            v41 = v95 - v110;
            v120[0] = v49;
            v120[1] = v35;
            v120[2] = v41;
            v28 = (float *)sub_1017B990(v129, v120, &v60);
            v78 = *v28;
            v79 = v28[1];
            v80 = v28[2];
            sub_1007BB70(a3, &v60);
            v50 = v92 - v109;
            v63 = v89;
            v64 = v90;
            v65 = v91;
            v36 = v93 - v108;
            v66 = v92;
            v67 = v93;
            v42 = v94 - v110;
            v68 = v94;
            v118[0] = v50;
            v118[1] = v36;
            v69 = v22;
            v118[2] = v42;
            v70 = v23;
            v71 = v24;
            v29 = (float *)sub_1017B990(v127, v118, &v60);
            v72 = *v29;
            v51 = v69 - v66;
            v73 = v29[1];
            v37 = v70 - v67;
            v74 = v29[2];
            v43 = v71 - v68;
            v114[0] = v51;
            v114[1] = v37;
            v114[2] = v43;
            v30 = (float *)sub_1017B990(v131, v114, &v60);
            v75 = *v30;
            v76 = v30[1];
            v52 = v63 - v69;
            v77 = v30[2];
            v38 = v64 - v70;
            v44 = v65 - v71;
            v115[0] = v52;
            v115[1] = v38;
            v115[2] = v44;
            v31 = (float *)sub_1017B990(v125, v115, &v60);
            v78 = *v31;
            v79 = v31[1];
            v80 = v31[2];
            sub_1007BB70(a3, &v60);
            LOBYTE(v133) = 0;
            sub_1017A0B0(v123);
            v14 = v97;
            v3 = a2;
          }
          else
          {
            LOBYTE(v133) = 0;
            sub_1017A0B0(v123);
          }
        }
        while ( (int)v14 < (int)dword_102830D0 );
      }
    }
  }
  v133 = -1;
  return sub_1017A0B0(v101);
}
