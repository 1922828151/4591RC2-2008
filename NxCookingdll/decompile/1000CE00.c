/*
 * func-name: sub_1000CE00
 * func-address: 0x1000ce00
 * callers: 0x1000c840
 * callees: 0x1000cc30, 0x10014910, 0x100161f0, 0x10016380, 0x10016540, 0x100167a0, 0x10034ca4, 0x10035700
 */

char __thiscall sub_1000CE00(_DWORD *this, int a2)
{
  int v2; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // edi
  int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // edi
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  int v18; // edx
  unsigned int v19; // edi
  int v20; // eax
  bool v21; // zf
  int v22; // edi
  int (__thiscall ***v23)(_DWORD, int, _DWORD); // eax
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  int v27; // edi
  int v28; // edx
  int v29; // edi
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  int v35; // edx
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // edx
  int v47; // edx
  int v48; // eax
  char v49; // cl
  char v50; // al
  __int16 v51; // ax
  int (__thiscall *v52)(int); // eax
  unsigned __int16 v53; // ax
  unsigned int v54; // edx
  int v55; // eax
  int v56; // ecx
  double v57; // st7
  float *v58; // ecx
  unsigned int v59; // edi
  int v60; // eax
  int v61; // ecx
  char v62; // dl
  int v63; // ecx
  char v64; // dl
  int v65; // edx
  char v66; // bl
  _BYTE *v67; // ecx
  char v68; // bl
  int v69; // ecx
  char v70; // bl
  int v71; // edx
  char v72; // bl
  _BYTE *v73; // ecx
  char v74; // bl
  int v75; // ecx
  char v76; // bl
  int v77; // edx
  char v78; // bl
  _BYTE *v79; // ecx
  char v80; // bl
  int v81; // ecx
  char v82; // bl
  _BYTE *v83; // ecx
  char v84; // bl
  int v85; // edx
  char v86; // bl
  _BYTE *v87; // ecx
  char v88; // bl
  int v89; // ecx
  char v90; // bl
  _BYTE *v91; // ecx
  char v92; // bl
  int v93; // edi
  int v94; // edx
  int v95; // edx
  int v96; // eax
  char v97; // cl
  char v98; // al
  int v99; // edx
  int v100; // eax
  char v101; // cl
  char v102; // al
  int v103; // ecx
  int i; // edx
  unsigned int v105; // eax
  void *v106; // esp
  int *v107; // edi
  int (__thiscall ***v108)(_DWORD, int, int); // eax
  int v109; // edx
  unsigned int j; // eax
  int v111; // edx
  unsigned int k; // eax
  int v113; // edx
  int v114; // eax
  char v115; // cl
  char v116; // al
  unsigned int m; // eax
  int v118; // eax
  int v119; // [esp+0h] [ebp-48h] BYREF
  int v120; // [esp+Ch] [ebp-3Ch] BYREF
  int v121; // [esp+10h] [ebp-38h]
  int v122; // [esp+14h] [ebp-34h]
  int v123; // [esp+18h] [ebp-30h]
  int v124; // [esp+1Ch] [ebp-2Ch]
  int v125; // [esp+20h] [ebp-28h]
  int v126; // [esp+24h] [ebp-24h]
  int v127; // [esp+28h] [ebp-20h]
  unsigned int v128; // [esp+2Ch] [ebp-1Ch] BYREF
  int v129; // [esp+30h] [ebp-18h]
  int v130; // [esp+34h] [ebp-14h] BYREF
  int v131; // [esp+38h] [ebp-10h]
  int v132; // [esp+3Ch] [ebp-Ch]
  char v133; // [esp+40h] [ebp-8h]

  v2 = a2;
  if ( !(unsigned __int8)sub_10016380(67, 86, 72, 76, &v128, &v130, a2) )
    return 0;
  sub_100161F0(&v120, 6, v130, a2);
  v5 = v123;
  v6 = v122;
  v7 = v120;
  this[1] = v121;
  v127 = v124;
  this[13] = v6;
  v8 = v125;
  v9 = 4 * (9 * v5 + 9);
  this[3] = v7;
  this[9] = v5;
  v126 = v8;
  v132 = v7;
  if ( !v9 )
    v132 = v7 + 1;
  if ( v9 % 0xC )
    v9 += 12 - v9 % 0xC;
  v10 = v9 + 12 * v132;
  v132 = v121;
  if ( !v10 )
    v132 = v121 + 1;
  if ( v10 % 0xC )
    v10 += 12 - v10 % 0xC;
  v11 = v10 + 12 * v132;
  if ( !v11 )
    ++v7;
  if ( v11 % 0xC )
    v11 += 12 - v11 % 0xC;
  v12 = 3 * v7;
  v13 = v122;
  v14 = v11 + 4 * v12;
  v132 = v122;
  if ( !v14 )
    v132 = v122 + 1;
  if ( v14 % 0xC )
    v14 += 12 - v14 % 0xC;
  v15 = v14 + 12 * v132;
  v132 = v122;
  if ( !v15 )
    v132 = v122 + 1;
  if ( (v15 & 7) != 0 )
    v15 += 8 - (v15 & 7);
  v16 = v15 + 8 * v132;
  if ( !v16 )
    v13 = v122 + 1;
  if ( (v16 & 1) != 0 )
    v16 += 2 - (v16 & 1);
  v17 = v16 + 2 * v13;
  v18 = v124;
  if ( !v17 )
    v18 = v124 + 1;
  v129 = v17 & 1;
  if ( (v17 & 1) != 0 )
    v17 += 2 - v129;
  v19 = v17 + 2 * v18;
  v20 = v124;
  if ( !v19 )
    v20 = v124 + 1;
  v21 = v20 + v19 == 0;
  v22 = v20 + v19;
  v132 = v125;
  if ( v21 )
    v132 = v125 + 1;
  v23 = (int (__thiscall ***)(_DWORD, int, _DWORD))sub_10014910();
  v24 = (**v23)(v23, v22 + v132, 0);
  this[18] = v24;
  if ( !v24 )
    return 0;
  v25 = v24;
  v26 = v24 % 0x24;
  if ( v26 )
    v25 += 36 - v26;
  v27 = this[9];
  if ( v25 % 0x24 )
    v25 += 36 - v25 % 0x24;
  this[10] = v25;
  v28 = 9 * v27;
  v29 = this[3];
  v30 = v25 + 4 * v28;
  if ( v30 % 0xC )
    v30 += 12 - v30 % 0xC;
  v131 = v30;
  this[4] = v30;
  v31 = v30 + 12 * v29;
  if ( v31 % 0xC )
    v31 += 12 - v31 % 0xC;
  v32 = v31;
  v33 = v31 + 12 * this[1];
  this[2] = v32;
  if ( v33 % 0xC )
    v33 += 12 - v33 % 0xC;
  this[5] = v33;
  v34 = v33 + 12 * v29;
  if ( v34 % 0xC )
    v34 += 12 - v34 % 0xC;
  v35 = this[13];
  v129 = v34;
  v36 = v34 + 12 * v35;
  this[15] = v129;
  v132 = v36;
  if ( (v36 & 7) != 0 )
    v36 = 8 - (v36 & 7) + v132;
  v37 = v36 + 8 * v35;
  this[16] = v36;
  v38 = ((_BYTE)v36 + 8 * (_BYTE)v35) & 1;
  v132 = v37;
  if ( v38 )
    v37 = 2 - v38 + v132;
  v39 = v37;
  v40 = v37 + 2 * v35;
  this[14] = v39;
  if ( (v40 & 1) != 0 )
    v40 += 2 - (v40 & 1);
  v41 = v127;
  v42 = v40;
  v43 = v40 + 2 * v127;
  this[12] = v42;
  v44 = v43;
  v45 = v41 + v43;
  v46 = v131;
  this[17] = v45;
  LOBYTE(v45) = v130;
  this[11] = v44;
  sub_100161F0(v46, 3 * v29, v45, a2);
  v47 = *(_DWORD *)a2;
  v133 = v130;
  v48 = (*(int (__thiscall **)(int))(v47 + 12))(a2);
  v131 = v48;
  if ( v133 )
  {
    v49 = HIBYTE(v131);
    HIBYTE(v131) = v48;
    v50 = BYTE1(v131);
    LOBYTE(v131) = v49;
    BYTE1(v131) = BYTE2(v131);
    BYTE2(v131) = v50;
  }
  sub_100167A0(v131, 3 * this[1], this[2], a2, v130);
  v51 = 0;
  v129 = 0;
  if ( v128 >= 5 )
  {
    v52 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 8);
    v133 = v130;
    v53 = v52(a2);
    v132 = v53;
    if ( v133 )
    {
      LOBYTE(v132) = BYTE1(v132);
      BYTE1(v132) = v53;
    }
    v51 = v132;
    v129 = (unsigned __int16)v132;
  }
  if ( v128 < 4 || v51 )
  {
    sub_100161F0(this[5], 3 * this[3], v130, a2);
    if ( v128 < 2 )
    {
      v54 = 0;
      if ( this[3] )
      {
        v55 = 0;
        do
        {
          ++v54;
          *(float *)(v55 + this[5]) = -*(float *)(this[5] + v55);
          *(float *)(v55 + this[5] + 4) = -*(float *)(v55 + this[5] + 4);
          v56 = this[5];
          v57 = *(float *)(v55 + v56 + 8);
          v58 = (float *)(v55 + v56 + 8);
          v55 += 12;
          *v58 = -v57;
        }
        while ( v54 < this[3] );
      }
    }
  }
  else
  {
    sub_1000CC30(this[3], (_DWORD *)this[5], v130, a2);
  }
  sub_100161F0(this + 6, 3, v130, a2);
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a2 + 24))(a2, this[10], 36 * this[9]);
  if ( (_BYTE)v130 )
  {
    v59 = 0;
    if ( this[9] )
    {
      v60 = 0;
      do
      {
        v61 = this[10];
        v62 = *(_BYTE *)(v61 + v60);
        *(_BYTE *)(v61 + v60) = *(_BYTE *)(v61 + v60 + 1);
        *(_BYTE *)(v61 + v60 + 1) = v62;
        v63 = this[10];
        v64 = *(_BYTE *)(v60 + v63 + 2);
        *(_BYTE *)(v60 + v63 + 2) = *(_BYTE *)(v60 + v63 + 3);
        *(_BYTE *)(v60 + v63 + 3) = v64;
        v65 = this[10];
        v66 = *(_BYTE *)(v60 + v65 + 11);
        v67 = (_BYTE *)(v60 + v65 + 8);
        LOBYTE(v65) = *v67;
        *v67 = v66;
        v68 = v67[2];
        v67[3] = v65;
        LOBYTE(v65) = v67[1];
        v67[1] = v68;
        v67[2] = v65;
        v69 = this[10];
        LOBYTE(v65) = *(_BYTE *)(v60 + v69 + 4);
        *(_BYTE *)(v60 + v69 + 4) = *(_BYTE *)(v60 + v69 + 7);
        v70 = *(_BYTE *)(v60 + v69 + 6);
        *(_BYTE *)(v60 + v69 + 7) = v65;
        LOBYTE(v65) = *(_BYTE *)(v60 + v69 + 5);
        *(_BYTE *)(v60 + v69 + 5) = v70;
        *(_BYTE *)(v60 + v69 + 6) = v65;
        v71 = this[10];
        v72 = *(_BYTE *)(v60 + v71 + 15);
        v73 = (_BYTE *)(v60 + v71 + 12);
        LOBYTE(v71) = *v73;
        *v73 = v72;
        v74 = v73[2];
        v73[3] = v71;
        LOBYTE(v71) = v73[1];
        v73[1] = v74;
        v73[2] = v71;
        v75 = this[10];
        LOBYTE(v71) = *(_BYTE *)(v60 + v75 + 16);
        *(_BYTE *)(v60 + v75 + 16) = *(_BYTE *)(v60 + v75 + 19);
        v76 = *(_BYTE *)(v60 + v75 + 18);
        *(_BYTE *)(v60 + v75 + 19) = v71;
        LOBYTE(v71) = *(_BYTE *)(v60 + v75 + 17);
        *(_BYTE *)(v60 + v75 + 17) = v76;
        *(_BYTE *)(v60 + v75 + 18) = v71;
        v77 = this[10];
        v78 = *(_BYTE *)(v60 + v77 + 23);
        v79 = (_BYTE *)(v60 + v77 + 20);
        LOBYTE(v77) = *v79;
        *v79 = v78;
        v80 = v79[2];
        v79[3] = v77;
        LOBYTE(v77) = v79[1];
        v79[1] = v80;
        v79[2] = v77;
        v81 = this[10];
        v82 = *(_BYTE *)(v60 + v81 + 27);
        LOBYTE(v77) = *(_BYTE *)(v60 + v81 + 24);
        v83 = (_BYTE *)(v60 + v81 + 24);
        *v83 = v82;
        v84 = v83[2];
        v83[3] = v77;
        LOBYTE(v77) = v83[1];
        v83[1] = v84;
        v83[2] = v77;
        v85 = this[10];
        v86 = *(_BYTE *)(v60 + v85 + 31);
        v87 = (_BYTE *)(v60 + v85 + 28);
        LOBYTE(v85) = *v87;
        *v87 = v86;
        v88 = v87[2];
        v87[3] = v85;
        LOBYTE(v85) = v87[1];
        v87[1] = v88;
        v87[2] = v85;
        v89 = this[10];
        v90 = *(_BYTE *)(v60 + v89 + 35);
        LOBYTE(v85) = *(_BYTE *)(v60 + v89 + 32);
        v91 = (_BYTE *)(v60 + v89 + 32);
        *v91 = v90;
        v92 = v91[2];
        v91[3] = v85;
        LOBYTE(v85) = v91[1];
        ++v59;
        v91[1] = v92;
        v91[2] = v85;
        v60 += 36;
      }
      while ( v59 < this[9] );
      v2 = a2;
    }
  }
  if ( v128 >= 3 )
  {
    v93 = v127;
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 24))(v2, this[11], v127);
    v94 = *(_DWORD *)v2;
    v133 = v130;
    v132 = (*(int (__thiscall **)(int))(v94 + 12))(v2);
    if ( v133 )
    {
      LOBYTE(v132) = HIBYTE(v132);
      BYTE1(v132) = BYTE2(v132);
    }
    sub_10016540(v132, v93, this[12], v2, v130);
  }
  v95 = *(_DWORD *)v2;
  v133 = v130;
  v96 = (*(int (__thiscall **)(int))(v95 + 12))(v2);
  v131 = v96;
  if ( v133 )
  {
    v97 = HIBYTE(v131);
    HIBYTE(v131) = v96;
    v98 = BYTE1(v131);
    LOBYTE(v131) = v97;
    BYTE1(v131) = BYTE2(v131);
    BYTE2(v131) = v98;
  }
  v99 = *(_DWORD *)v2;
  v133 = v130;
  v100 = (*(int (__thiscall **)(int))(v99 + 12))(v2);
  v132 = v100;
  if ( v133 )
  {
    v101 = HIBYTE(v132);
    HIBYTE(v132) = v100;
    v102 = BYTE1(v132);
    LOBYTE(v132) = v101;
    BYTE1(v132) = BYTE2(v132);
    BYTE2(v132) = v102;
  }
  v103 = this[10];
  for ( i = v103 + 36 * this[9];
        v103 != i;
        *(_DWORD *)(v103 - 28) = this[12] + 2 * ((unsigned int)(*(_DWORD *)(v103 - 28) - v132) >> 1) )
  {
    v103 += 36;
    *(_DWORD *)(v103 - 32) += this[11] - v131;
  }
  if ( v128 >= 3 )
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 24))(v2, this[14], 2 * this[13]);
  if ( v128 < 4 || (_WORD)v129 )
    sub_100161F0(this[15], 3 * this[13], v130, v2);
  else
    sub_1000CC30(this[13], (_DWORD *)this[15], v130, v2);
  v105 = this[13];
  if ( v105 > 0x100 )
  {
    v108 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
    v107 = (int *)(**v108)(v108, 4 * this[13], 1);
  }
  else
  {
    v106 = alloca(4 * v105);
    v107 = &v119;
  }
  v109 = *(_DWORD *)v2;
  v133 = v130;
  v132 = (*(int (__thiscall **)(int))(v109 + 12))(v2);
  if ( v133 )
  {
    LOBYTE(v132) = HIBYTE(v132);
    BYTE1(v132) = BYTE2(v132);
  }
  sub_10016540(v132, this[13], v107, v2, v130);
  for ( j = 0; j < this[13]; ++j )
    *(_WORD *)(this[16] + 8 * j) = *((_WORD *)v107 + j);
  v111 = *(_DWORD *)v2;
  v133 = v130;
  v132 = (*(int (__thiscall **)(int))(v111 + 12))(v2);
  if ( v133 )
  {
    LOBYTE(v132) = HIBYTE(v132);
    BYTE1(v132) = BYTE2(v132);
  }
  sub_10016540(v132, this[13], v107, v2, v130);
  for ( k = 0; k < this[13]; ++k )
    *(_WORD *)(this[16] + 8 * k + 2) = *((_WORD *)v107 + k);
  v113 = *(_DWORD *)v2;
  v133 = v130;
  v114 = (*(int (__thiscall **)(int))(v113 + 12))(v2);
  v132 = v114;
  if ( v133 )
  {
    v115 = HIBYTE(v132);
    HIBYTE(v132) = v114;
    v116 = BYTE1(v132);
    LOBYTE(v132) = v115;
    BYTE1(v132) = BYTE2(v132);
    BYTE2(v132) = v116;
  }
  sub_100167A0(v132, this[13], v107, v2, v130);
  for ( m = 0; m < this[13]; ++m )
    *(_DWORD *)(this[16] + 8 * m + 4) = v107[m];
  if ( this[13] > 0x100u )
  {
    if ( v107 )
    {
      v118 = sub_10014910();
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v118 + 12))(v118, v107);
    }
  }
  (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v2 + 24))(v2, this[17], v126);
  return 1;
}
