/*
 * func-name: ?RayCast@NxPhysics@@QAE_NABVVector@@0W4NxShapesType@@AAUCollisionInfo@@I@Z
 * func-address: 0x10143e00
 * callers: 0x10063980
 * callees: 0x10019470, 0x1004c240, 0x100913d0, 0x1009dd90, 0x101a2516
 */

char __userpurge NxPhysics::RayCast@<al>(
        int a1@<ecx>,
        float *a2,
        float *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  double v11; // st7
  double v12; // st7
  double v13; // st7
  int *v14; // esi
  int v15; // edi
  int v16; // edi
  int *v18; // eax
  int v19; // eax
  int v20; // eax
  ModelFrame *v21; // eax
  struct Mesh *Mesh; // eax
  float v23; // [esp+1Ch] [ebp-68h] BYREF
  float v24; // [esp+20h] [ebp-64h]
  float v25; // [esp+24h] [ebp-60h]
  float v26; // [esp+28h] [ebp-5Ch]
  float v27; // [esp+2Ch] [ebp-58h]
  float v28; // [esp+30h] [ebp-54h]
  float v29; // [esp+34h] [ebp-50h]
  float v30; // [esp+38h] [ebp-4Ch]
  float v31; // [esp+3Ch] [ebp-48h]
  float v32[4]; // [esp+40h] [ebp-44h] BYREF
  int v33; // [esp+50h] [ebp-34h] BYREF
  _BYTE v34[4]; // [esp+58h] [ebp-2Ch] BYREF
  _DWORD v35[10]; // [esp+5Ch] [ebp-28h] BYREF
  float v36; // [esp+88h] [ebp+4h]
  float v37; // [esp+88h] [ebp+4h]
  float v38; // [esp+94h] [ebp+10h]

  v29 = *a2;
  v30 = a2[1];
  v31 = a2[2];
  v36 = *a3 - *a2;
  v26 = v36;
  v11 = a3[1];
  v23 = v36;
  v27 = v11 - a2[1];
  v12 = a3[2];
  v24 = v27;
  v28 = v12 - a2[2];
  v25 = v28;
  sub_1004C240(&v23);
  v32[0] = v23;
  v32[1] = v24;
  v32[2] = v25;
  v26 = v36;
  v27 = a3[1] - a2[1];
  v13 = a3[2] - a2[2];
  v14 = *(int **)(a1 + 12);
  v15 = *v14;
  v28 = v13;
  v37 = v27 * v27 + v36 * v36 + v28 * v28;
  v38 = sqrt(v37);
  v16 = (*(int (__thiscall **)(int *, float *, int, _BYTE *, int, float))(v15 + 448))(
          v14,
          v32,
          a7,
          v34,
          a9,
          COERCE_FLOAT(LODWORD(v38)));
  if ( !v16 )
    return 0;
  sub_100913D0((_DWORD *)(LODWORD(v38) + 32), &v33);
  sub_100913D0((_DWORD *)(LODWORD(v38) + 16), v35);
  *(double *)(LODWORD(v38) + 8) = *(float *)&v35[5];
  v18 = *(int **)((*(int (__thiscall **)(int))(*(_DWORD *)v16 + 4))(v16) + 4);
  if ( v18 )
  {
    *(_DWORD *)(LODWORD(v38) + 76) = v18[1];
    v19 = *v18;
    *(_DWORD *)(LODWORD(v38) + 64) = v19;
    if ( v19 )
    {
      v20 = *(_DWORD *)(v19 + 716);
      if ( v20 )
      {
        v21 = *(ModelFrame **)(v20 + 308);
        if ( v21 )
        {
          if ( ModelFrame::GetMesh(v21, 0) )
          {
            Mesh = ModelFrame::GetMesh(*(ModelFrame **)(*(_DWORD *)(*(_DWORD *)(LODWORD(v38) + 64) + 716) + 308), 0);
            *(_DWORD *)(LODWORD(v38) + 72) = *(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)Mesh + 615, 0);
            return 1;
          }
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(LODWORD(v38) + 64) = 0;
  }
  return 1;
}
