/*
 * func-name: ?MoveTo@Robot@GameClient@@QAEXABVVector@@ABVMatrix@@@Z_0
 * func-address: 0x10172bb0
 * callers: 0x1000bebf
 * callees: 0x100029cd, 0x10003f58, 0x1000516e, 0x1000a097, 0x102c0750, 0x102c9dbc
 */

void __thiscall GameClient::Robot::MoveTo(GameClient::Robot *this, const struct Vector *a2, const struct Matrix *a3)
{
  char v5; // bl
  int v6; // ecx
  int WorldBBox; // eax
  CameraHandler *v8; // eax
  Camera *Camera; // eax
  double v10; // st7
  const struct BBox *v11; // [esp-Ch] [ebp-70h]
  float v12; // [esp+10h] [ebp-54h]
  float v13; // [esp+14h] [ebp-50h]
  float v14; // [esp+18h] [ebp-4Ch]
  float v15; // [esp+18h] [ebp-4Ch]
  float v16; // [esp+1Ch] [ebp-48h]
  float v17; // [esp+1Ch] [ebp-48h]
  float v18; // [esp+20h] [ebp-44h]
  float v19; // [esp+20h] [ebp-44h]
  float v20; // [esp+24h] [ebp-40h]
  float v21; // [esp+28h] [ebp-3Ch]
  float v22; // [esp+2Ch] [ebp-38h]
  _BYTE v23[40]; // [esp+30h] [ebp-34h] BYREF
  int v24; // [esp+60h] [ebp-4h]
  float v25; // [esp+68h] [ebp+4h]
  float v26; // [esp+68h] [ebp+4h]
  float v27; // [esp+68h] [ebp+4h]
  char v28; // [esp+68h] [ebp+4h]
  float v29; // [esp+68h] [ebp+4h]
  float v30; // [esp+68h] [ebp+4h]
  float v31; // [esp+68h] [ebp+4h]
  float v32; // [esp+68h] [ebp+4h]
  float v33; // [esp+68h] [ebp+4h]
  float v34; // [esp+68h] [ebp+4h]
  float v35; // [esp+6Ch] [ebp+8h]

  v5 = 0;
  v12 = *(float *)a2 - *((float *)this + 6);
  v25 = *((float *)a2 + 1) - *((float *)this + 7);
  v13 = *((float *)a2 + 2) - *((float *)this + 8);
  v26 = v25 * v25 + v12 * v12 + v13 * v13;
  v27 = sqrt(v26);
  *((float *)Game::Instance() + 28) = v27;
  (*(void (__thiscall **)(GameClient::Robot *, const struct Matrix *))(*(_DWORD *)this + 40))(this, a3);
  v6 = *(_DWORD *)(*((_DWORD *)this + 43) + 716);
  if ( !v6
    || (WorldBBox = StaticModel::GetWorldBBox(v6, v23),
        v24 = 0,
        v11 = (const struct BBox *)WorldBBox,
        v5 = 1,
        v8 = CameraHandler::Instance(),
        Camera = CameraHandler::GetCamera(v8, 0),
        v28 = 1,
        Camera::BoxInFrustum(Camera, v11, 0, 0)) )
  {
    v28 = 0;
  }
  v24 = -1;
  if ( (v5 & 1) != 0 )
    sub_102C0750(v23);
  if ( !v28
    && ((v29 = *((float *)a2 + 1) - *((float *)this + 7), v30 = fabs(v29), v30 <= 3.0)
     || (*((_DWORD *)this + 92) & 0x80) != 0)
    && (v20 = *(float *)a2 - *((float *)this + 6),
        v21 = *((float *)a2 + 1) - *((float *)this + 7),
        v22 = *((float *)a2 + 2) - *((float *)this + 8),
        v31 = v21 * v21 + v20 * v20 + v22 * v22,
        v32 = sqrt(v31),
        v32 <= 5.0) )
  {
    v14 = *(float *)a2 - *((float *)this + 6);
    v16 = *((float *)a2 + 1) - *((float *)this + 7);
    v18 = *((float *)a2 + 2) - *((float *)this + 8);
    v33 = v16 * v16 + v14 * v14 + v18 * v18;
    v34 = sqrt(v33);
    if ( v34 <= 0.1000000014901161 )
      return;
    v35 = *((float *)this + 82);
    sub_100029CD();
    v15 = v14 * v35;
    *((float *)this + 191) = v15;
    v17 = v16 * v35;
    *((float *)this + 192) = v17;
    v19 = v35 * v18;
    *((float *)this + 193) = v19;
    v10 = v34 / *((float *)this + 82);
  }
  else
  {
    (*(void (__thiscall **)(GameClient::Robot *, const struct Vector *))(*(_DWORD *)this + 36))(this, a2);
    v10 = 0.0;
  }
  *((float *)this + 194) = v10;
}
