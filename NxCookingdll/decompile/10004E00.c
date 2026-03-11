/*
 * func-name: sub_10004E00
 * func-address: 0x10004e00
 * callers: 0x10005190
 * callees: none
 */

unsigned int __thiscall sub_10004E00(int this, int a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // esi
  unsigned int result; // eax
  int v6; // esi
  unsigned int v7; // edi
  double v8; // st7
  double v9; // st6
  int v10; // eax
  double v11; // st5
  double v12; // st4
  double v13; // st2
  double v14; // st1
  double v15; // st3
  double v16; // st7
  _DWORD *v17; // [esp+10h] [ebp-98h]
  int v18; // [esp+14h] [ebp-94h]
  double v19; // [esp+18h] [ebp-90h]
  double v20; // [esp+20h] [ebp-88h]
  double v21; // [esp+20h] [ebp-88h]
  double v22; // [esp+28h] [ebp-80h]
  double v23; // [esp+28h] [ebp-80h]
  double v24; // [esp+30h] [ebp-78h]
  double v25; // [esp+30h] [ebp-78h]
  int v26; // [esp+3Ch] [ebp-6Ch]
  double v27; // [esp+40h] [ebp-68h]
  double v28; // [esp+40h] [ebp-68h]
  double v29; // [esp+48h] [ebp-60h]
  double v30; // [esp+48h] [ebp-60h]
  double v31; // [esp+50h] [ebp-58h]
  double v32; // [esp+58h] [ebp-50h]
  double v33; // [esp+58h] [ebp-50h]
  double v34; // [esp+60h] [ebp-48h]
  double v35; // [esp+68h] [ebp-40h]
  double v36; // [esp+68h] [ebp-40h]
  double v37; // [esp+70h] [ebp-38h]
  double v38; // [esp+78h] [ebp-30h]
  double v39; // [esp+80h] [ebp-28h]
  double v40; // [esp+90h] [ebp-18h]
  double v41; // [esp+A0h] [ebp-8h]

  v2 = *(_DWORD *)(this + 80);
  *(double *)(this + 184) = 0.0;
  *(double *)(this + 176) = 0.0;
  v3 = *(_DWORD *)(this + 96);
  *(double *)(this + 168) = 0.0;
  *(double *)(this + 160) = 0.0;
  *(double *)(this + 152) = 0.0;
  v18 = 4 * v3;
  *(double *)(this + 144) = 0.0;
  v4 = *(_DWORD *)(this + 100);
  *(double *)(this + 136) = 0.0;
  *(double *)(this + 128) = 0.0;
  *(double *)(this + 120) = 0.0;
  v26 = 4 * v4;
  *(double *)(this + 112) = 0.0;
  result = 0;
  v17 = (_DWORD *)(a2 + 32);
  do
  {
    v6 = v2 + *(_DWORD *)(this + 72) * *v17;
    v7 = result + 1;
    v8 = *(float *)(v18 + v6);
    v9 = *(float *)(v26 + v6);
    v2 = *(_DWORD *)(this + 80);
    v10 = v2 + *(_DWORD *)(this + 72) * *(_DWORD *)(a2 + 4 * ((result + 1) % 3) + 32);
    v11 = *(float *)(v18 + v10);
    v12 = *(float *)(v26 + v10);
    v39 = v11 - v8;
    v38 = v8 * v8 * v8;
    v37 = v9 * v9;
    v19 = v37 * v9;
    v34 = v11 * v11;
    v22 = v11 + v8;
    v29 = v22 * v11 + v8 * v8;
    v32 = v38 + v29 * v11;
    v24 = (v12 + v9) * v12 + v37;
    v27 = v24 * v12 + v19;
    v20 = v11 * v8 + v11 * v8;
    v35 = v34 * 3.0 + v20 + v8 * v8;
    v21 = v20 + v8 * v8 * 3.0 + v34;
    v23 = v22 * (v12 - v9) + *(double *)(this + 112);
    *(double *)(this + 112) = v23;
    v30 = v29 * (v12 - v9) + *(double *)(this + 120);
    *(double *)(this + 120) = v30;
    v13 = v32;
    v33 = v32 * (v12 - v9) + *(double *)(this + 136);
    *(double *)(this + 136) = v33;
    v40 = (v38 * v8 + v13 * v11) * (v12 - v9) + *(double *)(this + 160);
    *(double *)(this + 160) = v40;
    v25 = v24 * v39 + *(double *)(this + 128);
    *(double *)(this + 128) = v25;
    v14 = v27;
    v28 = v27 * v39 + *(double *)(this + 152);
    *(double *)(this + 152) = v28;
    v41 = v39 * (v19 * v9 + v14 * v12) + *(double *)(this + 184);
    *(double *)(this + 184) = v41;
    v15 = v35;
    v36 = (v12 - v9) * (v35 * v12 + v21 * v9) + *(double *)(this + 144);
    *(double *)(this + 144) = v36;
    v31 = ((v34 * v11 * 4.0 + v15 * v8) * v12 + (v21 * v11 + v38 * 4.0) * v9) * (v12 - v9) + *(double *)(this + 168);
    *(double *)(this + 168) = v31;
    ++v17;
    result = v7;
    v16 = (v8 * (v9 * (v12 * v12) * 2.0 + v12 * v37 * 3.0 + v19 * 4.0 + v12 * v12 * v12)
         + v11 * (2.0 * (v12 * v37) + v9 * (v12 * v12) * 3.0 + v12 * v12 * v12 * 4.0 + v19))
        * v39
        + *(double *)(this + 176);
    *(double *)(this + 176) = v16;
  }
  while ( v7 < 3 );
  *(double *)(this + 112) = v23 * 0.5;
  *(double *)(this + 120) = v30 * 0.1666666666666667;
  *(double *)(this + 136) = v33 * 0.08333333333333333;
  *(double *)(this + 160) = v40 * 0.05;
  *(double *)(this + 128) = v25 * -0.1666666666666667;
  *(double *)(this + 152) = v28 * -0.08333333333333333;
  *(double *)(this + 184) = v41 * -0.05;
  *(double *)(this + 144) = v36 * 0.04166666666666666;
  *(double *)(this + 168) = v31 * 0.01666666666666667;
  *(double *)(this + 176) = v16 * -0.01666666666666667;
  return result;
}
