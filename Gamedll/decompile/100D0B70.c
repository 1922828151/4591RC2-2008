/*
 * func-name: sub_100D0B70
 * func-address: 0x100d0b70
 * callers: 0x1000d2b0
 * callees: 0x10001032, 0x10004b79, 0x1000db11, 0x102c9dbc, 0x102ca0cc
 */

void __userpurge sub_100D0B70(
        Concurrency::details::SchedulerBase *this@<ecx>,
        int a2@<ebx>,
        int a3,
        char a4,
        int a5,
        int a6)
{
  double v7; // st7
  int v8; // ecx
  float *v9; // eax
  double v10; // st7
  double v11; // st6
  int v12; // ecx
  double v13; // st6
  int v14; // edi
  double v15; // st7
  double v16; // st7
  double v17; // st6
  double v18; // st7
  int v19; // ecx
  float v20; // [esp+28h] [ebp-A4h]
  float v21; // [esp+28h] [ebp-A4h]
  float v22; // [esp+28h] [ebp-A4h]
  float v23; // [esp+28h] [ebp-A4h]
  float v24; // [esp+28h] [ebp-A4h]
  float v25; // [esp+28h] [ebp-A4h]
  float v26; // [esp+28h] [ebp-A4h]
  float v27; // [esp+28h] [ebp-A4h]
  float v28; // [esp+28h] [ebp-A4h]
  float v29; // [esp+2Ch] [ebp-A0h]
  float v30; // [esp+2Ch] [ebp-A0h]
  float v31; // [esp+2Ch] [ebp-A0h]
  float v32; // [esp+30h] [ebp-9Ch]
  float v33; // [esp+30h] [ebp-9Ch]
  float v34; // [esp+30h] [ebp-9Ch]
  float v35; // [esp+34h] [ebp-98h]
  float v36; // [esp+34h] [ebp-98h]
  float v37; // [esp+34h] [ebp-98h]
  float v38; // [esp+38h] [ebp-94h]
  float v39; // [esp+38h] [ebp-94h]
  float v40; // [esp+3Ch] [ebp-90h]
  float v41; // [esp+3Ch] [ebp-90h]
  float v42; // [esp+40h] [ebp-8Ch]
  float v43; // [esp+40h] [ebp-8Ch]
  float v44; // [esp+44h] [ebp-88h]
  float v45; // [esp+48h] [ebp-84h]
  float v46; // [esp+48h] [ebp-84h]
  float v47; // [esp+48h] [ebp-84h]
  float v48; // [esp+48h] [ebp-84h]
  float v49; // [esp+4Ch] [ebp-80h] BYREF
  float v50; // [esp+50h] [ebp-7Ch]
  float v51; // [esp+54h] [ebp-78h]
  float v52; // [esp+58h] [ebp-74h] BYREF
  float v53; // [esp+5Ch] [ebp-70h]
  float v54; // [esp+60h] [ebp-6Ch]
  float v55; // [esp+64h] [ebp-68h]
  float v56; // [esp+68h] [ebp-64h]
  float v57; // [esp+6Ch] [ebp-60h]
  float v58; // [esp+70h] [ebp-5Ch] BYREF
  float v59; // [esp+74h] [ebp-58h]
  float v60; // [esp+78h] [ebp-54h]
  float v61; // [esp+7Ch] [ebp-50h]
  float v62; // [esp+80h] [ebp-4Ch]
  float v63; // [esp+84h] [ebp-48h]
  float v64; // [esp+88h] [ebp-44h]
  float v65; // [esp+8Ch] [ebp-40h]
  float v66; // [esp+90h] [ebp-3Ch]
  float v67; // [esp+94h] [ebp-38h]
  float v68; // [esp+98h] [ebp-34h]
  float v69; // [esp+9Ch] [ebp-30h]
  _BYTE v70[4]; // [esp+A8h] [ebp-24h] BYREF
  float v71[3]; // [esp+ACh] [ebp-20h] BYREF
  float v72; // [esp+B8h] [ebp-14h]
  float v73; // [esp+BCh] [ebp-10h]
  float v74; // [esp+C0h] [ebp-Ch]

  if ( *((_BYTE *)this + 168) )
  {
    (*(void (__thiscall **)(_DWORD, _BYTE *, int))(**((_DWORD **)this + 1) + 44))(*((_DWORD *)this + 1), v70, a2);
    v7 = v73 * 0.0;
    v50 = v72 + v7 + v74 * 0.0;
    v20 = v7 + 0.0 * v72 + v74;
    v21 = asin(v20);
    v38 = v21;
    v29 = 0.0;
    v32 = 0.0;
    v35 = 0.0;
    if ( (a4 & 1) != 0 )
    {
      v32 = *((float *)this + 58);
      v22 = fabs(v50);
      v35 = -(*((float *)this + 64) - v22 * *((float *)this + 64));
    }
    if ( (a4 & 2) != 0 )
    {
      v32 = -*((float *)this + 58);
      v23 = fabs(v50);
      v35 = *((float *)this + 64) - v23 * *((float *)this + 64);
    }
    v8 = *((_DWORD *)this + 1);
    v49 = 0.0;
    v50 = v32;
    v51 = 0.0;
    (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)v8 + 296))(v8, &v49, 2, 1);
    if ( 0.0 != *((float *)this + 60) || 0.0 != *((float *)this + 59) )
    {
      v9 = (float *)(*(int (__thiscall **)(_DWORD, float *))(**((_DWORD **)this + 1) + 232))(
                      *((_DWORD *)this + 1),
                      &v49);
      v24 = v9[1] * v9[1] + *v9 * *v9 + v9[2] * v9[2];
      v25 = sqrt(v24);
      v10 = v38;
      v11 = v25;
      if ( (a4 & 4) != 0 && *((float *)this + 59) > v10 )
        v29 = -(*((float *)this + 65) * v11 + *((float *)this + 57));
      if ( (a4 & 8) != 0 && *((float *)this + 60) < v10 )
        v29 = v11 * *((float *)this + 65) + *((float *)this + 57);
    }
    v12 = *((_DWORD *)this + 1);
    v49 = v29;
    v50 = 0.0;
    v51 = v35;
    (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)v12 + 300))(v12, &v49, 2, 1);
    (*(void (__thiscall **)(_DWORD, float *))(**((_DWORD **)this + 1) + 36))(*((_DWORD *)this + 1), &v58);
    v67 = 0.0;
    v68 = 0.0;
    v69 = 0.0;
    v30 = 0.0;
    v33 = 0.0;
    v36 = 0.0;
    if ( (a5 & 4) != 0 )
    {
      v38 = (*((float *)this + 52) - *((float *)this + 53)) * *((float *)this + 46) + *((float *)this + 53);
      v49 = -v38;
      v13 = 0.0;
      v30 = v49 + 0.0;
      v26 = 0.0 + 0.0;
      v33 = v26;
      v36 = v26;
    }
    else
    {
      v13 = 0.0;
    }
    if ( (a5 & 8) != 0 )
    {
      v49 = (*((float *)this + 52) - *((float *)this + 53)) * *((float *)this + 46) + *((float *)this + 53);
      v30 = v49 + v30;
      v33 = v33 + v13;
      v36 = v36 + v13;
    }
    v52 = v60 * v36 + v59 * v33 + v58 * v30;
    v54 = v36 * v66 + v30 * v64 + v33 * v65;
    v49 = v52 + v13;
    v51 = v13 + v54;
    v31 = v49;
    v37 = v51;
    v34 = 0.0;
    v42 = 0.0;
    v44 = 0.0;
    v45 = 0.0;
    if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(this) )
    {
      v28 = *((float *)this + 46);
      v14 = a5 & 1;
      v39 = (double)(int)Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(this)
          / 9.0
          * (*((float *)this + 48) - *((float *)this + 49))
          * v28
          + *((float *)this + 49);
      v16 = v39;
      v38 = v39 * 0.0;
      v55 = v38;
      v56 = v38;
      v17 = v16;
      v15 = 0.0;
      v57 = v17;
      v42 = v38 + 0.0;
      v44 = v42;
      v45 = v57 + 0.0;
      if ( (a5 & 1) != 0 || (a5 & 2) != 0 )
      {
        sub_10004B79(0);
        v15 = 0.0;
      }
    }
    else
    {
      v14 = a5 & 1;
      if ( (a5 & 1) != 0 )
      {
        v54 = (*((float *)this + 48) - *((float *)this + 49)) * *((float *)this + 46) + *((float *)this + 49);
        v15 = 0.0;
        v27 = 0.0 + 0.0;
        v42 = v27;
        v44 = v27;
        v45 = v54 + 0.0;
      }
      else
      {
        v15 = 0.0;
      }
      if ( (a5 & 2) != 0 )
      {
        v38 = (*((float *)this + 50) - *((float *)this + 51)) * *((float *)this + 46) + *((float *)this + 51);
        v54 = -v38;
        v42 = v42 + v15;
        v44 = v44 + v15;
        v45 = v54 + v45;
      }
    }
    v55 = v58 * v42 + v59 * v44 + v45 * v60;
    v56 = v62 * v44 + v61 * v42 + v45 * v63;
    v57 = v42 * v64 + v44 * v65 + v45 * v66;
    v52 = v55 + v67;
    v53 = v56 + v68;
    v54 = v57 + v69;
    v43 = v52;
    if ( (v14 || (a5 & 2) != 0) && ((a5 & 4) != 0 || (a5 & 8) != 0) )
    {
      v31 = v49 * 0.5;
      v34 = v15 * 0.5;
      v37 = v51 * 0.5;
      v43 = v52 * 0.5;
    }
    v53 = 0.0;
    if ( a6 == 1 )
    {
      v18 = (*((float *)this + 54) - *((float *)this + 55)) * *((float *)this + 46) + *((float *)this + 55);
    }
    else
    {
      if ( a6 != 2 )
      {
LABEL_38:
        *((_DWORD *)this + 71) = a6;
        v41 = v31 * v31 + v34 * v34 + v37 * v37;
        v46 = sqrt(v41);
        *((float *)this + 72) = v46;
        v47 = v51 * v51 + v49 * v49 + v50 * v50;
        v48 = sqrt(v47);
        v19 = *((_DWORD *)this + 1);
        *((float *)this + 47) = v48;
        v52 = v49 + v38;
        v53 = v50 + v41;
        v54 = v51 + v43;
        v71[0] = v52 + 0.0;
        v71[1] = v53 + v56;
        v71[2] = v54 + 0.0;
        v52 = 0.0;
        v53 = *((float *)this + 56);
        v54 = 0.0;
        (*(void (__thiscall **)(int, float *, float *, _DWORD, int))(*(_DWORD *)v19 + 276))(v19, v71, &v52, 0, 1);
        sub_1000DB11(a3, a5, 0);
        return;
      }
      v40 = (*((float *)this + 54) - *((float *)this + 55)) * *((float *)this + 46) + *((float *)this + 55);
      v18 = -v40;
    }
    v53 = v18;
    goto LABEL_38;
  }
}
