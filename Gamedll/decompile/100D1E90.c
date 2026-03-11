/*
 * func-name: sub_100D1E90
 * func-address: 0x100d1e90
 * callers: 0x10015cbc
 * callees: 0x1001396c, 0x102ca08c, 0x102ca092
 */

int __userpurge sub_100D1E90@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5,
        float a6,
        int a7,
        int a8,
        int a9,
        float a10,
        float a11,
        float a12)
{
  int result; // eax
  bool v14; // bl
  bool v15; // cl
  double v17; // st6
  double v18; // st6
  NxPhysics *v19; // eax
  struct NxScene *Scene; // eax
  int v21; // eax
  double v22; // st7
  int v23; // eax
  int v24; // [esp+10h] [ebp-4Ch]
  int v25; // [esp+14h] [ebp-48h]
  float v26; // [esp+14h] [ebp-48h]
  float v27; // [esp+18h] [ebp-44h] BYREF
  float v28; // [esp+1Ch] [ebp-40h]
  float v29; // [esp+20h] [ebp-3Ch]
  float v30; // [esp+24h] [ebp-38h]
  float v31; // [esp+28h] [ebp-34h]
  float v32; // [esp+2Ch] [ebp-30h] BYREF
  float v33; // [esp+30h] [ebp-2Ch]
  float v34; // [esp+34h] [ebp-28h]
  float v35; // [esp+38h] [ebp-24h] BYREF
  float v36[8]; // [esp+3Ch] [ebp-20h] BYREF
  float v37; // [esp+64h] [ebp+8h]
  float v38; // [esp+6Ch] [ebp+10h]
  float v39; // [esp+6Ch] [ebp+10h]
  float v40; // [esp+6Ch] [ebp+10h]
  float v41; // [esp+6Ch] [ebp+10h]

  result = *(_DWORD *)(a1 + 4);
  if ( !*(_DWORD *)(result + 4) || !*(_BYTE *)(result + 168) || !*(_BYTE *)(a1 + 140) )
    return result;
  v14 = *(float *)(*(int (__thiscall **)(_DWORD, float *, int, int, int))(**(_DWORD **)(a1 + 8) + 44))(
                    *(_DWORD *)(a1 + 8),
                    &v32,
                    a4,
                    a3,
                    a2) < 0.0;
  v15 = *(float *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 44))(*(_DWORD *)(a1 + 8)) + 8) > 0.0;
  *(float *)(a1 + 200) = a12;
  if ( a8 == 1 )
  {
    *(float *)(a1 + 200) = a10;
  }
  else if ( a8 == 2 )
  {
    *(float *)(a1 + 200) = -a11;
  }
  v17 = a10;
  v28 = 0.0;
  v29 = 0.0;
  v30 = 1.0;
  if ( a7 == 1 )
  {
    if ( *(float *)&a8 != 0.0 )
    {
      if ( v15 )
      {
        v40 = *(float *)(a1 + 196) / 180.0 * 3.141592741012573;
        a10 = sin(v40);
        v34 = -a10;
        v41 = cos(v40);
        v36[0] = v41;
        v28 = v34;
        v29 = 0.0;
        v30 = v41;
      }
      goto LABEL_27;
    }
    if ( !v14 )
    {
      if ( v15 )
        goto LABEL_13;
      goto LABEL_24;
    }
    if ( !v15 )
    {
LABEL_16:
      v28 = 0.5;
      v29 = 0.0;
      v18 = -0.5;
      goto LABEL_14;
    }
LABEL_22:
    v28 = -0.5;
    v30 = -0.5;
    v29 = 0.0;
    *(float *)(a1 + 200) = v17 * *(float *)(a1 + 192);
    goto LABEL_27;
  }
  if ( a7 == 2 )
  {
    if ( *(float *)&a8 != 0.0 )
    {
      if ( v15 )
      {
        v38 = *(float *)(a1 + 196) / 180.0 * 3.141592741012573;
        a10 = sin(v38);
        v34 = a10;
        v39 = cos(v38);
        v36[0] = v39;
        v28 = a10;
        v29 = 0.0;
        v30 = v39;
      }
      goto LABEL_27;
    }
    if ( v14 )
    {
      if ( !v15 )
      {
LABEL_13:
        v28 = -0.5;
        v29 = 0.0;
        v18 = 0.5;
LABEL_14:
        v30 = v18;
        *(float *)(a1 + 200) = a10 * *(float *)(a1 + 192);
        goto LABEL_27;
      }
LABEL_24:
      v28 = 0.5;
      v30 = 0.5;
      v29 = 0.0;
      *(float *)(a1 + 200) = v17 * *(float *)(a1 + 192);
      goto LABEL_27;
    }
    if ( v15 )
      goto LABEL_16;
    goto LABEL_22;
  }
LABEL_27:
  v19 = (NxPhysics *)NxPhysics::Instance(&v35, v24, v25, LODWORD(v27), LODWORD(v28));
  Scene = NxPhysics::GetScene(v19);
  v21 = (*(int (__thiscall **)(struct NxScene *, _DWORD))(*(_DWORD *)Scene + 320))(
          Scene,
          *(unsigned __int16 *)(a1 + 84));
  if ( v21 )
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v21 + 60))(v21, &v27);
  (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(*(_DWORD *)(a1 + 4) + 4) + 44))(
    *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4),
    v36);
  v37 = *(float *)(a1 + 200);
  v29 = v37 * v26;
  v30 = v37 * v27;
  v31 = v37 * v28;
  v32 = v36[1] * v31 + v35 * v29 + v36[0] * v30;
  v33 = v36[3] * v30 + v36[2] * v29 + v36[4] * v31;
  v34 = v29 * v36[5] + v30 * v36[6] + v31 * v36[7];
  v22 = 0.0;
  if ( 0.0 != *(float *)(a1 + 200) && (*(float *)(a1 + 160) > 0.70999998 || v33 < 0.0) )
  {
    v23 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 8) + 4))(*(_DWORD *)(a1 + 8));
    (*(void (__thiscall **)(int, float *, int, _DWORD, int))(*(_DWORD *)v23 + 272))(v23, &v32, a1 + 144, 0, 1);
    *(float *)(a1 + 88) = *(float *)(a1 + 40) * *(float *)(a1 + 200) * GDeltaTime + *(float *)(a1 + 88);
    v22 = 0.0;
  }
  if ( *(float *)&a7 == 0.0 && *(float *)&a8 == 0.0 && v22 == a10 )
    return sub_1001396C(0, 0, 1);
  else
    return sub_1001396C(a7, a8, a7);
}
