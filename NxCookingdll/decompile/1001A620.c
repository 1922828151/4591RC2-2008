/*
 * func-name: sub_1001A620
 * func-address: 0x1001a620
 * callers: none
 * callees: 0x10015220, 0x100160a0
 */

char __thiscall sub_1001A620(int *this, char a2, int *a3)
{
  unsigned int v4; // ebp
  int v5; // edi
  int v6; // eax
  double v7; // st7
  int v8; // eax
  char v9; // cl
  char v10; // dl
  char v11; // cl
  char v12; // dl
  char v13; // cl
  char v14; // dl
  char v15; // cl
  char v16; // dl
  char v17; // cl
  char v18; // dl
  char v19; // cl
  char v20; // dl
  char v21; // cl
  char v22; // dl
  char v23; // cl
  char v24; // dl
  char v25; // cl
  char v26; // al
  float v28; // [esp+Ch] [ebp-24h] BYREF
  float v29; // [esp+10h] [ebp-20h]
  float v30; // [esp+14h] [ebp-1Ch]
  float v31; // [esp+18h] [ebp-18h]
  float v32; // [esp+1Ch] [ebp-14h]
  float v33; // [esp+20h] [ebp-10h]
  int v34; // [esp+24h] [ebp-Ch]
  int v35; // [esp+28h] [ebp-8h]
  int v36; // [esp+2Ch] [ebp-4h]

  sub_100160A0(this[1], a2, a3);
  v4 = 0;
  if ( this[1] )
  {
    v5 = 0;
    do
    {
      v6 = this[2];
      v7 = *(float *)(v6 + v5);
      v8 = v5 + v6;
      v28 = v7;
      v29 = *(float *)(v8 + 4);
      v30 = *(float *)(v8 + 8);
      v31 = *(float *)(v8 + 12);
      v32 = *(float *)(v8 + 16);
      v33 = *(float *)(v8 + 20);
      v34 = *(_DWORD *)(v8 + 24);
      v35 = *(_DWORD *)(v8 + 28);
      v36 = *(_DWORD *)(v8 + 32);
      if ( a2 )
      {
        v9 = HIBYTE(v28);
        v10 = BYTE2(v28);
        BYTE2(v28) = BYTE1(v28);
        HIBYTE(v28) = LOBYTE(v28);
        LOBYTE(v28) = v9;
        v11 = HIBYTE(v29);
        HIBYTE(v29) = LOBYTE(v29);
        BYTE1(v28) = v10;
        v12 = BYTE2(v29);
        BYTE2(v29) = BYTE1(v29);
        LOBYTE(v29) = v11;
        v13 = HIBYTE(v30);
        HIBYTE(v30) = LOBYTE(v30);
        BYTE1(v29) = v12;
        v14 = BYTE2(v30);
        BYTE2(v30) = BYTE1(v30);
        LOBYTE(v30) = v13;
        v15 = HIBYTE(v31);
        HIBYTE(v31) = LOBYTE(v31);
        BYTE1(v30) = v14;
        v16 = BYTE2(v31);
        BYTE2(v31) = BYTE1(v31);
        LOBYTE(v31) = v15;
        v17 = HIBYTE(v32);
        HIBYTE(v32) = LOBYTE(v32);
        BYTE1(v31) = v16;
        v18 = BYTE2(v32);
        BYTE2(v32) = BYTE1(v32);
        LOBYTE(v32) = v17;
        v19 = HIBYTE(v33);
        HIBYTE(v33) = LOBYTE(v33);
        BYTE1(v32) = v18;
        v20 = BYTE2(v33);
        BYTE2(v33) = BYTE1(v33);
        LOBYTE(v33) = v19;
        v21 = HIBYTE(v34);
        HIBYTE(v34) = v34;
        BYTE1(v33) = v20;
        v22 = BYTE2(v34);
        BYTE2(v34) = BYTE1(v34);
        LOBYTE(v34) = v21;
        v23 = HIBYTE(v35);
        BYTE1(v34) = v22;
        v24 = BYTE2(v35);
        BYTE2(v35) = BYTE1(v35);
        HIBYTE(v35) = v35;
        LOBYTE(v35) = v23;
        v25 = HIBYTE(v36);
        BYTE1(v35) = v24;
        v26 = BYTE1(v36);
        HIBYTE(v36) = v36;
        LOBYTE(v36) = v25;
        BYTE1(v36) = BYTE2(v36);
        BYTE2(v36) = v26;
      }
      sub_10015220(a3, (char *)&v28, 36);
      ++v4;
      v5 += 36;
    }
    while ( v4 < this[1] );
  }
  return 1;
}
