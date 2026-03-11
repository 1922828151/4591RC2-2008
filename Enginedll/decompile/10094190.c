/*
 * func-name: ?OnUpdate@Gizmo@@QAEX_NVVector2@@AAVCamera@@AAVMatrix@@@Z
 * func-address: 0x10094190
 * callers: 0x1008ce00
 * callees: 0x1000ac80, 0x1001cb70, 0x10091db0, 0x10092020, 0x10092a20, 0x10092b40, 0x10092c60, 0x100dad30, 0x100db0e0, 0x101780e0, 0x1017811c, 0x101786e0, 0x10178c20, 0x10179840, 0x101a2516, 0x101a251c, 0x101a26c0
 */

int __thiscall Gizmo::OnUpdate(int this, char a2, float a3, float a4, struct Camera *a5, float *a6)
{
  struct Camera *v7; // eax
  int v8; // esi
  void *v9; // eax
  float v10; // eax
  float v11; // ecx
  int v12; // edx
  Input *v13; // eax
  bool v14; // zf
  float v15; // esi
  float v16; // edi
  float v17; // edx
  float v18; // edx
  float v19; // eax
  double Scale; // st7
  float v21; // eax
  float v22; // ecx
  float v23; // edx
  double v24; // st7
  double v25; // st6
  double v26; // rt1
  float v27; // ecx
  float v28; // eax
  double v29; // st6
  float v30; // edx
  double v31; // st7
  float v32; // ecx
  float v33; // edx
  float v34; // eax
  float v35; // ecx
  float v36; // eax
  float v37; // eax
  float v38; // edx
  float v39; // eax
  Input *v40; // eax
  int v41; // eax
  int result; // eax
  int v43; // [esp+1Eh] [ebp-148h]
  int v44; // [esp+1Eh] [ebp-148h]
  int v45; // [esp+22h] [ebp-144h]
  char v46; // [esp+39h] [ebp-12Dh]
  float v47; // [esp+3Ah] [ebp-12Ch] BYREF
  float v48; // [esp+3Eh] [ebp-128h]
  float v49; // [esp+42h] [ebp-124h]
  float v50; // [esp+46h] [ebp-120h]
  float v51; // [esp+4Ah] [ebp-11Ch] BYREF
  float v52; // [esp+4Eh] [ebp-118h]
  float v53; // [esp+52h] [ebp-114h]
  int v54; // [esp+56h] [ebp-110h]
  float v55; // [esp+5Ah] [ebp-10Ch]
  float v56; // [esp+5Eh] [ebp-108h]
  float v57; // [esp+62h] [ebp-104h]
  float v58[32]; // [esp+66h] [ebp-100h] BYREF
  char v59[64]; // [esp+E6h] [ebp-80h] BYREF
  char v60[64]; // [esp+126h] [ebp-40h] BYREF

  if ( !a2 || (v46 = 1, *(_BYTE *)(this + 356)) )
    v46 = 0;
  if ( !*(_BYTE *)(this + 357) )
  {
    Gizmo::Initialize((Gizmo *)this);
    *(_BYTE *)(this + 357) = 1;
  }
  if ( 0.0 == *(float *)(this + 324) && 0.0 == *(float *)(this + 328) )
  {
    *(float *)(this + 324) = a3;
    *(float *)(this + 328) = a4;
  }
  v7 = a5;
  qmemcpy(v58, (char *)a5 + 220, 0x40u);
  qmemcpy((void *)(this + 384), v58, 0x40u);
  *(float *)(this + 432) = 0.0;
  *(float *)(this + 436) = 0.0;
  *(float *)(this + 440) = 0.0;
  v8 = *(_DWORD *)(this + 936);
  if ( v8 == 1 && !a2 && *(_BYTE *)(this + 356) )
  {
    *(float *)(this + 324) = 0.0;
    *(_BYTE *)(this + 696) = 0;
    *(float *)(this + 328) = 0.0;
  }
  if ( v8 == 1 )
  {
    if ( !v46 )
      goto LABEL_19;
    v45 = sub_10179840(v59);
    v9 = (void *)sub_10179840(v60);
    sub_1001CB70(v9, v58, v45);
    D3DXQuaternionRotationMatrix(&v51, v58);
    v10 = v52;
    v11 = v53;
    *(float *)(this + 680) = v51;
    v12 = v54;
    *(float *)(this + 684) = v10;
    *(float *)(this + 688) = v11;
    *(_DWORD *)(this + 692) = v12;
    sub_10092A20(this + 368, (int)a3, (int)a4);
    v7 = a5;
  }
  if ( v46 )
  {
    v43 = *(_DWORD *)(this + 360);
    v13 = Input::Instance();
    v14 = !Input::ControlDown(v13, v43, 0);
    v7 = a5;
    if ( !v14 )
      *(_DWORD *)(this + 932) = ~(unsigned __int8)*(_DWORD *)(this + 932) & 0xE;
  }
LABEL_19:
  *(_BYTE *)(this + 356) = a2;
  qmemcpy((void *)(this + 48), (char *)v7 + 220, 0x40u);
  qmemcpy((void *)(this + 112), (char *)v7 + 156, 0x40u);
  *(_DWORD *)(this + 176) = *((_DWORD *)v7 + 94);
  *(_DWORD *)(this + 180) = *((_DWORD *)v7 + 95);
  *(_DWORD *)(this + 184) = *((_DWORD *)v7 + 96);
  *(float *)(this + 320) = a4;
  *(float *)(this + 316) = a3;
  qmemcpy((void *)(this + 752), a6, 0x40u);
  Gizmo::UpdateScreenSpaceMatrices((Gizmo *)this, v7);
  v16 = a6[13];
  v17 = a6[14];
  v51 = a6[12];
  v15 = v51;
  v55 = v51;
  v56 = v16;
  v57 = v17;
  v52 = v16;
  v53 = v17;
  memset(&v58[16], 0, 0x40u);
  sub_101786E0(1.0);
  v58[31] = 1.0;
  v47 = v15;
  v48 = v16;
  v49 = v57;
  D3DXVec3TransformCoord(&v47, &v47, this + 188);
  v18 = v48;
  v19 = v49;
  *(float *)(this + 36) = v47;
  qmemcpy(v58, (const void *)(this + 48), 0x40u);
  *(float *)(this + 40) = v18;
  *(float *)(this + 44) = v19;
  sub_10178C20(v58);
  v47 = v58[12] - v55;
  v48 = v58[13] - v56;
  v49 = v58[14] - v57;
  v50 = v48 * v48 + v47 * v47 + v49 * v49;
  v50 = sqrt(v50);
  v50 = v50 * *(float *)(this + 348);
  Scale = Gizmo::GetScale((Gizmo *)this);
  v21 = v51;
  v22 = v52;
  v23 = v53;
  v50 = Scale * v50;
  *(float *)(this + 824) = v51;
  *(float *)(this + 828) = v22;
  *(float *)(this + 832) = v23;
  v24 = *(float *)(this + 824);
  v25 = v50;
  *(float *)(this + 836) = v21;
  *(float *)(this + 840) = v22;
  *(float *)(this + 844) = v23;
  v26 = v25;
  *(float *)(this + 848) = v21;
  *(float *)(this + 852) = v22;
  *(float *)(this + 824) = v24 + v25;
  v27 = *(float *)(this + 824);
  v28 = *(float *)(this + 832);
  v29 = *(float *)(this + 840) + v25;
  *(float *)(this + 856) = v23;
  v30 = *(float *)(this + 828);
  v47 = v27;
  *(float *)(this + 840) = v29;
  v31 = v26 + *(float *)(this + 856);
  v48 = v30;
  *(float *)(this + 856) = v31;
  v49 = v28;
  D3DXVec3TransformCoord(&v47, &v47, this + 188);
  v32 = v48;
  v33 = v49;
  *(float *)this = v47;
  v34 = *(float *)(this + 836);
  *(float *)(this + 4) = v32;
  v35 = *(float *)(this + 840);
  v47 = v34;
  v48 = v35;
  *(float *)(this + 8) = v33;
  v49 = *(float *)(this + 844);
  D3DXVec3TransformCoord(&v47, &v47, this + 188);
  v36 = v48;
  *(float *)(this + 12) = v47;
  *(float *)(this + 16) = v36;
  v37 = *(float *)(this + 852);
  v47 = *(float *)(this + 848);
  v48 = v37;
  *(float *)(this + 20) = v49;
  v49 = *(float *)(this + 856);
  D3DXVec3TransformCoord(&v47, &v47, this + 188);
  v14 = *(_BYTE *)(this + 356) == 0;
  v38 = v48;
  v39 = v49;
  *(float *)(this + 24) = v47;
  *(float *)(this + 28) = v38;
  *(float *)(this + 32) = v39;
  if ( v14
    || (Gizmo::UpdateMovement((Gizmo *)this), !*(_BYTE *)(this + 356))
    || v46 && (v44 = *(_DWORD *)(this + 360), v40 = Input::Instance(), !Input::ControlDown(v40, v44, 0)) )
  {
    v41 = *(_DWORD *)(this + 936);
    if ( !v41 || v41 == 2 )
    {
      *(_DWORD *)(this + 932) = 0;
      if ( Gizmo::TestLine((Gizmo *)this, (struct Vector *)(this + 36), (struct Vector *)this) )
        *(_DWORD *)(this + 932) = 2;
      if ( Gizmo::TestLine((Gizmo *)this, (struct Vector *)(this + 36), (struct Vector *)(this + 12)) )
        *(_DWORD *)(this + 932) |= 4u;
      if ( Gizmo::TestLine((Gizmo *)this, (struct Vector *)(this + 36), (struct Vector *)(this + 24)) )
        *(_DWORD *)(this + 932) |= 8u;
    }
  }
  result = *(_DWORD *)(this + 320);
  *(_DWORD *)(this + 324) = *(_DWORD *)(this + 316);
  *(_DWORD *)(this + 328) = result;
  return result;
}
