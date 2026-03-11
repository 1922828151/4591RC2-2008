/*
 * func-name: sub_100E1070
 * func-address: 0x100e1070
 * callers: 0x100e1440
 * callees: 0x101a26c0
 */

float *__stdcall sub_100E1070(float *a1, float *a2, float *a3, int a4)
{
  int v4; // esi
  int v5; // ebx
  _DWORD *v6; // edi
  int v7; // ebp
  float *v8; // edx
  int v9; // eax
  int v10; // ecx
  float *result; // eax
  float v12; // [esp+4h] [ebp-84h]
  float v13; // [esp+4h] [ebp-84h]
  float v14; // [esp+4h] [ebp-84h]
  float v15; // [esp+4h] [ebp-84h]
  float v16; // [esp+4h] [ebp-84h]
  float v17; // [esp+4h] [ebp-84h]
  float v18; // [esp+8h] [ebp-80h]
  float v19; // [esp+8h] [ebp-80h]
  float v20; // [esp+8h] [ebp-80h]
  float v21; // [esp+8h] [ebp-80h]
  float v22; // [esp+8h] [ebp-80h]
  float v23; // [esp+8h] [ebp-80h]
  float v24; // [esp+Ch] [ebp-7Ch]
  float v25; // [esp+Ch] [ebp-7Ch]
  float v26; // [esp+Ch] [ebp-7Ch]
  float v27; // [esp+Ch] [ebp-7Ch]
  float v28; // [esp+Ch] [ebp-7Ch]
  float v29; // [esp+Ch] [ebp-7Ch]
  float v30; // [esp+10h] [ebp-78h]
  float v31; // [esp+10h] [ebp-78h]
  float v32; // [esp+10h] [ebp-78h]
  float v33; // [esp+10h] [ebp-78h]
  float v34; // [esp+10h] [ebp-78h]
  float v35; // [esp+10h] [ebp-78h]
  float v36; // [esp+14h] [ebp-74h]
  float v37; // [esp+14h] [ebp-74h]
  float v38; // [esp+14h] [ebp-74h]
  float v39; // [esp+14h] [ebp-74h]
  float v40; // [esp+14h] [ebp-74h]
  float v41; // [esp+14h] [ebp-74h]
  float v42; // [esp+14h] [ebp-74h]
  float v43; // [esp+18h] [ebp-70h]
  float v44; // [esp+18h] [ebp-70h]
  float v45; // [esp+18h] [ebp-70h]
  float v46; // [esp+18h] [ebp-70h]
  float v47; // [esp+18h] [ebp-70h]
  float v48; // [esp+18h] [ebp-70h]
  float v49; // [esp+1Ch] [ebp-6Ch]
  float v50; // [esp+1Ch] [ebp-6Ch]
  float v51; // [esp+1Ch] [ebp-6Ch]
  float v52; // [esp+1Ch] [ebp-6Ch]
  float v53; // [esp+1Ch] [ebp-6Ch]
  float v54; // [esp+1Ch] [ebp-6Ch]
  float v55; // [esp+20h] [ebp-68h]
  float v56; // [esp+20h] [ebp-68h]
  float v57; // [esp+20h] [ebp-68h]
  float v58; // [esp+20h] [ebp-68h]
  float v59; // [esp+20h] [ebp-68h]
  float v60; // [esp+20h] [ebp-68h]
  float v61; // [esp+28h] [ebp-60h]
  float v62; // [esp+2Ch] [ebp-5Ch] BYREF
  float v63; // [esp+30h] [ebp-58h]
  float v64; // [esp+34h] [ebp-54h]
  float v65; // [esp+38h] [ebp-50h]
  float v66; // [esp+3Ch] [ebp-4Ch]
  float v67; // [esp+40h] [ebp-48h]
  float v68; // [esp+44h] [ebp-44h]
  float v69; // [esp+48h] [ebp-40h]
  float v70; // [esp+4Ch] [ebp-3Ch]
  float v71; // [esp+50h] [ebp-38h]
  float v72; // [esp+54h] [ebp-34h]
  float v73; // [esp+58h] [ebp-30h]
  float v74; // [esp+5Ch] [ebp-2Ch]
  float v75; // [esp+60h] [ebp-28h]
  float v76; // [esp+64h] [ebp-24h]
  float v77; // [esp+68h] [ebp-20h]
  float v78; // [esp+6Ch] [ebp-1Ch]
  float v79; // [esp+70h] [ebp-18h]
  float v80; // [esp+74h] [ebp-14h]
  float v81; // [esp+78h] [ebp-10h]
  float v82; // [esp+7Ch] [ebp-Ch]
  float v83; // [esp+80h] [ebp-8h]
  float v84; // [esp+84h] [ebp-4h]

  v61 = 0.0;
  v62 = 0.0;
  v63 = 0.0;
  v64 = 0.0;
  v65 = 0.0;
  v66 = 0.0;
  v4 = 0;
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
  v81 = 0.0;
  v82 = 0.0;
  v83 = 0.0;
  v84 = 0.0;
  v5 = (int)(a2[1] / a3[1]);
  v6 = dword_11240C40;
  v7 = 4 * (int)(*a2 / *a3);
  v8 = &v62;
  do
  {
    v9 = v6[2 * v4 + 1] + v5 * v6[2 * v4];
    ++v4;
    v10 = *(_DWORD *)(v9 + v7);
    *(v8 - 1) = (double)(char)v10 * 0.0078125;
    *v8 = (double)SBYTE1(v10) * 0.0078125;
    v8 += 4;
    *(v8 - 3) = (double)SBYTE2(v10) * 0.0078125;
    *(v8 - 2) = (double)SHIBYTE(v10) * 0.0078125;
  }
  while ( v4 < 6 );
  v36 = v61 * *(float *)(dword_11240C38 + 16);
  v43 = *(float *)(dword_11240C38 + 20) * v62;
  v49 = *(float *)(dword_11240C38 + 24) * v63;
  v55 = *(float *)(dword_11240C38 + 28) * v64;
  v12 = v36 + 0.0;
  v18 = v43 + 0.0;
  v24 = v49 + 0.0;
  v30 = v55 + 0.0;
  v37 = v65 * *(float *)(dword_11240C38 + 32);
  v44 = *(float *)(dword_11240C38 + 36) * v66;
  v50 = *(float *)(dword_11240C38 + 40) * v67;
  v56 = *(float *)(dword_11240C38 + 44) * v68;
  v13 = v37 + v12;
  v19 = v44 + v18;
  v25 = v50 + v24;
  v31 = v56 + v30;
  v38 = v69 * *(float *)(dword_11240C38 + 48);
  v45 = *(float *)(dword_11240C38 + 52) * v70;
  v51 = *(float *)(dword_11240C38 + 56) * v71;
  v57 = *(float *)(dword_11240C38 + 60) * v72;
  v14 = v38 + v13;
  v20 = v45 + v19;
  v26 = v51 + v25;
  v32 = v57 + v31;
  v39 = v73 * *(float *)(dword_11240C38 + 64);
  v46 = *(float *)(dword_11240C38 + 68) * v74;
  v52 = *(float *)(dword_11240C38 + 72) * v75;
  v58 = *(float *)(dword_11240C38 + 76) * v76;
  v15 = v39 + v14;
  v21 = v46 + v20;
  v27 = v52 + v26;
  v33 = v58 + v32;
  v40 = v77 * *(float *)(dword_11240C38 + 80);
  v47 = *(float *)(dword_11240C38 + 84) * v78;
  v53 = *(float *)(dword_11240C38 + 88) * v79;
  v59 = *(float *)(dword_11240C38 + 92) * v80;
  v16 = v40 + v15;
  v22 = v47 + v21;
  v28 = v53 + v27;
  v34 = v59 + v33;
  v41 = v81 * *(float *)(dword_11240C38 + 96);
  v48 = *(float *)(dword_11240C38 + 100) * v82;
  v54 = *(float *)(dword_11240C38 + 104) * v83;
  v60 = *(float *)(dword_11240C38 + 108) * v84;
  v17 = v41 + v16;
  v23 = v48 + v22;
  v29 = v54 + v28;
  v35 = v60 + v34;
  v42 = v23 + v17 + v29 + v35 + *(float *)dword_11240C38;
  result = a1;
  *a1 = v42;
  a1[1] = v42;
  a1[2] = v42;
  a1[3] = 1.0;
  return result;
}
