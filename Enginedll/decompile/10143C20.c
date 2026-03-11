/*
 * func-name: ?RayCast@NxPhysics@@QAE_NABV?$vector@JV?$allocator@J@std@@@std@@ABVVector@@1W4NxShapesType@@AAUCollisionInfo@@I@Z
 * func-address: 0x10143c20
 * callers: none
 * callees: 0x10024540, 0x10029a50, 0x1004c240, 0x10100b70, 0x10147890, 0x101a2516
 */

char __userpurge NxPhysics::RayCast@<al>(
        int a1@<ecx>,
        int a2,
        float *a3,
        float *a4,
        int a5,
        double *a6,
        int a7,
        int a8,
        int a9)
{
  float *v10; // eax
  float *v11; // eax
  double v12; // st7
  int *v13; // esi
  int v14; // edi
  float v16; // [esp+18h] [ebp-CCh]
  float v17; // [esp+18h] [ebp-CCh]
  float v18; // [esp+1Ch] [ebp-C8h] BYREF
  float v19; // [esp+20h] [ebp-C4h]
  float v20; // [esp+24h] [ebp-C0h]
  float v21; // [esp+28h] [ebp-BCh]
  float v22; // [esp+2Ch] [ebp-B8h]
  float v23[5]; // [esp+30h] [ebp-B4h] BYREF
  float v24[4]; // [esp+44h] [ebp-A0h] BYREF
  float v25[3]; // [esp+54h] [ebp-90h] BYREF
  char v26; // [esp+64h] [ebp-80h]
  void *v27[31]; // [esp+68h] [ebp-7Ch] BYREF

  v10 = NxHelper::ToNxVec3(&v18, a3);
  v23[3] = *v10;
  v23[4] = v10[1];
  v24[0] = v10[2];
  v22 = *a4 - *a3;
  v21 = a4[1] - a3[1];
  v16 = a4[2] - a3[2];
  v18 = v22;
  v23[0] = v22;
  v19 = v21;
  v20 = v16;
  v23[1] = v21;
  v23[2] = v16;
  sub_1004C240(v23);
  v11 = NxHelper::ToNxVec3(v25, v23);
  v24[1] = *v11;
  v24[2] = v11[1];
  v24[3] = v11[2];
  OutpopRaycastReportIgnore::OutpopRaycastReportIgnore(a2);
  v12 = *a4 - *a3;
  v27[30] = 0;
  v18 = v12;
  v19 = a4[1] - a3[1];
  v13 = *(int **)(a1 + 12);
  v14 = *v13;
  v20 = a4[2] - a3[2];
  v17 = v19 * v19 + v18 * v18 + v20 * v20;
  v19 = sqrt(v17);
  (*(void (__thiscall **)(int *, float *, void **, int, int, float))(v14 + 440))(
    v13,
    v24,
    v27,
    a7,
    a9,
    COERCE_FLOAT(LODWORD(v19)));
  if ( v26 )
  {
    CollisionInfo::operator=(a6, (int)v27);
    CollisionInfo::~CollisionInfo(v27);
    return 1;
  }
  else
  {
    CollisionInfo::~CollisionInfo(v27);
    return 0;
  }
}
