/*
 * func-name: ?RayCastAll@NxPhysics@@QAEHABVVector@@0W4NxShapesType@@AAV?$vector@UCollisionInfo@@V?$allocator@UCollisionInfo@@@std@@@std@@I@Z
 * func-address: 0x10144670
 * callers: 0x1013fff0
 * callees: 0x1004c240, 0x10053420, 0x10053800, 0x10100b70, 0x101a2516
 */

int __userpurge NxPhysics::RayCastAll@<eax>(
        _DWORD *a1@<ecx>,
        float *a2,
        float *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  float *v9; // eax
  double v10; // st7
  double v11; // st7
  float *v12; // eax
  int *v13; // esi
  int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // ebp
  int result; // eax
  float v18; // [esp+1Ch] [ebp-30h] BYREF
  float v19; // [esp+20h] [ebp-2Ch]
  float v20; // [esp+24h] [ebp-28h]
  float v21[5]; // [esp+28h] [ebp-24h] BYREF
  float v22[4]; // [esp+3Ch] [ebp-10h] BYREF
  float v23; // [esp+50h] [ebp+4h]
  float v24; // [esp+58h] [ebp+Ch]

  v9 = NxHelper::ToNxVec3(v21, a2);
  v21[3] = *v9;
  v21[4] = v9[1];
  v22[0] = v9[2];
  v18 = *a3 - *a2;
  v10 = a3[1];
  v21[0] = v18;
  v19 = v10 - a2[1];
  v11 = a3[2];
  v21[1] = v19;
  v20 = v11 - a2[2];
  v21[2] = v20;
  sub_1004C240(v21);
  v12 = NxHelper::ToNxVec3(&v18, v21);
  v22[1] = *v12;
  v22[2] = v12[1];
  v22[3] = v12[2];
  v18 = *a3 - *a2;
  v19 = a3[1] - a2[1];
  v13 = (int *)a1[3];
  v14 = *v13;
  v20 = a3[2] - a2[2];
  v23 = v19 * v19 + v18 * v18 + v20 * v20;
  v24 = sqrt(v23);
  (*(void (__thiscall **)(int *, float *, _DWORD *, int, int, _DWORD))(v14 + 440))(
    v13,
    v22,
    a1 + 5,
    a6,
    a8,
    LODWORD(v24));
  sub_10053800(a5, (int)(a1 + 6));
  v15 = a1[8];
  if ( a1[7] > v15 )
    invalid_parameter_noinfo();
  v16 = a1[7];
  if ( v16 > a1[8] )
    invalid_parameter_noinfo();
  sub_10053420(a1 + 6, &v18, (int)(a1 + 6), v16, (int)(a1 + 6), v15);
  result = *(_DWORD *)(a5 + 4);
  if ( result )
    return (*(_DWORD *)(a5 + 8) - result) / 104;
  return result;
}
