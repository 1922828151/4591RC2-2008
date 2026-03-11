/*
 * func-name: ?CreateBoxActor@NxPhysics@@QAEPAVNxActor@@PAVActor@@JABVBBox@@ABVMatrix@@_NMW4PhysicsGroup@@PAVPhysicsNormal_Callback@@3@Z
 * func-address: 0x10142040
 * callers: none
 * callees: 0x10100b70, 0x10100c20, 0x10141bd0, 0x101a251c, 0x101a2534
 */

_DWORD *__thiscall NxPhysics::CreateBoxActor(
        _DWORD *this,
        int a2,
        int a3,
        float *a4,
        float *a5,
        char a6,
        float a7,
        int a8,
        int a9,
        char a10)
{
  _DWORD **v10; // edi
  double v12; // st7
  float *v13; // eax
  double v14; // st7
  float v15; // eax
  double v16; // st6
  double v17; // st7
  float v18; // eax
  float v19; // ecx
  float v20; // esi
  float v21; // eax
  float v22; // edx
  _DWORD *NxActor; // edi
  int *v24; // eax
  int *v25; // esi
  _DWORD *v26; // eax
  float v27; // [esp+8h] [ebp-1CCh]
  float v28; // [esp+8h] [ebp-1CCh]
  float v29; // [esp+Ch] [ebp-1C8h]
  float v30; // [esp+Ch] [ebp-1C8h]
  float v31; // [esp+10h] [ebp-1C4h]
  float v32; // [esp+10h] [ebp-1C4h]
  float v34[26]; // [esp+18h] [ebp-1BCh] BYREF
  float v35[3]; // [esp+80h] [ebp-154h] BYREF
  _DWORD v36[15]; // [esp+8Ch] [ebp-148h] BYREF
  __int16 v37; // [esp+C8h] [ebp-10Ch]
  __int16 v38; // [esp+CAh] [ebp-10Ah]
  int v39; // [esp+CCh] [ebp-108h]
  float v40; // [esp+D0h] [ebp-104h]
  float v41; // [esp+D4h] [ebp-100h]
  float v42; // [esp+D8h] [ebp-FCh]
  int v43; // [esp+DCh] [ebp-F8h]
  int v44; // [esp+E0h] [ebp-F4h]
  int v45; // [esp+E4h] [ebp-F0h]
  int v46; // [esp+E8h] [ebp-ECh]
  int v47; // [esp+ECh] [ebp-E8h]
  int v48; // [esp+F0h] [ebp-E4h]
  int v49; // [esp+F4h] [ebp-E0h]
  float v50; // [esp+F8h] [ebp-DCh]
  float v51; // [esp+FCh] [ebp-D8h]
  float v52; // [esp+100h] [ebp-D4h]
  float v53[15]; // [esp+104h] [ebp-D0h] BYREF
  float v54; // [esp+140h] [ebp-94h]
  float v55; // [esp+144h] [ebp-90h]
  float v56; // [esp+148h] [ebp-8Ch]
  float v57; // [esp+14Ch] [ebp-88h]
  float v58; // [esp+150h] [ebp-84h]
  float v59; // [esp+154h] [ebp-80h]
  float v60; // [esp+158h] [ebp-7Ch]
  float v61; // [esp+15Ch] [ebp-78h]
  float v62; // [esp+160h] [ebp-74h]
  float v63; // [esp+164h] [ebp-70h]
  float v64; // [esp+168h] [ebp-6Ch]
  float v65; // [esp+16Ch] [ebp-68h]
  int v66; // [esp+170h] [ebp-64h]
  float v67; // [esp+174h] [ebp-60h]
  float v68; // [esp+178h] [ebp-5Ch]
  int v69; // [esp+17Ch] [ebp-58h]
  float v70; // [esp+180h] [ebp-54h]
  float v71; // [esp+184h] [ebp-50h]
  float v72; // [esp+188h] [ebp-4Ch]
  float v73[3]; // [esp+18Ch] [ebp-48h] BYREF
  float v74[12]; // [esp+198h] [ebp-3Ch] BYREF
  int v75; // [esp+1D0h] [ebp-4h]

  v10 = (_DWORD **)this;
  if ( !this[2] )
    return 0;
  *(float *)&v36[2] = 1.0;
  v36[1] = 2;
  *(float *)&v36[3] = 0.0;
  v36[0] = &NxBoxShapeDesc::`vftable';
  *(float *)&v36[4] = 0.0;
  v36[14] = 1179656;
  *(float *)&v36[5] = 0.0;
  v37 = 0;
  *(float *)&v36[7] = 0.0;
  v38 = 0;
  *(float *)&v36[8] = 0.0;
  v39 = 0;
  *(float *)&v36[9] = 0.0;
  v43 = 0;
  *(float *)&v36[13] = 0.0;
  v44 = 0;
  *(float *)&v36[12] = 0.0;
  v45 = 0;
  *(float *)&v36[11] = 0.0;
  v46 = 0;
  v47 = 0;
  *(float *)&v36[6] = 1.0;
  v48 = 0;
  *(float *)&v36[10] = 1.0;
  v49 = 0;
  v42 = -1.0;
  v41 = -1.0;
  v40 = 1.0;
  v52 = 0.0;
  v51 = 0.0;
  v50 = 0.0;
  v12 = a4[7] - a4[4];
  v75 = 0;
  v31 = v12;
  v29 = a4[8] - a4[5];
  v27 = a4[9] - a4[6];
  v32 = v31 * 0.5;
  v30 = v29 * 0.5;
  v28 = 0.5 * v27;
  v35[0] = v32;
  v35[1] = v30;
  v35[2] = v28;
  v13 = NxHelper::ToNxVec3(v73, v35);
  v50 = *v13;
  v51 = v13[1];
  v14 = v13[2];
  v37 = a8;
  v52 = v14;
  memset(v34, 0, sizeof(v34));
  v15 = v34[22];
  v34[0] = 1.0;
  v34[1] = 0.0;
  v34[2] = 0.0;
  v34[12] = 0.0;
  v34[3] = 0.0;
  memset(&v34[14], 0, 14);
  v34[5] = 0.0;
  memset(&v34[18], 0, 12);
  v34[6] = 0.0;
  v34[7] = 0.0;
  v34[11] = 0.0;
  v34[10] = 0.0;
  v34[9] = 0.0;
  v16 = 1.0;
  v17 = 0.0;
  v34[4] = 1.0;
  v34[23] = v34[22];
  v34[8] = 1.0;
  LODWORD(v34[21]) = 1;
  v34[13] = 1.0;
  LOBYTE(v75) = 1;
  if ( LODWORD(v34[24]) <= LODWORD(v34[22])
    && (!LODWORD(v34[22]) || (unsigned int)((LODWORD(v34[24]) - LODWORD(v34[22])) >> 2) < 2) )
  {
    v18 = COERCE_FLOAT(malloc(8u));
    v19 = v34[23];
    v20 = v18;
    v21 = v34[22];
    v22 = v20;
    if ( LODWORD(v34[22]) != LODWORD(v34[23]) )
    {
      do
      {
        *(_DWORD *)LODWORD(v22) = *(_DWORD *)LODWORD(v21);
        LODWORD(v21) += 4;
        LODWORD(v22) += 4;
      }
      while ( LODWORD(v21) != LODWORD(v19) );
      v19 = v34[23];
      v21 = v34[22];
      v10 = (_DWORD **)this;
    }
    if ( v21 != 0.0 )
    {
      free((void *)LODWORD(v21));
      v19 = v34[23];
      v21 = v34[22];
    }
    v17 = 0.0;
    v16 = 1.0;
    LODWORD(v15) = LODWORD(v20) + 4 * ((LODWORD(v19) - LODWORD(v21)) >> 2);
    LODWORD(v34[24]) = LODWORD(v20) + 8;
    v34[23] = v15;
    v34[22] = v20;
  }
  *(_DWORD *)LODWORD(v15) = v36;
  v53[0] = v16;
  v53[4] = v16;
  v53[8] = v16;
  LODWORD(v34[23]) += 4;
  v53[1] = v17;
  v69 = 4;
  v53[2] = v17;
  v66 = 2304;
  v53[3] = v17;
  v53[5] = v17;
  v53[6] = v17;
  v53[7] = v17;
  v53[11] = v17;
  v53[10] = v17;
  v53[9] = v17;
  v53[14] = v17;
  v53[13] = v17;
  v53[12] = v17;
  v57 = v17;
  v56 = v17;
  v55 = v17;
  v60 = v17;
  v59 = v17;
  v58 = v17;
  v61 = 0.39999998;
  v54 = v17;
  v62 = v17;
  v63 = 0.050000001;
  v64 = -1.0;
  v67 = -1.0;
  v68 = -1.0;
  v65 = v17;
  v70 = -1.0;
  v71 = v17;
  v72 = 3.4028235e38;
  if ( a6 )
  {
    v54 = a7;
    if ( a10 )
      v66 = 2432;
    LODWORD(v34[12]) = v53;
  }
  NxActor = (_DWORD *)NxPhysics::CreateNxActor(v10, a2, a3, (int)v34, a8);
  if ( NxActor )
  {
    NxHelper::ToNxMat34(v74, a5);
    (*(void (__thiscall **)(_DWORD *, float *))(*NxActor + 20))(NxActor, v74);
    v24 = (int *)operator new(0x10u);
    if ( v24 )
    {
      v24[2] = 4;
      v24[1] = -1;
      v24[3] = 0;
      v25 = v24;
    }
    else
    {
      v25 = 0;
    }
    v25[1] = a3;
    v25[2] = 0;
    *v25 = a2;
    v26 = operator new(8u);
    if ( v26 )
    {
      *v26 = 0;
      v26[1] = 0;
    }
    else
    {
      v26 = 0;
    }
    v26[1] = a9;
    v25[3] = (int)v26;
    NxActor[1] = v25;
  }
  if ( LODWORD(v34[22]) )
    free((void *)LODWORD(v34[22]));
  return NxActor;
}
