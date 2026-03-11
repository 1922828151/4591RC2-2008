/*
 * func-name: sub_10005170
 * func-address: 0x10005170
 * callers: 0x10005510, 0x10005d90
 * callees: 0x10002ee0, 0x10004cf0, 0x10008e70
 */

void __thiscall sub_10005170(
        double *this,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10,
        double *a11,
        int a12)
{
  double *v12; // esi
  double *v13; // edx
  bool v14; // c0
  double *v15; // ebx
  char v16; // cl
  int v17; // esi
  int v18; // eax
  int v19; // esi
  double v20; // st6
  double v21; // st7
  double v22; // st5
  _DWORD *v23; // esi
  _DWORD *v24; // edi
  double v25; // rt2
  double v26; // st5
  double v27; // rtt
  double v28; // st5
  int v29; // ecx
  _DWORD *v30; // edx
  char v31; // [esp+Fh] [ebp-31h]
  double *v32; // [esp+10h] [ebp-30h]
  _DWORD *v33; // [esp+14h] [ebp-2Ch]
  float v34; // [esp+18h] [ebp-28h]
  _DWORD *v35; // [esp+18h] [ebp-28h]
  float v36; // [esp+1Ch] [ebp-24h]
  float v37; // [esp+1Ch] [ebp-24h]
  float v38; // [esp+20h] [ebp-20h]
  float v39; // [esp+20h] [ebp-20h]
  float v40; // [esp+24h] [ebp-1Ch]
  float v41; // [esp+24h] [ebp-1Ch]
  float v42; // [esp+28h] [ebp-18h]
  float v43; // [esp+2Ch] [ebp-14h]
  float v44; // [esp+30h] [ebp-10h]

  v12 = a11;
  v13 = this;
  v14 = *a11 < this[9];
  v15 = this + 9;
  v16 = 0;
  v32 = v13;
  v31 = 0;
  if ( v14 || a11[1] < v15[1] || a11[2] < v15[2] || a11[3] > v15[3] || a11[4] > v15[4] || a11[5] > v15[5] )
  {
    v34 = *((float *)v13 + 50);
    qmemcpy(v15, a11, 0x30u);
    v20 = v15[4] + v15[1];
    v21 = v15[5] + v15[2];
    v22 = (v15[3] + *v15) * 0.5;
    v23 = (_DWORD *)v13 + 1;
    v24 = (_DWORD *)v13 + 5;
    v31 = 1;
    v36 = v15[3] - *v15;
    v38 = v15[4] - v15[1];
    v40 = v15[5] - v15[2];
    v42 = v36 * 0.5;
    v43 = v38 * 0.5;
    v44 = 0.5 * v40;
    v37 = v42 * v34;
    v39 = v43 * v34;
    v41 = v34 * v44;
    *v15 = v22;
    v25 = v22;
    v26 = v20 * 0.5;
    v15[1] = v26;
    v27 = v26;
    v28 = v21 * 0.5;
    v15[2] = v28;
    *v15 = *v15 - v37;
    v15[1] = v15[1] - v39;
    v15[2] = v15[2] - v41;
    v15[3] = v25;
    v15[4] = v27;
    v15[5] = v28;
    *((_DWORD *)v13 + 2) = *((_DWORD *)v13 + 1);
    v29 = *((_DWORD *)v13 + 5);
    v15[3] = v37 + v15[3];
    v15[4] = v39 + v15[4];
    v15[5] = v41 + v15[5];
    ++dword_10022768;
    *((_DWORD *)v13 + 6) = v29;
    *((_DWORD *)v13 + 10) = *((_DWORD *)v13 + 9);
    v33 = (_DWORD *)v13 + 9;
    *((_DWORD *)v13 + 14) = *((_DWORD *)v13 + 13);
    *((_DWORD *)v13 + 30) = 0;
    *((_DWORD *)v13 + 33) = 0;
    *((_DWORD *)v13 + 32) = 0;
    *((_DWORD *)v13 + 31) = 0;
    v35 = (_DWORD *)v13 + 13;
    sub_10008E70(
      a2,
      v15,
      (char *)v13 + 4,
      *(_DWORD *)(a3 + 36) == 0 ? (char *)v13 + 20 : 0,
      (char *)v13 + 36,
      (char *)v13 + 52,
      a10,
      1,
      0,
      a12);
    *((_DWORD *)v32 + 34) = (v35[1] - *v35) >> 2;
    *((_DWORD *)v32 + 35) = (v23[1] - *v23) / 36;
    *((_DWORD *)v32 + 36) = (v24[1] - *v24) / 36;
    *((_DWORD *)v32 + 37) = (v33[1] - *v33) >> 2;
    sub_10008E70(a2, v15, v23, *(_DWORD *)(a3 + 36) == 0 ? v24 : 0, v33, v35, a10, 0, 1, a12);
    sub_10004CF0(v32, a4, a5, a6, a7, a8, a9, v15);
    *((_BYTE *)v32 + 222) = 0;
  }
  else
  {
    if ( !*((_BYTE *)v13 + 222) )
      goto LABEL_11;
    v17 = *((_DWORD *)v13 + 1);
    *((_DWORD *)v13 + 14) = *((_DWORD *)v13 + 13) + 4 * *((_DWORD *)v13 + 34);
    v18 = *((_DWORD *)v13 + 35);
    *((_BYTE *)v13 + 222) = 0;
    *((_DWORD *)v13 + 2) = v17 + 36 * v18;
    v19 = *((_DWORD *)v13 + 37);
    *((_DWORD *)v13 + 6) = *((_DWORD *)v13 + 5) + 36 * *((_DWORD *)v13 + 36);
    *((_DWORD *)v13 + 10) = *((_DWORD *)v13 + 9) + 4 * v19;
    sub_10008E70(
      a2,
      v15,
      (char *)v13 + 4,
      *(_DWORD *)(a3 + 36) == 0 ? (char *)v13 + 20 : 0,
      (char *)v13 + 36,
      (char *)v13 + 52,
      a10,
      0,
      1,
      a12);
    sub_10004CF0(v32, a4, a5, a6, a7, a8, a9, v15);
    ++dword_1002276C;
  }
  v13 = v32;
  v12 = a11;
  v16 = v31;
LABEL_11:
  v30 = *(_DWORD **)v13;
  if ( v30 )
  {
    sub_10002EE0(v30, v15, v16 != 0 ? -65536 : -16711936);
    sub_10002EE0(*(_DWORD **)v32, v12, -256);
  }
}
