/*
 * func-name: ?SetTraceLineDefaults@TraceLineSystem@@UAEXAAVTraceLine@@@Z_0
 * func-address: 0x100ccb70
 * callers: 0x10014dd0
 * callees: 0x100029cd, 0x10003f58, 0x1000a097, 0x1000e638, 0x102c09f0, 0x102c1be0, 0x102c9dbc
 */

void __thiscall TraceLineSystem::SetTraceLineDefaults(TraceLineSystem *this, struct TraceLine *a2)
{
  char *v4; // ebx
  int v5; // eax
  int v6; // eax
  float v7; // eax
  double v8; // st7
  double v9; // st7
  float v10; // ecx
  int v11; // eax
  float v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  double v19; // st7
  double v20; // st7
  float v21; // edx
  double v22; // st7
  double v23; // st7
  CameraHandler *v24; // eax
  struct Camera *Camera; // eax
  float v26; // ecx
  float v27; // edx
  float v28; // eax
  double v29; // st6
  double v30; // st6
  int v31; // eax
  int v32; // eax
  float *v33; // eax
  float v34; // ecx
  float v35; // edx
  int v36; // eax
  float *v37; // eax
  float v38; // ecx
  float v39; // edx
  int v40; // eax
  float *v41; // eax
  float v42; // ecx
  float v43; // edx
  int v44; // eax
  float *v45; // eax
  float v46; // ecx
  float v47; // edx
  int v48; // eax
  float v49; // eax
  float v50; // ecx
  int v51; // ebx
  float v52; // edx
  float v53; // [esp+10h] [ebp-40h]
  float v54; // [esp+10h] [ebp-40h]
  float v55; // [esp+14h] [ebp-3Ch]
  double v56; // [esp+14h] [ebp-3Ch]
  float v57; // [esp+14h] [ebp-3Ch]
  float v58; // [esp+1Ch] [ebp-34h] BYREF
  float v59; // [esp+20h] [ebp-30h]
  float v60; // [esp+24h] [ebp-2Ch]
  float v61; // [esp+28h] [ebp-28h] BYREF
  float v62; // [esp+2Ch] [ebp-24h]
  float v63; // [esp+30h] [ebp-20h]
  float v64; // [esp+34h] [ebp-1Ch] BYREF
  float v65; // [esp+38h] [ebp-18h]
  float v66; // [esp+3Ch] [ebp-14h]
  float v67; // [esp+40h] [ebp-10h]
  float v68[3]; // [esp+44h] [ebp-Ch] BYREF
  float v69; // [esp+54h] [ebp+4h]
  float v70; // [esp+54h] [ebp+4h]
  struct TraceLine *v71; // [esp+54h] [ebp+4h]
  float v72; // [esp+54h] [ebp+4h]
  float v73; // [esp+54h] [ebp+4h]
  float v74; // [esp+54h] [ebp+4h]
  float v75; // [esp+54h] [ebp+4h]
  float v76; // [esp+54h] [ebp+4h]
  float v77; // [esp+54h] [ebp+4h]
  float v78; // [esp+54h] [ebp+4h]
  float v79; // [esp+54h] [ebp+4h]
  float v80; // [esp+54h] [ebp+4h]

  v4 = (char *)a2 + 100;
  *((float *)a2 + 24) = *((float *)this + 78);
  sub_1000E638((char *)a2 + 100, 100);
  *((float *)a2 + 31) = 0.0;
  *((_DWORD *)a2 + 29) = 0;
  *((_DWORD *)a2 + 30) = 0;
  v69 = *((float *)this + 70) * *((float *)this + 70)
      + *((float *)this + 69) * *((float *)this + 69)
      + *((float *)this + 71) * *((float *)this + 71);
  v70 = sqrt(v69);
  if ( v70 == 0.0 )
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 5);
    *((_DWORD *)a2 + 1) = *((_DWORD *)this + 6);
    v10 = *((float *)this + 7);
  }
  else
  {
    v5 = rand();
    v55 = (double)v5 / 32767.0 + (double)v5 / 32767.0 - 1.0;
    v6 = rand();
    v53 = (double)v6 / 32767.0 + (double)v6 / 32767.0 - 1.0;
    v71 = (struct TraceLine *)rand();
    v64 = (double)(int)v71 / 32767.0 + (double)(int)v71 / 32767.0 - 1.0;
    v64 = *((float *)this + 69) * v64;
    v65 = *((float *)this + 70) * v53;
    v66 = *((float *)this + 71) * v55;
    v58 = 0.0;
    v59 = 0.0;
    v60 = 0.0;
    sub_102C1BE0(&v64, &v58);
    v64 = v58 + *((float *)this + 5);
    v65 = *((float *)this + 6) + v59;
    v7 = v65;
    v8 = *((float *)this + 7);
    *(float *)a2 = v64;
    v9 = v8 + v60;
    *((float *)a2 + 1) = v7;
    v66 = v9;
    v10 = v66;
  }
  *((float *)a2 + 2) = v10;
  v11 = *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 3) = *(_DWORD *)a2;
  *((_DWORD *)a2 + 4) = v11;
  *((float *)a2 + 5) = v10;
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 5);
  v12 = *(float *)a2;
  *((_DWORD *)a2 + 7) = *((_DWORD *)this + 6);
  v13 = *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 8) = *((_DWORD *)this + 7);
  v14 = *((_DWORD *)a2 + 2);
  *((float *)a2 + 35) = v12;
  *((float *)a2 + 32) = v12;
  *((_DWORD *)a2 + 36) = v13;
  *((_DWORD *)a2 + 33) = v13;
  *((_DWORD *)a2 + 37) = v14;
  *((_DWORD *)a2 + 34) = v14;
  v56 = *((float *)this + 58);
  *((float *)a2 + 17) = v56 - (double)rand() / 32767.0 * *((float *)this + 59);
  *((float *)a2 + 18) = 0.0;
  *((float *)a2 + 16) = (double)rand() / 32767.0 * *((float *)this + 66) + *((float *)this + 65);
  *((_DWORD *)a2 + 14) = *((_DWORD *)this + 73);
  v15 = *((_DWORD *)this + 73);
  v58 = 0.0;
  v59 = 0.0;
  *((_DWORD *)a2 + 15) = v15;
  v60 = 0.0;
  if ( 0.0 != *((float *)this + 57) )
  {
    v16 = rand();
    v54 = (double)v16 / 32767.0 + (double)v16 / 32767.0 - 1.0;
    v17 = rand();
    v57 = (double)v17 / 32767.0 + (double)v17 / 32767.0 - 1.0;
    v18 = rand();
    v72 = (double)v18 / 32767.0 + (double)v18 / 32767.0 - 1.0;
    v58 = *((float *)this + 57) * v72;
    v59 = *((float *)this + 57) * v57;
    v60 = *((float *)this + 57) * v54;
  }
  v64 = *((float *)this + 54) + v58;
  v19 = *((float *)this + 55);
  v58 = v64;
  v65 = v19 + v59;
  v20 = *((float *)this + 56);
  v59 = v65;
  v66 = v20 + v60;
  v60 = v66;
  sub_100029CD();
  v73 = (double)rand() / 32767.0 * *((float *)this + 67) + *((float *)this + 63);
  v64 = v58 * v73;
  v65 = v59 * v73;
  v66 = v73 * v60;
  v58 = v64 + *((float *)this + 8);
  v59 = *((float *)this + 9) + v65;
  v21 = v59;
  v22 = *((float *)this + 10);
  *((float *)a2 + 9) = v58;
  v23 = v22 + v66;
  *((float *)a2 + 10) = v21;
  v60 = v23;
  *((float *)a2 + 11) = v60;
  if ( 0.0 != *((float *)this + 68) )
  {
    v74 = ((double)rand() / 32767.0 * 1.3 + 0.4) * *((float *)this + 68);
    *((float *)a2 + 19) = 0.0;
    *((float *)a2 + 20) = v74;
    *((float *)a2 + 21) = 0.0;
  }
  v24 = CameraHandler::Instance();
  Camera = CameraHandler::GetCamera(v24, 0);
  v61 = *((float *)Camera + 94);
  v26 = *((float *)a2 + 9);
  v62 = *((float *)Camera + 95);
  v27 = *((float *)a2 + 10);
  v63 = *((float *)Camera + 96);
  v28 = *((float *)a2 + 11);
  v64 = v26;
  v65 = v27;
  v66 = v28;
  sub_100029CD();
  sub_102C09F0(v68, &v61, &v64);
  sub_100029CD();
  v75 = *((float *)a2 + 17);
  v64 = v68[0] * v75;
  v29 = v68[1];
  *((float *)a2 + 38) = v64;
  v58 = v61;
  v65 = v29 * v75;
  *((float *)a2 + 39) = v65;
  v59 = v62;
  v66 = v75 * v68[2];
  *((float *)a2 + 40) = v66;
  v60 = v63;
  sub_100029CD();
  v76 = *((float *)a2 + 17);
  v64 = v58 * v76;
  v30 = v59;
  *((float *)a2 + 41) = v64;
  v65 = v30 * v76;
  *((float *)a2 + 42) = v65;
  v66 = v76 * v60;
  *((float *)a2 + 43) = v66;
  v31 = *((_DWORD *)this + 85);
  if ( v31 == 1 )
  {
    *((_DWORD *)a2 + 45) = 1;
  }
  else if ( v31 == 2 )
  {
    *((_DWORD *)a2 + 45) = -1;
  }
  else
  {
    *((_DWORD *)a2 + 45) = rand() % 2 != 0 ? -1 : 1;
  }
  v32 = *((_DWORD *)v4 + 1);
  v77 = *((float *)a2 + 17);
  v64 = v77 * *((float *)a2 + 38);
  v65 = *((float *)a2 + 39) * v77;
  v66 = v77 * *((float *)a2 + 40);
  v58 = *(float *)a2 - v64;
  v59 = *((float *)a2 + 1) - v65;
  v60 = *((float *)a2 + 2) - v66;
  if ( !v32 || !((*((_DWORD *)v4 + 2) - v32) >> 6) )
    _invalid_parameter_noinfo();
  v33 = (float *)*((_DWORD *)v4 + 1);
  v34 = v59;
  *v33 = v58;
  v35 = v60;
  v33[1] = v34;
  v33[2] = v35;
  v78 = *((float *)a2 + 17);
  v36 = *((_DWORD *)v4 + 1);
  v64 = *((float *)a2 + 38) * v78;
  v65 = *((float *)a2 + 39) * v78;
  v66 = v78 * *((float *)a2 + 40);
  v58 = v64 + *(float *)a2;
  v59 = v65 + *((float *)a2 + 1);
  v60 = v66 + *((float *)a2 + 2);
  if ( !v36 || !((*((_DWORD *)v4 + 2) - v36) >> 6) )
    _invalid_parameter_noinfo();
  v37 = (float *)*((_DWORD *)v4 + 1);
  v38 = v59;
  v37[3] = v58;
  v39 = v60;
  v37 += 3;
  v37[1] = v38;
  v37[2] = v39;
  v79 = *((float *)a2 + 17);
  v40 = *((_DWORD *)v4 + 1);
  v64 = v79 * *((float *)a2 + 41);
  v65 = *((float *)a2 + 42) * v79;
  v66 = v79 * *((float *)a2 + 43);
  v58 = *(float *)a2 - v64;
  v59 = *((float *)a2 + 1) - v65;
  v60 = *((float *)a2 + 2) - v66;
  if ( !v40 || !((*((_DWORD *)v4 + 2) - v40) >> 6) )
    _invalid_parameter_noinfo();
  v41 = (float *)*((_DWORD *)v4 + 1);
  v42 = v59;
  v41[6] = v58;
  v43 = v60;
  v41 += 6;
  v41[1] = v42;
  v41[2] = v43;
  v80 = *((float *)a2 + 17);
  v44 = *((_DWORD *)v4 + 1);
  v64 = *((float *)a2 + 41) * v80;
  v65 = *((float *)a2 + 42) * v80;
  v66 = v80 * *((float *)a2 + 43);
  v58 = v64 + *(float *)a2;
  v59 = v65 + *((float *)a2 + 1);
  v60 = v66 + *((float *)a2 + 2);
  if ( !v44 || !((*((_DWORD *)v4 + 2) - v44) >> 6) )
    _invalid_parameter_noinfo();
  v45 = (float *)*((_DWORD *)v4 + 1);
  v64 = 1.0;
  v46 = v59;
  v65 = 1.0;
  v45 += 9;
  v66 = 1.0;
  *v45 = v58;
  v67 = 1.0;
  v47 = v60;
  v45[1] = v46;
  v45[2] = v47;
  v48 = *((_DWORD *)v4 + 1);
  if ( !v48 || !((*((_DWORD *)v4 + 2) - v48) >> 6) )
    _invalid_parameter_noinfo();
  v49 = v65;
  v50 = v66;
  v51 = *((_DWORD *)v4 + 1) + 48;
  *(float *)v51 = v64;
  v52 = v67;
  *(float *)(v51 + 4) = v49;
  *(float *)(v51 + 8) = v50;
  *(float *)(v51 + 12) = v52;
  *((_DWORD *)a2 + 30) = 1;
}
