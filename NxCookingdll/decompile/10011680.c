/*
 * func-name: sub_10011680
 * func-address: 0x10011680
 * callers: 0x100126b0
 * callees: 0x100115c0, 0x10015970
 */

bool __usercall sub_10011680@<al>(int a1@<eax>, int a2@<edx>, int *a3@<ecx>)
{
  unsigned int v5; // ebp
  double v6; // st7
  double v7; // st5
  double v8; // st4
  double v9; // st7
  double v10; // rt2
  double v11; // st5
  double v12; // st6
  long double v13; // st4
  long double v14; // st3
  float *v15; // esi
  int v16; // ebp
  long double v17; // st7
  long double v18; // st7
  int *v19; // esi
  int v21; // [esp+10h] [ebp-38h]
  unsigned int v22; // [esp+14h] [ebp-34h]
  float v23; // [esp+18h] [ebp-30h]
  float v24; // [esp+1Ch] [ebp-2Ch]
  float v25; // [esp+20h] [ebp-28h]
  float v26; // [esp+24h] [ebp-24h] BYREF
  float v27; // [esp+28h] [ebp-20h]
  float v28; // [esp+2Ch] [ebp-1Ch] BYREF

  v5 = 1;
  switch ( a1 )
  {
    case 0:
      v23 = 1.0;
      v6 = 0.0;
      v24 = 0.0;
LABEL_7:
      v25 = v6;
      v26 = v23;
      v27 = v24;
      v28 = v25;
      break;
    case 1:
      v6 = 0.0;
      v23 = 0.0;
      v24 = 1.0;
      goto LABEL_7;
    case 2:
      v23 = 0.0;
      v24 = 0.0;
      v6 = 1.0;
      goto LABEL_7;
    case 3:
      v26 = (double)(unsigned int)j__rand() * 0.000030518509;
      v27 = (double)(unsigned int)j__rand() * 0.000030518509;
      v7 = v26 - 0.5;
      v26 = v7;
      v8 = v27 - 0.5;
      v27 = v8;
      v9 = v8;
      v10 = v7;
      v11 = (double)(unsigned int)j__rand() * 0.000030518509 - 0.5;
      v12 = v10;
      v28 = v11;
      v13 = v11 * v11 + v9 * v9 + v10 * v10;
      if ( 0.0 != v13 )
      {
        v14 = 1.0 / sqrt(v13);
        v26 = v12 * v14;
        v27 = v9 * v14;
        v28 = v11 * v14;
      }
      break;
    default:
      v15 = &v28;
      v16 = 3;
      do
      {
        *(v15 - 2) = (double)(unsigned int)j__rand() * 0.000030518509;
        *(v15 - 1) = (double)(unsigned int)j__rand() * 0.000030518509;
        *v15 = (double)(unsigned int)j__rand() * 0.000030518509;
        *(v15 - 2) = *(v15 - 2) - 0.5;
        *(v15 - 1) = *(v15 - 1) - 0.5;
        *v15 = *v15 - 0.5;
        v17 = *v15 * *v15 + *(v15 - 1) * *(v15 - 1) + *(v15 - 2) * *(v15 - 2);
        if ( 0.0 != v17 )
        {
          v18 = 1.0 / sqrt(v17);
          *(v15 - 2) = *(v15 - 2) * v18;
          *(v15 - 1) = *(v15 - 1) * v18;
          *v15 = v18 * *v15;
        }
        v15 += 3;
        --v16;
      }
      while ( v16 );
      v5 = 3;
      break;
  }
  v21 = 0;
  v19 = (int *)&v26;
  v22 = v5;
  do
  {
    if ( (sub_100115C0(v19, a2, a3) & 1) != 0 )
      ++v21;
    v19 += 3;
    --v22;
  }
  while ( v22 );
  return 2 * v21 > v5;
}
