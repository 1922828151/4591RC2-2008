/*
 * func-name: sub_10018A20
 * func-address: 0x10018a20
 * callers: none
 * callees: 0x10015220, 0x100160a0, 0x10016120, 0x10034ca4
 */

char __thiscall sub_10018A20(int this, char a2, int *a3)
{
  unsigned int v4; // ebp
  int *v5; // eax
  char v6; // cl
  char v7; // dl
  char v8; // cl
  char v9; // dl
  char v10; // cl
  char v11; // dl
  char v12; // cl
  char v13; // dl
  char v14; // cl
  char v15; // al
  int v17; // [esp+1Ch] [ebp-1Ch]
  int v18; // [esp+20h] [ebp-18h] BYREF
  int v19; // [esp+24h] [ebp-14h]
  int v20; // [esp+28h] [ebp-10h]
  int v21; // [esp+2Ch] [ebp-Ch]
  int v22; // [esp+30h] [ebp-8h]

  sub_100160A0(*(_DWORD *)(this + 4), a2, a3);
  v4 = 0;
  if ( *(_DWORD *)(this + 4) )
  {
    v17 = 0;
    do
    {
      v5 = (int *)(v17 + *(_DWORD *)(this + 8));
      v18 = *v5;
      v19 = v5[1];
      v20 = v5[2];
      v21 = v5[3];
      v22 = v5[4];
      if ( a2 )
      {
        v6 = BYTE1(v18);
        v7 = HIBYTE(v18);
        BYTE1(v18) = v18;
        HIBYTE(v18) = BYTE2(v18);
        LOBYTE(v18) = v6;
        v8 = BYTE1(v19);
        BYTE1(v19) = v19;
        BYTE2(v18) = v7;
        v9 = HIBYTE(v19);
        HIBYTE(v19) = BYTE2(v19);
        LOBYTE(v19) = v8;
        v10 = BYTE1(v20);
        BYTE1(v20) = v20;
        BYTE2(v19) = v9;
        v11 = HIBYTE(v20);
        HIBYTE(v20) = BYTE2(v20);
        LOBYTE(v20) = v10;
        v12 = HIBYTE(v21);
        BYTE2(v20) = v11;
        v13 = BYTE2(v21);
        BYTE2(v21) = BYTE1(v21);
        HIBYTE(v21) = v21;
        LOBYTE(v21) = v12;
        v14 = HIBYTE(v22);
        BYTE1(v21) = v13;
        v15 = BYTE1(v22);
        HIBYTE(v22) = v22;
        LOBYTE(v22) = v14;
        BYTE1(v22) = BYTE2(v22);
        BYTE2(v22) = v15;
      }
      sub_10015220(a3, (char *)&v18, 20);
      v17 += 20;
      ++v4;
    }
    while ( v4 < *(_DWORD *)(this + 4) );
  }
  sub_10016120(*(float *)(this + 12), a2, a3);
  sub_10016120(*(float *)(this + 16), a2, a3);
  sub_10016120(*(float *)(this + 20), a2, a3);
  sub_10016120(*(float *)(this + 24), a2, a3);
  sub_10016120(*(float *)(this + 28), a2, a3);
  sub_10016120(*(float *)(this + 32), a2, a3);
  return 1;
}
