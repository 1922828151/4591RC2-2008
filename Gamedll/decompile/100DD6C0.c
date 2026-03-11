/*
 * func-name: ?ApplyCameraValues@CameraHandler@@QAEXXZ_0
 * func-address: 0x100dd6c0
 * callers: 0x100021c6
 * callees: 0x10018aca, 0x102c0ed0, 0x102c0f30, 0x102c9546, 0x102c9dbc
 */

void __thiscall CameraHandler::ApplyCameraValues(CameraHandler *this)
{
  Input *v2; // eax
  Input *v3; // eax
  bool v4; // zf
  float v5; // ecx
  float v6; // edx
  float v7; // eax
  int v8; // eax
  int v9; // eax
  float v10; // edx
  const void *v11; // esi
  float v12; // eax
  float v13; // ecx
  int v14; // [esp+4h] [ebp-80h]
  float v15; // [esp+4h] [ebp-80h]
  float v16; // [esp+10h] [ebp-74h]
  float v17; // [esp+10h] [ebp-74h]
  float v18; // [esp+10h] [ebp-74h]
  float v19; // [esp+14h] [ebp-70h] BYREF
  float v20; // [esp+18h] [ebp-6Ch]
  float v21; // [esp+1Ch] [ebp-68h]
  float v22; // [esp+20h] [ebp-64h] BYREF
  float v23; // [esp+24h] [ebp-60h]
  float v24; // [esp+28h] [ebp-5Ch]
  float v25; // [esp+2Ch] [ebp-58h] BYREF
  float v26; // [esp+30h] [ebp-54h]
  float v27; // [esp+34h] [ebp-50h]
  float v28; // [esp+38h] [ebp-4Ch] BYREF
  float v29; // [esp+3Ch] [ebp-48h]
  float v30; // [esp+40h] [ebp-44h]
  _BYTE v31[64]; // [esp+44h] [ebp-40h] BYREF

  *((float *)this + 98) = *((float *)this + 188);
  if ( flt_103AEB08 != *((float *)this + 188) )
  {
    v2 = (Input *)Input::Instance(v14);
    v16 = Input::GetSensitivity(v2) / (flt_103AEB08 / 90.0) * *((float *)this + 188) / 90.0;
    v3 = (Input *)Input::Instance(LODWORD(v16));
    Input::SetSensitivity(v3, v15);
    flt_103AEB08 = *((float *)this + 188);
  }
  if ( !byte_103B80F1 )
    *((_BYTE *)this + 348) = 1;
  Camera::Update(this);
  sub_102C0ED0(&v22);
  v4 = *((_BYTE *)this + 484) == 0;
  v5 = *((float *)this + 184);
  v6 = *((float *)this + 185);
  v7 = *((float *)this + 186);
  v19 = v5;
  v20 = v6;
  v21 = v7;
  if ( !v4 )
  {
    v19 = *((float *)this + 116) + v19;
    v20 = *((float *)this + 117) + v20;
    v21 = *((float *)this + 118) + v21;
  }
  *((float *)this + 88) = v5;
  *((float *)this + 89) = v6;
  *((float *)this + 90) = v7;
  v17 = *((float *)this + 89) * *((float *)this + 89)
      + *((float *)this + 88) * *((float *)this + 88)
      + *((float *)this + 90) * *((float *)this + 90);
  v18 = sqrt(v17);
  v25 = v22 * 0.5;
  v26 = v23 * 0.5;
  v27 = 0.5 * v24;
  v28 = v25 * v18;
  v29 = v26 * v18;
  v30 = v18 * v27;
  v25 = v28 + v19;
  v26 = v29 + v20;
  v27 = v30 + v21;
  v8 = sub_102C0F30(&v28);
  D3DXMatrixLookAtLH((char *)this + 220, &v19, &v25, v8);
  v9 = sub_10018ACA(v31, (int)this + 156);
  v10 = v24;
  v11 = (const void *)v9;
  v12 = v22;
  qmemcpy((char *)this + 284, v11, 0x40u);
  *((float *)this + 98) = *((float *)this + 188);
  v13 = v23;
  *((float *)this + 94) = v12;
  *((float *)this + 95) = v13;
  *((float *)this + 96) = v10;
  Camera::CreateClipPlanes(this);
}
