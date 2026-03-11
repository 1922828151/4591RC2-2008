/*
 * func-name: ?GetCoords_ScreenFromWorld@CameraHandler@@QAE?AVVector@@V2@_N@Z_0
 * func-address: 0x100dd960
 * callers: 0x10002b53
 * callees: 0x100029cd, 0x102c0ed0, 0x102c1270, 0x102c17b0, 0x102c953a, 0x102c9dbc, 0x102c9ea2
 */

float *__thiscall CameraHandler::GetCoords_ScreenFromWorld(
        float *this,
        float *a2,
        float a3,
        float a4,
        float a5,
        char a6)
{
  Editor *v7; // eax
  float *v8; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // eax
  float *result; // eax
  double v13; // st7
  float v14; // edx
  float v15; // ecx
  int v16; // [esp+Ch] [ebp-88h]
  int v17; // [esp+Ch] [ebp-88h]
  int v18; // [esp+10h] [ebp-84h]
  int v19; // [esp+10h] [ebp-84h]
  float v20; // [esp+14h] [ebp-80h]
  float v21; // [esp+14h] [ebp-80h]
  float v22; // [esp+14h] [ebp-80h]
  float v23; // [esp+18h] [ebp-7Ch] BYREF
  float v24; // [esp+1Ch] [ebp-78h]
  float v25; // [esp+20h] [ebp-74h]
  float v26; // [esp+24h] [ebp-70h]
  float v27; // [esp+28h] [ebp-6Ch]
  float v28; // [esp+2Ch] [ebp-68h]
  float v29; // [esp+30h] [ebp-64h] BYREF
  float v30; // [esp+34h] [ebp-60h]
  float v31; // [esp+38h] [ebp-5Ch]
  _DWORD v32[6]; // [esp+3Ch] [ebp-58h] BYREF
  float v33[16]; // [esp+54h] [ebp-40h] BYREF

  v7 = (Editor *)Editor::Instance(v16, v18);
  if ( Editor::GetEditorMode(v7) )
    this = (float *)(Editor::Instance(v17, v19) + 252);
  if ( a6 )
    goto LABEL_6;
  qmemcpy(v33, this + 55, sizeof(v33));
  sub_102C17B0(v33);
  v8 = (float *)sub_102C0ED0(&v29);
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v26 = v9;
  v27 = v10;
  v28 = v11;
  sub_100029CD();
  v29 = a3 - this[88];
  v23 = v29;
  v30 = a4 - this[89];
  v24 = v30;
  v31 = a5 - this[90];
  v25 = v31;
  sub_100029CD();
  v20 = v24 * v27 + v26 * v23 + v25 * v28;
  if ( v20 > 0.0 )
  {
LABEL_6:
    memset(v33, 0, sizeof(v33));
    sub_102C1270(1.0);
    v33[15] = 1.0;
    v32[3] = *(_DWORD *)(Canvas::Instance() + 68);
    v32[2] = *(_DWORD *)(Canvas::Instance() + 64);
    *(float *)&v32[5] = *(float *)(RenderDevice::Instance() + 1620);
    v13 = *(float *)(RenderDevice::Instance() + 1624);
    v32[0] = 0;
    *(float *)&v32[4] = v13;
    v32[1] = 0;
    v23 = 0.0;
    v24 = 0.0;
    v25 = 0.0;
    v21 = this[89] * this[89] + this[88] * this[88] + this[90] * this[90];
    v22 = sqrt(v21);
    v29 = a3 - this[88];
    v26 = v29;
    v30 = a4 - this[89];
    v27 = v30;
    v31 = a5 - this[90];
    v28 = v31;
    sub_100029CD();
    v29 = v26 * v22;
    v30 = v27 * v22;
    v31 = v22 * v28;
    v26 = v29 * 0.5;
    v27 = v30 * 0.5;
    v28 = 0.5 * v31;
    v29 = this[88] + v26;
    v30 = this[89] + v27;
    v31 = this[90] + v28;
    D3DXVec3Project(&v23, &v29, v32, this + 39, this + 55, v33);
    result = a2;
    v14 = v24;
    *a2 = v23;
    v15 = v25;
    a2[1] = v14;
    a2[2] = v15;
  }
  else
  {
    result = a2;
    *a2 = 0.0;
    a2[1] = 4000000.0;
    a2[2] = 0.0;
  }
  return result;
}
