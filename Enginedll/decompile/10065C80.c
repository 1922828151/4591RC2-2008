/*
 * func-name: ?Cube@Canvas@@UAEXAAVBBox@@@Z
 * func-address: 0x10065c80
 * callers: none
 * callees: none
 */

void __thiscall Canvas::Cube(Canvas *this, struct BBox *a2)
{
  float v2; // edx
  float v3; // edx
  float v4; // edx
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st7
  void (__thiscall *v14)(Canvas *, int, float *, int, _WORD *, int, _DWORD, _DWORD, int); // edx
  float v15; // [esp+10h] [ebp-114h]
  float v16; // [esp+10h] [ebp-114h]
  float v17; // [esp+10h] [ebp-114h]
  float v18; // [esp+10h] [ebp-114h]
  float v19; // [esp+10h] [ebp-114h]
  float v20; // [esp+14h] [ebp-110h]
  float v21; // [esp+14h] [ebp-110h]
  float v22; // [esp+14h] [ebp-110h]
  float v23; // [esp+14h] [ebp-110h]
  float v24; // [esp+14h] [ebp-110h]
  float v25; // [esp+14h] [ebp-110h]
  float v26; // [esp+18h] [ebp-10Ch]
  float v27; // [esp+18h] [ebp-10Ch]
  float v28; // [esp+18h] [ebp-10Ch]
  float v29; // [esp+18h] [ebp-10Ch]
  float v30; // [esp+18h] [ebp-10Ch]
  _WORD v31[36]; // [esp+1Ch] [ebp-108h] BYREF
  float v32[2]; // [esp+64h] [ebp-C0h] BYREF
  float v33; // [esp+6Ch] [ebp-B8h]
  float v34; // [esp+7Ch] [ebp-A8h]
  float v35; // [esp+80h] [ebp-A4h]
  float v36; // [esp+84h] [ebp-A0h]
  float v37; // [esp+94h] [ebp-90h]
  float v38; // [esp+98h] [ebp-8Ch]
  float v39; // [esp+9Ch] [ebp-88h]
  float v40; // [esp+ACh] [ebp-78h]
  float v41; // [esp+B0h] [ebp-74h]
  float v42; // [esp+B4h] [ebp-70h]
  float v43; // [esp+C4h] [ebp-60h]
  float v44; // [esp+C8h] [ebp-5Ch]
  float v45; // [esp+CCh] [ebp-58h]
  float v46; // [esp+DCh] [ebp-48h]
  float v47; // [esp+E0h] [ebp-44h]
  float v48; // [esp+E4h] [ebp-40h]
  int v49; // [esp+F4h] [ebp-30h]
  int v50; // [esp+F8h] [ebp-2Ch]
  int v51; // [esp+FCh] [ebp-28h]
  float v52; // [esp+10Ch] [ebp-18h]
  float v53; // [esp+110h] [ebp-14h]
  float v54; // [esp+114h] [ebp-10h]

  v32[0] = *((float *)a2 + 4);
  v20 = *((float *)a2 + 8);
  v32[1] = *((float *)a2 + 5);
  v33 = *((float *)a2 + 6);
  v15 = *((float *)a2 + 7);
  v34 = v32[0];
  v2 = v20;
  v21 = *((float *)a2 + 8);
  v35 = v2;
  v26 = *((float *)a2 + 6);
  v36 = v33;
  v3 = v15;
  v16 = *((float *)a2 + 7);
  v37 = v3;
  v4 = v21;
  v22 = *((float *)a2 + 5);
  v38 = v4;
  v5 = *((float *)a2 + 6);
  v39 = v26;
  v27 = v5;
  v6 = *((float *)a2 + 4);
  v40 = v16;
  v17 = v6;
  v7 = *((float *)a2 + 5);
  v41 = v22;
  v23 = v7;
  v8 = *((float *)a2 + 9);
  v42 = v27;
  v28 = v8;
  v9 = *((float *)a2 + 4);
  v43 = v17;
  v18 = v9;
  v10 = *((float *)a2 + 8);
  v44 = v23;
  v24 = v10;
  v11 = *((float *)a2 + 9);
  v45 = v28;
  v29 = v11;
  v12 = *((float *)a2 + 7);
  v46 = v18;
  v19 = v12;
  v13 = *((float *)a2 + 5);
  v47 = v24;
  v25 = v13;
  v48 = v29;
  v49 = *((_DWORD *)a2 + 7);
  v50 = *((_DWORD *)a2 + 8);
  v51 = *((_DWORD *)a2 + 9);
  v30 = *((float *)a2 + 9);
  v52 = v19;
  v54 = v30;
  v31[7] = 6;
  v31[11] = 6;
  v31[20] = 6;
  v31[22] = 6;
  v31[26] = 6;
  v31[28] = 6;
  v53 = v25;
  v31[6] = 4;
  v31[9] = 4;
  v31[12] = 4;
  v31[15] = 4;
  v31[30] = 4;
  v31[33] = 4;
  v14 = *(void (__thiscall **)(Canvas *, int, float *, int, _WORD *, int, _DWORD, _DWORD, int))(*(_DWORD *)this + 108);
  v31[0] = 0;
  v31[1] = 1;
  v31[2] = 2;
  v31[3] = 0;
  v31[4] = 2;
  v31[5] = 3;
  v31[8] = 5;
  v31[10] = 7;
  v31[13] = 5;
  v31[14] = 1;
  v31[16] = 1;
  v31[17] = 0;
  v31[18] = 3;
  v31[19] = 2;
  v31[21] = 3;
  v31[23] = 7;
  v31[24] = 1;
  v31[25] = 5;
  v31[27] = 1;
  v31[29] = 2;
  v31[31] = 0;
  v31[32] = 3;
  v31[34] = 3;
  v31[35] = 7;
  v14(this, 8, v32, 36, v31, 24, 0, 0, 1);
}
