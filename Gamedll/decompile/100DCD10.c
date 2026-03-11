/*
 * func-name: ?UpdateShake@CameraHandler@@IAEXXZ_0
 * func-address: 0x100dcd10
 * callers: 0x10018bf6
 * callees: 0x102c9dbc
 */

void __thiscall CameraHandler::UpdateShake(CameraHandler *this)
{
  double v1; // st5
  double v2; // st3
  double v3; // st6
  double v4; // st6
  float v5; // [esp+4h] [ebp-28h]
  float v6; // [esp+4h] [ebp-28h]
  float v7; // [esp+4h] [ebp-28h]
  float v8; // [esp+4h] [ebp-28h]
  float v9; // [esp+4h] [ebp-28h]
  float v10; // [esp+4h] [ebp-28h]
  float v11; // [esp+4h] [ebp-28h]
  float v12; // [esp+4h] [ebp-28h]
  float v13; // [esp+4h] [ebp-28h]
  float v14; // [esp+4h] [ebp-28h]
  float v15; // [esp+4h] [ebp-28h]
  float v16; // [esp+8h] [ebp-24h]
  float v17; // [esp+Ch] [ebp-20h]
  float v18; // [esp+10h] [ebp-1Ch]
  float v19; // [esp+20h] [ebp-Ch]
  float v20; // [esp+20h] [ebp-Ch]
  float v21; // [esp+20h] [ebp-Ch]
  float v22; // [esp+24h] [ebp-8h]
  float v23; // [esp+24h] [ebp-8h]
  float v24; // [esp+24h] [ebp-8h]
  float v25; // [esp+28h] [ebp-4h]
  float v26; // [esp+28h] [ebp-4h]
  float v27; // [esp+28h] [ebp-4h]

  if ( *((_BYTE *)this + 484) )
  {
    v19 = *((float *)this + 110) - *((float *)this + 116);
    v22 = *((float *)this + 111) - *((float *)this + 117);
    v25 = *((float *)this + 112) - *((float *)this + 118);
    v16 = 0.0;
    v17 = 0.0;
    v5 = fabs(v19);
    v18 = 0.0;
    v1 = v5;
    if ( v5 > 0.001 )
      v16 = v19 / v1 * *((float *)this + 120) * GDeltaTime;
    v6 = fabs(v22);
    v2 = v6;
    if ( v6 > 0.001 )
      v17 = v22 / v2 * *((float *)this + 120) * GDeltaTime;
    v7 = fabs(v25);
    v3 = v7;
    if ( v7 > 0.001 )
      v18 = v25 / v3 * *((float *)this + 120) * GDeltaTime;
    v8 = fabs(v16);
    if ( v8 > v1 )
      v16 = *((float *)this + 110) - *((float *)this + 116);
    v9 = fabs(v17);
    if ( v9 > v2 )
      v17 = *((float *)this + 111) - *((float *)this + 117);
    v10 = fabs(v18);
    if ( v10 > v3 )
      v18 = *((float *)this + 112) - *((float *)this + 118);
    *((float *)this + 116) = *((float *)this + 116) + v16;
    *((float *)this + 117) = *((float *)this + 117) + v17;
    *((float *)this + 118) = *((float *)this + 118) + v18;
    v20 = *((float *)this + 110) - *((float *)this + 116);
    v23 = *((float *)this + 111) - *((float *)this + 117);
    v26 = *((float *)this + 112) - *((float *)this + 118);
    v11 = v23 * v23 + v20 * v20 + v26 * v26;
    v12 = sqrt(v11);
    if ( v12 < 0.001 )
    {
      v21 = -*((float *)this + 110);
      v24 = -*((float *)this + 111);
      v4 = *((float *)this + 112);
      *((float *)this + 110) = v21;
      *((float *)this + 111) = v24;
      v27 = -v4;
      *((float *)this + 112) = v27;
      *((float *)this + 110) = *((float *)this + 113) * *((float *)this + 110);
      *((float *)this + 111) = *((float *)this + 114) * *((float *)this + 111);
      *((float *)this + 112) = *((float *)this + 115) * *((float *)this + 112);
    }
    v13 = fabs(*((float *)this + 116));
    if ( v13 < 0.001 )
    {
      v14 = fabs(*((float *)this + 117));
      if ( v14 < 0.001 )
      {
        v15 = fabs(*((float *)this + 118));
        if ( v15 < 0.001 )
        {
          *((_BYTE *)this + 484) = 0;
          *((float *)this + 116) = 0.0;
          *((float *)this + 117) = 0.0;
          *((float *)this + 118) = 0.0;
        }
      }
    }
  }
}
